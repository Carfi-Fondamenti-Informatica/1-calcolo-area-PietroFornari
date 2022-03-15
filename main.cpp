#include <iostream>
using namespace std;

int main() {
        float a = 0, b = 0, c = 0, AreaTriangolo = 0, AreaQuadrato = 0, AreaRettangolo = 0, AreaTrapezio = 0;
        cout << "Inserire qua sotto i valori (in cm) di a, b, c in questo ordine, separati tra di loro da uno spazio." << endl;
        cin >> a >> b >> c;

        AreaTriangolo = (a * b)/ 2;
        AreaQuadrato = a * a;
        AreaRettangolo = a* b;
        AreaTrapezio = ((a + b) * c)/ 2;

        cout << "L'area del triangolo vale: " << AreaTriangolo << " cm" << endl;
        cout << "L'area del quadrato vale: " << AreaQuadrato << " cm" << endl;
        cout << "L'area del rettangolo vale: " << AreaRettangolo << " cm" << endl;
        cout << "L'area del trapezio vale: " << AreaTrapezio << " cm" << endl;

        return 0;


}
