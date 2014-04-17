/*
Encender LED con un pulsador

Enciende un led conectado al Arduino
con un botón.

Created from original found at: 
"Guia Báscia de Arduino"
ventas@tiendaderobotica.com

*/

int pulsador=2;
int led=13;

void setup()
{
  pinMode(pulsador, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(pulsador)==HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
  digitalWrite(led, LOW);
  }
}
