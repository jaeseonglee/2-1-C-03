/*	�ǽ� 4 : printValue
	�ۼ��� : 2019. 03. 14
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ���� ������ �ڷ����� ���� �� ���
*/

#include <stdio.h>	//��ó����

int main(int argc, char* argv[]) {	// main �Լ�
	
	int age = 128;					// 128�� int�� ������ ���� �� �ʱ�ȭ
	long long salary = 2500000000;	// 25���� long lon�� ������ ���� �� �ʱ�ȭ ����, 21�ﺸ�� Ŀ�� long long ���
	double pi = 3.14;				// 3.14�� double�� ������ ���� �� �ʱ�ȭ
	int grade = 2;					// 2�� int�� ������ ���� �� �ʱ�ȭ
	char credit = 'A';				// A�� char�� ������ ���� �� �ʱ�ȭ

	printf("age : %d\n", age );			// ���� age ��� ���� %d ���
	printf("salary : %lld\n", salary);	// ���� salary ��� ���� %lld, long long�� ��½� %lld ���
	printf("pi : %lf\n", pi);			// ���� pi ��� ���� %lf ���
	printf("grade : %d\n", grade);		// ���� grade ��� ���� %d ���
	printf("credit : %c\n", credit);	// ���� credit ��� ���� %c ���

	system("pause"); // ���â Ȯ�� 
	return 0;		 //	0�� ��ȯ
}
