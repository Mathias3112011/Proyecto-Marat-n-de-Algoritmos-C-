#include 
using namespace std;

int main() {
int n, prev = -1;
bool cumple = false;
cin >> n;
while (n != 0) {
int d = n % 10;
if (prev != -1 && prev * 2 == d) {
cumple = true;
break;
}
prev = d;
n /= 10;
}
cout << (cumple ? "Dígito igual al doble del anterior" : "No cumple");
return 0;
}

