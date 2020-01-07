# Arduino_AutonomousCar
Projeto do 2º Semestre da curso de Ciências da computação - UNIP

--- DESENVOLVIMENTO E AUTOMAÇÃO PARA PROTOTIPAGEM ---

Trabalho apresentado ao curso Ciências da Computação, da Universidade Paulista – Unip, Campus Cidade Universitária como requisito para obtenção de média semestral.

INTRODUÇÃO

Foi desenvolvido um veículo automatizado para fazer uma coleta de lixo tóxico em uma área ambiental. Esse lixo é muito nocivo aos seres vivos e ao meio ambiente, o mesmo se propaga rapidamente e pode trazer diversas doenças também.
Este automóvel irá se locomover até o local que foi mencionado através de uma denúncia anônima, vai coletar o material tóxico e retornar até uma base para reciclagem do lixo e limpeza do veículo.

OBJETIVO DO TRABALHO

Mostrar a eficiência e segurança que este veículo automatizado traz a sociedade pois com ele, nenhum ser humano será contaminado pelo lixo tóxico ao efetuar a coleta para reciclagem do material em um local autorizado.

ARDUINO (CONCEITOS GERAIS)

Arduino é uma plataforma de prototipagem eletrônica de hardware livre. As placas de Arduino são capazes de ler entradas de sensores, de botões e transformar em saída, ou seja, ele capta a leitura de um sensor e o transforma em números (bytes), para que seja tratado através de sua IDE (ambiente de desenvolvimento integrado).
Ele vem sendo usado através dos anos em milhares de projetos desde os mais complexo aos mais simples, por estudantes e até profissionais no ramo de eletrônica. Sua comunidade é gigantesca, o que beneficia no compartilhamento de informações e maiores contribuições, tornando-o o conhecimento sobre Arduino mais acessível e uma maior facilidade para o aprendizado.
Sua IDE trabalha com a linguagem de programação C e C++ sendo Cross-Plataform (Windows, macOS, Linux), e é utilizada para escrever e enviar programas para a placa Arduino.


COMPONENTES DO VEÍCULO AUTONOMO

1. Ponte H

É responsável pelo controle do sentido de rotação do motor e também de sua velocidade através do uso dos pinos PWM do Arduino

2. Placa arduino uno r3

É uma placa que tem 14 de entrada/saída, esses pinos são usados como saída PWM (6 pinos) e tem uma entrada de alimentação com uma entrada USM e um botão de reset.

3.	Sensores infravermelhos

Um lado dos sensores é responsável por capturar a luminosidade e o outro a falta de luz, com isso, o robô seguidor de linha pode efetuar curvas acentuadas.

4.	Motor DC 3-6V

É responsável por fazer o veículo se locomover tanto para frente quanto para trás.

5.	Protoboard

Responsável pela ligação dos circuitos sem que haja a necessidade de soldar os fios, tornando o uso mais fácil para iniciantes em eletrônica.
