#pragma once
#include "glm\glm\glm.hpp"

struct LightSource{
  //position in view space
  glm::vec4 position;
  // ambient color
  glm::vec4 ambient;
  // diffuse color
  glm::vec4 diffuse;
  // specular color
  glm::vec4 specular;
};

struct Material{
  // ambient color
  glm::vec4 ambient;
  // diffuse color
  glm::vec4 diffuse;
  // specular color
  glm::vec4 specular;
  // shininess
  float shininess;
};