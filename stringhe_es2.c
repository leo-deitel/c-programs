//#define _CRT_SECURE_NO_WARNINGS
//
//
//
//
////Al fine di stampare degli indirizzi su delle buste, è
////necessario comporre la prima parte dell’indirizzo
////come “Cognome Nome” o “Cognome N.”
////
//// Si realizzi una funzione che riceva come parametri :
////– il cognome
////– il nome
////– una stringa di destinazione, che conterrà appunto
////la prima parte dell’indirizzo(“Cognome Nome”, o
////	“Cognome N.”)
////	– la lunghezza massima della stringa di
////	destinazione
//
//
////La funzione deve copiare / concatenare nell’indirizzo il
////cognome seguito dal nome, avendo cura di rispettare le
////dimensioni della stringa indirizzo.Qualora la stringa
////indirizzo sia troppo piccola per contenere entrambi, la
////funzione provi a comporre la stringa come “Cognome N.”
//// 
//// Qualora neanche ciò sia possibile, la funzione ritorni un
////codice di errore opportuno(ad esempio - 1)
////
//// Se non si verifica nessun errore la funzione deve
////restituire un codice che indichi il successo.
//
//
////Si realizzi una funzione che riceva come parametri :
////– il cognome
////– il nome
////– una stringa che conterrà la prima parte dell’indirizzo
////– la lunghezza massima della stringa indirizzo
////
////esempio:
////		int indirizzo(char Cognome[], char Nome[], char Indirizzo[], int dim);
//
//#include <string.h>
//#include <stdio.h>
//
//#define TOO_LONG -1
//#define COMPRESSED_RESULT -2
//#define SUCCESS 0
//#define MAX_INDIRIZZO 17
//
//int fIndirizzo(char cognome[], char nome[], char indirizzo[], int dimIndirizzo) {
//
//	int result, neededChars, i;
//
//	strcpy(indirizzo, "");//inizializzazione
//	neededChars = strlen(cognome) + 1 + strlen(nome);
//
//	if (neededChars < dimIndirizzo)//se i caratteri necessari sono minori della lunghezza 
//								   //massima della stringa di arrivo
//		result = SUCCESS;
//	else {
//		neededChars = strlen(cognome) + 3;//lunghezza cognome + spazio + lettera + 'punto'
//
//		if (neededChars < dimIndirizzo)//se ora i caratteri necessari sono minori della
//									   //lunghezza massima della stringa di arrivo
//			result = COMPRESSED_RESULT;
//
//		else//altrimenti hai messo troppi caratteri
//			result = TOO_LONG;
//	}
//
//
//	if (result == SUCCESS || result == COMPRESSED_RESULT) {
//
//		strcpy(indirizzo, cognome);//copio cognome in indirizzo
//		strcat(indirizzo, " ");//copio lo spazio separatore in indirizzo
//
//		if (result == SUCCESS)//se ho abbastanza spazio incollo il nome intero
//			strcat(indirizzo, nome);
//
//		else if (result == COMPRESSED_RESULT) {//altrimenti incollo la prima lettera del nome,
//											   //un punto e il fine stringa
//
//			i = strlen(indirizzo);
//			*(indirizzo+i)= *nome;
//			*(indirizzo+i+1) = '.';
//			*(indirizzo+i+2) = '\0';
//		}
//
//		return result;
//	}
//
//
//}
//
//void errori(int result) {
//
//	switch (result)
//	{
//	case COMPRESSED_RESULT:
//		printf("Risultato compresso."); break;
//	case TOO_LONG:
//		printf("Hai inserito troppi caratteri."); break;
//	default:
//		printf("Errore sconosciuto."); break;
//	}
//	return;
//}
//
//int main() {
//
//	char nome[15], cognome[15], indirizzo[MAX_INDIRIZZO];
//	int result;
//	printf("Inserisci il nome: ");
//	scanf_s("%s", nome, 10);
//	
//	printf("\nInserisci il cognome: ");
//	scanf_s("%s", cognome, 10);
//
//	result = fIndirizzo(cognome, nome, indirizzo, MAX_INDIRIZZO - 1);
//		
//	if (result == SUCCESS || result == COMPRESSED_RESULT) {
//		printf("Indirizzo: '%s'\n", indirizzo);
//		printf("Lunghezza indirizzo: '%d'\n", (int)strlen(indirizzo));
//
//	}
//	else {
//		printf("\n");
//		errori(result);
//		printf("\n");
//	}
//
//
//
//	return 0;
//}