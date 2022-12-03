//#define _CRT_SECURE_NO_WARNINGS	
////Scrivere una funzione C che, data una
////stringa A ed una stringa B, calcoli il
////numero di occorrenze della stringa A in B.
////
//// int occorrenze(char A[], char B[]);
//// 
////Ad esempio, se B = "tre tigri contro tre tigri"
////ed A = "tr", deve restituire 3
//
//#include <stdio.h>
//#include <string.h>
//
//typedef enum {
//	false, true // 0 == false, 1 == true
//}Boolean;
//
//
//unsigned int occorrenzeStringa(char* s, char* daTrovare) {
//	
//	unsigned int contatore = 0;
//	int i = 0, j = 0;
//	int temp;
//	
//	Boolean trovato = false;
//
//	while (s[i] != '\0') {//scorre la stringa
//
//		if (s[i] == daTrovare[j]) {//se i-esimo elemento stringa uguali a
//								   //j-esimo elemento stringaDaTrovare
//
//			trovato = true;//imposto trovato come vero
//			temp = i; //salvo in temp l'indice della steinga dove essa è uguale
//			while (daTrovare[j] != '\0' && trovato) {//scorro stringaDaTrovare solo se
//													 //trovato è vero da prima
//
//				if (s[i] == daTrovare[j]) {
//					i++;
//					j++;//guardo se corrispondono anche gli indici successivi
//				}
//				else
//					trovato = false;//altrimenti non l'ho trovato e dunque
//									//non rientra nel ciclo
//			}
//
//			if (trovato)//se con tutti i cicli trovato è rimasto vero,
//						//la stringa è contenuta e quindi aumento di uno il contatore
//				contatore++;
//
//			i = temp;
//			j = 0;
//		}	
//		i++;
//	}
//	return contatore;
//}
//
//int main() {
//
//	char s[51], daTrovare[11];
//	unsigned int contatore;
//	printf("Stringa  [max 50 caratteri]: ");
//	scanf_s("%s", s,50);
//
//	getchar();//mangia il carattere di andare a capo, altrimenti sarebbe andato nella scanf del carattere
//
//	printf("\nStringa da trovare nella precedente  [max 10 caratteri]: ");
//	scanf_s("%s", daTrovare,10);
//
//	
//	contatore = occorrenzeStringa(s, daTrovare);
//	printf("\nCompare esattamente '%u' volte.\n", contatore);
//
//	return 0;
//}
