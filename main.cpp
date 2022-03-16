#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  float a = 0, b = 0, c = 0, AreaTriangolo = 0, AreaQuadrato = 0, AreaRettangolo = 0, AreaTrapezio = 0;

cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
        AreaTriangolo = (a * b)/2;
        AreaQuadrato = a * a;
        AreaRettangolo = a * b;
        AreaTrapezio = ((a + b) * c)/2;
        
        cout << AreaTriangolo <<  endl;
        cout << AreaQuadrato << endl;
        cout << AreaRettangolo << endl;
        cout << AreaTrapezio << endl ;

        return 0; 

}
