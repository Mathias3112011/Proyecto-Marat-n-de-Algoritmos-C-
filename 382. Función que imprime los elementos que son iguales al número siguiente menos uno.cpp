#include
using namespace std;
void imprimirSiguienteMenosUno(int arr[], int n) {
for (int i = 0; i < n - 1; i++)
if (arr[i] == arr[i + 1] - 1)
cout << arr[i] << " ";
}
