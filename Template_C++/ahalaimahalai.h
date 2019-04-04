#pragma once
#include <iostream>

template < int N_1, int... N_k >
class AhalaiMahalai {
private:

	template < int... N_p >
	constexpr static int XorPile() { return AhalaiMahalai< N_p... >::_xor; }

	template <>
	constexpr static int XorPile() { return 0; }

	template < int... N_p >
	constexpr static int get_max() { return AhalaiMahalai< N_p... >::_max; }

	template <>
	constexpr static int get_max() { return 0; }

	template < int ... N_p >
	constexpr static int get_num_max() { return AhalaiMahalai< N_p... >::_num_max + 1; }

	template <>
	constexpr static int get_num_max() { return 0; }

public:	
	//AhalaiMahalai() = delete;

	const static int _xor =  N_1 ^ XorPile< N_k... >();
	const static int _max =  (N_1 >= get_max< N_k... >()) * N_1 + (N_1 < get_max< N_k... >()) * get_max< N_k... >();
	const static int _num_max = (_max == N_1) + (get_max< N_k... >() == _max) * get_num_max< N_k... >();

	const static int who = (_xor == 0) + 1;
	const static int how = (who == 1) * (_max - _max ^ _xor);
	const static int whence = (who == 1) * _num_max;
};