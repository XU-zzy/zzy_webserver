//
// Created by jojo on 2020/5/3.
//

#ifndef JOJO_WEBSERVER_UTIL_H
#define JOJO_WEBSERVER_UTIL_H


#define LISTENQ 1024 // 监听队列长度,操作系统默认值为SOMAXCONN

namespace utils {
    int createListenFd(int port); // 创建监听描述符
    int setNonBlocking(int fd); // 设置非阻塞模式
}


#endif
