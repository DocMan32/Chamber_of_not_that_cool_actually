extends Control
# Right now this is only for a specific song. Look into something called "FileDialouge" for custom music.

@export var Stream: AudioStreamMP3
var music_files = []
@onready var MusicItem = $ItemList

@onready var player = $AudioStreamPlayer
@onready var slider = $VBoxContainer/HSlider
@onready var play_button = $HBoxContainer/PlayButton

var is_dragging = false

func _ready():
	# Configure slider to match song length
	slider.max_value = player.stream.get_length()
	slider.value = 0
	#METADATA STUFF NOT DONE YET NEEDS MORE COOKING:
	#var metadata := MusicMeta.get_mp3_metadata(Stream)
	#if metadata.error != OK:
		#return
	#metadata.print_info()



	
			



func PlaySong(file_path: String):
	var audio_stream_player = AudioStreamPlayer.new()
	add_child(audio_stream_player)
	
	#loading file
	var ogg_stream := AudioStreamOggVorbis.load_from_file(file_path)
	audio_stream_player.stream = ogg_stream
	audio_stream_player.play()


func _process(_delta):
	# Update slider position while playing
	if not is_dragging and player.playing:
		slider.value = player.get_playback_position()

func _on_play_button_pressed():
	if player.playing:
		player.stop()
		play_button.text = "Play"
		
	else:
		player.play(slider.value)
		play_button.text = "Pause"

func _on_h_slider_drag_started():
	is_dragging = true

func _on_h_slider_drag_ended(_value_changed):
	player.play(slider.value) # Seek to new position
	is_dragging = false


func UpdateList():
	#$ItemList.add_item($"/root/GlobalMusic".music_files, null, true)
	pass
func _on_file_dialog_dir_selected(path: String) -> void:
	


	var dir = DirAccess.open(path)
	if dir:
		dir.list_dir_begin()
		var file_name = dir.get_next()
		
		while file_name != "":
			#check if file exists
			if file_name.ends_with(".mp3") or file_name.ends_with(".ogg") or file_name.ends_with(".wav"):
				var subdirs = DirAccess.get_directories_at(path)
				for subdir in subdirs:
					var subdir_path = path.path_join(subdir)
					_on_file_dialog_dir_selected(subdir_path)
					break
				$"/root/GlobalMusic".music_files.append(file_name + "!")
			
				$ItemList.add_item(str(music_files), null, true)
				
				print("Found song: " + file_name)
				
			file_name = dir.get_next()
			
	else:
		print("AN ERROR HAPPENED COMPUTER HAVE BOOBOO")
	pass # Replace with function body.

func scan_recursive(path: String):
	var files = DirAccess.get_files_at(path)
	for file in files:
		print("Found File: ", path.path_join(file))
		
	


func UpdateStuff():
	print($"/root/GlobalMusic".music_files)

	pass # Replace with function body.
func _input(event: InputEvent) -> void:
	if event.is_action_pressed("click"):
		print($"/root/GlobalMusic".music_files)
		
		
		
