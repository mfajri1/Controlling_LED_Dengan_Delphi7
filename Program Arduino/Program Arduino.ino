int led = 5;
int led2 = 4;
int led3 = 3;
void setup() {                
  // initialize the digital pin as an output.
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int tombol = digitalRead(7);
  int tombol2= digitalRead(8);
  int tombol3= digitalRead(9);
  if (tombol == LOW)
  {
     Serial.println("A");
     delay(250);
   }
   else if (tombol2 == LOW)
  {
     Serial.println("B");
     delay(250);
   }
   else if (tombol3 == LOW)
  {
     Serial.println("C" );
     delay(250);
   };
  boolean perintahOK = true;
  String perintah = "";
  while (Serial.available() != 0) {
    perintah = perintah + char(Serial.read());
    delay(20); // Tunda sebentar untuk menyiapkan
               // pembacaan data berikutnya
  } 
  if (perintah.length() == 0)
    return;
  perintah.trim(); 
      
  if (perintah == "1")
     {  
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);               // wait for a second 
     }
  else if (perintah == "2") 
      {
      digitalWrite(led, LOW);   // turn the LED off (LOW is the voltage level)
      delay(1000);               // wait for a second
      }
  else if (perintah == "3") 
      {
      digitalWrite(led2, HIGH);   // turn the LED off (LOW is the voltage level)
      delay(1000);               // wait for a second
      }
  else if (perintah == "4") 
      {
      digitalWrite(led2, LOW);   // turn the LED off (LOW is the voltage level)
      delay(1000);               // wait for a second
      }
  else if (perintah == "5") 
      {
      digitalWrite(led3, HIGH);   // turn the LED off (LOW is the voltage level)
      delay(1000);               // wait for a second
      }
  else if (perintah == "6") 
      {
      digitalWrite(led3, LOW);   // turn the LED off (LOW is the voltage level)
      delay(1000);               // wait for a second
      };
  if (perintahOK) {
 //   delay(500);
  }
  
}
