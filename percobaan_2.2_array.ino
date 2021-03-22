//Sambungkan Pin Arduino: 2->a, 3->b, 4->c, 5->d, 6->e, 7->f, 8-> g, 9 -> dot
byte pin_7segmen[24][7] = {
{ 1,1,0,1,1,0,1 }, // = 2
{ 0,1,1,0,0,1,1 }, // = 4
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,1,1 }, // = 4
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,0,0 }, // = 1

{ 1,1,1,1,1,1,0 }, // = 0
{ 1,0,1,1,1,1,1 }, // = 6
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,1,1,1,1,1,1 }, // = 8
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,0,0 }, // = 1

{ 1,1,1,1,1,1,0 }, // = 0
{ 1,0,1,1,1,1,1 }, // = 6
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,0,1,1,0,1,1 }, // = 5
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,1,1,1,1,1,0 }, // = 0
{ 1,1,1,1,1,1,0 }, // = 0





};
void setup() { 
 pinMode(2, OUTPUT), pinMode(3, OUTPUT), pinMode(4, OUTPUT);
 pinMode(5, OUTPUT), pinMode(6, OUTPUT), pinMode(7, OUTPUT);
 pinMode(8, OUTPUT), pinMode(9, OUTPUT), digitalWrite(9,LOW); 
}
void loop() {
 for (byte angka = 0; angka < 24; ++angka) {
 delay(1000);
 tampilkan(angka); 
 }
}
void tampilkan(byte baris) {
 byte pin = 2;
 for (byte kolom = 0; kolom < 7; ++ kolom) {
 digitalWrite(pin, 
pin_7segmen[baris][kolom]);
 ++pin;

 }
}
