# _ZN9TCPSocket7connectEPKct

`TCPSocket::connect(char const*, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804f86e` | `0xdc` | `0x808538e` | `0xdc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0x2c(%ebp)
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movw   $0x2,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_addr>
 mov    %eax,-0x18(%ebp)
 movzwl -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <htons>
 mov    %ax,-0x1a(%ebp)
 movl   $0x10,-0xc(%ebp)
 mov    -0xc(%ebp),%ecx
 lea    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <connect>
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN9TCPSocket7connectEPKct+0xaa>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 movzwl -0x2c(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"CONNECTION FAIL IP =%s, PORT =%d, reason =%s",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
 jmp    <T> <_ZN9TCPSocket7connectEPKct+0xda>
+lea    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    0x8(%ebp),%edx
+add    $0x14,%edx
+movl   $0x4,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
 mov    0x8(%ebp),%eax
-add    $0x14,%eax
-movl   $0x4,0x8(%esp)
-lea    -0x1c(%ebp),%edx
-add    $0x4,%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
 movzwl -0x1a(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    %dx,0x18(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::connect(char const*, unsigned short) */

bool __thiscall TCPSocket::_ZN9TCPSocket7connectEPKct(TCPSocket *this,char *param_1,ushort param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  sockaddr local_20;
  undefined4 local_10;
  
  memset(&local_20,0,0x10);
  local_20.sa_family = 2;
  local_20.sa_data._2_4_ = inet_addr(param_1);
  local_20.sa_data._0_2_ = htons(param_2);
  local_10 = 0x10;
  iVar1 = connect(*(int *)this,&local_20,0x10);
  if (-1 < iVar1) {
    memcpy(this + 0x14,local_20.sa_data + 2,4);
    *(undefined2 *)(this + 0x18) = local_20.sa_data._0_2_;
  }
  else {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    printf("CONNECTION FAIL IP =%s, PORT =%d, reason =%s",param_1,(uint)param_2,pcVar3);
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp](source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp)（约第 55 行）：

```cpp
char TCPSocket::connect(const char* ip, unsigned short port)
{
    sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = 2;
    addr.sin_addr.s_addr = inet_addr(ip);
    addr.sin_port = htons(port);
    int len = 0x10;
    if (::connect(m_fd, (sockaddr*)&addr, len) < 0)
    {
        printf("CONNECTION FAIL IP =%s, PORT =%d, reason =%s", ip, (unsigned int)port,
               strerror(errno));
        return 0;
    }
    memcpy((void*)((char*)this + 0x14), (void*)((char*)&addr + 4), 4);
    ((RA_U16<24>*)this)->v = addr.sin_port;
    return 1;
}
```
