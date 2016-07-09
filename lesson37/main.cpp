/*
如何安全的使用指针

指针不可以乱用，需要对指针有足够清楚的认识
（一）使用指针之前弄清两个问题：
    1.这个指针指向哪？
    2.这个指针指向的那个地方是否有效（是否有效）？
（二）目前指针只指向：
     也就是说指针要么指向变量数组要么指向0，否则崩溃
    1.变量、数组
    2.空指针：
      2.1定义：
	     值为零的指针称为空指针
	     int* p = 0;
	     指针为空时不能使用星号操作
	     int* p = 0;
	     printf("%d \n".*p);
	  2.2特例：
	     但空指针是程序员可以接受的一种情况
	     只需要加一个if判断就能解决
	     if(p)
	     printf("%d \n",*p);
	     我们允许指针为空：
	     void max_min(const int* arr, int len, int* pmax, int* pmin)
	     {
	        int _max = 0;
	        int _min = 0;
	        if (pmax) *pmax = _max;//如果传递进来一个有效值，则把值赋给它
	        if (pmin) *pmin = _min;//如果用户不需要一个值，就传一个空指针进来
	     }
	     int main()
	     {
	        int arr[4];
	        int _max;//只关心最大值，只把max变量传入main
	        max_min(arr, 4, &_max, 0);//不关心的参数min传一个0就好
	        return 0;
	     }//某些参数可以省，当不想传入一个空指针,只需要得到最大
     3.野指针：
       3.1定义：
	      当一个指针未赋值时，其值为随机值，此时指向了一个随机位置的内存地址
	      称为“野指针”wild poiner（野指针是坚决杜绝的）	    
（三）安全使用指针
    1.杜绝野指针：
      1.1一个好习惯是初始化空指针：
	     int* p = 0;
	  1.2空指针也会崩溃：
	     int* p = 0;
	     printf("%d \n",*p);
	  1.3考虑：
	     1>为什么传递一个空指针是允许的？
	       传递空指针：函数内部是有办法处理的，判断一下即可
	     2>而传递一个野指针是不允许的？
	       传递野指针：函数内部无法判断出来你是个野指针
    2.严防数组越界：
      当指针指向数组时，要注意不要越界
	    int arr[4];
	    int* p = arr;
	    p += 4;
	    *p = 12;
	  已经越界，但不易察觉，
	  有可能立即崩溃，有可能过一会崩溃
    3.变量是否已经失效：
      如果指向目标的生命期已经终结（失效）
      则该指针也失效
	  {
	     int* p = 0;
	     if (1)
	     {
	        int a = 10;//a生效
	        p = &a;//p指向a
	      }//a失效
	     *p = 11;//p指向了一个无效的位置
	     return 0;
	  }
	  注：
	    1>在VC不一定能发生运行错误，但不代表可以这样做
	    2>错误是慢慢积累的，改变了一个不该改变的位置会崩溃
        3>在19/20章引入类的概念后，可以很容易说明这个问题的严重性
          所以指向全局变量的指针，安全性相对较高，因为它的生命期是永恒
        4>这一块的内存总是有效，就不用考虑这个问题了
        int a = 0;
        int* test()
        {
            return &a;//指针指向全局变量可以使用
        }
        int main()
        {
            int* p = test();
            *p = 11;
            return 0;
        }  
（四）
    1.野指针的概念
    2.空指针的概念以及注意
    3.安全使用指针的注意事项
*/


































