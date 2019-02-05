#include <stdio.h>

int main() {
	int hora_i, min_i, hora_f, min_f, dur_h, dur_m;
	
	scanf("%d%d%d%d", &hora_i, &min_i, &hora_f, &min_f);
	
	if (hora_i == hora_f && min_i == min_f) {
		dur_h = 24;
		dur_m = 0;
	} else {
		if (hora_f < hora_i) {
			dur_h = 24 - hora_i + hora_f;
			if (min_f < min_i) {
				dur_h--;
				dur_m = 60 - min_i + min_f;
			} else
				dur_m = min_f - min_i;
		} else {
			dur_h = hora_f - hora_i;
			if (min_f < min_i) {
				dur_h--;
				dur_m = 60 - min_i + min_f;
				if (dur_h < 0)
					dur_h = 23;
			} else
				dur_m = min_f - min_i;
		}
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur_h, dur_m);
	
	return 0;
}