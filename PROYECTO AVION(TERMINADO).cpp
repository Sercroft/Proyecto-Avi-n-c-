#include <iostream>
#include <locale> //libreria para usar caracteres especiales del español
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int n=-1, a=0, b=0, m=-1; float cant=0; 
struct sillas
{
	string sillaE[2][4], silla[7][6];
}S;
struct pasajeros
{
	string cedula, nombre; int columna, fila, estado=-1;
}P[50];

void reserva()
{
	int j=0, op, k=0, columna, fila;
	system("cls");
	b++;
	for(int i=n+1; i<=n+1; i++)
	{
		cout<<"DIGITE EL NOMBRE DEL PASAJERO "<<b<<": ";
		cin>>P[b-1].nombre;
		cout<<"DIGITE LA CÉDULA DEL PASAJERO "<<b<<": ";
		cin>>P[b-1].cedula;
	}
	cout<<"\n¿QUÉ SILLA DESEA?\n\n";
	cout<<"1. SILLA EJECUTIVA\n";
	cout<<"2. SILLA ECONÓMICA\n\n";
	cout<<"DIGITE SU OPCIÓN: ";
	cin>>op;cout<<"\n\n";
	switch(op)
	{
		case 1:
		P[b-1].estado=1;
		cout<<"\t\t\t\t\LAS SILLAS QUE TIENEN EL SÍMBOLO ( § ), SIGNIFICAN QUE ESTÁN RESERVADAS "<<endl<<endl;
		cout<<"\t\t\t\t\LAS SILLAS QUE TIENEN EL SÍMBOLO ( D ), SIGNIFICAN QUE ESTÁN LIBRES "<<endl<<endl;
		cout<<"SILLAS EJECUTIVAS DISPONIBLES:"<<"\n";
		if(a==0)
		{
			for(int y=1; y<5; y++)
			{
				cout<<"     "<<y;
			}
				cout<<endl<<"  -------------------------";
				cout<<endl; 
			for (int i=0 ;i<2; i++)
			{
				a++;
				if(i<3)
				{
					cout<<" "<<i+1<<"¦";
				}
				else
				{
					cout<<i+1<<"¦";
				}
				k = k + 1;
				for (int j=0; j<4;j++)
				{
					{
						if(i==j or i!=j)
						{
							S.sillaE[i][j]="  D";
							cout<<S.sillaE[i][j];	
							if(k<=2)
							{
								cout<<k<<"  ";
							}
							else
							{
								if(k>=3)
								{
									cout<<k;
								}
							}	
						}	
				    }
				}
				cout<<endl;
			}
		}
		else
		{
			for(int y=1; y<5; y++)
			{
				cout<<"     "<<y;
			}
				cout<<endl<<"  -------------------------";
				cout<<endl; 
			for (int i=0 ;i<2; i++)
			{
				a++;
				if(i<3)
				{
					cout<<" "<<i+1<<"¦";
				}
				else
				{
					cout<<i+1<<"¦";
				}
				k = k + 1;
				for (int j=0; j<4;j++)
				{
					{
						if(i==j or i!=j)
						{
							if(S.sillaE[i][j]=="§")
							{
						    	cout<<"  ";
							}
							cout<<S.sillaE[i][j]; 
							if(k<=2)
							{
								cout<<k<<"  ";
							}
							else
							{
								if(k>=3)
								{
									cout<<k;
								}
							}	
						}	
				    }
				}
				cout<<endl;
			}
		}
		k=0;
			cout<<"DIGITE LA COLUMNA: ";
			cin>>P[b-1].columna;
			columna = P[b-1].columna;
			cout<<"DIGITE LA FILA: ";
			cin>>P[b-1].fila;
			fila = P[b-1].fila;
		if(columna>4 or fila>2)
		{
				cout<<"LA SILLA NO EXISTE. POR FAVOR, INTENTE DE NUEVO.\n";
		}else
		{
			for(int i=fila-1;i<fila;i++)
			{
				for(int j=columna-1; j<columna; j++)
				{
					if(S.sillaE[i][j] == "§")
					{
						cout<<"\n\n LA SILLA ESTÁ OCUPADA."<<endl;
						P[b-1].nombre = "";
						P[b-1].cedula = "";
						b = b-1;
					}else
					{
						S.sillaE[i][j]="§";
						cout<<"\n\n SILLA ASIGNADA\n";
						cant = cant +1;
					}
				}
			}
		}
		for(int y=1; y<5; y++)
			{
				cout<<"     "<<y;
			}
				cout<<endl<<"  -------------------------";
				cout<<endl; 
			for (int i=0 ;i<2; i++)
			{
				a++;
				if(i<3)
				{
					cout<<" "<<i+1<<"¦";
				}
				else
				{
					cout<<i+1<<"¦";
				}
				k = k + 1;
				for (int j=0; j<4;j++)
				{
					{
						if(i==j or i!=j)
						{
							if(S.sillaE[i][j] == "§")
							{
								cout<<"  ";
							}
							cout<<S.sillaE[i][j];
							if(k<=2)
							{
								cout<<k<<"  ";
							}	
						}	
				    }
				}
				cout<<endl;
			}
			system("pause");
			system("cls");
	break;
	
	case 2:
		P[b-1].estado=2; 
		cout<<"\t\t\t\t\LAS SILLAS QUE TIENEN EL SÍMBOLO ( § ), SIGNIFICAN QUE ESTÁN RESERVADAS "<<endl<<endl;
		cout<<"\t\t\t\t\LAS SILLAS QUE TIENEN EL SÍMBOLO ( D ), SIGNIFICAN QUE ESTÁN LIBRES"<<endl<<endl;
		cout<<"SILLAS ECONÓMICAS DISPONIBLES:"<<"\n";
		if(a==0)
		{
			for(int y=1; y<7; y++)
			{
				cout<<"     "<<y;
			}
				cout<<endl<<"  -----------------------------------";
				cout<<endl; 
			for (int i=0 ;i<7; i++)
			{
				a++;
				cout<<i+1<<"¦";
				k = k + 1;
				for (int j=0; j<6;j++)
				{
					{
						if(i==j or i!=j)
						{
							S.silla[i][j]="  D";
							if(j>9)
							{ 
								cout<<" "<<S.silla[i][j];	
							}
							else
							{
								cout<<S.silla[i][j];	
							}
								cout<<k<<"  ";
						}	
				    }
				}
				cout<<endl;
			}
		}
		else
		{
			for(int y=1; y<7; y++)
			{
				cout<<"     "<<y;
			}
				cout<<endl<<"  -----------------------------------";
				cout<<endl; 
			for (int i=0 ;i<7; i++)
			{
				a++;
					cout<<i+1<<"¦";
				
				k = k + 1;
				for (int j=0; j<6;j++)
				{
					{
						if(i==j or i!=j)
						{
							if(S.silla[i][j]=="§")
							{
						    	cout<<"  ";
							}
							cout<<S.silla[i][j]; 
							cout<<k<<"  ";
						}	
				    }
				}
				cout<<endl;
			}
		}
		k=0;
			cout<<"DIGITE LA COLUMNA: ";
			cin>>P[b-1].columna;
			columna = P[b-1].columna;
			cout<<"DIGITE LA FILA: ";
			cin>>P[b-1].fila;
			fila = P[b-1].fila;
		if(columna>6 or fila>7)
		{
				cout<<"LA SILLA NO EXISTE. POR FAVOR, INTENTE DE NUEVO.\n";
		}else
		{
			cout<<"\n\n SILLA ASIGNADA\n";
			for(int i=fila-1;i<fila;i++)
			{
				for(int j=columna-1; j<columna;j++)
				{
					if(S.silla[i][j] == "§")
					{
						cout<<"\n\n LA SILLA ESTÁ OCUPADA."<<endl;
						P[b-1].nombre = "";
						P[b-1].cedula = "";
						b = b-1;
					}else
					{
						S.silla[i][j]="§";
						cout<<"\n\n SILLA ASIGNADA\n";
						cant = cant +1;
					}
				}
			}
		}
			for(int y=1; y<7; y++)
			{
				cout<<"     "<<y;
			}
			cout<<endl<<"  -----------------------------------";
			cout<<endl; 
			for (int i=0 ;i<7; i++)
			{
				a++;
				cout<<i+1<<"¦";
				k = k + 1;
				for (int j=0; j<6;j++)
				{
					{
						if(i==j or i!=j)
						{
							if(S.silla[i][j] == "§")
							{
								cout<<"  ";
							}	
							cout<<S.silla[i][j];
							cout<<k<<"  ";
						}	
				    }
				}
				cout<<endl;
			}
			system("pause");
			system("cls");
	break;
	}
}

void mostar()
{
	for(int i=0; i<50; i++)
	{
		if(P[i].nombre.empty() and P[i].cedula.empty()) //empty() es una función booleand que se usa en éste if para verificar si el arreglo está vacío.
		{
			cout<<"PASAJERO "<<i+1<<endl<<endl;
			cout<<"NOMBRE: NO HAY PASAJERO."<<endl;
			cout<<"CÉDULA: "<<"NO HAY CÉDULA."<<endl;
			cout<<"CLASE DE SILLA: NO HAY INFORMACIÓN."<<endl;
			cout<<"-----------------------------------------------------"<<endl;
			
		}else
		{
			cout<<"PASAJERO "<<i+1<<endl<<endl;
			cout<<"NOMBRE: "<<P[i].nombre<<endl;
			cout<<"CÉDULA: "<<P[i].cedula<<endl;
			if(P[i].estado == -1)
			{
				cout<<"CLASE DE SILLA: NO HAY INFORMACIÓN."<<endl;
			}
			else
			{
				if(P[i].estado == 1)
				{
					cout<<"CLASE DE SILLA: EJECUTIVA"<<endl;
				}
				else
				{
					cout<<"CLASE DE SILLA: ECONÓMICA"<<endl;
				}
			}
			cout<<"-----------------------------------------------------"<<endl;
		}
	}
	system("pause");
	system("cls");
}

void eliminar()
{
	cant = cant-1;
	if(cant<0)
	{
		cant=0;
	}
	string ce, ce2; int estado=0, columna, fila;
	system("cls");
	cout<<"DIGITE EL NÚMERO DE CÉDULA DEL PASAJERO QUE DESEA ELIMINAR LA RESERVA: ";
	cin>>ce;
	for(int i=0; i<50; i++)
	{
		if(ce == P[i].cedula)
		{
			ce2 = P[i].cedula;
			P[i].nombre = "";
			P[i].cedula = "";
			columna = P[i].columna;
			fila = P[i].fila;
			estado = P[i].estado;
		}
	}
	if(estado == 1)
	{
		if(ce2.empty())
		{
			cout<<"LA CÉDULA NO EXISTE."<<endl;
		}else
		{
			cout<<"RESERVA ELIMINADA."<<endl;
			b = b-1;
			for(int i=fila-1;i<fila;i++)
			{
				for(int j=columna-1; j<columna;j++)
				{
					S.sillaE[i][j]="  D";
				}
			}	
		}
	}else
	{
		if(ce2.empty())
		{
			cout<<"LA CÉDULA NO EXISTE."<<endl;
		}else
		{
			cout<<"RESERVA ELIMINADA."<<endl;
			for(int i=fila-1;i<fila;i++)
			{
				for(int j=columna-1; j<columna;j++)
				{
					S.silla[i][j]="  D";
				}
			}
		}
	}
	system("pause");
	system("cls");
}

void buscar()
{
	system("cls");
	string cedula, nombre, cedula2; int estado;
	cout<<"DIGITE LA CÉDULA DEL PASAJERO QUE DESEA BUSCAR: ";
	cin>>cedula;
	if(P[0].cedula.empty())
	{
		cout<<"NO HAY PASAJEROS REGISTRADOS EN EL SISTEMA."<<endl;
		system("pause");
		system("cls");
	}else
	{
		for(int i=0; i<50; i++)
		{
			if(cedula == P[i].cedula)
			{
				nombre = P[i].nombre;
				cedula2 = P[i].cedula;
				estado = P[i].estado;
			}
		}
		cout<<"----------------------------------------------------------------------"<<endl;
		cout<<"INFORMACIÓN DEL PASAJERO "<<endl;
		if(nombre.empty() or cedula2.empty())
		{
			cout<<"NOMBRE: NO HAY INFORMACIÓN."<<endl;
			cout<<"CÉDULA: NO HAY INFORMACIÓN."<<endl;
			cout<<"CLASE DE SILLA: NO HAY INFORMACIÓN."<<endl;
		}
		else
		{
			cout<<"NOMBRE: "<<nombre<<endl;
			cout<<"CÉDULA: "<<cedula<<endl;
			if(estado == -1)
			{
				cout<<"CLASE DE SILLA: NO HAY INFORMACIÓN."<<endl;
			}
			else
			{
				if(estado == 1)
				{
					cout<<"CLASE DE SILLA: EJECUTIVA"<<endl;
				}
				else
				{
					cout<<"CLASE DE SILLA: ECONÓMICA"<<endl;
				}
			}
		}
		system("pause");
		system("cls");
	}
}

void porcentaje()
{
	system("cls");
	float porc;
	porc = (cant/50)*100;
	cout<<"EL PORCENTAJE DE LOS PASAJEROS EN EL AVIÓN ES DEL: "<<porc<<"%"<<endl;
	system("pause");
	system("cls");

}

int main()
{
	int z=1, op;
	setlocale (LC_ALL,"spanish");
    do
	{
	  	cout << " \t \t \t \t \t \t  ¿QUÉ DESEAS HACER? " << endl ;
	    cout << "\t \t \t \t  *****************************************************"<<endl;
	    cout << "\t \t \t \t  * 1. MOSTAR LISTA DE PASAJEROS                      *"<<endl;
	    cout << "\t \t \t \t  * 2. ASIGNAR UNA SILLA A UN PASAJERO                *"<<endl;
	    cout << "\t \t \t \t  * 3. ELIMINAR RESERVA                               *"<<endl;
	    cout << "\t \t \t \t  * 4. BUSCAR PASAJERO                                *"<<endl;
	    cout << "\t \t \t \t  * 5. VER PORCENTAJE DE OCUPACIÓN DEL AVIÓN          *"<<endl;
	    cout << "\t \t \t \t  * 6. SALIR                                          *"<<endl;
	    cout << "\t \t \t \t  *****************************************************"<<endl;
	  	cout<<"DIGITE SU OPCIÓN: ";
		cin>>op;
		system ("cls");
		switch(op)
		{
			case 1: 
				mostar();
			break;
			
			case 2:
				reserva();
			break;	
			
			case 3:
				eliminar();
			break;
			
			case 4:
				buscar();	
			break;
			
			case 5:
				porcentaje();	
			break;
			
			case 6:
				z=0;
			break;
			
			default:
			cout<<"LA OPCIÓN NO EXISTE.";
			break;
		}
	}while(z==1);
	cout<<"\t\t ***************************"<<"\n";
	cout<<"\t\t * ¡GRACIAS POR SU VISITA! *"<<"\n";
	cout<<"\t\t ***************************"<<"\n";
	return 0;
}
