#ifndef _HAS_PTR_H_
#define _HAS_PTR_H_

#include <string>

class HasPtr{
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new size_t(1)) {}
	HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i), use(hp.use) { ++*use; }
	HasPtr& operator=(const HasPtr &rhs);
	~HasPtr();


private:
	std::string *ps;
	int i;
	size_t *use;
};


#endif /* _HAS_PTR_H_ */
