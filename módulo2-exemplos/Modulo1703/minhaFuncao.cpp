

int fatorial(int num){
	
	int fat = 1;
	
	for (int i = 1; i < num; i++){
		   
		   fat = fat * (i + 1);
	}
	
	return fat;	
	
}

int areaQuadrado(int lado){
	
	return lado * lado;
}


int areaRetangulo(int h, int b){
	
	return h * b;
}