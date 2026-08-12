# _ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv

`TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805ca94` | `0xd0` | `0x80a6e40` | `0xd6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 movl   $0x37,0x8(%esp)
 movl   $&_ZZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TOD : order to RandomSelect main GameServer\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 call   <T> <_ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv+0xcd>
-lea    -0x2a(%ebp),%eax
+je     <T> <_ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv+0xd4>
+lea    -0x26(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_TOD_DoRandomSelectC1Ev>
 call   <T> <_Z20CApplicationInstancev>
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20getfirstLinkedServerEv>
 mov    %eax,-0xc(%ebp)
 movl   $0x40,0x8(%esp)
 movl   $&_ZZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"TOD : main GameServerChannel %u\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 movzbl %al,%eax
-lea    -0x2a(%ebp),%edx
+lea    -0x26(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader>
-jmp    <T> <_ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv+0xce>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC() */

void TowerOfDespairReloadAPC_Task::
     _ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv(void)

{
  char cVar1;
  CApplication *this;
  Packet_TOD_DoRandomSelect local_2e [10];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  CServerHandler *local_14;
  undefined4 local_10;
  
  CMyFileLog::CMyFileLog(local_24,"SendRequest_DoRandomSelectUserAPC",0x37);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_24,"./log/GameServer","TOD : order to RandomSelect main GameServer\n");
  cVar1 = _ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv();
  if (cVar1 == '\0') {
    Packet_TOD_DoRandomSelect::Packet_TOD_DoRandomSelect(local_2e);
    this = (CApplication *)CApplicationInstance();
    local_14 = (CServerHandler *)CApplication::Get_ServerHandler(this);
    local_10 = CServerHandler::_ZN14CServerHandler20getfirstLinkedServerEv(local_14);
    CMyFileLog::CMyFileLog(local_1c,"SendRequest_DoRandomSelectUserAPC",0x40);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_1c,"./log/GameServer","TOD : main GameServerChannel %u\n",local_10);
    CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
              (local_14,(uchar)local_10,(PacketHeader *)local_2e);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp](source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp)（约第 46 行）：

```cpp
void TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC()
{
    DNF_LOG_SCOPE_LINE(0x37, "./log/GameServer", "TOD : order to RandomSelect main GameServer\n");
    if (!isReturnedMessage())
    {
        Packet_TOD_DoRandomSelect pkt;
        CApplication* app = (CApplication*)CApplicationInstance();
        CServerHandler* handler = app->Get_ServerHandler();
        unsigned int first = handler->getfirstLinkedServer();
        CMyFileLog log2(__FUNCTION__, 0x40);
        log2("./log/GameServer", "TOD : main GameServerChannel %u\n", first);
        handler->SendToGameServer((unsigned char)first, &pkt);
    }
}
```
