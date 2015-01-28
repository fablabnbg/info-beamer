#ifndef GLMAN_H
#define GLMAN_H

#if defined(GLFW)
#include <GL/glfw.h>
#define GetTime glfwGetTime
#define SwapBuffers glfwSwapBuffers
#define GetWindowParam glfwGetWindowParam
#define windowInit glfwInit
#define OpenWindowHint glfwOpenWindowHint
#define OpenWindow glfwOpenWindow
#define SetWindowTitle glfwSetWindowTitle
#define SwapInterval glfwSwapInterval
#define SetWindowSizeCallback glfwSetWindowSizeCallback
#define SetKeyCallback glfwSetKeyCallback
#define windowDisable glfwDisable

#elif defined(SDL)
#include <SDL/SDL2.h>
#endif
#endif
