#include 
using namespace std;

int main() {
int n, suma = 0;
cin >> n;
while (n != 0) {
int d = n % 10;
if (d < 5) suma += d;
n /= 10;
}
cout << suma;
return 0;
}
