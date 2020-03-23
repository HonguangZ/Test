#include <stdio.h>

int main(void)
{
	int pw;

	// 确保输入的是数字，不能其他字符
	
	int a;
	while(1)
	{
		a = scanf("%d", &pw);

		if(a == 1 && getchar() == '\n')
			break;

		// 温馨提示：
		else
		{
			printf("你输入的不是数字，请再来一遍！\n");

			// 将缓冲区中的非法格式数据拿掉
			while(1)
			{
				char b = getchar();
				if(b == '\n')
					break;
			}
		}
	}


	// 判断你输入的密码是否正确
	// ...

	return 0;
}
