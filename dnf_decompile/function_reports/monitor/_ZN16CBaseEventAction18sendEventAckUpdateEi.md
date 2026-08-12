# _ZN16CBaseEventAction18sendEventAckUpdateEi

`CBaseEventAction::sendEventAckUpdate(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a40e2` | `0x59` | `0x8092b7a` | `0x5b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
-lea    -0x1e(%ebp),%eax
+lea    -0x26(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Manager_Event_Trigger_AckC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+call   <T> <_Z20CApplicationInstancev>
 mov    %eax,-0x10(%ebp)
-call   <T> <_Z20CApplicationInstancev>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%eax
-mov    %eax,-0xc(%ebp)
-call   <T> <_Z20CApplicationInstancev>
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1e(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x14(%ebp)
+lea    -0x26(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBaseEventAction::sendEventAckUpdate(int) */

void __thiscall
CBaseEventAction::_ZN16CBaseEventAction18sendEventAckUpdateEi(CBaseEventAction *this,int param_1)

{
  CApplication *pCVar1;
  CServerHandler *pCVar2;
  Packet_Manager_Event_Trigger_Ack local_22 [10];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  Packet_Manager_Event_Trigger_Ack::Packet_Manager_Event_Trigger_Ack(local_22);
  local_18 = *(undefined4 *)(this + 4);
  local_14 = param_1;
  pCVar1 = (CApplication *)CApplicationInstance();
  pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(pCVar1);
  local_10 = CServerHandler::GetServerGroupNo(pCVar2);
  local_10 = local_10 & 0xff;
  pCVar1 = (CApplication *)CApplicationInstance();
  pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(pCVar1);
  CServerHandler::SendToDB(pCVar2,(PacketHeader *)local_22);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 46 行）：

```cpp
void CBaseEventAction::sendEventAckUpdate(int flag)
{
    Packet_Manager_Event_Trigger_Ack pkt;
    pkt.m_eventId = (unsigned int)m_eventId;
    pkt.m_flag = (unsigned int)flag;
    CApplication* app = (CApplication*)CApplicationInstance();
    CServerHandler* handler = app->Get_ServerHandler();
    pkt.m_group = (unsigned int)handler->GetServerGroupNo() & 0xff;
    handler->SendToDB(&pkt);
}
```
