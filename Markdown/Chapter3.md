# 3.5 数组
- 字符数组的特殊性
  
  对字符数组进行初始化时，要注意使用字符串常量类型时的 '\0' 字符。
``` c++
    char ch[] = "Hello";
    cout << ch[4]<< endl << ch[5] << endl; // o 与 空字符
```
- 不能将数组的内容拷贝给其他数组进行赋值或者初始化
- 指针同样也是迭代器
  可以用来指向数组最后元素的下一个位置
  使用标准库的begin()与end()函数可以获得数组的首元素与尾元素的下一个位置的指针。{意味着end（）得到的指针不能解引用以及增加}
``` c++
    char *str = "Hello";
    char *beg = begin(str);
    char *endll = end(str); //begin、end函数定义在iterator头文件中；endll指向'/0'的下一个未知。
    cout << endll - beg << endl;
    //
```
  