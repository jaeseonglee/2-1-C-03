/*	�ǽ� 2 : dataSize.c
	�ۼ��� : 2019. 03 .14
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : sizeof �����ڸ� �̿��� �� �ڷ����� ũ�� Ȯ��
*/

#include <stdio.h>	// ��ó����

int main(int argc, char* argv[]) {	// main �Լ�
	
	char ch = 'A';		// ������ ����
	int i = 65;			// ������ ����
	double d = 3.14;	// �Ǽ��� ����

	printf("\n [THE SIZE OF DATATYPE ] \n");		// [THE SIZE OF DATATYPE ] ���
	printf("char : %d\n", sizeof(char));			// �ڷ��� char�� ũ�⸦ ������� %d ���, sizeof�� �������̱� ����. ���� ���� ����
	printf("char ch = \'A\': %d\n", sizeof(ch));	// ���� ch�� ũ�⸦ ���
	printf("int : %d\n", sizeof(int));				// �ڷ��� int�� ũ�⸦ ���
	printf("int i = 65 : %d\n", sizeof(i));			// ���� i�� ũ�⸦ ���
	printf("short int : %d\n", sizeof(short int));	// �ڷ��� short int�� ũ�⸦ ���
	printf("long int : %d\n", sizeof(long int));	// �ڷ��� long int�� ũ�⸦ ���
	printf("float : %d\n", sizeof(float));			// �ڷ��� float�� ũ�⸦ ���
	printf("double : %d\n", sizeof(double));		// �ڷ��� double�� ũ�⸦ ���
	printf("double d = 3.14: %d\n", sizeof(d));		// ���� d�� ũ�⸦ ���
	printf("long double : %d\n", sizeof(long double));	// �ڷ��� long double�� ũ�⸦ ���
	printf("string \'Hello\' : %d\n", sizeof("Hello"));	// "Hello"�� ũ�⸦ ���, hello�� ũ�⿡ \0 ���� ��� -> 6
	printf("default constant 1 : %d\n", sizeof(7));		// ��� 7�� ũ�⸦ ���, �׷��� �������̱� ������ int���� ũ���� 4(4byte)�� ���
	printf("default constant 2 : %d\n", sizeof(10.12)); // ��� 10.12�� ũ�⸦ ���, �׷��� �Ǽ����̱� ������ double���� ũ���� 8(8byte)�� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0 ��ȯ
}

