#include <iostream>


void Calculaotr(int n);

int main(int argc, char const *argv[])
{
    int num = 0;
    scanf("%d" , &num);

    Calculaotr(num);

    return 0;
}
void Calculaotr(int n){
    for(int i=1; i<=9; i++){
        std::cout<<n<<" * "<<i<<" = "<<(i*n)<<std::endl;
    }
}

// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

// 입력
// 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.

// 출력
// 출력형식과 같게 N*1부터 N*9까지 출력한다.