#include 
using namespace std;

int main() {
int n;
bool cumple = false;
cin >> n;
while (n != 0) {
if (n % 10 == 9) {
cumple = true;
break;
}
n /= 10;
}
cout << (cumple ? "Contiene dígito 9" : "No contiene");
return 0;
}
