extends MeshInstance3D



var mouse = false;



# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	
	pass


func _on_area_3d_mouse_entered() -> void:
	mouse = true;
	
func _input(event):
	if mouse == true and event.is_action_released("click"):
		print("Thats how its done")
	pass
		
