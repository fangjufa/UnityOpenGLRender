#pragma once
// Simple vertex shader source
#define VERTEX_SHADER_SRC(ver, attr, varying)						\
	ver																\
	attr " highp vec3 pos;\n"										\
	attr " highp vec3 prePos;\n"										\
	attr " highp vec3 nextPos;\n"										\
	attr " lowp vec4 color;\n"										\
	"\n"															\
	varying " lowp vec4 ocolor;\n"									\
	"\n"															\
	"uniform highp float coeff;\n"								\
	"uniform highp mat4 worldMatrix;\n"								\
	"uniform highp mat4 projMatrix;\n"								\
	"uniform highp mat4 mvpMatrix;\n"								\
	"\n"															\
	"void main()\n"													\
	"{\n"															\
	"	gl_Position = (projMatrix * worldMatrix) * vec4(pos,1);\n"\
	"	//vec3 newPos = prePos + (nextPos-prePos)*coeff;\n"\
	"	//gl_Position = mvpMatrix * vec4(newPos,1);\n"\
	"	//ocolor = color;\n"											\
	"}\n"															\

// Simple fragment shader source
#define FRAGMENT_SHADER_SRC(ver, varying, outDecl, outVar)	\
	ver												\
	outDecl											\
	varying " lowp vec4 ocolor;\n"					\
	"\n"											\
	"void main()\n"									\
	"{\n"											\
	"	" outVar " = vec4(1,0,0,1);//ocolor;\n"						\
	"}\n"											\
//本来提示未申明的标记，加了一行空行就可以了，神奇。
