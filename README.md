Exercice 1:</br>

1-Le résultat affiché par ce programme est : 15 20</br>
2-Passage par valeur : Une copie de l'argument est transmise. La fonction travaille sur cette copie, donc la variable originale dans le programme principal n'est pas affectée.   Passage par référence : L'adresse mémoire (ou un alias) de l'argument original est transmise. La fonction travaille directement sur la variable originale, qui peut donc être modifiée.</br>
3-void modifier(int &a, int &b) { // Les deux paramètres sont maintenant des références</br>
    a += 5; </br>
    b += 10; </br>
}</br>
4-Dans la déclaration des paramètres, l'opérateur & indique que le paramètre est passé par référence. Il permet à la fonction d'accéder et de modifier directement la variable originale transmise lors de l'appel[cite: 3]</br>

Exercice 2- Classes et encapsulation: </br>

<img width="433" height="241" alt="Capture d&#39;écran 2026-10-26 223430" src="https://github.com/user-attachments/assets/37b0792b-b471-453d-a13f-2822a9572af6" /></br>

Exercice 3- Héritages et polimorphysme:</br>

<img width="1530" height="190" alt="Capture d&#39;écran 2026-10-26 224848" src="https://github.com/user-attachments/assets/25109742-d875-4716-b8d9-027569ce6015" /></br>

6-Un destructeur virtual dans la classe mère garantit la destruction correcte des objets dérivés via un pointeur parent, évitant ainsi les fuites de mémoire
