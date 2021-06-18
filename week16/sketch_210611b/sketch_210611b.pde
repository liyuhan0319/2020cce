void setup(){
 size(400,200); 
 fill(255,0,0);
 textSize(40);
}
int degree=0;
void draw(){
 background(57,255,127);
 float stop=radians(degree);
 text(degree,200,100);
 text(stop,200,150);
 arc(100,100,180,180,0,stop);
 if(mousePressed) degree++;
}
