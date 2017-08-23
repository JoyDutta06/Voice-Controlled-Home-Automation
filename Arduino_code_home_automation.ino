String voice;
int                   
led1 = 2, 
led2 = 3, 
led3 = 4,
led4 = 5, 
led5 = 6, 
led6 = 7; 
   
void allon(){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, HIGH);
     digitalWrite(led5, HIGH);
     digitalWrite(led6, HIGH);
     }  
void alloff(){
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
     digitalWrite(led6, LOW);
     }  
   
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT); 
 }     
 
void loop() {
  while (Serial.available()){  
  delay(10); 
  char c = Serial.read(); 
  if (c == '#') {break;}
  voice += c; 
  } 
  if (voice.length() > 0) {
    Serial.println(voice);
   
   
       if(voice == "*all active") {allon();}  
  else if(voice == "*all shut down"){alloff();} 
 
  
  else if(voice == "*mobile shut down") {digitalWrite(led1, LOW);}
  else if(voice == "*LED shut down") {digitalWrite(led2, LOW);}
  else if(voice == "*CFL shut down") {digitalWrite(led3, LOW);}
  else if(voice == "*laptop shut down") {digitalWrite(led4, LOW);}
  else if(voice == "*mixer shut down") {digitalWrite(led5, LOW);}
  else if(voice == "*mix shut down") {digitalWrite(led6, LOW);}
 
  else if(voice == "*mobile on") {digitalWrite(led1, HIGH);}
  else if(voice == "*LED on") {digitalWrite(led2, HIGH);}
  else if(voice == "*CFL on") {digitalWrite(led3, HIGH);}
  else if(voice == "*laptop on") {digitalWrite(led4, HIGH);}
  else if(voice == "*mixer on") {digitalWrite(led5, HIGH);}
  else if(voice == "*mix on") {digitalWrite(led6, HIGH);}
          
voice="";}}


