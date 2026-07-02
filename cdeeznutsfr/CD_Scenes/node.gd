extends Node
@export var Stream: AudioStreamMP3

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	var metadata := MusicMeta.get_mp3_metadata(Stream)
	if metadata.error != OK:
		return
	metadata.print_info()
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
