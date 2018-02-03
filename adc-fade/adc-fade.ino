int valor_ldr = 0;

#define LED D10

void setup(void){
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void read_ldr(void){
  valor_ldr = analogRead(A0);
  Serial.print("Valor LDR: ");
  Serial.println(valor_ldr);
  analogWrite(LED, valor_ldr );

}

void loop(void){
    read_ldr();
    delay(50);
}
