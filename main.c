//Main
//Valores para mostrar en cada display
int Display[]={1,2,3,4];
bool EnMenus;
bool Blink;

void Main (void){
	//INICIALIZO VARIABLES
	EnMenus=false; //inicializo para indicar que no estoy en los menus y muestre la hora
	Blink= false;	// inicializo indicador de parpadeo



	while (true){ //LAZO PRINCIPAL
		
		//Espero teclado para acceso a menues
	 	TeclaPress=EsperoTeclado();

		switch (TeclaPress){ // Menu Principal
			
			case TECLA_SET:  //Menu Principal

					//Actualizo valores del display
					Display[1]=31;
					Display[2]=31;
					Display[3]=31;
					Display[4]=31;

					//Espero la proxima tecla
					TeclaPress= EsperoTeclado();
					
					switch (TeclaPress){
						case TECLA_SET: //SubMenu xxx


							break;

						case TECLA_PROG:


							break;
					}

				break;

			case TECLA_PROG: //Menu de acceso rapido

				break;

			default case:

				break;

		}//Fin del Switch Menu Principal
	}//Fin del While principal
}


int EsperoTeclado (void){
	
	int tecla;

	return tecla;

}