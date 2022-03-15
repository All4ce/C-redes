#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

// Aprendendo a utilizar Socket para verificacao.
// Compilar com "gcc socket.c -o socket"

int main(void){

	int meusocket;
	int conecta;
	int porta;
	char ip[16];

        printf("Digite o IP\n"); 
        scanf("%s",&ip);
        
        printf("Digite a porta\n");
        scanf("%i",&porta);

	printf("Varrendo Socket: %s:%i\n",ip,porta);

	struct sockaddr_in alvo;

	meusocket = socket(AF_INET, SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(porta);
	alvo.sin_addr.s_addr = inet_addr (ip);

	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if(conecta == 0){
		printf("SOCKET VERIFICADO\n === Porta Aberta ===\n");
		close(meusocket);
		close(conecta);

	}else{
		printf("SOCKET VERIFICAD\n === Porta Fechada ===\n");
	}

}
