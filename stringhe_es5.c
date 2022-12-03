//#define _CRT_SECURE_NO_WARNINGS
////Stampa di numeri reali con “dettaglio” a piacimento
////
////Si realizzi una funzione stampaDettagli(…) che riceva
////come parametri un numero reale e due interi(che
////	indicano, rispettivamente, il numero di cifre per la
////	parte intera e per la parte decimale)
////	
//// La funzione stampi a video il numero secondo le
////	indicazioni ricevute come parametri
////	Come ? Tramite una opportuna stringa di formato(es.
////		“ % 6.2f” significa stampare un float con 6 cifre per la parte
////		intera e due per la parte decimale)
////	La funzione componga dinamicamente una opportuna
////	stringa di formato, utilizzando la funzione sprintf(…) ed
////	una stringa allocata staticamente(si controlli di non
////		eccedere la dimensione della stringa già allocata)
//
//#include <string.h>
//#include <math.h>
//#include <stdio.h>
//
//#define RESULT_TYPE int
//#define MAX_FORMATO 101
//#define SUCCESS 0
//#define TOO_MANY_CHARS -1
//
//
//RESULT_TYPE stampaDettagli(double reale, int parteIntera, int parteDecimale) {
//
//	char strFormato[MAX_FORMATO];
//	int result;
//	int nCarInt, nCarDec;
//	nCarInt = ((int)log10(parteIntera)) + 1;
//	nCarDec = ((int)log10(parteDecimale)) + 1;
//
//
//	if ((nCarInt + nCarDec + 6) >= MAX_FORMATO) {
//		result = TOO_MANY_CHARS;
//	}
//
//	else
//	{
//		sprintf(strFormato, "%%%d.%df\n", parteIntera, parteDecimale);
//		printf("\nIl formato e': %s", strFormato);
//
//		printf("Il tuo numero e': ");
//		printf(strFormato, reale);
//		result = SUCCESS;
//
//	}
//
//	return result;
//
//}
//
//void handleError(RESULT_TYPE result, char* str)
//{
//	switch (result)
//	{
//	case SUCCESS:
//		strcpy(str, "");
//		break;
//	case TOO_MANY_CHARS:
//		strcpy(str, "Stringa di formato con troppi caratteri\n"); break;
//	default:
//		strcpy(str, "Risultato non gestito.\n");
//	}
//}
//
//int main() {
//	
//	RESULT_TYPE result;
//	char resultStr[MAX_FORMATO];
//	double reale;
//	int parteIntera, parteDecimale;
//	printf("Numero reale: ");
//	scanf_s("%lf", &reale);
//		
//	printf("Parte Intera: ");
//	scanf_s("%d", &parteIntera);
//		
//	printf("Parte Decimale: ");
//	scanf_s("%d", &parteDecimale);
//	
//	result = stampaDettagli(reale, parteIntera, parteDecimale);
//	if (result != SUCCESS) {
//		handleError(result, resultStr);
//		printf("errore %s\n", resultStr);
//	}
//	return 0;
//}
