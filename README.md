# wheels-for-c++ 这里会记录一些方便个人使用的c++轮子 
some wheels made for c++ and by c++, personally use

## 目录
### myString.cpp

* 函数`std::vector<std::string> sub_str(const std::string &str, const std::string &elements = " ")`</br>
接受一个待分割字符串str，分割字符集elements（默认为空格分隔），返回待分割字符中的各个“单词”。
* 函数`std::vector<std::string> sub_str(const char* &chs, const std::string &elements = " ")`</br>
接受一个待分割C-风格字符串chs，分割字符集elements（默认为空格分隔），返回待分割字符中的各个“单词”。
