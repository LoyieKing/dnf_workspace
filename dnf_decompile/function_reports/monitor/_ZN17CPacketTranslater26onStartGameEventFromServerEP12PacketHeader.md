# _ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader

`CPacketTranslater::onStartGameEventFromServer(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8091ee2` | `0x1f4` | `0x807d43e` | `0x1f9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,122 +1,124 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x74>
 movl   $0x22e2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[Server Event] m_pclApp is null.",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x4,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%edx
 movl   $0x22e3,(%edx)
 movl   $0x0,0x8(%esp)
 movl   $&_ZTIi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0xe2>
 movl   $0x22e9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[Server Event] Packet_StartGameEventFromServer is null.",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x4,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%edx
 movl   $0x22ea,(%edx)
 movl   $0x0,0x8(%esp)
 movl   $&_ZTIi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_throw>
 lea    -0x52(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x48(%ebp)
+lea    -0x52(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x44(%ebp)
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x52(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 mov    -0x20(%ebp),%eax
 movzwl 0x18(%eax),%eax
 movzwl %ax,%edi
 mov    -0x20(%ebp),%eax
 movzwl 0x16(%eax),%eax
 movzwl %ax,%esi
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x22f2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[Server Event] start event. (event:%d, param:%d,%d)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1ec>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1f1>
 cmp    $0x1,%edx
-je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x186>
+je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x18b>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
 movl   $0x22f9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[6ThBirthday] error onStartGameEventFromServer line. (line:%u)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e7>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1ec>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onStartGameEventFromServer(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  CServerHandler *this;
  Packet_Monitor_Event_Start local_56 [10];
  undefined4 local_4c;
  undefined4 local_48;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [16];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08091f0a to 08092058 has its CatchHandler @ 0809205b */
    CMyFileLog::CMyFileLog(local_44,"onStartGameEventFromServer",0x22e2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/AradOnly","[Server Event] m_pclApp is null.");
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x22e3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&int::typeinfo,0);
  }
  local_24 = param_1;
  if (param_1 == (PacketHeader *)0x0) {
    CMyFileLog::CMyFileLog(local_3c,"onStartGameEventFromServer",0x22e9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/AradOnly","[Server Event] Packet_StartGameEventFromServer is null.");
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x22ea;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&int::typeinfo,0);
  }
  Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_56);
  local_4c = *(undefined4 *)(local_24 + 10);
  local_48 = *(undefined4 *)(local_24 + 0x16);
  this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (this,(PacketHeader *)local_56);
  uVar1 = *(ushort *)(local_24 + 0x18);
  uVar2 = *(ushort *)(local_24 + 0x16);
  uVar3 = *(undefined4 *)(local_24 + 10);
  CMyFileLog::CMyFileLog(local_34,"onStartGameEventFromServer",0x22f2);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_34,"./log/AradOnly","[Server Event] start event. (event:%d, param:%d,%d)",uVar3,
             (uint)uVar2,(uint)uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5494 行）：

```cpp
void CPacketTranslater::onStartGameEventFromServer(PacketHeader* pkt)
{try
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x22e2, "./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x22e3;
    }
    PacketHeader* p = pkt;
    if (p == 0)
    {
        DNF_LOG_SCOPE_LINE(0x22e9, "./log/AradOnly", "[Server Event] Packet_StartGameEventFromServer is null.");
        throw 0x22ea;
    }
    Packet_Monitor_Event_Start epkt;
    epkt.m_fieldA = ((RA_UINT<10>*)p)->v;
    *(unsigned int*)((char*)&epkt + 14) = ((RA_UINT<22>*)p)->v;
    m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&epkt);
    DNF_LOG_SCOPE_LINE(0x22f2,"./log/AradOnly", "[Server Event] start event. (event:%d, param:%d,%d)",
        ((RA_UINT<10>*)p)->v, ((RA_U16<22>*)p)->v,
        ((RA_U16<24>*)p)->v);


    }
    catch (int line)
    {
        DNF_LOG_SCOPE_LINE(0x22f9, "./log/AradOnly", "[6ThBirthday] error onStartGameEventFromServer line. (line:%u)", line);
    }
}
```
