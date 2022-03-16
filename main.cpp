#include <iostream>
using namespace std;

int main() {
        float a = 0, b = 0, c = 0, AreaTriangolo = 0, AreaQuadrato = 0, AreaRettangolo = 0, AreaTrapezio = 0;
        cin >> a >> b >> c;

        AreaTriangolo = (a * b)/ 2;
        AreaQuadrato = a * a;
        AreaRettangolo = a* b;
        AreaTrapezio = ((a + b) * c)/ 2;

        cout << AreaTriangolo << endl;
        cout << AreaQuadrato << endl;
        cout << AreaRettangolo << endl;
        cout << AreaTrapezio << endl;

        return 0;



}
