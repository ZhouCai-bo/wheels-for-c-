#include<string>
#include<vector>
#include<set>

namespace myString{
	std::vector<std::string> sub_str(const std::string &str, const std::string &elements = " "){
		std::vector<std::string> res;
		std::set<char> tags(elements.begin(), elements.end());
		int start = 0, end = 0;
		while (end != str.size())
		{
			if (tags.count(str[end])) 
			{
				//连续遇到标点时，防止截取到空字符
				if (start != end)
					res.push_back(str.substr(start, end - start));
				++end;
				start = end;
			}
			else
				++end;
		}
		if (start != end)
			res.push_back(str.substr(start));
		return res;
	}
	std::vector<std::string> sub_str(const char* &chs, const std::string &elements = " "){
		std::string str(chs);
		return sub_str(str, elements);
	}
}
