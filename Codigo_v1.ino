//Motor esquerdo
int IN1 = 2;
int IN2 = 4;
int speedA = 3;

//Motor direito
int IN3 = 6;
int IN4 = 7;
int speedB = 5;

//Sensores
int senseR = 0;
int senseC = 2;
int senseL = 4;

//Velocidade
int zeroSpeed = 0;
int mediumSpeed = 190;
int highSpeed = 230;

//Tempo da volta na pista(Mili)
long tempStart = 0;
long tempEnd = 20000;

//Taxa de leitura
int whiteLine = 100;

//Init Pinos
void setup(){
	Serial.begin(9600);
	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT);
	pinMode(IN3, OUTPUT);
	pinMode(IN4, OUTPUT);
	pinMode(speedA, OUTPUT);
	pinMode(speedB, OUTPUT);
	pinMode(senseR, INPUT);
	pinMode(senseC, INPUT);
	pinMode(senseL, INPUT);
	delay(5000); //Delay de 5 seg para começar a andar
}

void loop(){
  if(tempStart <= tempEnd){
        tempStart = millis();
        int sRight = analogRead(senseR); //Obtem a leitura do sensor direito
        int sCenter = analogRead(senseC);  //Obtem a leitura do sensor central
        int sLeft = analogRead(senseL);  //Obtem a leitura do sensor esquerdo
        
        //Seta as rodas sentido Frente
  	ForwardDirection();
  
	if((sCenter  < whiteLine) || (sCenter < whiteLine && sLeft < whiteLine && sRight < whiteLine))
	{
	  //Carrinho anda pra frente quando leitor do meio ou os tres leitores (cruzamento) estiver lendo a linha branca
   	  Forward();
	}
	else if(sCenter > whiteLine && sLeft < whiteLine && sRight > whiteLine){
      	  //Faz a curva para esquerda
	  SharpLeftCurve();
	}
	else if(sCenter > whiteLine && sRight < whiteLine && sLeft > whiteLine)
	{
	  //Faz a curva para direita
	  SharpRightCurve();
	}
        else if(sCenter < whiteLine && sLeft < whiteLine){
          //Faz curva mais aberta para esquerda
          LeftForward();     
        }
        else if(sCenter < whiteLine && sRight < whiteLine){
          //Faz curva mais aberta para direita
          RightForward();     
        }
  }
  else{
    //Para motores apos atingir o timer
    Stop();
  }
}

//Rotação da roda para frente
void ForwardDirection(){
	digitalWrite(IN1, LOW);
	digitalWrite(IN2, HIGH);
	digitalWrite(IN3, LOW);
	digitalWrite(IN4, HIGH);
}

void LeftForward(){
    analogWrite(speedA, mediumSpeed - 10);
    analogWrite(speedB, mediumSpeed);
}

void RightForward(){
    analogWrite(speedA, mediumSpeed);
    analogWrite(speedB, mediumSpeed - 10);
}

void Forward(){
	analogWrite(speedA, mediumSpeed); 
	analogWrite(speedB, mediumSpeed);
}

void SharpLeftCurve(){
	analogWrite(speedA, zeroSpeed);
	analogWrite(speedB, highSpeed);
}

void SharpRightCurve(){
	analogWrite(speedA, highSpeed);
	analogWrite(speedB, zeroSpeed);
}

void Stop(){
	analogWrite(speedA, zeroSpeed);
	analogWrite(speedB, zeroSpeed);
        digitalWrite(IN1, LOW);
	digitalWrite(IN2, LOW);
	digitalWrite(IN3, LOW);
	digitalWrite(IN4, LOW);
}
