extends MeshInstance3D

#declaring Variables

var mouse_down = false;
var sensitivity = 0.008;

func _ready() -> void:
	$SnapLock/snaplockarea.input_event.connect(_on_input_event)
	

func _input(event):
	if event.is_action_pressed("click"):
		mouse_down = true;
	if event.is_action_released("click"):
		mouse_down = false;
		
	if mouse_down and event is InputEventMouseMotion:
		
		rotate_object_local(Vector3.LEFT, event.relative.y * sensitivity);
		rotate_object_local(Vector3.UP, event.relative.x * sensitivity);
	
func _on_input_event(camera, event, position, normal, shape_idx):
	if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
		_on_button_pressed()
	pass

func _on_button_pressed():
	#clicking button effect:
	print("CD UNLOCKED!")
	$Control.visible = true;
	pass
	

	
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass


func _on_texture_button_pressed() -> void:
	# PRESSING left
	get_tree().change_scene_to_file("res://Main.tscn")
	
	# could make a global state list aka nsp = 1, American summer = 2, to change through scenes better rather than manually doing so.
	
	pass # Replace with function body.


func _on_texture_button_2_pressed() -> void:
	
	# pressing right 
	get_tree().change_scene_to_file("res://CD_Scenes/AmericanSummerCD.tscn")
	
	pass # Replace with function body.
