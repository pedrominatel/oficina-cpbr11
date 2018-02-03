void setup(void) {
  //Configura o pino digital para saida/output
  pinMode(D3, OUTPUT);
  digitalWrite(D3, LOW);
}

void loop(void) {
  //envia o comando de escrita no pino digital
  digitalWrite(D3, HIGH);
  //funcao de pausa/delay em mili-segundos
  delay(1000);
  digitalWrite(D3, LOW);
  delay(1000);
}

