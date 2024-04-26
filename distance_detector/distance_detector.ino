void setup() {
  pinMode(2, OUTPUT); 
  pinMode(4, INPUT); 
  Serial.begin(9600); // enable serial monitor
}

void loop() {
  // pulse output
  digitalWrite(2, LOW);
  delayMicroseconds(4);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  
  long t = pulseIn(4, HIGH); // input pulse and save it to variable
  
  long inches = t / 74 / 2; // time convert distance
  long cm = t / 29 / 2; // time convert distance
  
  if (cm < 10) { // check if object is less than 10 cm away
    if (cm < 5) { // check if object is less than 5 cm away
      Serial.println("Don't go near me stupid!"); 
    }
    else {
      Serial.println("Don't go near me stupid!"); 
    }
  }
  
  delay(100); // delay
}
