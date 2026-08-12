# _ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj

`COnTimeEventManager::GetCurEventItemByDBMW(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4bc0` | `0x85` | `0x809a11e` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x28(%eax)
 lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Req_Ontime_Event_ItemC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x82>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x83>
+je     <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x85>
 movl   $0xa,0x8(%esp)
 movl   $0x2345,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer16makePacketHeaderEtt>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
-jmp    <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x83>
+jmp    <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x86>
+nop
+jmp    <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj+0x86>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::GetCurEventItemByDBMW(unsigned int, unsigned int) */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj
          (COnTimeEventManager *this,uint param_1,uint param_2)

{
  CServerHandler *this_00;
  Packet_Req_Ontime_Event_Item local_22 [10];
  CTcpDBServer *local_18;
  char *local_14;
  char *local_10;
  
  *(uint *)(this + 0x24) = param_1;
  *(uint *)(this + 0x28) = param_2;
  Packet_Req_Ontime_Event_Item::Packet_Req_Ontime_Event_Item(local_22);
  if (*(int *)this != 0) {
    this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
    local_18 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(this_00);
    if (local_18 != (CTcpDBServer *)0x0) {
      local_14 = (char *)CTcpDBServer::_ZN12CTcpDBServer16makePacketHeaderEtt(local_18,0x2345,10);
      local_10 = local_14;
      CTcpDBServer::SendToServer(local_18,local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 174 行）：

```cpp
void COnTimeEventManager::GetCurEventItemByDBMW(unsigned int a, unsigned int b)
{
    m_field24 = (int)a;
    m_field28 = (int)b;
    Packet_Req_Ontime_Event_Item pkt;
    if (m_app == 0)
    {
        return;
    }
    CTcpDBServer* db = m_app->Get_ServerHandler()->GetTcpDBServer();
    if (db == 0)
    {
        return;
    }
    char* buf = db->makePacketHeader(0x2345, 10);
    char* buf2 = buf;
    db->SendToServer(buf2);
}
```
