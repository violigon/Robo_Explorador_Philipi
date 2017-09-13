/*
Autor/RM: 
Vínícius Oliveira Gonçalves 77264
*/

//BIBLIOTECA SENSOR DHT11
#include <dht.h>

//MOTOR DIANTEIRO ESQUERDO
int IN1 = 4;
int IN2 = 5;
//MOTOR DIANTEIRO DIREITO
int IN3 = 6;
int IN4 = 7;
//MOTOR TRASEIRO ESQUERDO
int IN8 = 8;
int IN9 = 9;
//MOTOR TRASEIRO DIREITO
int IN10 = 10;
int IN11 = 11;

//RECEBE BLUETOOTH
char comando;

//SENSOR LDR
int SENSOR_LDR = A0;
int VALOR_LDR = 0; 
int LUMINOSIDADE = 0;

//SENSOR TEMPERATURA E UMIDADE
//PINO DATA DO SENSOR NA PORTA A1
#define dht_dpin A1 
//Inicializa o sensor
dht DHT;
int TEMPERATURA = 0;
int UMIDADE = 0;



void setup()
{
  //DEFININDO ENTRADAS E SAIDAS
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(IN8, OUTPUT);
 pinMode(IN9, OUTPUT);
 pinMode(IN10, OUTPUT);
 pinMode(IN11, OUTPUT);
 pinMode(SENSOR_LDR, INPUT);
  //INICIANDO A SERIAL
  Serial.begin(9600);
}

void loop()
{
   //  Sensor_Ldr();
   //  Sensor_Dht11();

  //CONTROLE DO ROBO
  while(Serial.available() > 0)
  {
    comando = Serial.read();
    
    switch (comando) 
    {
    case 'F':
      //FRENTE
     Robo_Frente();
      break;
    case 'B':
      //RE
     Robo_Re();
      break;
    case 'L':
      //ESQUERDA
     Robo_Esquerda();
      break;
    case 'R':
      //DIREITA
     Robo_Direita();
      break;
      case 'S':
      //PARAR
     Robo_Parar(); 
      break;
      case 'V':
      //ATUALIZA SENSORES
      Sensor_Ldr();
      Sensor_Dht11();
      break;
    default: 
    //PARAR TUDO
    Robo_Parar();     
    break;
  }
  }
}
