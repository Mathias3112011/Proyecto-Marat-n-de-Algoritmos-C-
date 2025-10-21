int contarApariciones(int arr[], int n, int valor) {
int count = 0;
for (int i = 0; i < n; i++)
if (arr[i] == valor)
count++;
return count;
}
