#pragma once

#ifdef JG_PLATFORM_WINDOWS

//This is an extern. That means that defining it is some other file's problem, not this one's.
extern Jingle::Application* Jingle::CreateApplication();

//This is the main functin, which the built applications don't need to make anymore
int main(int argc, char** argv) {
	//Vanity print to screen
	printf("Jingle Engine Starting.\n");

	//auto does... something. Based on the surrounding code it looks like it's a shortcut for whatever gets passed in thorugh CreateApplication
	auto app = Jingle::CreateApplication();
	//Use the run method in the passed-in class (which happens to be a subclass of Application)
	app->Run();
	//Clean up after ourselves! Delete the heap-allocated "app" to prevent memory leaks.
	delete app;

	return 0;
}

#endif // JG_PLATFORM_WINDOWS
