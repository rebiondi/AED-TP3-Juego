/*  TP #3 - Juego - Juego de preguntas y respuestas con distintas temáticas
    Biondi, Rolando Ezequiel
    29/04/2015
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\t\tBIENVENIDO AL JUEGO!\n\n\n";
    int op;
    int puntaje=0;
    string respuesta;
    string eleccion;
    do{
        cout<<"\nElija la opcion que desee:\n1)Preguntas sobre futbol\n2)Preguntas sobre musica\n3)Preguntas varias\n4)Puntaje\n5)Salir\n";
         cin>>op;

        if(op==1){
                cout<<"\nCual es el apellido del actual tecnico de Boca Juniors?\n";
                cin>>respuesta;
                if(respuesta=="Arruabarrena" || respuesta=="arruabarrena"){
                    puntaje++;
                    cout<<"CORRECTO!";
                }
                else{
                    cout<<"INCORRECTO...";
                }
                cout<<"\n\nQuiere continuar con esta tematica\n";
                do{
                    cin>>eleccion;
                    if(eleccion=="no" || eleccion=="No"){
                        cout<<"\nFin de la tematica.\n";
                    }
                    if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                        cout<<"\nIngrese una respuesta valida\n";
                    }
                    if(eleccion=="Si" || eleccion=="si"){
                        cout<<"\nQue seleccion gano el ultimo mundial?\n";
                        cin>>respuesta;
                        if(respuesta=="Alemania" || respuesta=="alemania"){
                                puntaje++;
                                cout<<"CORRECTO!";
                        }
                        else{
                            cout<<"INCORRECTO...";
                        }
                        cout<<"\n\nQuiere continuar con esta tematica\n";
                        do{
                            cin>>eleccion;
                            if(eleccion=="no" || eleccion=="No"){
                                cout<<"\nFin de la tematica.\n";
                                }
                            if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                                cout<<"\nIngrese una respuesta valida\n";
                            }
                            if(eleccion=="Si" || eleccion=="si"){
                                cout<<"\nCuantos torneos locales tiene River Plate?\n";
                                cin>>respuesta;
                                if(respuesta=="35" || respuesta=="Treinta y cinco" || respuesta=="treinta y cinco"){
                                    puntaje++;
                                    cout<<"CORRECTO!";
                                }
                                else{
                                    cout<<"INCORRECTO...";
                                }
                                cout<<"\n\nSe acabaron las preguntas de esta tematica, siga con otra.\n";
                            }
                        }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
                    }
                }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
        }


        if(op==2){
                cout<<"\nCual es el primer nombre del ex lider de Soda Stereo?\n";
                cin>>respuesta;
                if(respuesta=="Gustavo" || respuesta=="gustavo"){
                    puntaje++;
                    cout<<"CORRECTO!";
                }
                else{
                    cout<<"INCORRECTO...";
                }
                cout<<"\n\nQuiere continuar con esta tematica\n";
                do{
                    cin>>eleccion;
                    if(eleccion=="no" || eleccion=="No"){
                        cout<<"\nFin de la tematica.\n";
                    }
                    if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                        cout<<"\nIngrese una respuesta valida\n";
                    }
                    if(eleccion=="Si" || eleccion=="si"){
                        cout<<"\nCuantas cuerdas tiene una guitarra?\n";
                        cin>>respuesta;
                        if(respuesta=="6" || respuesta=="seis" || respuesta=="Seis"){
                                puntaje++;
                                cout<<"CORRECTO!";
                        }
                        else{
                            cout<<"INCORRECTO...";
                        }
                        cout<<"\n\nQuiere continuar con esta tematica\n";
                        do{
                            cin>>eleccion;
                            if(eleccion=="no" || eleccion=="No"){
                                cout<<"\nFin de la tematica.\n";
                                }
                            if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                                cout<<"\nIngrese una respuesta valida\n";
                            }
                            if(eleccion=="Si" || eleccion=="si"){
                                cout<<"\nComo se llama el instrumento con el que se toca el violin\n";
                                cin>>respuesta;
                                if(respuesta=="Arco" || respuesta=="arco"){
                                    puntaje++;
                                    cout<<"CORRECTO!";
                                }
                                else{
                                    cout<<"INCORRECTO...";
                                }
                                cout<<"\n\nSe acabaron las preguntas de esta tematica, siga con otra.\n";
                            }
                        }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
                    }
                }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
        }

        if(op==3){
                cout<<"\nCuantos libros tiene la saga de Harry Potter?\n";
                cin>>respuesta;
                if(respuesta=="Siete" || respuesta=="siete" || respuesta=="7"){
                    puntaje++;
                    cout<<"CORRECTO!";
                }
                else{
                    cout<<"INCORRECTO...";
                }
                cout<<"\n\nQuiere continuar con esta tematica\n";
                do{
                    cin>>eleccion;
                    if(eleccion=="no" || eleccion=="No"){
                        cout<<"\nFin de la tematica.\n";
                    }
                    if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                        cout<<"\nIngrese una respuesta valida\n";
                    }
                    if(eleccion=="Si" || eleccion=="si"){
                        cout<<"\nCual es la capital de Australia?\n";
                        cin>>respuesta;
                        if(respuesta=="Canberra" || respuesta=="canberra"){
                                puntaje++;
                                cout<<"CORRECTO!";
                        }
                        else{
                            cout<<"INCORRECTO...";
                        }
                        cout<<"\n\nQuiere continuar con esta tematica\n";
                        do{
                            cin>>eleccion;
                            if(eleccion=="no" || eleccion=="No"){
                                cout<<"\nFin de la tematica.\n";
                                }
                            if(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si"){
                                cout<<"\nIngrese una respuesta valida\n";
                            }
                            if(eleccion=="Si" || eleccion=="si"){
                                cout<<"\nCuando fue la primer invasion inglesa\n";
                                cin>>respuesta;
                                if(respuesta=="1806"){
                                    puntaje++;
                                    cout<<"CORRECTO!";
                                }
                                else{
                                    cout<<"INCORRECTO...";
                                }
                                cout<<"\n\nSe acabaron las preguntas de esta tematica, siga con otra.\n";
                            }
                        }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
                    }
                }while(eleccion!="no" && eleccion!="No" && eleccion!="si" && eleccion!="Si");
        }


        if(op==4){
            cout<<"\nSu puntaje es: " << puntaje <<"!!!\n";
        }

        if(op==5){
            cout<<"\n\nFin del Juego!";
        }

        if(op<1 || op>5){
            cout<<"\nIngrese una opcion valida\n\n";
        }
    }while(op!=5);
}
