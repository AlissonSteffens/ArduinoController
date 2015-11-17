/*
 * AnalogInputUSB
 * Read analog input from analog pin 0
 * and send data to USB
 */
 


int ledPin = 4;
int bt1 = 2;
int bt0 = 3;
int bt0Value = 0;
int bt1Value = 1;
int incomingByte = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  bt0Value = digitalRead(bt0);
  bt1Value = digitalRead(bt1);
    
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    
    if(incomingByte & 0x01){
      digitalWrite(ledPin, HIGH);
    }else{
      digitalWrite(ledPin, LOW);
    }
  }
  
  
  Serial.write(bt0Value);            //write as byte, to USB
  Serial.write(bt1Value);            //write as byte, to USB
  delay(100);
}
