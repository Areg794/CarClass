#include <iostream>

class PrototypeCar {
public:
	virtual void StartEngine() = 0;
	virtual void StopEngine() = 0;
	virtual void PressGas() = 0;
	virtual void Break() = 0;
	virtual ~PrototypeCar() {
	}
};

class Merc : public PrototypeCar {
public:
	void StartEngine() override {
		std::cout << "Call StartEngine function for Merc" << std::endl;
	}
	void StopEngine() override {
		std::cout << "Call StopEngine function for Merc" << std::endl;
	}
	void PressGas() override {
		std::cout << "Call PressGas function for Merc" << std::endl;
	}
	void Break() override {
		std::cout << "Call Break function for Merc" << std::endl;
	}
	~Merc() override {
	}
};

class BMW : public PrototypeCar {
public:
	void StartEngine() override {
		std::cout << "Call StartEngine function for BMW" << std::endl;
	}
	void StopEngine() override {
		std::cout << "Call StopEngine function for BMW" << std::endl;
	}
	void PressGas() override {
		std::cout << "Call PressGas function for BMW" << std::endl;
	}
	void Break() override {
		std::cout << "Call Break function for BMW" << std::endl;
	}
	~BMW() override {
	}
};

class Toyota : public PrototypeCar {
public:
	void StartEngine() override {
		std::cout << "Call StartEngine function for Toyota" << std::endl;
	}
	void StopEngine() override {
		std::cout << "Call StopEngine function for Toyota" << std::endl;
	}
	void PressGas() override {
		std::cout << "Call PressGas function for Toyota" << std::endl;
	}
	void Break() override {
		std::cout << "Call Break function for Toyota" << std::endl;
	}
	~Toyota() override {
	}
};

class Tesla : public PrototypeCar {
public:
	void StartEngine() override {
		std::cout << "Call StartEngine function for Tesla" << std::endl;
	}
	void StopEngine() override {
		std::cout << "Call StopEngine function for Tesla" << std::endl;
	}
	void PressGas() override {
		std::cout << "Call PressGas function for Tesla" << std::endl;
	}
	void Break() override {
		std::cout << "Call Break function for Tesla" << std::endl;
	}
	~Tesla() override {
	}
};

class Eraz : public PrototypeCar {
public:
	void StartEngine() override {
		std::cout << "Call StartEngine function for Eraz" << std::endl;
	}
	void StopEngine() override {
		std::cout << "Call StopEngine function for Eraz" << std::endl;
	}
	void PressGas() override {
		std::cout << "Call PressGas function for Eraz" << std::endl;
	}
	void Break() override {
		std::cout << "Call Break function for Eraz" << std::endl;
	}
	~Eraz() override {
	}
};

int main() {
	PrototypeCar* merc = new Merc;
	PrototypeCar* bmw = new BMW;
	PrototypeCar* toyota = new Toyota;
	PrototypeCar* tesla = new Tesla;
	PrototypeCar* eraz = new Eraz;

	merc->StartEngine();
	merc->StopEngine();
	merc->PressGas();
	merc->Break();

	bmw->StartEngine();
	bmw->StopEngine();
	bmw->PressGas();
	bmw->Break();

	toyota->StartEngine();
	toyota->StopEngine();
	toyota->PressGas();
	toyota->Break();

	tesla->StartEngine();
	tesla->StopEngine();
	tesla->PressGas();
	tesla->Break();

	eraz->StartEngine();
	eraz->StopEngine();
	eraz->PressGas();
	eraz->Break();

	delete merc;
	delete bmw;
	delete toyota;
	delete tesla;
	delete eraz;

	return 0;
}