#include <iostream>
#include <string>
using namespace std;

class Vehicule {
protected:
    string marque;
    int vitesseMax;

public:
    Vehicule (string m , int vt){
        marque = m;
        vitesseMax = vt;
    }
    virtual void afficher (){
        cout <<"la marque de Vehicule est : "<<marque<<endl;
        cout <<"sa vitess maximal est : "<<vitesseMax<<endl;
    }
};
class Voiture : public Vehicule {
private:
    int portes ;
public:
    Voiture (string m, int vt, int p):Vehicule(m, vt){
        Vehicule(m,vt);
        portes = p;
    }
    void afficher() override{
        Vehicule::afficher();
        cout << "nombre des porte : "<<portes<<endl;
    }
};
int main(){
    Voiture v("Toyota", 200, 5);
    v.afficher();
    return 0;
}