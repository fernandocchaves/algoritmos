#include <stdio.h>
 
int main(){
	char lixo[3];
	int di, df, hi, hf, mi, mf, si, sf, horas, minutos, segundos, dias; 
	 
	scanf("%s %d",lixo, &di);
	scanf("%d : %d : %d", &hi, &mi, &si);
	
	scanf("%s %d", lixo, &df);
	scanf("%d : %d : %d", &hf, &mf, &sf);
	
	dias = df - di;
	
	
	if(hf <= hi){ 
		horas = (24 - hi) + hf;
		dias--;
	}else{
		horas = hf - hi;
	}
	
	if(mf <= mi){ 
		minutos = (60 - mi) + mf;
		horas--;
	}else{
		minutos = mf - mi;
	}
	
	if(sf <= si){ 
		segundos = (60 - si) + sf;
		minutos--;
	}else{
		segundos = sf - si;
	}
	
	if(segundos == 60){
		minutos++;
		segundos = 0;
	}
	
	if(minutos == 60){
		horas++;
		minutos = 0;
	}
	
	if(horas == 24){
		dias++;
		horas = 0;
	}
	
	printf("%d dia(s)\n", dias);
	printf("%d hora(s)\n", horas);
	printf("%d minuto(s)\n", minutos);
	printf("%d segundo(s)\n", segundos);

	return 0;
}
