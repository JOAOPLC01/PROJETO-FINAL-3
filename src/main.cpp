#include <Arduino.h>

/// semáforo 1
int ledvermelho =13;
int ledamarelo =12;
int ledverde =11;

/// semáforo pedestre
int ledvermelho2 =8;
int ledverde2 =7;

/// semáforo 2
int ledvermelho1 =4;
int ledamarelo1 =3;
int ledverde1 =2;

void setup() {
  pinMode(ledvermelho,OUTPUT);
  pinMode(ledamarelo,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledvermelho1,OUTPUT);
  pinMode(ledamarelo1,OUTPUT);
  pinMode(ledverde1,OUTPUT);
  pinMode(ledvermelho2,OUTPUT);
  pinMode(ledverde2,OUTPUT);
 
}

void loop() {
  /// semáforo 1
  digitalWrite(ledverde,HIGH);
  /// semáforo 2 
  digitalWrite(ledvermelho1,HIGH);
  //// semáforo pedestre 
  digitalWrite(ledvermelho2,HIGH);
  delay(6000);

  /// semáforo 1
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarelo,HIGH);
  delay(2000);

  digitalWrite(ledamarelo,LOW);
  digitalWrite(ledvermelho,HIGH);
  /// semáforo pedestre
  digitalWrite(ledvermelho2,LOW);
  digitalWrite(ledverde2,HIGH);
  delay(5000);

  digitalWrite(ledverde2,LOW);
  digitalWrite(ledvermelho2,HIGH);

  /// semáforo 2 
  digitalWrite(ledvermelho1,LOW);
  digitalWrite(ledverde1,HIGH);
  delay(6000);

  digitalWrite(ledverde1,LOW);
  digitalWrite(ledamarelo1,HIGH);
  delay(2000);

  digitalWrite(ledamarelo1,LOW);
  digitalWrite(ledvermelho1,HIGH);

  /// semáforo pedestre 
  digitalWrite(ledvermelho2,LOW);
  digitalWrite(ledverde2,HIGH);
  delay(5000);
  digitalWrite(ledverde2,LOW);
  digitalWrite(ledvermelho2,HIGH);
  digitalWrite(ledvermelho,LOW);
}