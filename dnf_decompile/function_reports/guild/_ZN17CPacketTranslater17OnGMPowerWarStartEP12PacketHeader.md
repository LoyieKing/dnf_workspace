# _ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader

`CPacketTranslater::OnGMPowerWarStart(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8080bba` | `0x26a` | `0x8077344` | `0x26a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,171 +1,170 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x4d>
 movl   $0x13f9,0x8(%esp)
 movl   $"OnGMPowerWarStart",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGMPowerWarStart : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x262>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
+test   %eax,%eax
+sete   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x261>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x262>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager18StartPowerWarEventEv>
-lea    -0x56(%ebp),%eax
+lea    -0x46(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-movl   $0x1e,-0x4c(%ebp)
+lea    -0x46(%ebp),%eax
+add    $0xa,%eax
+movl   $0x1e,(%eax)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x172>
-lea    -0x35(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x177>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x123>
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x128>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x11d>
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x122>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13a>
+jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13f>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13a>
-lea    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13f>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x14f>
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x154>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13a>
+jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x13f>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x189>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x18e>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x56(%ebp),%eax
+lea    -0x46(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x262>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x205>
+jne    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x208>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x140e,0x8(%esp)
+movl   $"OnGMPowerWarStart",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x140e,0x8(%esp)
-movl   $"OnGMPowerWarStart",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGMPowerWarStart Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x201>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x262>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1413,0x8(%esp)
 movl   $"OnGMPowerWarStart",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGMPowerWarStart Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x25a>
+jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x25d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader+0x262>
-nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGMPowerWarStart(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CDNFException *this;
  Packet_Monitor_Event_Start local_5a [10];
  undefined4 local_50;
  CMyFileLog local_48 [8];
  string local_40 [7];
  allocator local_39 [17];
  CServerHandler *local_28;
  CPowerManager *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08080be2 to 08080c34 has its CatchHandler @ 08080d43 */
    CMyFileLog::CMyFileLog(local_48,"OnGMPowerWarStart",0x13f9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Power","CPacketTranslater::OnGMPowerWarStart : 0 == m_pclApp");
  }
  else {
    local_24 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    cVar1 = CPowerManager::IsPowerWarOn(local_24);
    if (cVar1 == '\0') {
      CPowerManager::_ZN13CPowerManager18StartPowerWarEventEv(local_24);
      Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_5a);
      local_50 = 0x1e;
      local_28 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      if (local_28 == (CServerHandler *)0x0) {
        std::allocator<char>::allocator();
                    /* try { // try from 08080c86 to 08080c8a has its CatchHandler @ 08080cf4 */
        std::string::string(local_40,"CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n"
                            ,local_39);
        this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08080ca5 to 08080ca9 has its CatchHandler @ 08080cac */
        CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08080ce3 to 08080ce7 has its CatchHandler @ 08080cea */
        std::string::~string(local_40);
        std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08080d27 to 08080d3d has its CatchHandler @ 08080d43 */
        __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (local_28,(PacketHeader *)local_5a);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3466 行）：

```cpp
void CPacketTranslater::OnGMPowerWarStart(PacketHeader* pkt)
{
    (void)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x13f9, "./log/Power", "CPacketTranslater::OnGMPowerWarStart : 0 == m_pclApp");
        return;
    }
    try
    {
        CPowerManager* pm = m_pclApp->GetPowerManager();
        if (pm->IsPowerWarOn() == 0)
        {
            pm->StartPowerWarEvent();
            Packet_Monitor_Event_Start start;
            *(unsigned int*)((char*)&start + 0xa) = 0x1e;
            CServerHandler* handler = m_pclApp->Get_ServerHandler();
            if (handler == 0)
            {
                throw CDNFException(
                    "CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n");
            }
            handler->SendAllTcpGameServer(&start);
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGMPowerWarStart Exception Break", 0x140e, 0x1413);
}
```
