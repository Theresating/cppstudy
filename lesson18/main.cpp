/*
位操作符以及在工程中的应用

（一）基础知识
	1.按位表示：一个字节由八个位组成，
	2.最短整型
	  unsigned char：最左侧为高位bit7，最右侧为低位bit0
	  unsigned short 16个位（2字节）
	  unsigned int 32个位（4字节）
（二）位操作符
	1.分类：
	  ~   按位取反
	  <<  左移
	  >>  右移
	  <<= 左移并赋值
	  >>= 右移并赋值
	  &   按位与
	  ^   按位异或
	  |   按位或
	  &=  按位与赋值
	  ^=  按位异或赋值
	  |=  按位或赋值

	2.按位取反：
	  2.1操作：
	     位上为1取反为0，位上为0取反为1
	  2.2例子：
	     10110101(181)->01001010(74)
	     unsigned char m = 181;
	     unsigned char n = ~m;
	     printf("n:%u \n",n);//74
	     printf("n:%u \n",(unsigned char) ~181);//强制转换得74
	3.移位操作：统一使用unsigned 类型，不然变号很麻烦
	  3.1形式：
	     >>1表示所有位右(左)移一位，左（右）侧填充0
	     >>8表示所有位右（左）移一位，左（右）侧填充0，八位全移走剩下填充零
	  3.2例子：
	     printf("n: %u \n",(unsigned char)(0xA7 >> 8));// n:0
	  3.3打印：
	     %d:整型
		 %f:浮点型
		 %lf:双浮点型
		 %c:字符型
		 %s:字符数组（字符串）
		 %u:无符号字符
		 %X:十六进制
	4.按位与,或，异或：
	  4.1与：
	     a&b:a与b同时为0时结果为1，其余为0
	  4.2或：
	     a|b:a=1或b=1时结果为1，其余为0
	  4.3异或：
	     a^b:a,b 不同时候为1，相同时候为0（少用）
    5.按位赋值:
	  5.1例子：
	     1>按位赋值
	       unsigned char m = 0xA7;//(字母+shift为大写字母)
	       m >>= 3;//m = m >> 3;//same
	       printf("n: %u \n",(unsigned char)(0xA7&0xE7));//n:167
		 2>把A2转换成int类型：
		   字符串转换成数字，buf[0]为大写字母A，16十进制转换为10（16进制）
	       char buf[] = "A2";//A的权重为(8bit*2=16)，buf[0]为10,0xA
	       unsigned int n1 = (buf[0] -'A') + 10;//
	       unsigned int n2 = (buf[1] - '0');//返回值为2
	       unsigned int result = n1 * 16 +n2;//乘以权重
		3>左移四位相当于乘以16，移位是更划算的算法，乘除比较耗cpu
	      (移位时最好使用unsigned类型)
          int n1 = 10;
	      int n2 = 2;
	      int result = (n1 >> 4 ) + n2;
（三）单bit操作
	10110101（181假设对bit5进行操作：bit0 bit1 bit2...bit7）

	1.写操作：设置某位
	  1.1 置1
	      flag |=(1u<<5);//bit5
	  1.2 清除某位：清0（先移位再取反）
	      flag &= ~(1u>>5);
	  1.2 清零：
	      unsigned char a = 181;
	      10110101->00100000(1u<<5)->11011111(~(1u<<5))
	      a &= ~(1u << 5);//1u表示1是unsigned int类型
    2.读操作：判断某位是否为1：
	  flag &(1u<<5)真或假
*/





	




























	return 0;

}