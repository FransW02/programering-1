/// @description Insert description here
// You can write your code in this editor

if(keyboard_check(vk_right)) {

x += 10;
	
}	


if(keyboard_check(vk_left)) {

x -= 10;
	
}	

move_wrap(true,true,0)


if(keyboard_check_pressed(vk_space)){
	
var inst = instance_create_layer(x,y,"Instances", obj_bullet)	

inst.direction = 270;

}
