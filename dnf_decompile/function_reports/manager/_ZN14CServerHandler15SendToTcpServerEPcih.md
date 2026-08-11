# _ZN14CServerHandler15SendToTcpServerEPcih

`CServerHandler::SendToTcpServer(char*, int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806896e` | `0x3c` | `0x805e7fa` | `0x3f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 movzbl -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN14CServerHandler15SendToTcpServerEPcih+0x3a>
+je     <T> <_ZN14CServerHandler15SendToTcpServerEPcih+0x3c>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer12SendToServerEPc>
+jmp    <T> <_ZN14CServerHandler15SendToTcpServerEPcih+0x3d>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendToTcpServer(char*, int, unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler15SendToTcpServerEPcih
          (CServerHandler *this,char *param_1,int param_2,uchar param_3)

{
  CTcpServer *this_00;
  
  this_00 = (CTcpServer *)GetTcpServer(this,param_3);
  if (this_00 != (CTcpServer *)0x0) {
    CTcpServer::SendToServer(this_00,param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 202 行）：

```cpp
void CServerHandler::SendToTcpServer(char* buf, int len, unsigned char idx)
{
    CTcpServer* server = GetTcpServer(idx);
    if (!server)
        return;
    server->SendToServer(buf);
}
```
