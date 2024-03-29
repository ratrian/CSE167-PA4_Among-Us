#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "Node.h"

#include <list>

class Transform : public Node
{
private:
	glm::mat4 M, mT, mR;
	std::list<Node*> children;

public:
	Transform();

	void addChild(Node* child);
	void removeChild(unsigned idx);
	void draw(GLuint shaderProgram, GLuint particleShaderProgram, glm::mat4 C, GLfloat currTime);
	void update(float deltaTime);
	void translate(glm::vec3 t);
	void rotate(float rotAngle, glm::vec3 rotAxis);
};

#endif