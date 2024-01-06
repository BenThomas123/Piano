#define piezo 52
#define size 12
#define auto 37

int autoCount = 0;
int songCount = 0;
//Notes

#define C4 261.3
#define D4 293.66
#define E4 329.63
#define F4 349.2
#define G4 392
#define A5 440
#define B5 493.88
#define C5 523.25
#define D5 587.33
#define E5 659.25
#define F5 689.46
#define G5 783.99
int switches[] = {0,0,0,0,0,0,0,0,0,0,0,0};
int states[size];
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < size; i++){
    pinMode(i + 2, INPUT);
  }
  pinMode(37, INPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < size; i++){
    states[i] = digitalRead(i + 2);
  }
  if(digitalRead(37) == HIGH){
    autoCount++;
  }
  if (autoCount % 2 == 0){
    Serial.print("Note: ");
    if (states[0] != LOW){
      tone(piezo, 261.3); //middle C
      Serial.println("middle C");
    }
    if (states[1] == HIGH){
      tone(piezo, 293.66); //middle D
      Serial.println("middle D");
    }
    if (states[2] == HIGH){
      tone(piezo, 329.63); // middle E
      Serial.println("middle E");
    }
    if (states[3] == HIGH){
      tone(piezo, 349.2); // middle F
      Serial.println("middle F");
    }
    if (states[4] == HIGH){
      tone(piezo, 392); // middle G
      Serial.println("middle G");
    }
    if (states[5] == HIGH){
      tone(piezo, 440); // A5
      Serial.println("A5");
    }
    if (states[6] == HIGH){
      tone(piezo, 493.88);  // B5
      Serial.println("B5");
    }
    if (states[7] == HIGH){
      tone(piezo, 523.25); // C5
      Serial.println("C5");
    }
    if (states[8] == HIGH){
      tone(piezo, 587.33); // D5
      Serial.println("D5");
    }
    if (states[9] == HIGH){
      tone(piezo, 659.25); //E5
      Serial.println("E5");
    }
    if (states[10] == HIGH){
      tone(piezo, 689.46); // F5/
      Serial.println("F5");
    }
    if (states[11] == HIGH){
      tone(piezo, 783.99); // G5
      Serial.println("G5");
    }
    else{
      noTone(52);
    }
  }
  if (autoCount % 2 != 0){
    int songCount = 0;
    Serial.print("Song: ");
    if (songCount % 5 == 0){
      Serial.println("Ode to Joy");
      odeToJoy();
      songCount++;
    }
    else if (songCount % 5 == 1){
      Serial.println("jingle bells");
      jingleBells();
      songCount++;
    }
    else if (songCount % 5 == 2){
      Serial.println("hot cross buns");
      hotCrossBuns();
      songCount++;
    }
    else if (songCount % 5 == 3){
      Serial.println("au clare de la lune");
      AuClareDeLaLune();
      songCount++;
    }
    else if (songCount % 5 == 4){
      Serial.println("twinkle twinkle little star");
      twinkleTwinkleLitteStar();
      songCount++;
    }
    else{
      autoCount++;
    }
  }
}
void jingleBells(){
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 261.3, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 493.8, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 440, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 392, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 293.66, 4000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 261.3, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 493.8, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 440, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 392, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 329.63, 4000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 261.3, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 493.8, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 440, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 392, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 349.2, 4000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 261.3, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 493.8, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 440, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 392, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, E4, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 493.8, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 440, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, 392, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, E5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, G4, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, G4, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 4000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, C5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  } 
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, D5, 2000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  } 
  tone(piezo, G4, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, A5, 1000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  }
  tone(piezo, B5, 4000);
  if(digitalRead(37) == HIGH){
    return;
  }
  delay(500);
  if(digitalRead(37) == HIGH){
    return;
  } 
}

void odeToJoy(){
  double notes[] = {F4, F4, G4, A5, A5, G4, F4, E4, D4, D4, E4, F4, F4, E4, E4, F4, F4, G4, A5, A5, G4, F4, E4, D4, D4, E4, F4, E4, D4, D4, E4, E4, F4, D4, E4, F4, G4, F4, D4,E4, F4, G4, F4, E4, D4, E4, 
  C4, F4, F4, F4, G4, A5, A5, G4, F4, E4, D4, D4, E4, F4, E4, D4, D4};
  double times[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, .5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, .5, 2, 1, 1, 1, 1, 1, .5, .5, 1, 1, 1, .5, .5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.5, .5, 2}; //measure 6
  int length = size_t(times) / 8;
  for (int i = 0; i < length; i++){
    tone(piezo, notes[i], times[i] * 1000);
    if(digitalRead(37) == HIGH){
      return;
    }
    delay(700);
    if(digitalRead(37) == HIGH){
      return;
    }
  }
}

void hotCrossBuns(){
  double notes[] = {A5, G4, F4, A5, G4, F4, F4, F4, F4, F4, G4, G4, G4, G4, A5, G4, F4};
  double times[] = {1, 1, 2, 1, 1, 2, .5, .5, .5, .5, .5, .5, .5, .5, 1, 1, 2};
  int length = size_t(times) / 8;
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < length; j++){
      tone(piezo, notes[j], times[j] * 1000);
      if(digitalRead(37) == HIGH){
        return;
      }
      delay(700);
      if(digitalRead(37) == HIGH){
        return;
      }
    }
  }
}

void AuClareDeLaLune(){
  double notes[] = {C4, C4, C4, D4, E4, D4, C4, E4, D4, D4, C4, C4, C4, C4, D4, E4, D4, C4, E4, D4, D4, C4, D4, D4, D4, D4, C4, C4, D4, C4, 246.94, 220, 196, C4, C4, C4, D4, E4, D4, C4, E4, D4, D4, C4};
  double times[] = {1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 4}; 
  int length = size_t(times) / 8;
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < length; j++){
      tone(piezo, notes[j], times[j] * 1000);
      if(digitalRead(37) == HIGH){
        return;
      }
      delay(700);
      if(digitalRead(37) == HIGH){
        return;
      }
    }
  }
}

void twinkleTwinkleLitteStar(){
  double notes[] = {C4, C4, G4, G4, A5, A5, G4, F4, F4, E4, E4, D4, D4, C4, G4, G4, F4, E4, E4, D4, G4, G4, F4, F4, E4, E4, D4, C4, C4, G4, G4, A5, A5, G4, F4, F4, E4, E4, D4, D4, C4}; 
  double times[] = {1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2};
  int length = size_t(times) / 8;
  for (int i = 0; i < 8; i++){
    for (int j = 0; j < length; j++){
      tone(piezo, notes[j], times[j] * 1000);
      delay(700);
      if(digitalRead(37) == HIGH){
        return;
      }
    }
  }
}