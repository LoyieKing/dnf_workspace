# _ZN14CServerHandler7ProcessEv

`CServerHandler::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80680b6` | `0xc6` | `0x805deba` | `0xcb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x65,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xa2>
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xab>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x31>
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x32>
 addl   $0x14,-0x10(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xa2>
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xab>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x9e>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xa7>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer19IsHeartBeatTimeOverEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x9e>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xa7>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12OnDisconnectEv>
-mov    $0x66,%eax
-mov    %eax,%ebx
-sub    -0xc(%ebp),%ebx
 movl   $0x55,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    $0x66,%eax
+sub    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CServerHandler::Process() Index : %d!\n",0x8(%esp)
 movl   $"./log/MonitorDown",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x14,-0x10(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 setne  %al
 subl   $0x1,-0xc(%ebp)
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x19>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x18>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler23CheckTcpServerHeartbeatEv>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::Process() */

void __thiscall CServerHandler::_ZN14CServerHandler7ProcessEv(CServerHandler *this)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  CMyFileLog local_1c [8];
  CServerHandler *local_14;
  int local_10;
  
  local_14 = this;
  local_10 = 0x65;
  while (bVar3 = local_10 != 0, local_10 = local_10 + -1, bVar3) {
    cVar1 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)local_14);
    if (cVar1 == '\x01') {
      cVar1 = CMonitorServer::IsConnected((CMonitorServer *)local_14);
      if (cVar1 != '\0') {
        cVar1 = CMonitorServer::IsHeartBeatTimeOver((CMonitorServer *)local_14);
        if (cVar1 != '\0') {
          CMonitorServer::OnDisconnect((CMonitorServer *)local_14);
          iVar2 = 0x66 - local_10;
          CMyFileLog::CMyFileLog(local_1c,"Process",0x55);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_1c,"./log/MonitorDown","CServerHandler::Process() Index : %d!\n",iVar2);
        }
      }
      local_14 = local_14 + 0x14;
    }
    else {
      local_14 = local_14 + 0x14;
    }
  }
  CheckTcpServerHeartbeat(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 74 行）：

```cpp
void CServerHandler::Process()
{
    CMonitorServer* p = m_monitorServers;
    int i = 0x65;
    while (i-- != 0)
    {
        if (!p->IsValidMonitorServer())
        {
            p++;
            continue;
        }
        if (p->IsConnected())
        {
            if (p->IsHeartBeatTimeOver())
            {
                p->OnDisconnect();
                CMyFileLog log(__FUNCTION__, 0x55);
                log("./log/MonitorDown", "CServerHandler::Process() Index : %d!\n", 0x66 - i);
            }
        }
        p++;
    }
    CheckTcpServerHeartbeat();
}
```
