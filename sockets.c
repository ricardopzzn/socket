#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){


	if (argc < 2) {
		printf("Uso: %s <IP> \n", argv[0]);
		return 1;

	}

	int meusocket;
	int conecta;

	int porta;
	int inicio = 0;
	int final = 65535;
	char *destino = argv[1];


	struct sockaddr_in alvo;


        for(porta=inicio;porta<final;porta++){
		meusocket = socket(AF_INET, SOCK_STREAM, 0);

		alvo.sin_family = AF_INET;
		alvo.sin_port = htons(porta);
		alvo.sin_addr.s_addr = inet_addr(destino);

		conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

		if(conecta == 0){

			printf("Porta %d - status [ABERTA] \n",porta);
			close(meusocket);
			close(conecta);

		} else {
			close(meusocket);


		}
	}

	return 0;

}
