# _ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader

`CPacketTranslater::onEndGameEventFromServer(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80920d6` | `0x1cd` | `0x807d63e` | `0x1cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x73>
 movl   $0x2304,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[Server Event] m_pclApp is null.",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x4,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%edx
 movl   $0x2305,(%edx)
 movl   $0x0,0x8(%esp)
 movl   $&_ZTIi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0xe1>
+cmpl   $0x0,0x8(%ebp)
+jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0xdb>
 movl   $0x230b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[Server Event] Packet_StopGameEventFromServer is null.",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x4,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%edx
 movl   $0x230c,(%edx)
 movl   $0x0,0x8(%esp)
 movl   $&_ZTIi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_throw>
 lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x34(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x3e(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    0xa0(%eax),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x3e(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x2312,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[Server Event] end event. (event:%d)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1c6>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1c4>
 cmp    $0x1,%edx
-je     <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x160>
+je     <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x15e>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 movl   $0x2316,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[6ThBirthday] error onEndGameEventFromServer line. (line:%u)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1c1>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1bf>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onEndGameEventFromServer(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  CServerHandler *this;
  Packet_Monitor_Event_End local_42 [10];
  undefined4 local_38;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [16];
  PacketHeader *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 080920fd to 08092226 has its CatchHandler @ 08092229 */
    CMyFileLog::CMyFileLog(local_34,"onEndGameEventFromServer",0x2304);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/AradOnly","[Server Event] m_pclApp is null.");
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x2305;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_14 = param_1;
  if (param_1 == (PacketHeader *)0x0) {
    CMyFileLog::CMyFileLog(local_2c,"onEndGameEventFromServer",0x230b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/AradOnly","[Server Event] Packet_StopGameEventFromServer is null.");
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x230c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_42);
  local_38 = *(undefined4 *)(local_14 + 10);
  this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (this,(PacketHeader *)local_42);
  uVar1 = *(undefined4 *)(local_14 + 10);
  CMyFileLog::CMyFileLog(local_24,"onEndGameEventFromServer",0x2312);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_24,"./log/AradOnly","[Server Event] end event. (event:%d)",uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5492 行）：

```cpp
void CPacketTranslater::onEndGameEventFromServer(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x2304, "./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x2305;
    }
    if (pkt == 0)
    {
        DNF_LOG_SCOPE_LINE(0x230b, "./log/AradOnly", "[Server Event] Packet_StopGameEventFromServer is null.");
        throw 0x230c;
    }
    Packet_Monitor_Event_End epkt;
    epkt.m_fieldA = ((RA_UINT<10>*)pkt)->v;
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllTcpGameServer(&epkt);
    DNF_LOG_SCOPE_LINE(0x2312,"./log/AradOnly", "[Server Event] end event. (event:%d)",
        ((RA_UINT<10>*)pkt)->v);


    }
    catch (int line)
    {
        DNF_LOG_SCOPE_LINE(0x2316, "./log/AradOnly", "[6ThBirthday] error onEndGameEventFromServer line. (line:%u)", line);
    }
}
```
