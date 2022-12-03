//#define _CRT_SECURE_NO_WARNINGS
////Scrivere una funzione che date tre stringhe A, B
////e C concateni in C il contenuto di A e B e
////restituisca il numero di caratteri copiati in C
////
////fai:  int conc(char A[], char B[], char C[]);
//
//
//
//
//
//#include <stdio.h>
//#include <string.h>
//
//#define DIM 30
//
//int myConc(char* A, char* B, char* C) { //uguale a A[], B[], C[]
//
//	strcpy_s(C, 14,A);
//	strcpy_s( &C[strlen(C)],14, B);
//
//	return strlen(C);
//}
//
//int main() {
//	char s1[DIM], s2[DIM], s3[DIM];
//	printf("Inserisci stringa: ");
//	scanf_s("%s", s1, 10);
//
//	printf("\nInserisci stringa: ");
//	scanf_s("%s", s2, 10);
//
//	int usedChar = myConc(s1, s2, s3);
//	printf("\nLa stringa che concatena le due e': '%s' ,ed e' formata "
//		"da % d caratteri", s3, usedChar);
//
//	return 0;
//}
//
//
