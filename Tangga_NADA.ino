int speaker = 9;

void setup(){
  
}

void Do(){
  tone(speaker,262);
}
void re(){
  tone(speaker,294);
}
void mi(){
  tone(speaker,330);
}
void fa(){
  tone(speaker,349);
}
void sol(){
  tone(speaker,395);
}
void la(){
  tone(speaker,440);
}
void si(){
  tone(speaker,494);
}
void doo(){
  tone(speaker,523);
}
void diam(){
  noTone(speaker);
}
void sii(){
  tone(speaker,243);
}
void soll(){
  tone(speaker,164);
}

//void loop(){
  //Do(); delay(250);
  //re(); delay(250);
 // mi(); delay(250);
  //la();delay(250);
 // sol();delay(1000);
 // mi(); delay(250);
 // re(); delay(300);
 // Do(); delay(250);
 // Do(); delay(2000);
 // diam();delay(500);
//}

void loop(){
 Do(); delay(1000); sol();delay(500); mi();delay(600); re();delay(1500); diam(); delay(1000); 

Do();delay(1000); re();delay(500); Do();delay(500); sii();delay(1000); diam(); delay(500);

 sol();delay(500); la();delay(1000); si();delay(500); doo();delay(400); sol();delay(1000); diam(); delay(100);

 Do();delay(500); diam(); delay(10); Do();delay(500); mi();delay(500); re();delay(350); diam(); delay(10); re();delay(350); Do();delay(350); re();delay(1000); diam(); delay(10);

 soll();delay(500); mi();delay(600); diam(); delay(10); mi();delay(500); sol();delay(400); mi();delay(600); re();delay(1000); diam(); delay(10);

 soll();delay(400); diam(); delay(10);soll();delay(400); Do();delay(350);diam(); delay(10); Do();delay(350); re();delay(350); Do();delay(350); sii();delay(1000); diam(); delay(10);

 sol();delay(350); la();delay(750); si();delay(350); Do();delay(350); sol();delay(1000); diam(); delay(10);

 Do();delay(350);diam(); delay(100); Do();delay(350); mi();delay(350); re();delay(350);diam(); delay(100); re();delay(350); Do();delay(350);diam(); delay(100); Do();delay(350); si();delay(500); la();delay(500); si();delay(500); doo();delay(2000);
 diam(); delay(2000);

//reff
Do();delay(450);diam(); delay(10);Do();delay(450);diam(); delay(10);Do();delay(450);diam(); delay(10);Do();delay(450);sol();delay(650);
 fa();delay(450);mi();delay(450);Do();delay(450);diam(); delay(10);;Do();delay(450); re();delay(450);Do();delay(450);sii();delay(1000);diam(); delay(100);

sol();delay(450);la();delay(650);si();delay(500);Do();delay(450);sol();delay(650);diam(); delay(500);diam(); delay(100);
Do();delay(450);diam(); delay(10);Do();delay(450);mi();delay(450);re();delay(450);diam(); delay(10); re();delay(450);Do();delay(450);re();delay(650);diam(); delay(100);

 Do();delay(450);diam(); delay(10);Do();delay(450);diam(); delay(10);Do();delay(450);diam(); delay(10);Do();delay(450);sol();delay(650);diam(); delay(100);
 fa();delay(450);mi();delay(450);Do();delay(450);diam(); delay(10);Do();delay(450); re();delay(450);Do();delay(450);sii();delay(1000);diam(); delay(100);

sol();delay(450);la();delay(650);si();delay(500);Do();delay(450);sol();delay(650);diam(); delay(500);diam(); delay(100);
Do();delay(450);diam(); delay(10);Do();delay(450);mi();delay(450);re();delay(450);diam(); delay(10); re();delay(450);Do();delay(450);Do();delay(450);si();delay(500);la();delay(550);
si();delay(650);doo();delay(1000);
}

