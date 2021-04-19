# TestApp

## Aplicación realizada en Visual Studio 2019 utilizando C++ y SQLite.

La siguiente aplicacion permite la navegacion entre multiples pantallas y mostrar una tabla de una base de datos con opción de filtrado.

### Dependencias necesarias:

- Click derecho en el nombre del proyecto en el Solution Explorer -> Manage Nuget Packages -> En browse buscar e instalar la ultima version de System.Data.SQLite
- Click derecho en el nombre del proyecto en el Solution Explorer -> Add -> Reference... -> Buscar el archivo System.Data.SQLite.dll para agregarlo como referencia
- Buscar el archivo SQLite.Interop.dll segun corresponda (carpetas para x86/x64) y guardar una copia literal en el directorio del proyecto, luego, 
- Click derecho en el nombre del proyecto en el Solution Explorer -> Add -> Existing Item... -> Seleccionar SQLite.Interop.dll del directorio del proyecto.
- Corregir el path de la base de datos en la linea 68 de Screen1.h

### Pasos realizados:

1. Se parte de un proyecto "CLR Console APP (.NET Framework)" para C++
2. Se debe ingresar un entry point: "main" (sin comillas) desde Project -> Properties -> Configuration Properties -> Linker -> Advanced -> Entry Point
3. Se debe cambiar el Subsystem a "Windows (/SUBSYSTEM:WINDOWS)" (sin comillas) desde Project -> Properties -> Configuration Properties -> Linker -> System -> SubSystem
4. Se debe agregar tantos UI Items (pantallas) como sean necesarios 
5. Se debe guardar la solución, cerrarla y volverla a abrir para poder ver las interfaces graficas de los items UI agregados.

