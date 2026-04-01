extends CharacterBody3D

@onready var turret = $base/Turret
@onready var barrel = $base/Turret/Barrel

var Bullet = preload("res://BallBullet.tscn")

@onready var muzzle_point = $MuzzlePoint

var mouse_sensitivity = 0.005


@export var FORWARD_SPEED = 2.0
@export var BACK_SPEED = 1.0
@export var TURN_SPEED = 0.025

var Vec3Z = Vector3.ZERO

func _unhandled_input(event: InputEvent) -> void:
	if event.is_action_just_pressed("fire"):
		shoot()
		
func shoot():
	var bullet_instance = Bullet.instnce()
	
	get_tree.current_scene.add_child(bullet_instance)
	
	
	bullet_instance.global_transform = muzzle_point.global_transform
	
	# The bullet's _ready function will handle applying the impulse
3. Setup in the Editor
Input Action: Ensure you have an input action named "fire" set up in Project Settings -> Input Map.
Muzzle Point: Add a Position3D node as a child of your player/weapon, placed at the exact location where you want the bullets to appear (e.g., the barrel tip).
Collision Layers: Configure collision layers and masks so the projectile does not immediately collide with the player character, but does collide with the environment and enemies.
Physics Settings: Consider enabling contact_monitor on the RigidBody3D if you need to detect collisions using signals (like body_entered), and set
	
	
	
func _physics_process(delta: float) -> void:
	# Add the gravity.
	if not is_on_floor():
		velocity += get_gravity() * delta
	
	if Input.is_action_just_pressed("Move_Forward") and Input.is_action_just_pressed("Move_back"):
		velocity.x = 0
		velocity.y = 0
	elif Input.is_action_just_pressed("Move_Forward"):
		var forwardVector = -Vector3.FORWARD.rotated(Vector3.UP, rotation.y)
		velocity = -forwardVector * FORWARD_SPEED
		
	elif Input.is_action_pressed("move_back"):
		var backwardVector = Vector3.FORWARD.rotated(Vector3.UP, rotation.y)
		velocity = -backwardVector * BACK_SPEED
	
	#If pressing nothing stop velocity
	else:
		velocity.x = 0
		velocity.z = 0
	
	# IF turn left WHILE moving back, turn right
	if Input.is_action_pressed("turn_left") and Input.is_action_pressed("move_back"):
		rotation.z -= Vec3Z.y + TURN_SPEED #* V_LOOK_SENS
		rotation.z = clamp(rotation.x, -50, 90)
		rotation.y -= Vec3Z.y + TURN_SPEED #* M_LOOK_SENS
	
	elif Input.is_action_pressed("turn_left"):
		rotation.z += Vec3Z.y - TURN_SPEED #* V_LOOK_SENS
		rotation.z = clamp(rotation.x, -50, 90)
		rotation.y += Vec3Z.y + TURN_SPEED #* M_LOOK_SENS

	# IF turn right WHILE moving back, turn left
	if Input.is_action_pressed("turn_right") and Input.is_action_pressed("move_back"):
		rotation.z += Vec3Z.y - TURN_SPEED #* V_LOOK_SENS
		rotation.z = clamp(rotation.x, -50, 90)
		rotation.y += Vec3Z.y + TURN_SPEED #* M_LOOK_SENS
		
	elif Input.is_action_pressed("turn_right"):
		rotation.z -= Vec3Z.y + TURN_SPEED #* V_LOOK_SENS
		rotation.z = clamp(rotation.x, -50, 90)
		rotation.y -= Vec3Z.y + TURN_SPEED #* M_LOOK_SENS
	
	move_and_slide()
func _input(event):
	if event is InputEventMouseMotion:
		turret.rotate_y(-event.relative.x * mouse_sensitivity)
		
		var new_tilt = barrel.rotation.x - event.relative.y * mouse_sensitivity
		barrel.rotation.x = clamp(new_tilt, -0.3, 0.1)
		
		
