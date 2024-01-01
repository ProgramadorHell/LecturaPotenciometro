const int pinPotenciometro = A1; // Definir el pin del potenciómetro
int valorPotenciometro = 0; // Variable para almacenar el valor leído

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serie
}

void loop() {
  valorPotenciometro = analogRead(pinPotenciometro); // Leer valor del potenciómetro
  Serial.println(valorPotenciometro); // Imprimir valor en el monitor serie
  delay(500); // Esperar medio segundo
}
