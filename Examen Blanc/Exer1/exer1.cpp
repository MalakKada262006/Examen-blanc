#include <iostream>
#include <string>

using namespace std;

class CompteBancaire {
private:
	string numero;
	string titulaire;
	double solde;

public:
	CompteBancaire(string num, string tit, double s) {
		numero = num;
		titulaire = tit;
		solde = s;
	}

	void deposer(double montant) {
		if (montant > 0) {
			solde += montant;
		}
	}

	void retirer(double montant) {
		if (montant > 0 && solde >= montant) {
			solde -= montant;
		}
	}

	void afficher() const {
		cout << "Numéro de compte : " << numero << endl;
		cout << "Titulaire : " << titulaire << endl;
		cout << "Solde : " << solde << " €" << endl;
	}
};

int main() {
	CompteBancaire compte1("FR1001", "Alice Dupont", 1500.0);
	CompteBancaire compte2("FR1002", "Jean Martin", 800.0);

	compte1.deposer(300.0);
	compte2.retirer(200.0);

	cout << "=== État du compte 1 ===" << endl;
	compte1.afficher();

	cout << "\n=== État du compte 2 ===" << endl;
	compte2.afficher();

	return 0;
}
