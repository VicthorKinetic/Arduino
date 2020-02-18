#define per1


//*************************************************************
//programa base
#ifdef per0
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void loop() {
    stateButton = digitalRead(button);
   
    digitalWrite(pino8,HIGH); //liga verde 1
    digitalWrite(pino9,HIGH); //liga amarelo 1
    digitalWrite(pino10,HIGH); //liga vermelho 1
    digitalWrite(pino11,HIGH); //liga verde 2
    digitalWrite(pino12,HIGH); //liga amarelo 2
    digitalWrite(pino13,HIGH); //liga vermelho 2
 
    delay(1000); //tempo de 1 seg.
   
    digitalWrite(pino8,LOW);  //desliga verde 1
    digitalWrite(pino9,LOW);  //desliga amarelo 1
    digitalWrite(pino10,LOW); //desliga vermelho 1
    digitalWrite(pino11,LOW); //desliga verde 2
    digitalWrite(pino12,LOW); //desliga amarelo 2 
    digitalWrite(pino13,LOW); //desliga vermelho 
   
    delay(1000); //tempo de 1 seg.
 
}
#endif
//**************************************************************
// pergunta 1
#ifdef per1
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void loop() {

  digitalWrite(pino13,HIGH);
  delay(2000);
  digitalWrite(pino13,LOW);
  delay(1000); 
  digitalWrite(pino12,HIGH); 
  delay(2000);
  digitalWrite(pino12,LOW);
  delay(1000); 
  digitalWrite(pino11,HIGH);
  delay(2000);
  digitalWrite(pino11,LOW);
  delay(1000);
  digitalWrite(pino10,HIGH);
  delay(2000);
  digitalWrite(pino10,LOW);
  delay(1000); 
  digitalWrite(pino9,HIGH);
  delay(2000);
  digitalWrite(pino9,LOW);
  delay(1000); 
  digitalWrite(pino8,HIGH);
  delay(2000);
  digitalWrite(pino8,LOW);
  delay(1000); 
    
}
#endif
//**************************************************************
// pergunta 2
#ifdef per2
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void loop() {
  
  digitalWrite(pino8,HIGH);
  delay(3000);
  digitalWrite(pino8,LOW);
  delay(2000); 
  digitalWrite(pino9,HIGH); 
  delay(3000);
  digitalWrite(pino9,LOW);
  delay(2000); 
  digitalWrite(pino10,HIGH);
  delay(3000);
  digitalWrite(pino10,LOW);
  delay(2000);
  digitalWrite(pino11,HIGH);
  delay(3000);
  digitalWrite(pino11,LOW);
  delay(2000); 
  digitalWrite(pino12,HIGH);
  delay(3000);
  digitalWrite(pino12,LOW);
  delay(2000); 
  digitalWrite(pino13,HIGH);
  delay(3000);
  digitalWrite(pino13,LOW);
  delay(2000); 

}
#endif
//**************************************************************
// pergunta 3
#ifdef per3
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void loop() {

  digitalWrite(pino8,HIGH); 
  digitalWrite(pino9,HIGH); 
  delay(3000);
  digitalWrite(pino8,LOW);
  digitalWrite(pino9,LOW);
  delay(2000);
  digitalWrite(pino10,HIGH); 
  digitalWrite(pino11,HIGH);
  delay(3000); 
  digitalWrite(pino10,LOW);
  digitalWrite(pino11,LOW);
  delay(2000);
  digitalWrite(pino12,HIGH); 
  digitalWrite(pino13,HIGH);
  delay(3000); 
  digitalWrite(pino12,LOW);
  digitalWrite(pino13,LOW);
  delay(2000);
    
}
#endif
//**************************************************************
// pergunta 4
#ifdef per4
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void Mudar(int estado8, int estado9, int estado10, int estado11, int estado12, int estado13) {
  digitalWrite(pino8, estado8);
  digitalWrite(pino9, estado9);
  digitalWrite(pino10, estado10);
  digitalWrite(pino11, estado11);
  digitalWrite(pino12, estado12);
  digitalWrite(pino13, estado13);  
}

void loop() {
  Mudar(HIGH, LOW, LOW, LOW, LOW, HIGH); 
  delay(4000);
  Mudar(LOW, HIGH, LOW, LOW, LOW, HIGH);
  delay(1000);
  Mudar(LOW, LOW, HIGH, HIGH, LOW, LOW);
  delay(2000);  
  Mudar(LOW, LOW, HIGH, LOW, HIGH, LOW);
  delay(1000);
}
#endif
//**************************************************************
// pergunta 5
#ifdef per5
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino11 = 11;
int pino12 = 12;
int pino13 = 13;
int button = 2;
int stateButton=0;

void setup() {
    Serial.begin(9600);
    Serial.flush();
    pinMode(pino8, OUTPUT);
    pinMode(pino9, OUTPUT);
    pinMode(pino10, OUTPUT);
    pinMode(pino11, OUTPUT);
    pinMode(pino12, OUTPUT);
    pinMode(pino13, OUTPUT);
    pinMode(button, INPUT);
}

void Mudar(int estado8, int estado9, int estado10, int estado11, int estado13) {
  digitalWrite(pino8, estado8);
  digitalWrite(pino9, estado9);
  digitalWrite(pino10, estado10);
  digitalWrite(pino11, estado11);
  digitalWrite(pino13, estado13);  
}

void loop() {

  stateButton = digitalRead(button);

  if(stateButton == HIGH)
  {
    Mudar(HIGH,LOW,LOW,LOW,HIGH);
  }
  else
  {
    Mudar(LOW,HIGH,LOW,LOW,HIGH);
    delay(1000);
    Mudar(LOW,LOW,HIGH,HIGH,LOW);
    delay(5000);
  }
}
#endif

