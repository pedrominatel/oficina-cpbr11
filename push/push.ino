#define BOTAO D13
#define LED   D10

int botao_status = 0;

void setup (void){

  //configura o botao como entrada/input
  pinMode(BOTAO, INPUT);
  //configura o led como saida/output
  pinMode(LED, OUTPUT);

}

void loop(void){

  //le o status do botao e inverte o status (pullup)
  botao_status = digitalRead(BOTAO);
  //encreve na saida digital o resultado da leitura do botao
  digitalWrite(LED,botao_status);

}

