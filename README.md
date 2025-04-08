# Programa de Verificação de Portas TCP

Este repositório contém um programa em C chamado `socket.c` que verifica se uma porta TCP específica está aberta ou fechada em um determinado endereço IP.

## Como Funciona

O programa `socket.c` utiliza sockets para se conectar a uma porta TCP especificada em um endereço IP. Ele tenta estabelecer uma conexão TCP e determina se a porta está aberta ou fechada com base no sucesso ou falha da tentativa de conexão.

## Compilação

Para compilar o programa, você precisará de um compilador C instalado no seu sistema. Execute o seguinte comando no terminal para compilar o arquivo `socket.c`:

```sh
gcc sockets.c -o socket 
```

## Uso

Para executar o programa e verificar uma porta TCP, use o seguinte comando:

```sh
./socket
```

- `<endereço_ip>`: O endereço IP do host está dentro do Script.
- `<porta>`: O número da porta TCP que você deseja verificar está dentro do Script.



## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e pull requests.

## Licença

Este projeto está licenciado sob a licença MIT. Veja o arquivo [LICENSE](./LICENSE) para mais detalhes.

## Autor

Ricardo Pzzn
