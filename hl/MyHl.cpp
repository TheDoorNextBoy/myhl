#include <hl.h>
#include <MyClass.h>


//HL_API int myhl_MyClass_testFunction0(vbyte*);
//HL_API vbyte* myhl_MyClass_new0(void);

extern "C" vbyte *myhl_MyClass_new0() {
	return (vbyte*)new MyClass();
}


extern "C" int myhl_MyClass_testFunction0(vbyte *myclass) {
	MyClass* my = (MyClass*)myclass;
	return my->testFunction();
}