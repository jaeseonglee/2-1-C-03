/*	�ǽ� 1 : print_value.c
	�ۼ��� : 2019. 03. 14
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ����� ������ ���
*/

#include <stdio.h>	// ��ó����

int main(int argc, char* argv[] ) {	// main �Լ�
	char ch = 'M';				// ������ ����
	int	iValue = 95;			// ������ ����
	double dValue = 3.14;		// �Ǽ��� ���� (double��)
	float fValue = 1.414f;		// �Ǽ��� ���� (float��)

	printf("\n [Print value] \n");				// [Print value] ���
	printf("char : %c \n", 'W');				// ��� W ���� ������� %c ���
	printf("char variable : %c \n", ch);		// ���� ch ������� %c ���
	printf("int value : %d \n", 20);			// ��� 20 ������� %d ���
	printf("int constants formula : %d \n", 10 + 20);	// 10+20�� ��� ��� 30 ������� %d ���
	printf("inr variable : %d \n", iValue);		// ���� iValue ������� %d ���
	printf("double value : %lf \n", 3.1415);	// ��� 3.1415 ������� %lf���, %lf�� printf �Լ����� float,double ������� �Ǽ��� ���. ���� ����
	printf("double variable : %lf \n", dValue);	// ���� dValue ������� %lf���
	printf("float varialbe : %lf \n", fValue);	// ���� fValue ������� %lf���
	printf("int variable : %d and float variable : %lf \n", iValue, fValue);	// ������ ���� iValue�� ���� %d ���, �Ǽ��� ���� fVaule�� ���� %lf ���
	
	system("pause");	// ���â Ȯ��
	return 0;			// 0 ��ȯ
}
