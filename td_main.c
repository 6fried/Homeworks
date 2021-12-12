#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void wedding() {
	int age = 0, wedYear = 0;
	char *name = malloc(sizeof(char)) , *comment = malloc(sizeof(char));

	printf("What is your couple name?\n");
	scanf("%s", name);
	printf("when did you get married ?\n");
	while( wedYear <= 0 || wedYear > 2021 ) {
		scanf("%d", &wedYear);
	}

	age = 2021 - wedYear;

	switch(age) {
		case 1:
			comment = "de coton";
			break;
		case 2:
			comment = "de cuir";
			break;
		case 3:
			comment = "de froment";
			break;
		case 4:
			comment = "de cire";
			break;
		case 5:	
			comment = "de bois";
			break;
		case 10:
			comment = "d'etain";
			break;
		case 15:
			comment = "de cristal";
			break;
		case 20:
			comment = "de porcelaine";
			break;
		case 25:
			comment = "d'argent";
			break;
		case 30:
			comment = "de perle";
			break;
		case 35:
			comment = "de palissandre";
			break;
		case 40:
			comment = "d'émeraudes";
			break;
		case 45:
			comment = "de vermeil";
			break;
		case 50:
			comment = "d'or";
			break;
		case 55:
			comment = "d'orchidée";
			break;
		case 60:
			comment = "de diamant";
			break;
		case 65:
			comment = "de palissandre";
			break;
		case 70:
			comment = "de platine";
			break;
		case 75:
			comment = "d'albâtre";
			break;
		case 80:
			comment = "de chêne";
			break;
		default:
			comment = "bitch";
			break;
	}

	if(comment != "bitch")
		printf("Mr. et Mme. %s, vous fetez vos noces de %s !\n", name, comment);
	else
		printf("Felicitations Mr. et Mme. %s pour vos %d ans de mariage.\n", name, age);
}

void hominidAge() {
	int age = 0, cranialVolume = 0;

	printf("Quel est l'age de l'hominide en annees (A) ?\n");
	scanf("%d", &age);
	age /= 1000000;
	printf("Quel est le volume de sa boite cranienne en cm3?\n");
	scanf("%d", &cranialVolume);

	while (cranialVolume <= 0) {
		printf("Vous avez entre des valeurs negatives.\n");
		scanf("%d", &cranialVolume);
	}

	if (age >= -0.035 && cranialVolume == 1350)
		printf("Homo-sapiens!");
	else if (age >= -0.35 && age <= -0.035 && cranialVolume >= 1200 && cranialVolume <= 1750)
		printf("Homme de Neandertal!");
	else if (age >= -1.9 && age <= -0.3 && cranialVolume >= 700 && cranialVolume <= 1300)
		printf("Homo Erectus!");
	else if (age > -2.5 && age <= -1.6 && cranialVolume >= 550 && cranialVolume <= 750)
		printf("Homo Habilis!");
	else if (age >= -4.2 && age <= -2.5 && cranialVolume >= 300 && cranialVolume <= 530)
		printf("Australopiteque!\n");
	else
		printf("Espece d'hominide non encore repertorie dans la base.\n");
}

void someFunc() {
	int n, m;
	printf("Entrez un entier:\n");
	scanf("%d", &n);
	if (n > 100)
		printf("Stack overflow error\n");
	else
		if (n % 2 == 0)
			n = (n+20)/2;
		else {
			m = n- 15;
			if (m > 31)
				printf("Le resultat final est: %d\n", m);
			else
				printf("Le resultat final est: %d\n", n);
		}
}

void suitPrint() {
	int n = 0;
	float x = 0, u = 2;
	printf("Entrez un nombre reel x: ");
	scanf("%f", &x);
	printf("n	U\n0	2\n");
	while (abs(u - sqrt(x)) >= 0.0001) {
		n++;
		u = (u + x/u) / 2;
		printf("%d	%10.4f\n", n, u);
	}
}

void printSuit() {
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d ", j+1);
		}
		printf("\n");
	}
}

void printNumberSuit() {
	int n = 0, j = 0;
	printf("Entrez la valeur maximale n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = j; k < n; k++) {
			printf("%d", k+1);
		} 
		printf("\n");
	}
}

void hourglass() {
	int n = 0;
	printf("Entrez la valeur de n: ");
	scanf("%d", &n);
	while (n % 2 == 0 || n < 0) {
		printf("Veuillez entrer une valeur positive impaire: ");
		scanf("%d", &n);
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*(n-i-1)+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

void losange() {
	int n = 0;
	printf("Entrez la valeur de n: ");
	scanf("%d", &n);
	while (n % 2 == 0 || n < 0) {
		printf("Veuillez entrer une valeur positive impaire: ");
		scanf("%d", &n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*(n-i-1)+1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

void checkerBoard() {
	int n = 0;
	printf("Entrez la valeur de n: ");
	scanf("%d", &n);
	while (n < 0) {
		printf("Veuillez entrer une valeur positive: ");
		scanf("%d", &n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0)
					printf("*");
				else
					printf(" ");
			}
			else {
				if (j % 2 == 0)
					printf(" ");
				else
					printf("*");
			}
		}
		printf("\n");
	}
}

void fibonacci() {
	int n = 0;
	printf("Entrez la valeur m maximale: ");
	scanf("%d", &n);
	while (n < 0) {
		printf("Veuillez entrer une valeur positive: ");
		scanf("%d", &n);
	}

	int a = 0, b = 1, c = 0;
	printf("n F(n)\n");
	printf("0 %d\n", 0);
	printf("1 %d\n", b);
	for (int i = 0; i < n-2; i++) {
		c = a + b;
		printf("%d %d\n", i, c);
		a = b;
		b = c;
	}
}

int combinaison(int n, int k) {
	if(k == 0 || k == n)
		return 1;
	else
		return combinaison(n-1, k-1) + combinaison(n-1, k);
}

void pascalTriangle() {
	for (int n = 0; n <= 20; n++) {
		for (int p = 0; p <= n; p++) {
			printf("%d ", combinaison(n, p));
		}
		printf("\n\n");
	}
}

void fillEditTable() {
	int **table;
	int n = 0, m = 0;
	printf("Entrez la premiere dimension du tableau: ");
	scanf("%d", &n);
	printf("Entrez la deuxieme dimension du tableau: ");
	scanf("%d", &m);

	table = (int **) malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++) {
		table[i] = (int *) malloc(m * sizeof(int));
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Donner s.v.p., l'entier de la ligne %d et de la collone %d : ", i, j);
			scanf("%d", &table[i][j]);
		}
	}

	int l = 0, c = 0;
	printf("Entrez la ligne a modifier: ");
	scanf("%d", &l);
	printf("Entrez la collone a modifier: ");
	scanf("%d", &c);
	printf("Donner s.v.p., l'entier de la ligne %d et de la collone %d : ", l, c);
	scanf("%d", &table[l][c]);
}

void printTable() {
	float **table;
	int n = 0, m = 0;
	printf("Entrez la premiere dimension du tableau: ");
	scanf("%d", &n);
	printf("Entrez la deuxieme dimension du tableau: ");
	scanf("%d", &m);

	table = (float **) malloc(n * sizeof(float *));
	for (int i = 0; i < n; i++) {
		table[i] = (float *) malloc(m * sizeof(float));
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Donner s.v.p., l'entier de la ligne %d et de la collone %d : ", i, j);
			scanf("%f", &table[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%f ", table[i][j]);
		}
		float total = 0;
		for (int j = 0; j < m; j++) {
			total += table[i][j] / m;
		}
		printf("%f\n", total);
	}

	for (int j = 0; j < n; j++) {
		float total = 0;
		for (int i = 0; i < n; i++) {
			total += table[i][j]/n;
		}
		printf("%f ", total);
	}

	float totals = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			totals += table[i][j]/(m*n);
		}
	}
	printf("%f\n", totals);
}

float S(int n) {
	float s = 0;
	for (int i = 0; i < n; i++) {
		s += pow(-1, i)/(2*i+1);
	}
	s *= 4;
	return s;
}

void pi() {
	float pi0 = 0, epsilon = 0;
	int i = 0;
	printf("Entrez la valeur de pi0: ");
	scanf("%f", &pi0);
	printf("Entrez la valeur de epsilon: ");
	scanf("%f", &epsilon);
	for (i = 0; abs(S(i)-pi0) > epsilon; i++);
	printf("La valeur de m pour laquelle |Sm - pi0| < epsilon est %d.\n", i);

	/**
	 * pour pi0 = 3.14 et epsilon = 0.001, la valeur de m pour laquelle |Sm - pi0| < epsilon est: 1
	 * pour pi0 = 3.14159 et epsilon = 0.000001, la valeur de m pour laquelle |Sm - pi0| < epsilon est: 1
	 */

}

int F(int n) {
	int f = 1;
	if (n == 0 || n == 1)
		return 2;
	return F(n-1) + F(n-2);
}

void lapins() {
	int i = 0;
	printf("Le nombre de lapins au bout de 12 mois est %d.\n", F(12));
	for (i = 0; F(i) < 1000000000; i++);
	printf("On atteind le milliard de lapins apres %d mois.\n", i);

	/**
	 * Le nombre de lapins au bout de 12 mois est 466.
	 * On atteind le milliard de lapins apres 43 mois.
	 */
}

void leapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("L'an %d est une annee bissextile.\n", year);
	} else {
		printf("L'an %d n'est pas une annee bissextile.\n", year);
	}
}

void tableManage() {
	int *table, n = 0;
	printf("Entrez la taille du tableau: ");
	scanf("%d", &n);
	table = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Donner s.v.p., l'element d'indice %d du tableau: ", i);
		scanf("%d", &table[i]);
	}
	printf("Voici le tableau: \n");
	for (int i = 0; i < n; i++) {
		printf("tab[%d] = %d\n", i,  table[i]);
	}
	printf("Autre affichage: \n");
	printf("tab = [");
	for (int i = 0; i < n; i++) {
		printf("%d", table[i]);
		if (i != n-1) {
			printf(", ");
		}
	}
	printf("]\n");

	int choice = -1;
	printf("Choisissez maintenant l'operation que vous voulez faire :\n");
	printf(" (0) Multiplication des elements du tableau \n");
	printf(" (1) Addition des elements du tableau \n");
	printf(" (Autre chiffre) operation indeterminee \n");
	scanf("%d", &choice);
	while (choice != 0 && choice != 1) {
		printf("L'operation n'est pas prise en compte.\n");
		printf("Choisissez maintenant l'operation que vous voulez faire :\n");
		printf(" (0) Multiplication des elements du tableau \n");
		printf(" (1) Addition des elements du tableau \n");
		printf(" (Autre chiffre) operation indeterminee \n");
		scanf("%d", &choice);
	}
	switch (choice) {
		case 0:
			printf("Le resultat de la multiplication est %d.\n", table[0] * table[1] * table[2]);
			break;
		case 1:
			printf("Le resultat de l'addition est %d.\n", table[0] + table[1] + table[2]);
			break;
		default:
			break;
	}
}

int main(int argc, char **argv)
{
	printf("Exercice 1\n");		
	wedding();
	printf("\n");

	printf("Exercice 2\n");
	hominidAge();
	printf("\n");

	printf("Exercice 4\n");
	someFunc();
	printf("\n");

	printf("Exercice 10\n");
	suitPrint();
	printf("\n");

	printf("Exercice 11\n");
	printSuit();
	printf("\n");

	printf("Exercice 12\n");
	printNumberSuit();
	printf("\n");

	printf("Exercice 13\n");
	hourglass();
	printf("\n");

	printf("Exercice 14\n");
	losange();
	printf("\n");

	printf("Exercice 15\n");
	checkerBoard();
	printf("\n");

	printf("Exercice 24\n");
	fibonacci();
	printf("\n");

	printf("Exercice 26\n");
	pascalTriangle();
	printf("\n");

	printf("Exercice 28\n");
	fillEditTable();
	printf("\n");

	printf("Exercice 37\n");
	printTable();
	printf("\n");

	printf("Exercice 38\n");
	pi();
	printf("\n");

	printf("Exercice 40\n");
	lapins();
	printf("\n");

	printf("Exercice 41\n");
	leapYear(1000);
	leapYear(2016);
	printf("\n");

	printf("Exercice 42\n");
	tableManage();
	printf("\n");

	printf("C'est la fin. Pas si compliqué que ça finalement :)\n");
	return 0;
}
