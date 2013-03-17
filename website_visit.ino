	/* Arduino WebVisitors Blinker by Dimme.net */

	int ledPin = 12;
	int val = 0;

	void setup() {
	  Serial.begin(9600);
	  pinMode(ledPin, OUTPUT);
	}

	void loop () {
	  val = Serial.read(); 

	  if (val > '0' && val <= '9') {
	    val = val - '0';     
	    for(int i=0; i<val; i++) {
	      digitalWrite(ledPin,HIGH);
	      delay(150);
	      digitalWrite(ledPin, LOW);
	      delay(150);
	    }
	  }
	}
