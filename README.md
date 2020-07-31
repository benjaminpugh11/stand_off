# stand_off
Stand Off Against a Rogue Computer Cowboy (RCC).

This is an easy game that I created to remember some C basics as well as an advocate for why OOP exists. The code for this game covers the following C basics:
* Basic C Syntax
* Operators
* Functions
* Pointers
* Headers
* Makefiles

#Rules of the Game
This game is as easy as 1,2, Shoot! There are only 3 moves you can do
1. Block - This will block the RRC shot IF the RCC choses to shoot.
2. Load - This will load your gun.
3. Shoot - This will shoot your gun. Keep in mind, you *must* load your gun before shooting.

**!BE CAREFUL!** If the RRC shoots while you are load or shooting your weapon then you will be DEAD!

# Compiling
As long as you have gcc installed, you should be able to compile straight from the makefile.

Examples:
```
[~/repo/stand_off]$make clean all
rm -f *.o
make stand_off
gcc -Wall -c game.c
gcc -Wall -c display.c
gcc -Wall -c move.c
gcc -Wall game.o display.o move.o -o stand_off
[~/repo/stand_off]$
```

```
[~/repo/stand_off]$make clean
rm -f *.o
[~/repo/stand_off]$
```

#Running

After compiling the code, you should have a binary named "stand_off". Simply run this binary and enjoy :)

```
[~/repo/stand_off]$./stand_off
```
