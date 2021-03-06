#version 150

in vec4 vertexPosition;
in vec3 vertexNormal;
in vec2 vertexTexcoords;

out vec4 pixel;
vec4 blinnPhongReflection(vec4 position, vec3 normal);

uniform sampler2D tex;
uniform bool lighting;
uniform bool showTexture;

void main(void){ 
	pixel = vec4(1.f, 1.f, 1.f, 1.f);
	
	if(showTexture == true) {
		pixel = texture(tex, vertexTexcoords);
	}
	
	if(lighting == true) {
		pixel *= blinnPhongReflection(vertexPosition, vertexNormal);
	}		
}
