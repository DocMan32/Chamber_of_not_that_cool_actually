extends MeshInstance3D


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.

func change_texture(path_to_image):
	var image = Image.new()
	var err = image.load("res://CD_COVERS/Custom/CD_1/Cover.png")
	if err != OK:
		print("ERROR LOADING IMAGE SELF DESTRUCT IMMINENT")
		return
		
	var texture = ImageTexture.new()
	image.load_from_file("res://CD_COVERS/Custom/CD_1/Cover.png")
	
	var material = StandardMaterial3D.new()
	material.albedo_texture = texture
	
	self.set_surface_override_material(0, material)

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
