//ANDAR PARA FRENTE
 void Robo_Frente()
  {
    //MOTOR DIANTEIRO ESQUERDO
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
    //MOTOR DIANTEIRO DIREITO
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
    //MOTOR TRASEIRO ESQUERDO
     digitalWrite(IN8, HIGH);
     digitalWrite(IN9, LOW);
     digitalWrite(IN10, HIGH);
     digitalWrite(IN11, LOW);
  }
//ANDAR PARA TRÁS
  void Robo_Re()
  {
    //MOTOR DIANTEIRO ESQUERDO
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
    //MOTOR DIANTEIRO DIREITO
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
    //MOTOR TRASEIRO ESQUERDO
     digitalWrite(IN8, LOW);
     digitalWrite(IN9, HIGH);
    //MOTOR TRASEIRO DIREITO
     digitalWrite(IN10, LOW);
     digitalWrite(IN11, HIGH);
  }
//ANDAR PARA ESQUERDA
  void Robo_Esquerda()
  {
    //MOTOR DIANTEIRO ESQUERDO
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
    //MOTOR DIANTEIRO DIREITO
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
    //MOTOR TRASEIRO ESQUERDO
     digitalWrite(IN8, HIGH);
     digitalWrite(IN9, LOW);
    //MOTOR TRASEIRO DIREITO
     digitalWrite(IN10, LOW);
     digitalWrite(IN11, HIGH);
  }
//ANDAR PARA DIREITA
  void Robo_Direita()
  {
    //MOTOR DIANTEIRO ESQUERDO
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
    //MOTOR DIANTEIRO DIREITO
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
    //MOTOR TRASEIRO ESQUERDO
     digitalWrite(IN8, LOW);
     digitalWrite(IN9, HIGH);
    //MOTOR TRASEIRO DIREITO
     digitalWrite(IN10, HIGH);
     digitalWrite(IN11, LOW);
  }
//PARAR TUDO
  void Robo_Parar()
  {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
     digitalWrite(IN8, LOW);
     digitalWrite(IN9, LOW);
     digitalWrite(IN10, LOW);
     digitalWrite(IN11, LOW);
  }

