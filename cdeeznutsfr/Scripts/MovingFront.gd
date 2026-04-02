extends Node3D

var mouse_down = false;
var sensitivity = 0.005;

func _input(event):
	if event.is_action_pressed("click"):
		mouse_down = true;
	if event.is_action_released("click"):
		mouse_down = false;
		
	if mouse_down and event is InputEventMouseMotion:
		
		rotate_object_local(Vector3.LEFT, event.relative.y * sensitivity);
	


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
