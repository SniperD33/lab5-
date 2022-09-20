#ifndef _MY_IMAGE_H 
#define _MY_IMAGE_H 
class MyImage {
public:
	int width, height;
	unsigned char *data;
	~MyImage(); //this is the destructor 
	MyImage(const char *fname); 
};
#endif
