#include<iostream>

using namespace std;

int main()
{
  //Parametros de tiempo, distancia e iteraciones de tiempo y distancia
  int Nt=700;
  int t_print=700/5;
  double c=1.0;
  double dt=10E-3;
  double dx=c*dt;
  int Nx=4/dx;

  //Arreglos para guardar las 4 funciones en el tiempo
  double * u1= new double[Nx];
  double * u2= new double[Nx];
  double * u3= new double[Nx];
  double * u4= new double[Nx];
  double * u5= new double[Nx];

  //Condiciones iniciales
  double * in_u = new double[Nx];
  double x=-2.0;
  for(int i=0;i<Nx;i++)
  {
    x+=dx;
    if(x>0.5 || x<-0.5)
    {
      in_u[i]=0.0;
    }
    else
    {
      in_u[i]=0.5;
    }
  }

  //Arreglo para avanzar en el tiempo
  double * u = new double[Nx];

  //Avance en el tiempo
  for(int j=0;j<Nt;j++)
	{
    //Avance en la posicion
		for(int i=1;i<Nx-1;i++)
		{
      //Forward Difference
			u[i]= in_u[i] - ( (c * dt / dx) * ( in_u[i] - in_u[i-1] ) );
		}
    //Guardar los nuevos valores
    for(int i=1;i<Nx-1;i++)
    {
      in_u[i]=u[i];
      switch(j/t_print)
      {
        case 0:
        u1[i]=in_u[i];
        break;
        case 1:
        u2[i]=in_u[i];
        break;
        case 2:
        u3[i]=in_u[i];
        break;
        case 3:
        u4[i]=in_u[i];
        break;
        case 4:
        u5[i]=in_u[i];
        break;
      }
    }
  }
  x=-2.0;
  for(int i=0;i<Nx;i++)
  {
    x+=dx;
    cout<<x<<" "<<u1[i]<<" "<<u2[i]<<" "<<u3[i]<<" "<<u4[i]<<" "<<u5[i]<<endl;
  }

  return 0;
}
