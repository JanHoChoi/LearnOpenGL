// #include <glad/glad.h>
// #include <GLFW/glfw3.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> msg{"Hello", "World"};
	msg.push_back("!");

	for (const string &word : msg)
	{
		cout << word << " ";
	}

	// glfwInit();
	// glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	// glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	return 0;
}
