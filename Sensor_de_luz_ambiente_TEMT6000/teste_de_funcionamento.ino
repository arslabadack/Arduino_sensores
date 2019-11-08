
// Definindo as portas analoógicas do arduino como (vcc, gnd, sinal), NOMEANDO AS PORTAS!
#define vcc A0
#define gnd A1
#define sinal A2

void setup() {
  Serial.begin(9600);
  // Definindo se os pinos serão de entrada ou saída, pinos analógicos podem ser usados como digitais tmabém;
  pinMode(vcc, OUTPUT);
  pinMode(gnd, OUTPUT);
  pinMode(sinal, INPUT);

  digitalWrite(vcc, HIGH);
  digitalWrite(gnd, LOW);

  /*
    Aciona um valor HIGH ou LOW em um pino digital.
    
    Se o pino for configurado como saída (OUTPUT) com a função pinMode(), sua tensão será acionada para o valor correspondente: 5V (ou 3.3V em placas alimentadas com 3.3V como o DUE) para o valor HIGH, 0V (ou ground) para LOW.
    
    Se o pino for configurado como entrada (INPUT), a função digitalWrite() irá ativar (HIGH) ou desativar (LOW) o resistor interno de pull-up no pino de entrada. É recomendado configurar pinMode() com INPUT_PULLUP para ativar o resistor interno de pull-up.
    
    Se você não configurar o pino com pinMode() e OUTPUT, e conectar um LED ao pino, quando chamar digitalWrite(HIGH), o LED pode aparecer um pouco apagado. Sem configurar explicitamente pinMode(), digitalWrite() irá apenas ativar o resistor de pull-up interno, que age como um grande resistor limitador de corrente.
   
    Sintaxe
    digitalWrite(pino, valor)
    
    Parâmetros
    pino: o número do pino
    valor: HIGH ou LOW
    
    Retorna
    Nada
    
  */

}

// Loop principal onde todo o código ficará se repetindo infinitamente, é tipo o main() do C, porem em loop 
void loop() {
  Serial.println(analogRead(sinal));
  delay(500);

}

// Para visualizar a leitura dos dados basta ir em FERRAMENTAS > MONITOR SERIAL
