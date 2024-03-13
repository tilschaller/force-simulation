const char *vertexShaderSource = 
    "#version 330 core\n"

    "layout (location = 0) in vec3 aPos;\n"

    "out vec3 ourColor;\n"

    "uniform mat4 model;\n"
    "uniform mat4 view;\n"
    "uniform mat4 projection;\n"

    "void main()\n"
    "{\n"
    "   gl_Position = projection * view * model * vec4(aPos, 1.0);\n"
    "}\0";