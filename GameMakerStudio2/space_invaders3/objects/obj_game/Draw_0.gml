/// @description Insert description here
// You can write your code in this editor

switch(room){

case room_start:

var c = c_yellow;

draw_text_transformed_color(
300, 200 , "SPACE INVADERS", 3,3,0,c,c,c,c,1

);

draw_text(300,room_height/2 ,
@"Kill all enemys to win

  Left arrow: left
  Right arrow: right
  Space: shoot
  
  >> PRESS ENTER TO START! <<");
break;

case room_game:
draw_text(20,20,"SCORE:"+ string(score));
draw_text(20,40,"HEALTH:"+ string(lives));	
	
break;

case room_end:

var c = c_yellow;

draw_text_transformed_color(
room_width/2, room_height/2, "End", 5,5,0,c,c,c,c,1
);


break;

	
	
}	