# Black Souls Guide (C++ CLI)

A small command-line helper for viewing ending requirements in **Black Souls 1** and **Black Souls 2**.

## What it does

- Lets you choose between Black Souls 1 and Black Souls 2.
- Shows available endings for the selected game.
- Prints a short requirement summary for the ending you pick.
- Lets you repeat the process for more lookups.

## Project files

- `main.cpp` - Main menu loop and game selection.
- `functions.hpp` - Ending lookup functions and repeat prompt.
- `build.bat` - One-line build command using `g++`.

## Requirements

- Windows
- `g++` in PATH (for example via MinGW-w64)

## Build

From the project folder:

```bat
build.bat
```

This generates:

- `Black_Souls-guide.exe`

You can also compile directly:

```bat
g++ main.cpp -o Black_Souls-guide.exe
```

## Run

```bat
Black_Souls-guide.exe
```

## Usage notes

- Game selection accepts only `1` or `2`.
- Ending input currently expects uppercase letters (for example `A`, `B`, `U`, `V`).
- The program uses `cls` to clear the console between runs.

## Known limitations

- Logic is implemented in a header file (`functions.hpp`), which is fine for this small project but not ideal for larger projects.
- There is no input normalization yet (lowercase letters are not converted automatically).

## License

No license file is currently included.
