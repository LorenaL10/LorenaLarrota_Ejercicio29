#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    float L=1;
    float c=0.5;
    float p=0.01;
    float T=40.0;
    
    
    float array_new[100];
    float array_old[100];
    float delta_t=0.01;
    float delta_x=0.01;
    float c_prime= delta_x/delta_t;
    float t=0.0;
    
    ofstream outfile;

    // inicializo
  for(int i=0; i<100; i++){
    array_old[i]=0.0;
  }
    
outfile.open("cuerda.txt");    
while (t<7){
    for (int i=1; i<100; i++){
        if((i!=0)|(i!=100)){
            float old = (array_old[i+1]+array_old[i-1]-2*array_old[i]);
             array_new[i]=array_old[i]+((c*c/2*c_prime)*old);
        }
       }
    
      for(int i=0;i<100;i++){
      outfile << array_new[i] <<endl;
    }
    outfile << "\n";
    
    for (int i=1; i<100; i++){
        array_old[i]=array_new[i];
    }
    t=t+delta_t;
}
    
    outfile.close();
    return 0;
    
}
