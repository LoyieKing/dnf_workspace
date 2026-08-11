# _ZN14CServerHandler7ProcessEv

`CServerHandler::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8056702` | `0xe8` | `0x8054566` | `0x107` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x649b,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xce>
-addl   $0x1,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+movl   $0x649b,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xf2>
+addl   $0x1,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer13IsValidServerEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x40>
-addl   $0x14,-0x14(%ebp)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xce>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0x3e>
+addl   $0x14,-0x1c(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xf2>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xca>
-mov    -0x14(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xee>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xca>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xee>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer12OnDisconnectEv>
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer10GetGroupNoEv>
-movzbl %al,%esi
-mov    -0x14(%ebp),%eax
+movzbl %al,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer12GetChannelNoEv>
-movzbl %al,%ebx
+movzbl %al,%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x5e,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    -0x10(%ebp),%eax
+movzbl %al,%edx
 mov    -0xc(%ebp),%eax
+and    $0xff,%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Game Server Disconnect, Index : %d, channel no : %d, group no: %d\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x14,-0x14(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+addl   $0x14,-0x1c(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 setne  %al
-subl   $0x1,-0x10(%ebp)
+subl   $0x1,-0x18(%ebp)
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x21>
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x1f>
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
  uint uVar3;
  bool bVar4;
  CMyFileLog local_20 [8];
  CServerHandler *local_18;
  int local_14;
  int local_10;
  
  local_18 = this;
  local_14 = 0x649b;
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
          uVar2 = CGameServer::GetGroupNo((CGameServer *)local_18);
          uVar3 = CGameServer::GetChannelNo((CGameServer *)local_18);
          CMyFileLog::CMyFileLog(local_20,"Process",0x5e);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_20,"./log/GameServer",
                     "Game Server Disconnect, Index : %d, channel no : %d, group no: %d\n",local_10,
                     uVar3 & 0xff,uVar2 & 0xff);
        }
      }
      local_18 = local_18 + 0x14;
    }
    else {
      local_18 = local_18 + 0x14;
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
    while (left-- != 0)
    {
        counter++;
        if (!p->IsValidServer())
        {
            p++;
            continue;
        }
        if (p->IsConnected())
        {
            if (p->IsHeartBeatTimeOver())
            {
                p->OnDisconnect();
                int groupNo = p->GetGroupNo();
                int channelNo = p->GetChannelNo();
                DNF_LOG_SCOPE_LINE(0x5e, "./log/GameServer",
                    "Game Server Disconnect, Index : %d, channel no : %d, group no: %d\n",
                    counter, channelNo & 0xff, groupNo & 0xff);
            }
        }
        p++;
    }
}
```
