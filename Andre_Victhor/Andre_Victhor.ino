#define per5

const int buttonPin1 = 2; // botão 1
const int buttonPin2 = 3; // botão 2
const int buzzerPin = 8; // buzzer
int ledPin1 = 9; //Led 1
int ledPin2 = 10; //Led 2
int ldrPin = 0; //LDR no pino analígico A0

int ldrValor; //Valor lido do LDR
int buttonState1; // Valor lido do botão 1
int buttonState2; // Valor lido do botão 2

#ifdef per0
void setup() {
pinMode(ledPin1,OUTPUT); //define o pino 9 como saída
pinMode(ledPin2,OUTPUT); //define o pino 10 como saída
pinMode(buttonPin1, INPUT); // define o pino 2 como entrada
pinMode(buttonPin2, INPUT); // define o pino 3 como entrada
pinMode(buzzerPin, OUTPUT); //define o pino 8 como saÍda
Serial.begin(9600); //Inicia a comunicação serial  
}

void loop() {
ldrValor = analogRead(ldrPin); 
Serial.println(ldrValor);

buttonState1 = digitalRead(buttonPin1);
Serial.println(buttonState1);

buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);

tone(buzzerPin, 2000); //liga buzzer
delay(200);
noTone(buzzerPin); //desliga buzzer

digitalWrite(ledPin1,HIGH);
delay(1000);
digitalWrite(ledPin1,LOW);

digitalWrite(ledPin2,HIGH);
delay(1000);
digitalWrite(ledPin2,LOW);
}
#endif

//*************************************************************
#ifdef per1
void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(buzzerPin, OUTPUT);  
}

void loop(){
  int valor_ldr = analogRead(ldrPin);
  if (valor_ldr > 900) {
    digitalWrite(ledPin1, HIGH);
    tone(buzzerPin, 1200);
  } 
  else {
    digitalWrite(ledPin1, LOW);
    noTone(buzzerPin);
  }  
}
#endif
//*************************************************************
#ifdef per2
void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
}

void loop(){
  int estado_botao_1 = digitalRead(buttonPin1);
  int estado_botao_2 = digitalRead(buttonPin2);
  Serial.print("botao 1 ");
  Serial.print(estado_botao_1);
  Serial.print(" | botao 2 ");
  Serial.println(estado_botao_2);
  
  if (estado_botao_1 == LOW) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);  
  }
  if (estado_botao_2 == LOW) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }
}
#endif
//*************************************************************
#ifdef per3
void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void faz_decisao(int ldr) {
  if (ldr > 900) {
    digitalWrite(ledPin1, HIGH);
    tone(buzzerPin, 1200);
  }
  else {
    digitalWrite(ledPin1, LOW);
    noTone(buzzerPin);
  }
}

void loop(){
  int valor_ldr = analogRead(ldrPin);
  faz_decisao(valor_ldr);
  Serial.print("LDR: ");
  Serial.println(valor_ldr);
}
#endif
//*************************************************************
#ifdef per4
void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
}

void liga_um(int botao) {
  if (botao == LOW)
    digitalWrite(ledPin1, HIGH);
  else
    digitalWrite(ledPin1, LOW);
}

void liga_dois(int botao) {
  if (botao == LOW)
    digitalWrite(ledPin2, HIGH);
  else
    digitalWrite(ledPin2, LOW);
}

void loop(){
  int estado_botao_1 = digitalRead(buttonPin1);
  int estado_botao_2 = digitalRead(buttonPin2);
  
  Serial.print("valor botao1 ");
  Serial.print(estado_botao_1);
  Serial.print(" | valor botao2 ");
  Serial.println(estado_botao_2);

  liga_um(estado_botao_1);
  liga_dois(estado_botao_2);
}
#endif
//*************************************************************
#ifdef per5

int estado_buzzer = 0;

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  Serial.begin(9600);
}

void liga_um(int botao) {
  if (botao == LOW)
    digitalWrite(ledPin1, HIGH);
  else if(estado_buzzer == 0)
    digitalWrite(ledPin1, LOW);
}

void liga_dois(int botao) {
  if (botao == LOW)
    digitalWrite(ledPin2, HIGH);
  else if(estado_buzzer == 0)
    digitalWrite(ledPin2, LOW);
}

void faz_decisao(int ldr) {
  if (ldr > 900) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    tone(buzzerPin, 1200);
    estado_buzzer = 1;
  }
  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    noTone(buzzerPin);
    estado_buzzer = 0;
  }
}

void loop(){
  int valor_ldr = analogRead(ldrPin);
  int valor_botao_1 = digitalRead(buttonPin1);
  int valor_botao_2 = digitalRead(buttonPin2);


   Serial.print("Botao 1: ");
   Serial.print(valor_botao_1);
   Serial.print(" Botao 2: ");
   Serial.print(valor_botao_2);
   Serial.print(" LDR: ");
   Serial.println(valor_ldr);
  
  faz_decisao(valor_ldr);
  liga_um(valor_botao_2);
  liga_dois(valor_botao_1);
}
#endif

