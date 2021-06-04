import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this,"tada.mp3");
}
void draw(){
  background(191,237,242);
}
void mousePressed(){
  if(player.isPlaying()){
   player.stop(); 
  }else{
   player.play(); 
  }
}
