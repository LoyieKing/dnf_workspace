# _ZN14CServerHandler7ProcessEv

`CServerHandler::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8065cde` | `0x19d` | `0x805b50c` | `0x192` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,106 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x1414(%eax),%eax
-cmp    $0x3,%eax
-setg   %dl
-lea    0x1(%eax),%ecx
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %ecx,0x1414(%eax)
-test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x56>
+mov    %edx,0x1414(%eax)
+cmpl   $0x3,-0x14(%ebp)
+jle    <T> <_ZN14CServerHandler7ProcessEv+0x57>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%eax
 mov    0x8(%ebp),%edx
 add    $0x1404,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CManagerServer13SendHeartBeatEi>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1414(%eax)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0xff,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xfc>
-addl   $0x1,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+movl   $0xff,-0xc(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xf5>
+subl   $0x1,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer13IsValidServerEv>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x8b>
-addl   $0x14,-0x14(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xfc>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xf1>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x14(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xf1>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xf1>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer12OnDisconnectEv>
-mov    $0x100,%eax
-mov    %eax,%ebx
-sub    -0x10(%ebp),%ebx
 movl   $0x89,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    $0x100,%eax
+sub    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CServerHandler::Process() Index : %d!\tCall User Info!\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x14,-0x14(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+addl   $0x14,-0x10(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 setne  %al
-subl   $0x1,-0x10(%ebp)
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x6f>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x69>
 mov    0x8(%ebp),%eax
 add    $0x13ec,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CDBServer13IsValidServerEv>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x196>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x190>
 mov    0x8(%ebp),%eax
 add    $0x13ec,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CDBServer11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x197>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x190>
 mov    0x8(%ebp),%eax
 add    $0x13ec,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CDBServer19IsHeartBeatTimeOverEv>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x197>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x190>
 mov    0x8(%ebp),%eax
 add    $0x13ec,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CDBServer12OnDisconnectEv>
 movl   $0x9e,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CServerHandler::Process() DB Server Down!\n",0x8(%esp)
 movl   $"./log/DBServerErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x197>
-nop
-add    $0x34,%esp
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
  uint uVar2;
  int iVar3;
  bool bVar4;
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [8];
  CServerHandler *local_18;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(this + 0x1414);
  *(int *)(this + 0x1414) = iVar3 + 1;
  if (3 < iVar3) {
    uVar2 = GetServerGroupNo(this);
    CManagerServer::_ZN14CManagerServer13SendHeartBeatEi
              ((CManagerServer *)(this + 0x1404),uVar2 & 0xff);
    *(undefined4 *)(this + 0x1414) = 0;
  }
  local_18 = this;
  local_14 = 0xff;
  local_10 = 0;
  while (bVar4 = local_14 != 0, local_14 = local_14 + -1, bVar4) {
    local_10 = local_10 + 1;
    cVar1 = CGameServer::IsValidServer((CGameServer *)local_18);
    if (cVar1 == '\x01') {
      cVar1 = CGameServer::IsConnected((CGameServer *)local_18);
      if (cVar1 != '\0') {
        cVar1 = CGameServer::_ZN11CGameServer19IsHeartBeatTimeOverEv((CGameServer *)local_18);
        if (cVar1 != '\0') {
          CGameServer::OnDisconnect((CGameServer *)local_18);
          iVar3 = 0x100 - local_14;
          CMyFileLog::CMyFileLog(local_28,"Process",0x89);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_28,"./log/GameServer",
                     "CServerHandler::Process() Index : %d!\tCall User Info!\n",iVar3);
        }
      }
      local_18 = local_18 + 0x14;
    }
    else {
      local_18 = local_18 + 0x14;
    }
  }
  cVar1 = CDBServer::IsValidServer((CDBServer *)(this + 0x13ec));
  if (cVar1 == '\x01') {
    cVar1 = CDBServer::IsConnected((CDBServer *)(this + 0x13ec));
    if (cVar1 != '\0') {
      cVar1 = CDBServer::IsHeartBeatTimeOver((CDBServer *)(this + 0x13ec));
      if (cVar1 != '\0') {
        CDBServer::OnDisconnect((CDBServer *)(this + 0x13ec));
        CMyFileLog::CMyFileLog(local_20,"Process",0x9e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_20,"./log/DBServerErr","CServerHandler::Process() DB Server Down!\n");
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 52 行）：

```cpp
void CServerHandler::Process()
{
    CGameServer* p = m_servers;
    int left = 0x649b;
    int counter = 0;
    while (left != 0)
    {
        left--;
        counter++;
        if (p->IsValidServer())
        {
            if (p->IsConnected())
            {
                if (p->IsHeartBeatTimeOver())
                {
                    p->OnDisconnect();
                    DNF_LOG_SCOPE_LINE(0x5e, "./log/GameServer",
                        "Game Server Disconnect, Index : %d, channel no : %d, group no: %d\n",
                        counter, p->GetChannelNo() & 0xff, p->GetGroupNo() & 0xff);
                }
            }
        }
        p++;
    }
}
```
