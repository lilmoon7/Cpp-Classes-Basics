#include <iostream>
using namespace std;

class Point2D {
private:
    int x;
    int y;
public:
    static int compteur;

    Point2D(int coordX, int coordY) {
        compteur++;
        x = coordX;
        y = coordY;
        cout << "Point2D: " << compteur << endl;
        cout << "La coordonnee x est: " << x << endl;
        cout << "La coordonnee y est: " << y << endl;
    }

    static int afficher() {
        return compteur;
    }

    ~Point2D() {
        compteur--;
        cout << "Destructeur appele, il reste: " << compteur << " Point2D" << endl;
    }

    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

int Point2D::compteur = 0;

int main() {
    Point2D p1(3, 5);
    Point2D p2(1, 2);

    cout << "Nombre d'objets crees: " << Point2D::afficher() << endl;

    return 0;
}
