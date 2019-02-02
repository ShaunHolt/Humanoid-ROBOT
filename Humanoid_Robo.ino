#include <Servo.h>
#include <TTS.h>
#include <BVSP.h>
#include <BVSMic.h>
//OLED

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;
int pos6 = 0;
int pos7 = 0;
void setup() {
  // put your setup code here, to run once:
  myservo1.attach(D1);
  myservo2.attach(D2);
  myservo3.attach(D3);
  myservo4.attach(D4);
  myservo5.attach(D5);
  myservo6.attach(D6);
  myservo7.attach(D7);
}

void loop(){
  Stand();

  
}





void Stand(){
  myservo1.write(pos1);
  myservo1.write(pos2);
  myservo1.write(pos3);
  myservo1.write(pos4);
  myservo1.write(pos5);
  myservo1.write(pos6);
  myservo1.write(pos7);
}


void Walk(){

  //Right Thigh bend and release with CG shifting to left side.
  
  for (pos1 = 0; pos1 <= 15; pos1 += 15) { //Right Thigh 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos1);             
    delay(50);                       
  }

  for (pos7 = 0; pos7 <= 5; pos7 += 5) { //Waist 5 Deg CW facing Robo
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }
  
  for (pos2 = 0; pos2 <= 15; pos2 += 15) { //Right Knee 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }

  for (pos3 = 0; pos3 <= 5; pos3 += 5) { //Left Foot 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos3);              
    delay(50);                       
  }

  for (pos7 = 5; pos7 >= 0; pos7 -= 5) { //Waist 5 Deg ACW facing Robo
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }

  for (pos1 = 15; pos1 >= 0; pos1 -= 5) { //Right Thigh 15 Deg -ve
    // in steps of 1 degree
    myservo.write(pos1);              
    delay(50);                       
  }

  for (pos2 = 15; pos2 >= 0; pos2 -= 15) { //Right Knee 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }

  for (pos3 = 5; pos3 >= 0; pos3 -= 5) { //Left Foot 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos3);              
    delay(50);                       
  }






//Left Thigh bend and release with CG shifting to right side.




  for (pos4 = 0; pos4 <= 15; pos4 += 15) { //Left Thigh 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos4);             
    delay(50);                       
  }

  for (pos7 = 0; pos7 <= 5; pos7 += 5) { //Waist 5 Deg ACW facing Robo
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }
  
  for (pos5 = 0; pos5 <= 15; pos5 += 15) { //Left Knee 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos5);              
    delay(50);                       
  }

  for (pos6 = 0; pos6 <= 5; pos6 += 5) { //Left Foot 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos6);              
    delay(50);                       
  }

  for (pos7 = 5; pos7 >= 0; pos7 -= 5) { //Waist 5 Deg CW facing Robo
    // in steps of 1 degree
    myservo.write(pos2);              
    delay(50);                       
  }

  for (pos4 = 15; pos4 >= 0; pos4 -= 5) { //Left Thigh 15 Deg -ve
    // in steps of 1 degree
    myservo.write(pos4);              
    delay(50);                       
  }

  for (pos5 = 15; pos5 >= 0; pos5 -= 15) { //Left Knee 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos5);              
    delay(50);                       
  }

  for (pos3 = 5; pos3 >= 0; pos3 -= 5) { //Right Foot 15 Deg +ve
    // in steps of 1 degree
    myservo.write(pos3);              
    delay(50);                       
  }
}
