# _ZN14CServerHandler24IsConnectedMonitorServerEh

`CServerHandler::IsConnectedMonitorServer(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8068232` | `0xa4` | `0x805e62c` | `0x9f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 cmpb   $0x64,-0x1c(%ebp)
-ja     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x37>
+ja     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x36>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x37>
+je     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x36>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x3c>
+jmp    <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x3b>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x5b>
+je     <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x5a>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer11IsConnectedEv>
-jmp    <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x9e>
-movzbl -0x1c(%ebp),%ebx
+jmp    <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh+0x9d>
 movl   $0x91,0x8(%esp)
-movl   $"IsConnectedMonitorServer",0x4(%esp)
+movl   $"CServerHandler::IsConnectedMonitorServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Server Index Over Index : %d!\n",0x8(%esp)
-movl   $"./log/Server.log",0x4(%esp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"IsConnectedMonitorServer(%d) fail",0x8(%esp)
+movl   $"./log/ServerHandler",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::IsConnectedMonitorServer(unsigned char) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler24IsConnectedMonitorServerEh(CServerHandler *this,uchar param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_14 [12];
  
  if (param_1 < 0x65) {
    cVar2 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)(this + (uint)param_1 * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0806826e;
    }
  }
  bVar1 = false;
LAB_0806826e:
  if (bVar1) {
    uVar3 = CMonitorServer::IsConnected((CMonitorServer *)(this + (uint)param_1 * 0x14));
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"IsConnectedMonitorServer",0x91);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Server.log","Server Index Over Index : %d!\n",(uint)param_1);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 191 行）：

```cpp
char CServerHandler::IsConnectedMonitorServer(unsigned char idx) { return 0; }
```
