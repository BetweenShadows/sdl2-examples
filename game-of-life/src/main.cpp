#include "app.hpp"

int main()
{
	App *app = new App();
	app->Run();
	delete app;
	return EXIT_SUCCESS;
}