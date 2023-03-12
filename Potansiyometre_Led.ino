#define pot A0
#define led 3

void setup() {

}

void loop() {

  int deger = analogRead(pot); //analog kullanıos ve Read yapıp okuyourz değeri
  deger = map(deger, 0, 1023, 0, 255); //değere de map metoduyla oran? verios
  analogWrite(led, deger); //analog kullanıos ve meydana getirmek için Write kullanıos

  

}
