#include <iostream>
#include <string>

using namespace std;

class Vehicule {
protected:
	string immatriculation;
	string marque;
	double vitesseMax;

public:
	Vehicule(string immat, string marq, double vitMax) :
			immatriculation(immat), marque(marq), vitesseMax(vitMax) {
	}

	virtual void afficherDetails() const = 0;

	virtual ~Vehicule() {
	}
};

class Voiture: public Vehicule {
private:
	int nombrePortes;
	string typeCarburant;

public:
	Voiture(string immat, string marq, double vitMax, int nbPortes,
			string carburant) :
			Vehicule(immat, marq, vitMax), nombrePortes(nbPortes), typeCarburant(
					carburant) {
	}

	void afficherDetails() const override {
		cout << "[Voiture] Immatriculation : " << immatriculation
				<< ", Marque : " << marque << ", Vitesse Max : " << vitesseMax
				<< " km/h" << ", Nombre de portes : " << nombrePortes
				<< ", Carburant : " << typeCarburant << endl;
	}
};

class Camion: public Vehicule {
private:
	double capaciteCharge;
	int nombreEssieux;

public:
	Camion(string immat, string marq, double vitMax, double capCharge,
			int nbEssieux) :
			Vehicule(immat, marq, vitMax), capaciteCharge(capCharge), nombreEssieux(
					nbEssieux) {
	}

	void afficherDetails() const override { //[cite: 4, 5]
		cout << "[Camion] Immatriculation : " << immatriculation
				<< ", Marque : " << marque << ", Vitesse Max : " << vitesseMax
				<< " km/h" << ", Capacité de charge : " << capaciteCharge
				<< " tonnes" << ", Nombre d'essieux : " << nombreEssieux
				<< endl;
	}
};

int main() {
	Vehicule *vehicules[2];
	vehicules[0] = new Voiture("AB-123-CD", "Peugeot", 180.0, 5, "Essence");
	vehicules[1] = new Camion("XY-789-ZT", "Volvo", 120.0, 19.5, 4);

	for (int i = 0; i < 2; ++i) {
		vehicules[i]->afficherDetails();
	}

	for (int i = 0; i < 2; ++i) {
		delete vehicules[i];
	}

	return 0;
}

