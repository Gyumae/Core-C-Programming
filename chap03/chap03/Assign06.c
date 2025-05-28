/* 파일명: Assign06.c

 * 내용: 아파트 면적 계산

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main()
{
    double m2;
    const double m2_to_pyeong = 3.3058;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &m2);

    double pyeong = m2 / m2_to_pyeong;

    printf("%.2f평\n", pyeong);

    return 0;
}