# How to run
## Manually

Build from ../repo/build$:
```Bash
# only run whenchanging CMakeLists.txt, adding/removing src files, or changin dependencies:
~/vscode/Raylib-Pong-Tutorials/build$ cmake ..

# build every time after modifying code:
~/vscode/Raylib-Pong-Tutorials/build$ cmake --build .
```

Run from ../repo/build$:
```Bash
~/vscode/Raylib-Pong-Tutorials/build$ ./game
```

## With shell script

Run from ../repo$:
```Bash
~/vscode/Raylib-Pong-Tutorials$ ./build.sh
```

You may need permission with:
```Bash
chmod +x build.sh
```
