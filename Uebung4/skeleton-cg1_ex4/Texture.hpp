/* ----------------------------------------------------------------
   name:           Texture.hpp
   purpose:        cg1_ex4 ws2014/15 texturing tutorial
   version:	   SKELETON CODE
   TODO:           nothing (see Texture.cpp)
   author:         katrin lang
                   computer graphics
                   tu berlin
   ------------------------------------------------------------- */

#pragma once

#include <string>

#include "glm/glm.hpp"


namespace Common{

  void loadShaders();
  // common keyboard callback
  void keyPressed(unsigned char key, int x, int y);
};

namespace Texture{
  
  extern int menuOptions[];
  extern std::string menuText[];
  extern int numOptions;
  extern glm::vec2 previousMouse; // previous mouse position

  void display(void);
  void reshape(int width, int height);
  void mousePressed(int button, int state, int x, int y);
  void mouseDragged(int x, int y);
  void mouseMoved(int x, int y);
  void menu(int value);
};

namespace World{

  extern int menuOptions[];
  extern std::string menuText[];
  extern int numOptions;
  extern glm::vec2 previousMouse; // previous mouse position
  
  void display(void);
  void reshape(int width, int height);
  void mousePressed(int button, int state, int x, int y);
  void mouseDragged(int x, int y);
  void menu(int value);
};
