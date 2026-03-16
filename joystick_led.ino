int Xpin=A0;
int Ypin=A1;
int switchPin=2;
int Xval;
int Yval;
int switchVal;
int LEDl=5;
int LEDu=6;
int LEDr=7;
int LEDd=4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(switchPin,INPUT_PULLUP);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(LEDl,OUTPUT);
  pinMode(LEDu,OUTPUT);
  pinMode(LEDr,OUTPUT);
  pinMode(LEDd,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  switchVal=digitalRead(switchPin);

  if (switchVal==1) { 

    // Left & Right control:
    if (Xval>600) {
      digitalWrite(LEDr,HIGH);
      digitalWrite(LEDl,LOW);
    }
    if (Xval<400) {
      digitalWrite(LEDr,LOW);
      digitalWrite(LEDl,HIGH);
    }
    if (Xval<600 && Xval>400) {
      digitalWrite(LEDr,LOW);
      digitalWrite(LEDl,LOW);
    }

    // Up & Down control:
    if (Yval>600) {
      digitalWrite(LEDu,LOW);
      digitalWrite(LEDd,HIGH);
    }
    if (Yval<400) {
      digitalWrite(LEDu,HIGH);
      digitalWrite(LEDd,LOW);
    }
    if (Yval<600 && Yval>400) {
      digitalWrite(LEDu,LOW);
      digitalWrite(LEDd,LOW);
    }

  }

  else {
    // Light up all LED's.
    digitalWrite(LEDu,HIGH);
    digitalWrite(LEDd,HIGH);
    digitalWrite(LEDl,HIGH);
    digitalWrite(LEDr,HIGH);
  }

}
