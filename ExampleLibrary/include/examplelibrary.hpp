#ifdef _WIN32
	#ifdef EXPORT_SYMBOLS
		#define EL_API __declspec(dllexport)
	#else
		#define EL_API __declspec(dllimport)
	#endif
#endif

int EL_API multiply(int x, int y);