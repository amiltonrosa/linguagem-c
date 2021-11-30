/* Programa de jogo de adivinhação */
#include <stdio.h>

/* #define NUMERO_DE_TENTATIVAS 3 */

/* função main inicia execução do programa */
int main( void ) {

	printf( "***********************************\n" );
	printf( "* Bem-vindo ao Jogo de Advinhação *\n" );
	printf( "***********************************\n" );
	
	/* definições das variáveis */
	int numerosecreto = 42;
	int chute;
	int ganhou = 0;
	int tentativas = 1;
	int pontos = 1000;

	while( !ganhou ) {

		printf( "\nQual é o seu %dº chute? ", tentativas );
		scanf( "%d", &chute );

		if( chute < 0 ) {
			printf( "Você não pode chutar números negativos.\n" );
			continue;
		} /* fim do if */

		printf( "Você chutou o número %d.\n", chute );
		printf( "Seu %dº chute foi %d\n", tentativas, chute );

		int acertou = chute == numerosecreto;
		int maior = chute > numerosecreto;

		// printf("Acertou: %d\n", acertou );

		if( acertou ) {
			printf( "Parabéns! Você acertou!\n" );
			ganhou = 1;
		} else if( maior ) {
			printf( "Seu chute foi maior do que o número secreto!\n" );
		} else {
			printf( "Seu chute foi menor do que o número secreto!\n" );
		} /* fim do else */

		tentativas++;

	} /* fim do while */

	printf( "Fim do jogo!\n" );

	return 0; /* indica que o programa concluíu com sucesso */

} /* fim da função main */
