#include<stdio.h>
int main(){

	/*
	字符数组

	（一）字符数组
	  1.定义：
	       用char型数组表示一串字符，存储的是数，但这些数表示的是字符
	  2.初始化方法:
	    2.1普通数组:
		   char str[6] = {'h','e','l','l','o','\0'};
		   char str[6] = {'h','e','l','l','0',0};同上
	    2.2特殊初始化:
		   char str[6] = "hello"
		2.3'\0':表示字符串的结束，字符长度为n，以n+1为字符串长度
		2.4部分初始化：
		   char str[6] = "he";后面未初始化的字符值为0
	  3.当作字符串打印（用%s）：
		char str[] = "hello";
		printf("%s \n", str);
	  4.加入特殊字符(转移符)
	    4.1打印双引号：\"
		   char str[] = "my name : \"shaofa\" ";
		   printf("%s \n", str);
		4.2打印反斜杠：\\(两个反斜杠)
	  5.char str[12] = "hello";
		  printf("%s \n",str);
		  结果hello
	  6.强制停止打印：遇到零就停止打印
	    第三个元素强制设为零只打印前两个字符he
	    str[2] = 0;
	    printf("%s \n", str);
	（二）字符串长度
	  1.从头开始一直到结束符0，中间的字符数
	    如char str[6] = "hello";长度为6
		str[2] = 0;使得长度为2
      2.printf在打印一串字符时，遇到'\0'结束（也就是数字0）
	    str[2] = '\0';与直接用数字0效果是一样的
	（三）注意
	  1.如果字符串后面没有‘\n'没有以零结束printf会一直尝试打印下去
	  2.字符串长度为结束符之前部分的长度，没有0结果会出现乱码，直到内存中遇到一个0
	  3.数组初始化时足够大，要比数组长度大1：length + 1
	  4.不以零为结束的字符串不是正常字符串
	  5.0之后的字符不会被打印
	  */























































		























	return 0;
}