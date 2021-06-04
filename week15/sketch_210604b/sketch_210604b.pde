void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(191,237,242);
  int s =second();
  text(9-s%10,100,100);
}
