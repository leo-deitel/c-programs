////Scrivere una procedura ricorsiva :
////
//// void printchar(char stringa[])
////
//// che stampi, ricorsivamente, tutti i caratteri contenuti in
////stringa, un carattere per linea, assumendo che stringasia ben formata.
//
//
//#include <string.h>
//#include <stdio.h>
//
//void stampaStringaRic(char* s) {
//
//	if (s[0] == '\0')
//		return;
//
//	else
//	{
//		printf("%c\n", s[0]);//stampa il primo carattere dell'array
//		stampaStringaRic(&(s[1]));
//		
//		//richiama la stringa che chiama il primo
//		//carattere dell'array che pero sara l'indice dopo
//	}
//
//}
//
//int main() {
//
//	char s[11];
//
//	printf("Stringa max 10:  ");
//	scanf_s("%s", s, 11);
//
//	stampaStringaRic(s);
//	return 0;
//}