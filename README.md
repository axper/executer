Calls another executable with parameters specified in a file
========

Usage:
------

1. Put `caller.exe` to the file the other executable is located
2. Create a file callec `command.txt` in the same directory
3. In `command.txt`, put the other executable's name followed by it's parameters. For example:
    
	game.exe -fullscreen

4. Run `caller.exe`

This program was originally written for use with Gameranger, as it does not allow to execute a game with arguments. [original]{http://stackoverflow.com/questions/20773952/run-a-exe-file-with-a-parameter-by-default/20773968#20773968}
