extends RigidBody3D

@export var speed: float = 250.0


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	
	apply_central_impulse(-transform.basis.z * speed)
	continuous_cd = true
	
	pass # Replace with function body.

func _on_Timer_timeout():
	queue_free()
	
	

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
