// LV2 - 숫자의 표현 (250310) - MJ
// 자연수 n이 매개변수로 주어질 때, 연속된 자연수들로 n을 표현하는 방법의 수를 return하는 solution를 완성
// point : 연속된 자연수로 표현할 수 있는 갯수 return (연속된 자연수가 point sum 초과해버리면 바로 break)
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int num = n; num > 0;num--){
        int j = num;
        int sum = num;
        while(j > 0){
            
        if (sum == n){
            answer++;
            break;
        }else if (sum > n){
            break;
        }
            j--;
            sum +=j;
            
        }
    }
    return answer;
}