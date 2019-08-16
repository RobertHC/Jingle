//-----Includes--------------------
#include "Jingle.h"
//---------------------------------

//Our main class - a sandbox where anything can happen, a subclass of Application
class Sandbox : public Jingle::Application {

public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Jingle::Application* Jingle::CreateApplication() {
	return new Sandbox();
}