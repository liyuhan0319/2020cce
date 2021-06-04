import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this,"tada.mp3");
}
void draw(){
  background(191,237,242);
  int s =second();
  text(9-s%10,100,100);
  if(9-s%10 == 0)player.play();
}
