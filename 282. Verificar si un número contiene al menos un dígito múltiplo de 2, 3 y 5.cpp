#include 
using namespace std;

int main() {
int n;
bool cumple = false;
cin >> n;
while (n != 0) {
int d = n % 10;
if (d % 2 == 0 && d % 3 == 0 && d % 5 == 0) {
cumple = true;
break;
}
n /= 10;
}
cout << (cumple ? "Contiene múltiplo de 30" : "No contiene");
return 0;
}

