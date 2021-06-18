
void setup(){
 size(400,200); 
}
void draw(){
 background(205,220,245);
 fill(255);
 ellipse(100,100, 180,180);
 fill(116,139,188);
 float  stop=mouseX/50.0;
 text(stop, 200,100);
 arc(100,100, 180,180, 0, stop);
}
