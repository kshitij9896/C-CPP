//Using IFndef
#include<stdio.h>
#include<conio.h>
#undef VISION 1
//If you want to change the print then just use define at the place of undef.....
void main()
{
	#if VISION
	printf("\n Non visionary people...");
	#else
	printf("\n Visionary People....");
	#endif
	getche();
}
