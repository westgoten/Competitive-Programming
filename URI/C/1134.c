#include <stdio.h>

int main(void) {
	int alcool = 0, gasolina = 0, diesel = 0, op, terminado = 0;

	while (!terminado) {
		scanf("%d", &op);
		
		switch(op) {
			case 1:
				alcool++;
				break;
			case 2:
				gasolina++;
				break;
			case 3:
				diesel++;
				break;
			case 4:
				terminado = 1;
				break;
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
}