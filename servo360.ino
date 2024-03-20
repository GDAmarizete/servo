#include <VarSpeedServo.h> 

VarSpeedServo dir_frente;
VarSpeedServo dir_tras;
VarSpeedServo esq_frente;
VarSpeedServo esq_tras;


void setup() {
  dir_frente.attach(10);
  dir_tras.attach(11);
  esq_frente.attach(8);
  esq_tras.attach(9);
}



void loop() {

frente();
delay(2000);
re();
delay(2000);

}




void frente(){
  dir_frente.slowmove(0, 100); //posição, velocidade
  dir_tras.slowmove(0, 100);//posição, velocidade
  esq_frente.slowmove(180, 115); //posição, velocidade
  esq_tras.slowmove(180, 115);//posição, velocidade
}

void re(){
  dir_frente.slowmove(180, 100); //posição, velocidade
  dir_tras.slowmove(180, 100);//posição, velocidade
  esq_frente.slowmove(0, 115); //posição, velocidade
  esq_tras.slowmove(0, 115);//posição, velocidade
}

void direita(){
  esq_frente.slowmove(180, 100); //posição, velocidade
  esq_tras.slowmove(180, 100);//posição, velocidade
  dir_frente.slowmove(180, 100); //posição, velocidade
  dir_tras.slowmove(180, 100);//posição, velocidade
}

void esquerda(){
  dir_frente.slowmove(0, 100); //posição, velocidade
  dir_tras.slowmove(0, 100);//posição, velocidade 
  esq_frente.slowmove(0, 100); //posição, velocidade
  esq_tras.slowmove(0, 100);//posição, velocidade 
}
