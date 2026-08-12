# _ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader

`CPacketTranslater::OnGMPowerWarEnd(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8080e24` | `0x278` | `0x807711c` | `0x278` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,175 +1,175 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x4d>
 movl   $0x1426,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGMPowerWarEnd : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x270>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x26f>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager17SendPowerWarScoreEv>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16EndPowerWarEventEv>
-lea    -0x52(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
 movl   $0x1e,-0x48(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x180>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x131>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x12b>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x148>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x148>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x15d>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x148>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x197>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x52(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x270>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x213>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x143d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGMPowerWarEnd Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x20c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x270>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1442,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGMPowerWarEnd Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x268>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader+0x270>
 nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGMPowerWarEnd(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CDNFException *this;
  Packet_Monitor_Event_End local_56 [10];
  undefined4 local_4c;
  CMyFileLog local_48 [8];
  string local_40 [7];
  allocator local_39 [17];
  CServerHandler *local_28;
  CPowerManager *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08080e4c to 08080eac has its CatchHandler @ 08080fbb */
    CMyFileLog::CMyFileLog(local_48,"OnGMPowerWarEnd",0x1426);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Power","CPacketTranslater::OnGMPowerWarEnd : 0 == m_pclApp");
  }
  else {
    local_24 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    cVar1 = CPowerManager::IsPowerWarOn(local_24);
    if (cVar1 == '\x01') {
      CPowerManager::_ZN13CPowerManager17SendPowerWarScoreEv(local_24);
      CPowerManager::_ZN13CPowerManager16EndPowerWarEventEv(local_24);
      Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_56);
      local_4c = 0x1e;
      local_28 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      if (local_28 == (CServerHandler *)0x0) {
        std::allocator<char>::allocator();
                    /* try { // try from 08080efe to 08080f02 has its CatchHandler @ 08080f6c */
        std::string::string(local_40,"CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n"
                            ,local_39);
        this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08080f1d to 08080f21 has its CatchHandler @ 08080f24 */
        CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08080f5b to 08080f5f has its CatchHandler @ 08080f62 */
        std::string::~string(local_40);
        std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08080f9f to 08080fb5 has its CatchHandler @ 08080fbb */
        __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (local_28,(PacketHeader *)local_56);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3647 行）：

```cpp
void CPacketTranslater::OnGMPowerWarEnd(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1426, "./log/Power", "CPacketTranslater::OnGMPowerWarEnd : 0 == m_pclApp");
        return;
    }
    try
    {
        CServerHandler* handler;
        CPowerManager* pm = m_pclApp->GetPowerManager();
        if (!pm->IsPowerWarOn())
        {
            return;
        }
        pm->SendPowerWarScore();
        pm->EndPowerWarEvent();
        Packet_Monitor_Event_End end;
        end.m_fieldA = 0x1e;
        if ((handler = m_pclApp->Get_ServerHandler()) == 0)
        {
            throw CDNFException(
                "CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n");
        }
        handler->SendAllTcpGameServer(&end);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGMPowerWarEnd Exception Break", 0x143d, 0x1442);
}
```
