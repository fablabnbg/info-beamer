#ifndef GLMAN_H
#define GLMAN_H

#if defined(GLFW)
#include <GL/glfw.h>
#define FULLSCREEN GLFW_FULLSCREEN
#define WINDOW GLFW_WINDOW
#define PRESS GLFW_KEYDOWN
#define SPACE GLFW_KEY_SPACE
#define ESC GLFW_KEY_ESC
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
#include <SDL2/SDL.h>
#define FULLSCREEN SDL_WINDOW_FULLSCREEN
#define WINDOW SDL_WINDOW_MAXIMIZED
#define GLFWCALL
#define GLFW_FSAA_SAMPLES 0
#define GLFW_MOUSE_CURSOR 0
#define GLFW_OPENED 0
#define PRESS SDL_KEYDOWN
#define KEY_SPACE SDLK_SPACE
#define KEY_ESC SDLK_ESCAPE
SDL_Window* window=NULL;
SDL_Renderer* renderer=NULL;
#define GetTime() (SDL_GetTicks()/1000.0)
#define SwapBuffers() SDL_GL_SwapWindow(window)
#define GetWindowParam(A) 1
#define windowInit() SDL_Init(SDL_INIT_TIMER|SDL_INIT_VIDEO)
#define OpenWindowHint(A,B)
#define OpenWindow(WIDTH, HEIGHT, R,G,B,A,D,S,MODE) (!SDL_CreateWindowAndRenderer(WIDTH,HEIGHT,MODE|SDL_WINDOW_OPENGL,&window,&renderer))
#define SetWindowTitle(A) SDL_SetWindowTitle(window,A)
#define SwapInterval SDL_GL_SetSwapInterval
#define SetWindowSizeCallback(A)
#define SetKeyCallback(A)
#define windowDisable(A)
#endif
#endif
