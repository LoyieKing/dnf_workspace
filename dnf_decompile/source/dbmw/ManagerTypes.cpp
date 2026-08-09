#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/resource.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <sys/times.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

int getErrno();

// dbmw 全部实现已按类拆出到本目录各 *.cpp（见同目录文件）；
// 本文件仅保留为构建占位（build-dbmw.sh 按 glob 编译）。
