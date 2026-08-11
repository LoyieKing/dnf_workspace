# _ZN14CServerHandler16GetMonitorServerEi

`CServerHandler::GetMonitorServer(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806839c` | `0x91` | `0x805df66` | `0x8e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x64,0xc(%ebp)
 jg     <T> <_ZN14CServerHandler16GetMonitorServerEi+0x2f>
 mov    0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler16GetMonitorServerEi+0x2f>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CServerHandler16GetMonitorServerEi+0x34>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler16GetMonitorServerEi+0x4d>
-mov    0x8(%ebp),%ecx
+je     <T> <_ZN14CServerHandler16GetMonitorServerEi+0x4a>
 mov    0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-jmp    <T> <_ZN14CServerHandler16GetMonitorServerEi+0x8f>
+add    0x8(%ebp),%eax
+jmp    <T> <_ZN14CServerHandler16GetMonitorServerEi+0x8c>
 movl   $0xc7,0x8(%esp)
-movl   $"GetMonitorServer",0x4(%esp)
+movl   $"CServerHandler::GetMonitorServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Server Index Over Index : %d!\n",0x8(%esp)
-movl   $"./log/Server.log",0x4(%esp)
+movl   $"GetMonitorServer(%d) fail",0x8(%esp)
+movl   $"./log/ServerHandler",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetMonitorServer(int) */

CServerHandler * __thiscall
CServerHandler::_ZN14CServerHandler16GetMonitorServerEi(CServerHandler *this,int param_1)

{
  bool bVar1;
  char cVar2;
  CServerHandler *pCVar3;
  CMyFileLog local_14 [16];
  
  if (param_1 < 0x65) {
    cVar2 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)(this + param_1 * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_080683d0;
    }
  }
  bVar1 = false;
LAB_080683d0:
  if (bVar1) {
    pCVar3 = this + param_1 * 0x14;
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"GetMonitorServer",199);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Server.log","Server Index Over Index : %d!\n",param_1);
    pCVar3 = (CServerHandler *)0x0;
  }
  return pCVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 64 行）：

```cpp
CMonitorServer* CServerHandler::GetMonitorServer(int idx)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
        return &m_monitorServers[idx];
    CMyFileLog log("CServerHandler::GetMonitorServer", 0xc7);
    log("./log/ServerHandler", "GetMonitorServer(%d) fail", idx);
    return 0;
}
```
