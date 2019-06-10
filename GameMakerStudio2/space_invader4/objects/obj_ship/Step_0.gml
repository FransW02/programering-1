/// @description Insert description here
// You can write your code in this editor

if(keyboard_check(vk_right)) {

x += 5;
	
}	


if(keyboard_check(vk_left)) {

x -= 5;
	
}	

move_wrap(true,true,0)


if(keyboard_check_pressed(vk_space)){
	
var inst = instance_create_layer(x,y,"Instances", obj_bullet)	

inst.direction = 270;

}

health = 3;


if(health <= 0){
	
instance_destroy();
	
}
