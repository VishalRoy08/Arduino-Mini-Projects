#define delay50 100
int myled[]={2,3,4,5,6};
int num_of_leds;

void setup() {
    num_of_leds= 5;
    for(int i=0;i<num_of_leds;i++){
        pinMode(myled[i],OUTPUT);

    }  // piut your setup code here, to run once:

}

void loop() {
  delay(1000);
  ledon();
  delay(2000);
  ledoff();
  delay(2000);
  for(int i=0;i<5;i++) {pattern1();}
  for(int i=0;i<5;i++) {pattern2();}
  for(int i=0;i<5;i++) {pattern3();}
  for(int i=0;i<5;i++) {pattern4();}
  for(int i=0;i<25;i++) {pattern5();}
  ledoff();
  delay(5000);
  // put your main code here, to run repeatedly:

}
void ledon(){
  for (int i=0;i<num_of_leds;i++){
    digitalWrite(myled[i],HIGH);
  }
}
void ledoff(){
  for(int i=0;i<num_of_leds;i++){
    digitalWrite(myled[i],LOW);
  }
}
void pattern1(){
  for(int i=0;i<num_of_leds;i++){
    digitalWrite(myled[i],HIGH);
    delay(delay50);
  }
}
void pattern2(){
  for (int i=num_of_leds;i>0;i--){
    digitalWrite(myled[i-1],HIGH);
    delay(delay50);
    digitalWrite(myled[i-1],LOW);
  }
}
void pattern3(){
  for (int i=0;i<num_of_leds;i++){
    digitalWrite(myled[i],HIGH);
    delay(delay50);
    
  }
  for (int i=num_of_leds;i>0;i--){
    digitalWrite(myled[i-1],LOW);
    delay(delay50);
  }
}
void pattern4(){
  ledon();
  delay(delay50);
  for(int i=0;i<num_of_leds;i++){
    digitalWrite(myled[i],LOW);
    delay(delay50);
  }
  ledoff();
}
void pattern5(){
  for(int i=0;i<num_of_leds;i=i+2){
    digitalWrite(myled[i],HIGH);
    digitalWrite(myled[i+1],LOW);
  }
  delay(delay50);
  for(int i=0;i<num_of_leds;i=i+2){
    digitalWrite(myled[i],LOW);
    digitalWrite(myled[i+1],HIGH);

  }
  delay(delay50);
}
