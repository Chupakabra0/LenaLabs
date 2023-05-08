# Lab 1

## Git Tasks:

1. Init environment and create project skeleton
2. Implement STLParser writing
3. implement STLParser reading
4. Implement console argument parsing
5. Implement Cube command
6. implement Sphere command
7. implement Cone command
8. implement Cylinder command
9. implement Torus command
10. implement Split command
11. implement ear clipping
12. implement hole filling

## The Final directory structure

| .                            | MeshEditor         |
| ---------------------------- | ------------------ |
| 📄 MeshEditor.sln            | 📄 Application.cpp    |
| 📁 MeshEditor                | 📄 Application.hpp    |
|                              | 📄 Cilinder.cpp       |
|                              | 📄 Cilinder.hpp       |
|                              | 📄 Cone.cpp           |
|                              | 📄 Cone.hpp           |
|                              | 📄 Cube.cpp           |
|                              | 📄 Cube.hpp           |
|                              | 📄 ICommand.hpp       |
|                              | 📄 Main.cpp           |
|                              | 📄 MeshEditor.vcxproj |
|                              | 📄 STLParser.cpp      |
|                              | 📄 STLParser.hpp      |
|                              | 📄 Sphere.cpp         |
|                              | 📄 Sphere.hpp         |
|                              | 📄 Split.cpp          |
|                              | 📄 Split.hpp          |
|                              | 📄 Torus.cpp          |
|                              | 📄 Torus.hpp          |
|                              | 📄 Utils.hpp          |

## Objective

The objective of this Lab is to implement the following classes:
* Application. It takes input arguments and registers the Cube, Sphere, Cone, Cylinder, Torus and Split  
commands.
* STLParser. It reads and writes ASCII STL files.
* Cube. It creates a tessellated cube and outputs it to an ASCII STL file.  
* Sphere. It creates a tessellated sphere and outputs it to an ASCII STL file. 
* Cone. It creates a tessellated cone and outputs it to an ASCII STL file.
* Cylinder. It creates a tessellated cylinder and outputs it to an ASCII STL file.
* Torus. It creates a tessellated torus and outputs it to an ASCII STL file.
* Split. It splits a tessellated input mesh into two and outputs them to ASCII STL files.

## Commands

Syntax:

```
MeshEditor.exe Cube L=dbl_value origin=(dbl_value,dbl_value,dbl_value) filepath="string_value"
MeshEditor.exe Sphere R=dbl_value origin=(dbl_value,dbl_value,dbl_value) slices=int_value rings=int_value filepath="string_value"
MeshEditor.exe Cone L=dbl_value R=dbl_value origin=(dbl_value,dbl_value,dbl_value) normal=(dbl_value,dbl_value,dbl_value) slices=int_value filepath="string_value"
MeshEditor.exe Cylinder L=dbl_value R=dbl_value origin=(dbl_value,dbl_value,dbl_value) normal=(dbl_value,dbl_value,dbl_value) slices=int_value filepath="string_value"
MeshEditor.exe Torus R1=dbl_value R2=dbl_value origin=(dbl_value,dbl_value,dbl_value) normal=(dbl_value,dbl_value,dbl_value) slices=int_value rings=int_value filepath="string_value"
MeshEditor.exe Split input="string_value" origin=(dbl_value, dbl_value, dbl_value) normal=(dbl_value,dbl_value,dbl_value) output1="string_value" output2="string_value"
```
