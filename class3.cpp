#include <iostream>
using namespace std;

class Point2D {
private:
    int x;
    int y;
public:
    static int compteur;

    Point2D(int x=0 ,int y=0) {
        compteur++;
        x=x;
        y=y;
    }

    void deplacer(double dx ,double dy){
        x+=dx;
        y+=dy;
    }
    void afficher(){
        cout<<"point"<<"("<<x<<","<<y<<")"<<endl;
    }
};

    int main() {
        Point2D p1(3, 5);
        Point2D p2(1, 2);

        p1.afficher();
        p2.afficher();

        return 0;
    }