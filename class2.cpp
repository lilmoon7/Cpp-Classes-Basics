
#include <iostream>
#include <string>
using namespace std;

class CompteBancaire{
private:
    string titulaire;
    float solde;
public:
    static int compteur;
    CompteBancaire(string t, int s) {
        compteur ++;
        titulaire = t;
        solde = s;
        cout <<endl;
        cout<<"le compte creer"<<endl;
        cout<<"titulaire est : "<<titulaire<<endl;
        cout<<"le solde initial est : "<<solde<<endl;
    }

    static int afficherCompteur(){
        return compteur;
    }

    ~CompteBancaire(){
        compteur--;
    }

    void deposer(float montant){
        solde = solde +montant;
        cout<<"vous avez ajouter : "<<montant<<"MAD"<<endl;
    }


    void retirer(float montant){
        if(montant>solde){
            cout<<"le montant est invalide "<<endl;
        }else{
            solde = solde - montant;
            cout<<"vous avez retirer : "<<montant<<"MAD"<<endl;
        }

    }

    void afficher() {
        cout<<"le solde est : "<<solde<<endl;
    }


};
int CompteBancaire::compteur = 0;

int main (){
    CompteBancaire c1("niema",10000);
    c1.deposer(3000);
    c1.retirer(0);
    c1.afficher();

    cout << "Nombre de comptes : " << CompteBancaire::afficherCompteur() << endl<<endl;

    CompteBancaire c2("lisa",1000);
    c2.deposer(3000);
    c2.retirer(500);
    c2.afficher();
    cout << "Nombre de comptes : " << CompteBancaire::afficherCompteur() << endl<<endl;

    return 0;
}
