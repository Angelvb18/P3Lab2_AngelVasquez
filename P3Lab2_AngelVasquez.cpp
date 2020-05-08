#include <iostream>
#include  <stdlib.h>
#include  <time.h>
using std::cout ;
using std::endl;
using std::cin;
bool esta(int *, int , int );
void E1();
void E2();
void E3();

void menu();
int main(){
   menu();
   return 0;
}
void menu(){
	int op =0 ;
    do{
    	cout << "1.Ejercicio 1 \n2.Ejercicio 2 \n3.Ejercicio 3\nIngrese un numero :";
    	cin >> op;
    	switch(op){
		     case 1:{
		     	 E1();
				break;
			 }
		     	
		    case 2:{
		    	E2();
				break;
			}
		     	
		    case 3:{
		    	E3();
				break;
			}
		    default:{
		    	cout << "Ingreso una opcion no valida" << endl;
				break;
			}
		    
		}
	}while(op != 4 );
}

void E1(){
	
}
void E2(){
}
void E3(){
	int tamano = 0 , po,J1 = 0 ,  J2 = 0 , ron = 1;
	cout << "**Bienvenido**\n";
	do{
		cout << "->Ingrese un numero par";
		cin >> tamano;
		
	}while (tamano %2 != 0);
	
    int * arreglo = new  int [tamano];
    int * arreglo2 = new  int [tamano];
	    srand(time (NULL));
    for ( size_t i = 0 ; i <tamano; ++ i) {
	    arreglo [i] = -50 + rand ()% ( 50 );
	    arreglo2 [i] = -1;
	}
	cout <<"\n\n¡A JUGAR!\n\n";
	for(int i = 0 ; i < tamano ; ++i){
	    if(i%2 == 0){
	       do{
	       	    cout << "J1 escoge:";
	    		cin >> po;
	    		
		   }while(esta(arreglo2,po, tamano) == true);
		     cout << "Obtuvo: " << arreglo[po] << endl;
	    	J1+=arreglo[po];
	    	arreglo2[po] = po;
		}else{
		    do{
	       	    cout << "J2 escoge:";
	    		cin >> po;
	    		
		   }while(esta(arreglo2,po, tamano) == true);
		   cout << "Obtuvo: " << arreglo[po] << "\n\n";
		   J2+=arreglo[po];
		   arreglo2[po] = po;
		   if(tamano/2 == ron){
		      cout << "FINAL"<<" - [PTS J1: "<< J1 << "<-> PTS J2:"<< J2 <<"\n\n";
			  if(J1 > J2 ){
			  	 cout << "GANA J1\n\n";
			  }else{
			  	if(J2 > J1){
			  		cout << "GANA J2\n\n";
				}else{
					cout << "Empate\n\n";
				}
			  }     
		   }else{
				cout << "Ronda"<<ron<<" - [PTS J1: "<< J1 << "<-> PTS J2:"<< J2 <<"\n\n";	   
		   }
		   ron++;
		   
		}
	}
	cout << "Arreglo usado:[";
    for(size_t i =0 ; i< tamano ; ++i)
	{
		if(i == tamano-1){
			cout <<arreglo[i] << "]\n";
		}else{
			cout<<arreglo[i]<< ",";
		}
	         
    }
    
	      
}
bool esta(int * a , int b  , int t ){
	int cont = 0;
	for (int i = 0 ; i < t ; ++i){
	    if(a[i] == b){
		    cont++;
		}
	}
	if(cont > 0){
	   return true;
	}
	else{
		return false;
	}
}





