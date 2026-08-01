#include <iostream>
#include <string>

using namespace std;

class Libro
{
private:
    string titulo;
    string autor;
    int anioPublicacion;
    int edicion;
    int cantidadPaginas;

public:

    void setTitulo(string t)
    {
        titulo = t;
    }

    void setAutor(string a)
    {
        autor = a;
    }

    void setAnioPublicacion(int anio)
    {
        anioPublicacion = anio;
    }

    void setEdicion(int e)
    {
        edicion = e;
    }

    void setCantidadPaginas(int paginas)
    {
        cantidadPaginas = paginas;
    }

    void mostrarInformacion()
    {
        cout << "\nTitulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anioPublicacion << endl;
        cout << "Edicion: " << edicion << endl;
        cout << "Cantidad de paginas: " << cantidadPaginas << endl;
    }
};

int main()
{
    Libro libros[5];

    string titulo, autor;
    int anio, edicion, paginas;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nLIBRO " << i + 1 << endl;

        cin.ignore();

        cout << "Titulo: ";
        getline(cin, titulo);

        cout << "Autor: ";
        getline(cin, autor);

        cout << "Anio de publicacion: ";
        cin >> anio;

        cout << "Edicion: ";
        cin >> edicion;

        cout << "Cantidad de paginas: ";
        cin >> paginas;

        libros[i].setTitulo(titulo);
        libros[i].setAutor(autor);
        libros[i].setAnioPublicacion(anio);
        libros[i].setEdicion(edicion);
        libros[i].setCantidadPaginas(paginas);
    }

    cout << "\n===== LIBROS REGISTRADOS =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        libros[i].mostrarInformacion();
    }

    return 0;
}
