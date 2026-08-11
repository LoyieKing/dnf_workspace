# _ZN14CServerHandler14SetConnectFlagEhb

`CServerHandler::SetConnectFlag(unsigned char, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80682d6` | `0xad` | `0x805e4d2` | `0xa8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 cmpb   $0x64,-0x1c(%ebp)
-ja     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3d>
+ja     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3c>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3d>
+je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3c>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x42>
+jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x41>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x69>
+je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x68>
 movzbl -0x20(%ebp),%ecx
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer11SetConnFlagEb>
-jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0xa7>
-movzbl -0x1c(%ebp),%ebx
+jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0xa6>
 movl   $0xa7,0x8(%esp)
-movl   $"SetConnectFlag",0x4(%esp)
+movl   $"CServerHandler::SetConnectFlag",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Monitor Server Index Over Index : %d!\n",0x8(%esp)
-movl   $"./log/Server.log",0x4(%esp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"SetConnectFlag(%d) fail",0x8(%esp)
+movl   $"./log/ServerHandler",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SetConnectFlag(unsigned char, bool) */

void __thiscall
CServerHandler::_ZN14CServerHandler14SetConnectFlagEhb
          (CServerHandler *this,uchar param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  CMyFileLog local_14 [12];
  
  if (param_1 < 0x65) {
    cVar2 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)(this + (uint)param_1 * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08068318;
    }
  }
  bVar1 = false;
LAB_08068318:
  if (bVar1) {
    CMonitorServer::SetConnFlag((CMonitorServer *)(this + (uint)param_1 * 0x14),param_2);
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"SetConnectFlag",0xa7);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Server.log","Monitor Server Index Over Index : %d!\n",(uint)param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 192 行）：

```cpp
void CServerHandler::SetConnectFlag(unsigned char idx, bool flag) {}
```
