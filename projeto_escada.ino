// C++ code
//
int Tempo = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  Tempo = 2;
  // ligar todos os leds
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(0, HIGH);
  } else {
    // escada descendo
    if (digitalRead(3) == HIGH) {
      // ligar
      digitalWrite(13, HIGH);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(12, HIGH);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(11, HIGH);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(10, HIGH);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(9, HIGH);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(0, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
      // desligar
      digitalWrite(0, LOW);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(9, LOW);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(10, LOW);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(11, LOW);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(12, LOW);
      delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
      digitalWrite(13, LOW);
    } else {
      // ligar escada subindo
      if (digitalRead(4) == HIGH) {
        // ligar
        digitalWrite(0, HIGH);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(9, HIGH);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(10, HIGH);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(11, HIGH);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(12, HIGH);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(13, HIGH);
        // desligar
        delay(5000); // Wait for 5000 millisecond(s)
        digitalWrite(13, LOW);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(12, LOW);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(11, LOW);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(10, LOW);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(9, LOW);
        delay(1000 * Tempo); // Wait for 1000 * Tempo millisecond(s)
        digitalWrite(0, LOW);
      } else {
        // desligar escada
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(0, LOW);
      }
    }
  }
}