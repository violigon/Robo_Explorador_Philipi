void Sensor_Ldr()
{
  //LE O VALOR DO SENSOR NA PORTA ANALOGICA E ATRIBUI A VARIÁVEL "VALOR_LDR"
  VALOR_LDR = analogRead(SENSOR_LDR);
  //MAPEIA OS OS VALORES DE "VALOR_LDR" E TRANSFORMA EM PORCENTAGEM
  LUMINOSIDADE = map(VALOR_LDR, 1015, 849, 0, 100);  
  //CONTROLA VALOR FINAL DA LUMINOSIDADE
   if (LUMINOSIDADE > 100)
    {
      LUMINOSIDADE = 100;
    }
    else if (LUMINOSIDADE < 0)
    {
      LUMINOSIDADE = 0;
    }  
    
}
void Sensor_Dht11()
{
  //LÊ OS DADOS DO SENSOR
  DHT.read11(dht_dpin);
  //ATRIBUI OS DADOS DO SENSOR AS SUAS RESPECTIVAS VARIÁVEIS 
  TEMPERATURA = DHT.temperature -4;
  UMIDADE = DHT.humidity;
  //APRIMORA PRECISÃO DA TEMPERATURA
    if (TEMPERATURA < 0)
  {
  TEMPERATURA = 0;  
  }
  //PRINTA NA SERIAL OS VALORES
  Serial.print("L = ");
  Serial.print(LUMINOSIDADE);
  Serial.print(" %  ");
  Serial.print(" U = ");
  Serial.print(UMIDADE);
  Serial.print(" %  ");
  Serial.print(" T = ");
  Serial.print(TEMPERATURA); 
  Serial.print(" Cº  ");
  Serial.println(" ");
  
}
