/// @description Insert description here
// You can write your code in this editor


if(alarm[0] < 1){

alarm = 100000;

var inst = instance_create_layer(x,y,"Instances", obj_bullet2)	

inst.direction = 90;


}

alarm = alarm - random_range(0,3000)