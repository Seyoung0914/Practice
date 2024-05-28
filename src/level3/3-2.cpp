#include <iostream>

void Scanner(int n);
void Calculaotr(int a,int b);

int main(int argc, char const *argv[])
{   
    int N =0;
    scanf("%d" , &N);

    Scanner(N);
    return 0;
}

void Scanner(int n){
    for(int i=0; i<n; i++){
        int A,B = 0;
        scanf("%d %d" , &A, &B);
            if((0<A)&&(B<10)) Calculaotr(A, B);
    }
}

void Calculaotr(int a,int b){
        std::cout<<(a+b)<<std::endl;
}

// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 각 테스트 케이스마다 A+B를 출력한다.