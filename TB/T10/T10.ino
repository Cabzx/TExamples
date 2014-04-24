//Declara puertos de entradas y salidas y variables

int contacto = 2; //Pin asignado al reed switch
int led= 13; //Pin asignado al LED

void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  pinMode(contacto,INPUT); //El reed switch como una entrada
  pinMode(led, OUTPUT); //El LED como una salida
}

//Funcion ciclicla
void loop() // Esta funcion se mantiene ejecutando
{ 
// cuando este energizado el Arduino
// Si el iman se acerca al reed switch

  if (digitalRead(contacto)==LOW)
{
    //Ciclo for que va de 0 a 50, el contador esta
    // en la variable a, se repite mientras a sea
    // menor a 50




    for(int a=0; a<50; a++)
{
      digitalWrite(led,HIGH); //Prende el LED
      delay(50); //Tiempo
      digitalWrite(led,LOW); //Apaga el LED
      delay(50); //Tiempo
    }
    // Si el iman esta lejos del reed switch
  }
  else{
    digitalWrite(led,LOW); //Mantiene apagado el LED
  } //Fin del if
}
//Fin del programa
