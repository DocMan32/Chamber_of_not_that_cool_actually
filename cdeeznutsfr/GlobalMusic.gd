extends Window

var music_files = []
var playback_state = false




func arraytostring(arr: Array) -> String:
	var s = ""
	for i in arr:
		s += String(i)
	return s
	




# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	
	pass # Replace with function body.

func ListOfMusic():
	pass

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
	
#
#func _on_file_dialog_dir_selected(path: String) -> void:
	#
#
#
	#var dir = DirAccess.open(path)
	#if dir:
		#dir.list_dir_begin()
		#var file_name = dir.get_next()
		#
		#while file_name != "":
			##check if file exists
			#if file_name.ends_with(".mp3") or file_name.ends_with(".ogg") or file_name.ends_with(".wav"):
				#music_files.append(path + "/" + file_name)
			#
				#$ItemList.add_item(file_name, null, true)
				#print("Found song: " + file_name)
			#file_name = dir.get_next()
			##make recursive code to go through subfolders
	#else:
		#print("AN ERROR HAPPENED COMPUTER HAVE BOOBOO")
	#pass # Replace with function body.
