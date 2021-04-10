#ifndef __PRODUTO_H__
#define __PRODUTO_H__

#include <ctime>

struct Produto {
	char marca = '0';
	time_t data;
	int estante;
	int gaveta;
	int armario;
};

#endif