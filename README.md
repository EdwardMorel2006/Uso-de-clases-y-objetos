# Proyecto Clase Libro - Programación Orientada a Objetos en C++


**Nombre:** [EDWARD ALBERTO MOREL RAMIREZ]
**Matrícula:** [2025-1672]

---

# Descripción del programa

Este programa fue desarrollado en C++ utilizando los principios de Programación Orientada a Objetos (POO).

El programa permite registrar la información de 5 libros mediante una clase llamada `Libro`. Cada libro almacena datos como título, autor, año de publicación, edición y cantidad de páginas.

La clase utiliza encapsulación, manteniendo sus atributos privados y permitiendo modificar sus valores mediante métodos públicos llamados setters.

Al finalizar el registro, el programa muestra en pantalla la información de todos los libros ingresados.

---

# Datos de entrada

El usuario debe ingresar los siguientes datos para cada libro:

* Título del libro.
* Autor del libro.
* Año de publicación.
* Número de edición.
* Cantidad de páginas.

El programa permite registrar información de un total de 5 libros.

---

# Datos que procesa

El programa procesa la información utilizando una clase llamada `Libro`.

Los datos ingresados por el usuario son almacenados en atributos privados:

* `titulo`
* `autor`
* `anioPublicacion`
* `edicion`
* `cantidadPaginas`

Luego, estos valores son asignados mediante métodos públicos:

* `setTitulo()`
* `setAutor()`
* `setAnioPublicacion()`
* `setEdicion()`
* `setCantidadPaginas()`

Finalmente, el método `mostrarInformacion()` permite mostrar los datos almacenados.

---

# Datos de salida

El programa muestra en pantalla la información registrada de los 5 libros:

* Título.
* Autor.
* Año de publicación.
* Edición.
* Cantidad de páginas.

---

# Importancia de utilizar encapsulación en la POO

La encapsulación es un principio fundamental de la Programación Orientada a Objetos porque permite proteger los datos internos de una clase.

En este programa, los atributos de la clase `Libro` están declarados como privados, lo que evita que puedan ser modificados directamente desde fuera de la clase.

Para cambiar los valores se utilizan métodos públicos llamados setters, permitiendo un mejor control sobre los datos y haciendo que el código sea más seguro, organizado y fácil de mantener.

---




Ejemplo:

![Registro de libros](capturas/ejecucion1.png)

![Libros registrados](capturas/ejecucion2.png)

