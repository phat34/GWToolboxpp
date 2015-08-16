#include "../API/APIMain.h"
#include "../include/OSHGui/OSHGui.hpp"
#include "../include/OSHGui/Drawing/Direct3D9/Direct3D9Renderer.hpp"

#include "Pcons.h"

using namespace OSHGui;

class GWToolbox {

public:
	// will create a new toolbox object and run it, can be used as argument for createThread
	static void threadEntry(HMODULE mod);

private:
	GWToolbox(HMODULE mod) : m_dllmodule(mod) {};

	// Executes setup and main loop of toolbox. 
	void exec();

	// Self destructs
	void destroy();

	// ??? (also why a private accessor to a private field? xD)
	bool isActive();
	// ???
	bool m_Active;
	// ???
	HMODULE m_dllmodule;

	
};