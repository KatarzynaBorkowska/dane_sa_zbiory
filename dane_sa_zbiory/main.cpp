
#include <iostream>
using namespace std;
int main() {
    int a1, a2;
    int b1, b2;
    cout << "Zbior A: ";
    cin >> a1 >> a2;
    cout << "Zbiór B: ";
    cin >> b1 >> b2;
    int i,n = 0,x,y;
    cout << "Podaj x i y: ";
    cin >> x >> y;
    for(i = a1;i <= a2;i++) n++;
    cout << "Moc zbioru A " << n << endl;
    n = 0;
    for(i = b1;i <= b2;i++) n++;
    cout << "Moc zbioru B " << n << endl;
    
    int m = 0;
    n = 0;
    for(i = 1;i <= a2;i++)
        if(i % x == 0)
            m++;
    for(i = 1;i < a1;i++)
        if(i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze A podzielnych przez " << x << ": " << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= b2;i++)
        if(i % x == 0)
            m++;
    for(i = 1;i < b1;i++)
        if(i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze B podzielnych przez " << x << ": "  << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= a2;i++)
        if(i % y != 0)
            m++;
    for(i = 1;i < a1;i++)
        if(i % y != 0)
            n++;
    cout << "Liczba liczb w zbiorze A niepodzielnych przez " << y << ": "  << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= b2;i++)
        if(i % y != 0)
            m++;
    for(i = 1;i < b1;i++)
        if(i % y != 0)
            n++;
    cout << "Liczba liczb w zbiorze B niepodzielnych przez " << y << ": " << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= a2;i++)
        if(i % y == 0 && i % x == 0)
            m++;
    for(i = 1;i < a1;i++)
        if(i % y == 0 && i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze A podzielnych jednocześnie przez " << x << " i " << y << ": " << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= b2;i++)
        if(i % y == 0 && i % x == 0)
            m++;
    for(i = 1;i < b1;i++)
        if(i % y == 0 && i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze B podzielnych jednocześnie przez " << x << " i " << y << ": "  << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= a2;i++)
        if(i % y != 0 && i % x == 0)
            m++;
    for(i = 1;i < a1;i++)
        if(i % y != 0 && i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze A podzielnych jednocześnie przez " << x << " i jednocześnie niepodzielnych przez " << y << ": " << m - n << endl;
    
    m = 0;
    n = 0;
    for(i = 1;i <= b2;i++)
        if(i % y != 0 && i % x == 0)
            m++;
    for(i = 1;i < b1;i++)
        if(i % y != 0 && i % x == 0)
            n++;
    cout << "Liczba liczb w zbiorze A podzielnych jednocześnie przez " << x << " i jednocześnie niepodzielnych przez " << y << ": " << m - n << endl;
    return 0;
}
