//
//  Tutorial 01.cpp
//  OpenGLLearning
//
//  Created by Xuanzhi Zhang on 16/7/12.
//  Copyright © 2016年 Xuanzhi Zhang. All rights reserved.
//

#include <GL/freeglut.h>

static void RenderSceneCB() {
    glClear(GL_COLOR_BUFFER_BIT);    // 使用设置的颜色清除帧缓存
    glutSwapBuffers();    // 切换 backbuffer 和 frontbuffer
}

static void InitializeGlutCallbacks() {
    glutDisplayFunc(RenderSceneCB);    // 回调函数
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);    // 初始化 GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);    // 设置 double buffering 和 color buffer
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tutorial 01");

    InitializeGlutCallbacks();

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);    // 设置 OpenGL 状态机，设置清除帧缓存时要用到的颜色
    
    glutMainLoop();    // 开启 GLUT 内部循环，监听来自窗口系统的时间并通过设置的回调函数传递给 GLUT
    
    return 0;
}
