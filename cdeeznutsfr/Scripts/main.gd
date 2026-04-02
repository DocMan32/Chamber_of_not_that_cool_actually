extends Node3D


@onready var ASinfo = $ASINFO

@onready var state = 0;

@onready var mesh = $NSP_CASE/MeshButtonNSP/MeshInstance3D

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$NSP_CASE/NSPHOVER.input_event.connect(_on_input_event)
	$AmericanSummer/ASHOVER.input_event.connect(_on_input_event_AS)
	
	pass # Replace with function body.

func _on_input_event(camera, event, position, normal, shape_idx):
	if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
		_on_button_pressed()
	pass

func _on_input_event_AS(camera, event, position, normal, shape_idx):
	if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
		_on_button_pressed_AS()
	pass



func _on_button_pressed_AS():
	#for when the button is pressed:

			print("nice SELECTion. I really VALUE when you SELECT like that.")
			get_tree().change_scene_to_file("res://CD_Scenes/AmericanSummerCD.tscn")
	





func _on_button_pressed():
	#for when the button is pressed:
	get_tree().change_scene_to_file("res://CD_Scenes/NSPCASE.tscn")
	print("BUTTONS WORK CAPTAIN")
	
	


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass


#Hovering over CDs to get info for album

func _on_nsphover_mouse_entered() -> void:
	$NSPInfo.visible = true;
	pass # Replace with function body.


func _on_nsphover_mouse_exited() -> void:
	$NSPInfo.visible = false;
	pass # Replace with function body.


func _on_ashover_mouse_entered() -> void:
	$ASINFO.visible = true;
	pass # Replace with function body.


func _on_ashover_mouse_exited() -> void:
	$ASINFO.visible = false;
	pass # Replace with function body.


#Interacting with CD to get to its scene
