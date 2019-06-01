#include <iostream>

enum COLOR {R,G,B}; // Color charge
enum PAIRITY {A,nA}; // Particle or anti-particle
enum POLARITY {P,N}; // EM charge sign
enum GEN {U,C,T}; // Quark generation

class quark {
	//	6 bits total
	uint8_t color; //	Make 2 bits
	uint8_t pairity; //	Make 1 bit
	uint8_t polarity; //	Make 1 bit
	uint8_t gen; //	Make 2 bits
};

int main(int argc, char* argv[]) {

	//	This is a Proton
	quark proton_quark[3];

	//	Color = white
	//	CONSTANT
	proton_quark[0].color=R;
	proton_quark[1].color=G;
	proton_quark[2].color=B;
	//	Pairty = ?
	proton_quark[0].pairity=nA;
	proton_quark[1].pairity=nA;
	proton_quark[2].pairity=nA;
	//	Charge = +1
	//	CONSTANT
	proton_quark[0].polarity=P;
	proton_quark[1].polarity=P;
	proton_quark[2].polarity=N;
	//	Up, Up, Down
	//	CONSTANT
	proton_quark[0].gen=U;
	proton_quark[1].gen=U;
	proton_quark[2].gen=U;

	//	This is a Neutron
	quark neutron_quark[3];

	//	Color = white
	//	CONSTANT
	neutron_quark[0].color=R;
	neutron_quark[1].color=G;
	neutron_quark[2].color=B;
	//	Pairity = ?
	neutron_quark[0].pairity=nA;
	neutron_quark[1].pairity=nA;
	neutron_quark[2].pairity=nA;
	//	Charge = 0
	//	CONSTANT
	neutron_quark[0].polarity=P;
	neutron_quark[1].polarity=N;
	neutron_quark[2].polarity=N;
	//	Up, Down, Down
	//	CONSTANT
	neutron_quark[0].gen=U;
	neutron_quark[1].gen=U;
	neutron_quark[2].gen=U;

	//	Check all possible changes
	//	A change consists of a color exchange.
	//	Gain one. Lose another.
	//
	//	Change within a proton
	//	change within a neutron
	//	change between a P and N
	//	change between a P and P
	//	change between a N and N


	return 0;
}
