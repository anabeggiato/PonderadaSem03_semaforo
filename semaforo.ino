// definindo os pinos dos LEDs
int8_t led_vermelho = 14;
int8_t led_amarelo = 12;
int8_t led_verde = 13;

// definindo os intervalos (em milissegundos)
int16_t tempo_vermelho = 6000;
int16_t tempo_amarelo = 2000;
int16_t tempo_verde = 2000;

//lendo os pinos
void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);

};


void loop() {
  // 6 segundos no vermelho
  digitalWrite(led_vermelho, HIGH);
  delay(tempo_vermelho);
  digitalWrite(led_vermelho, LOW);

  // 2 segundos no amarelo
  digitalWrite(led_amarelo, HIGH);
  delay(tempo_amarelo);
  digitalWrite(led_amarelo, LOW);

  // 2 segundos no verde
  digitalWrite(led_verde, HIGH);
  delay(tempo_verde);
  digitalWrite(led_verde, LOW);

  // 2 segundos no amarelo
  digitalWrite(led_amarelo, HIGH);
  delay(tempo_amarelo);
  digitalWrite(led_amarelo, LOW);
};