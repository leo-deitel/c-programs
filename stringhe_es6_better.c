////Sono date due stringhe, una denominata msg e una
////denominata secret(non più lunga di msg) di caratteri tutti
////minuscoli
////
//// Si vuole sapere se tutti i caratteri di secret sono contenuti
////nello stesso ordine(ma eventualmente intervallati da altri
////	caratteri) nella stringa msg
////	
////	In caso positivo, il programma deve restituire una copia
////	del msg originale, dove però ad ogni lettera riconosciuta
////	come facente parte di secret viene sostituita la lettera
////	maiuscola
////	• Es : msg = “ma che bel castello”, secret = “cestello”
////	• Risultato : SI e stringa “ma ChE bel caSTELLO”
//
//
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//#define DIM_SECRET 50
//#define DIM_MSG 51
//
//typedef enum {
//	false, true
//}Boolean;
//
//Boolean identifica(char* msg, char* secret, char* resultArray) {
//	int counter=0;
//	size_t i = 0,
//		   j = 0;
//	Boolean result;
//	int elementiSecret = strlen(secret);
//	while (msg[i] != '\0' && secret[j] != '\0'){
//		if (msg[i] == secret[j]) {
//			j++;
//			resultArray[i] = msg[i] - 'a' + 'A'; //msg[i] = toupper(msg[i])
//			i++;
//		}
//		else {
//			resultArray[i] = msg[i];
//			i++;
//		}
//	}
//
//	while (msg[i] != '\0') {//scorre elementi rimasti di msg e li mette in result
//		resultArray[i] = msg[i];
//		i++;
//	}
//	resultArray[i] = '\0';
//	
//	for (j = 0; resultArray[j] != '\0'; j++){//counter e il numero elementi a cui ho fatto "toupper"
//		if (resultArray[j] != msg[j])
//			counter++;
//	}
//
//	if (elementiSecret==counter)//se numero elementi di secret e uguale al numero di "toupper" eseguiti, allora il messaggio e' contenuto
//		result = true;
//	else
//		result = false;
//
//	return result;
//
//}
//
//Boolean haveZero(char* v) {//function to check if an array have a 0-character inside (uso anche la typedef Boolean)
//	int i, j;
//	Boolean trovato=false;
//	
//	for (i = 0; v[i] != '\0' && !trovato; i++)
//		if (v[i] == '0')
//			trovato = true;
//
//	return trovato;
//}
//
//
//int main() {
//	char msg[DIM_MSG], new[DIM_MSG];
//	char secret[DIM_SECRET];
//	
//	printf("Programma per controllare se e' presente un codice segreto in una stringa,\n"
//		"e in tal caso mettere in maiuscolo i caratteri."
//		"\nInserire '0' per terminare.\n");
//	do {
//		printf("Stringa (max 50):");
//		scanf_s("%s", msg, 50);
//
//		if (!haveZero(msg)) {
//			printf("Messaggio segreto (max 49):");
//			scanf_s("%s", secret, 49);
//
//			if (!haveZero(secret)) {
//				if (identifica(msg, secret, new))
//					printf("%s", new);
//
//				else
//					printf("Il messaggio non e' contenuto.");
//
//				printf("\n");
//			}
//		}
//	} while (!haveZero(msg) && !haveZero(secret));
//
//	printf("\nCiao!");
//	return 0;
//}
