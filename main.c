#include <stdio.h>

int main() {
    /*
     문제: 용자 세준
     우선 시험 친 과목 수를 입력해야지-->그럼 과목 수 변수를 난 일단 num이라 할게
     그리고 시험점수를 입력받아야지(얼만큼? --> num만큼)
     입력받았으면, 계산해야지 어떻게?
     --> 우선 입력받은 숫자 중에서 max를 가려야 한다
     --> max를 가린 후, 계산해야지
        sum = 0처리 먼저
        sum += ((jumsu[i] / max) * 100)
     
        avg = sum / num
     결과 출력: 어떻게?
     --> 그냥 avg만 출력하면 끝!
     
     scanf("%d", &num);
     for(i=0; i<num; i++){
        scanf("%d", &jumsu[i]);
     }
     */
    int jumsu[1000];        // 문제조건에 따라...
    float sum = 0;
    float avg, max;
    int num;
    int i;
    
    max = 0;
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%d", &jumsu[i]);
        
        if(max < jumsu[i])     max = jumsu[i];
        
        sum += ((jumsu[i] / max) * 100);
    }
    avg = sum / num;
    
    printf("%.2f\n", avg);
    
    return 0;
}
