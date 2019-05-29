#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 4); // RX, TX

void setup()
{


pinMode(13, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("//Code du mini projet 2019//---->1,2,3,4,5,6<----");

mySerial.begin(9600);
}

void loop() {
  String state = "";
  if (mySerial.available()) {
    // state = mySerial.read();
    // Serial.write(state);
    switch(mySerial.read()){
        case 'A': // allumer la led
        
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
            Serial.println("Reception A ...");
            break;
            
        case 'B': // éteindre la led

  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B

           Serial.println("Reception B ...");
          break;

        case 'C': // allumer la led
        

  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B

            Serial.println("Reception C ...");
            break;

            
        case 'D': // allumer la led
        


  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  delay (2250);
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3,0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11,0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B

            Serial.println("Reception D ...");
            break;

                    case 'E': // allumer la led
        



  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
    delay (2250);
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3,0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11,0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B

            Serial.println("Reception E ...");
            break;

                    case 'F': // allumer la led
        


  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 255);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 255);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B

            Serial.println("Reception F ...");
            break;

            
 }

  }
}

  /*
  if (state == "A"){
      Serial.write("state : ");
      Serial.write(state);
      }
if (Serial.available())

{
//int state = 12;
//int state = Serial.parseInt();


if (state == 1)
{

  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
 

Serial.println("Moteur allumé");

}

if (state == 2)

{

  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B


Serial.println("Moteur eteind");

}


if (state == 3)

{

  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B


Serial.println("Marche arriere");

}


if (state == 4)

{


  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  delay (2250);
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3,0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11,0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  
  


Serial.println("Tourne Droite");

}

if (state == 5)

{


  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  analogWrite(3, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 127);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
    delay (2250);
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3,0);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  analogWrite(11,0);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  


Serial.println("Tourne Gauche");

}

if (state == 6)

{

  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  analogWrite(3, 255);   //Spins the motor on Channel A at full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  analogWrite(11, 255);   //Spins the motor on Channel A at full speed
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
 

Serial.println("Moteur en acceleration");

}

}

}  */
