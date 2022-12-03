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
//void identifica(char* msg, char* secret) {
//
//	size_t i = 0,
//		   j = 0;
//
//	int result;
//
//	while (msg[i] != '\0' && secret[j] != '\0')
//	{	
//		if (msg[i] == secret[j]) {
//			j++;
//			msg[i] = msg[i] - 'a' + 'A'; //msg[i] = toupper(msg[i])
//			i++;
//		}
//		else {
//			i++;
//		}
//	}
//
//
//}
//int main() {
//	char msg[DIM_MSG];
//	char secret[DIM_SECRET];
//
//	printf("Programma per controllare se e' presente un codice segreto in una stringa\n");
//	
//	printf("Stringa (max 50):" );
//	scanf_s("%s", msg, 50);
//	
//	printf("Messaggio segreto (max 49):" );
//	scanf_s("%s", secret, 49);
//
//
//	identifica(msg, secret);
//	printf("%s", msg);
//
//	return 0;
//}
