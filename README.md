# Cub3D: A Simple Version of Doom/Wolfenstein
<p align="center">
  <img src="https://github.com/mariogalis/cub3d/assets/44349256/9d339ace-766b-438b-9dbb-fd6a0dc96e70" alt="Sublime's custom image"/>
</p>

Welcome to Cub3D, a simple version of the iconic games Doom and Wolfenstein! This project aims to recreate the immersive first-person gameplay experience found in these classic games using the C programming language.

## Table of Contents
- [Introduction](introduction)
- [Getting Started](getting-started)
- [Prerequisites](prerequisites)
- [Installation](installation)
- [Gameplay](gameplay)
- [Controls](controls)
- [Map Design](map-desing)
- [Contributing](contributing)
- [License](license)
- [Acknowledgements](acknowledgements)

## Introduction
Cub3D is a 3D game engine built from scratch, primarily using the MiniLibX graphical library. The project implements raycasting techniques to render a pseudo-3D world and simulates a player's movement in a maze-like environment. It provides a thrilling experience reminiscent of the early days of first-person shooter games.

The engine supports custom map design and comes with a set of default maps to get you started. You can modify and create your own maps to explore different virtual worlds. Cub3D also offers basic collision detection and textured walls to enhance the gameplay visuals.

## Getting Started
Follow the instructions below to set up and run Cub3D on your system.

## Prerequisites
To run Cub3D, you will need the following:

- A C compiler (e.g., GCC)
- The MiniLibX graphical library

## Installation
- Clone the Cub3D repository:

```bash
git clone https://github.com/mariogalis/cub3d.git
```
- Navigate to the project directory:

```bash
cd cub3d
```
- Compile the program:
```bash
make
```
Run Cub3D:
```bash
./cub3D path_to_map.cub
```
> Replace path_to_map.cub with the path to your desired map file. Alternatively, you can use the default maps provided in the maps folder.

## Gameplay
Once you start Cub3D, you'll find yourself in a maze-like environment, where your goal is to navigate and explore the map. Immerse yourself in the pseudo-3D world as you move through the corridors and rooms. Discover secrets, collect items, and solve puzzles to progress further.

Be cautious of potential dangers lurking in the shadows. Enemies may await you, so keep your guard up! Can you find your way out of the maze and emerge victorious?

<img width="1067" alt="Screenshot 2023-06-11 at 12 45 02" src="https://github.com/mariogalis/cub3d/assets/44349256/85b843ff-96e0-4cf8-a301-625c9822116d">


## Controls
- W: Move forward
- S: Move backward
- A: Strafe left
- D: Strafe right
- ←: Rotate camera left
- →: Rotate camera right
- Esc: Quit the game

## Map Design
Cub3D allows you to create custom maps or modify existing ones. Maps are defined in a simple text-based format (with the extension .cub) that specifies the layout, textures, and other details.
```
NO ./textures/north.xpm
SO ./textures/south.xpm
WE ./textures/west.xpm
EA ./textures/east.xpm


F 90,90,90
C 0,0,0


11111111111
 10000000001
111110011111
 111110011111
1000000000011111111
1000000000000000001
100S000000011111111
1000011000111
111111111111

```
The maps folder contains examples of map files to help you understand the format and get started with your own designs. Experiment with different layouts, textures, and objects to craft unique gaming experiences.

## Contributing
We welcome contributions to Cub3D! If you find any bugs, have ideas for improvements, or would like to add new features, please submit an issue or a pull request to the GitHub repository. We appreciate your help in making Cub3D even better.

## License
Cub3D is open-source software released under the MIT License. Feel free to modify, distribute, and use the code as per the terms of the license.

## Acknowledgements
We would like to acknowledge the following resources that helped inspire and guide the development of Cub3D:

Doom and Wolfenstein 3D
The MiniLibX graphical library
42 Docs
Thank you for choosing Cub3D! Enjoy the retro gaming experience and have fun exploring the virtual world. If you have any questions, refer to the documentation or reach out to the project maintainers. Happy gaming!
