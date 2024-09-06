// template OpenGL file

#include <GLFW/glfw3.h>
// looks like this is already included in the GLFW directory
// #include <glad/glad.h>
#include <KHR/khrplatform.h>
#include <stdio.h>

int main(int argc, char **argv){

    printf("Is this thing working?\n");

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    printf("... I guess so!\n");

    return 0;
}
