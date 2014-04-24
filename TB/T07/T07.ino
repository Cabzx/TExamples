void setup() // Se ejecuta cada vez que el arduino se inicia 

{
  Serial.begin(9600); // inicia comunicación serial

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}
// Función cíclica 
void loop()
{
  int valor = analogRead(A0);
  Serial.println(valor);

  // Encender primer led (Rojo)
  if(valor >= 750)
  {
    digitalWrite(13,HIGH);
  }
  else 
  {
    digitalWrite(13,LOW);
  }
// Encender segundo led (azul)
  if(valor <= 750 && valor >= 500)
  {
    digitalWrite(12,HIGH);
    
  }
  else
  {
    digitalWrite(12,LOW);
  }
// Encender tercer led (Rojo)
  if(valor <= 500 && valor >= 250)
  {
    digitalWrite(11,HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }
// Encender cuarto led (Azul)
  if(valor <= 250)
  {
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(10,LOW);
  }
  delay(100);
}

// Fin del programa
