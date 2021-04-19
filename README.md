# Simple C++ SQLite Application

---

![Project.Cover](projectCover.png)

---

### Download
| Latest release | Latest development build |
|----------------|--------------------------|
| ![Noto](https://img.shields.io/badge/master-v1.0-green.svg)(Enlace a la version actual) | ![Noto](https://img.shields.io/badge/develop-v1.1+-blue.svg)(Enlace a la version en desarrollo) |

---

# Contents
- 1 - [Introduction](#1-introduction)
- 2 - [Downloading the application](#2-downloading-the-game-pre-built)
- 3 - [Building the game](#3-building-the-game)
  - 3.1 - [Building prerequisites](#31-building-prerequisites)
  - 3.2 - [Compiling and running](#32-compiling-and-running)
- 4 - [Contributing](#4-contributing)
- 5 - [Licence](#5-licence)

---

# 1. Introduction

La siguiente aplicacion permite la navegacion entre multiples pantallas y mostrar una tabla de una base de datos con opción de filtrado.


1. Se parte de un proyecto "CLR Console APP (.NET Framework)" para C++
2. Se debe ingresar un entry point: "main" (sin comillas) desde Project -> Properties -> Configuration Properties -> Linker -> Advanced -> Entry Point
3. Se debe cambiar el Subsystem a "Windows (/SUBSYSTEM:WINDOWS)" (sin comillas) desde Project -> Properties -> Configuration Properties -> Linker -> System -> SubSystem
4. Se debe agregar tantos UI Items (pantallas) como sean necesarios 
5. Se debe guardar la solución, cerrarla y volverla a abrir para poder ver las interfaces graficas de los items UI agregados.

---

# 2. Downloading the application

---

# 3. Building the application

## 3.1 Building prerequisites


- Click derecho en el nombre del proyecto en el Solution Explorer -> Manage Nuget Packages -> En browse buscar e instalar la ultima version de System.Data.SQLite
- Click derecho en el nombre del proyecto en el Solution Explorer -> Add -> Reference... -> Buscar el archivo System.Data.SQLite.dll para agregarlo como referencia
- Buscar el archivo SQLite.Interop.dll segun corresponda (carpetas para x86/x64) y guardar una copia literal en el directorio del proyecto, luego, 
- Click derecho en el nombre del proyecto en el Solution Explorer -> Add -> Existing Item... -> Seleccionar SQLite.Interop.dll del directorio del proyecto.
- Corregir el path de la base de datos en la linea 68 de Screen1.h

---

## 3.2 Compiling and running

---

# 4. Contributing

---
# 5. Licence
