#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num<2) return false;
    for (int i=2;i*i<=num;i++)
        if (num%i==0) return false;
    return true;
}
int compute_zigzag_sum(int** matrix, int n) {
    int sum=0;
    for (int d=0;d<=2*(n-1);d++) {
        int row_start=(d<n)?d:n-1;
        int col_start=d-row_start;
        if(d%2==0) {
            for (int i=row_start,j=col_start;i>=0&&j<n;i--,j++) {
                int val=*(*(matrix+i)+j);
                sum += isPrime(val)?-val:val;
            }
        } else {
            for (int i=col_start,j=row_start;i<n&&j>=0;i++,j--) {
                int val =*(*(matrix+j)+i);
                sum += isPrime(val) ? -val : val;
            }
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int** matrix = new int*[n];
    for (int i=0;i<n;i++){
        *(matrix+i)=new int[n];
    }
    cout << "Enter the matrix elements:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> *(*(matrix+i)+j);
        }
    }
    int result = compute_zigzag_sum(matrix, n);
    cout << "Zigzag Compressed Path Sum: " << result << endl;
    for (int i = 0; i < n; ++i){
        delete[] *(matrix + i);
    }
    delete[] matrix;

    return 0;
}
