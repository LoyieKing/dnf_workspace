# _ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader

`CPacketTranslater::OnHeartBeat(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8057ca4` | `0x30f` | `0x8053716` | `0x310` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,217 +1,216 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x4c,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x1c(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x303>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x1c(%eax),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-mov    %al,-0x1e(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xb(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0x64,-0x1d(%ebp)
-ja     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x133>
-cmpb   $0x0,-0x1e(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x133>
-cmpb   $0xbe,-0x1e(%ebp)
-ja     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x133>
-movzbl -0x1e(%ebp),%edx
-movzbl -0x1d(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler14ResetHeartBeatEhh>
-movzbl -0x1e(%ebp),%edx
-movzbl -0x1d(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler21IsConnectedGameServerEhh>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x111>
-movzbl -0x1e(%ebp),%edx
-movzbl -0x1d(%ebp),%eax
-movl   $0x1,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler14SetConnectFlagEhhb>
-movzbl -0x1e(%ebp),%ecx
-movzbl -0x1d(%ebp),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication14FindGameServerEii>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x111>
-lea    -0x4e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN31Packet_CutOff_UDP_Call_UserInfoC1Ev>
-movzwl -0x4c(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x4e(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CGameServer16SendToGameServerEPci>
-movzbl -0x1e(%ebp),%edx
-movzbl -0x1d(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-movl   $"Server(%dGroup:%dChennel) Heart Beat Arrived.\n",(%esp)
-call   <T> <printf>
-nop
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x307>
-lea    -0x3d(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+mov    %al,-0x22(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
+mov    %al,-0x21(%ebp)
+cmpb   $0x64,-0x21(%ebp)
+ja     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x54>
+cmpb   $0x0,-0x22(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x54>
+cmpb   $0xbe,-0x22(%ebp)
+jbe    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x11d>
+lea    -0x23(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x23(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Channel Index Error\n",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1aa>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xcb>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1a4>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xc5>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1c1>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xe2>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1c1>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xe2>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1d6>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xfa>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1c1>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xe2>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
+lea    -0x23(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1f9>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x200>
+lea    -0x23(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+movzbl -0x22(%ebp),%ecx
+movzbl -0x21(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x1c(%eax),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler14ResetHeartBeatEhh>
+movzbl -0x22(%ebp),%ecx
+movzbl -0x21(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x1c(%eax),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler21IsConnectedGameServerEhh>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1df>
+movzbl -0x22(%ebp),%ecx
+movzbl -0x21(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x1c(%eax),%eax
+movl   $0x1,0xc(%esp)
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler14SetConnectFlagEhhb>
+movzbl -0x22(%ebp),%ecx
+movzbl -0x21(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication14FindGameServerEii>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1df>
+lea    -0x32(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31Packet_CutOff_UDP_Call_UserInfoC1Ev>
+lea    -0x32(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edx
+lea    -0x32(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGameServer16SendToGameServerEPci>
+movzbl -0x22(%ebp),%edx
+movzbl -0x21(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+movl   $"Server(%dGroup:%dChennel) Heart Beat Arrived.\n",(%esp)
+call   <T> <printf>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x29b>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2a2>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xea,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x29b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x307>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xf0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2fc>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x303>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x307>
-nop
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x307>
-nop
-add    $0x5c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnHeartBeat(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader(PacketHeader *param_1)

{
  char cVar1;
  CDNFException *this;
  Packet_CutOff_UDP_Call_UserInfo local_52 [2];
  ushort local_50;
  string local_48 [7];
  allocator local_41 [17];
  CGameServer *local_30;
  PacketHeader *local_2c;
  CServerHandler *local_28;
  PacketHeader local_22;
  PacketHeader local_21;
  
  local_2c = param_1;
  if ((m_pclApp != (CApplication *)0x0) &&
     (local_28 = *(CServerHandler **)(m_pclApp + 0x1c), local_28 != (CServerHandler *)0x0)) {
    local_22 = param_1[10];
    local_21 = param_1[0xb];
    if ((100 < (byte)local_21) || ((local_22 == (PacketHeader)0x0 || (0xbe < (byte)local_22)))) {
      std::allocator<char>::allocator();
                    /* try { // try from 08057df7 to 08057dfb has its CatchHandler @ 08057e65 */
      std::string::string(local_48,"CPacketTranslater::OnHeartBeat() Channel Index Error\n",local_41
                         );
      this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08057e16 to 08057e1a has its CatchHandler @ 08057e1d */
      CDNFException::CDNFException(this,local_48);
                    /* try { // try from 08057e54 to 08057e58 has its CatchHandler @ 08057e5b */
      std::string::~string(local_48);
      std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08057e98 to 08057e9c has its CatchHandler @ 08057e9d */
      __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
                    /* try { // try from 08057d1d to 08057dd0 has its CatchHandler @ 08057e9d */
    CServerHandler::_ZN14CServerHandler14ResetHeartBeatEhh(local_28,(uchar)local_21,(uchar)local_22)
    ;
    cVar1 = CServerHandler::_ZN14CServerHandler21IsConnectedGameServerEhh
                      (local_28,(uchar)local_21,(uchar)local_22);
    if (cVar1 != '\x01') {
      CServerHandler::_ZN14CServerHandler14SetConnectFlagEhhb
                (local_28,(uchar)local_21,(uchar)local_22,true);
      local_30 = (CGameServer *)
                 CApplication::FindGameServer(m_pclApp,(uint)(byte)local_21,(uint)(byte)local_22);
      if (local_30 != (CGameServer *)0x0) {
        Packet_CutOff_UDP_Call_UserInfo::Packet_CutOff_UDP_Call_UserInfo(local_52);
        CGameServer::SendToGameServer(local_30,(char *)local_52,(uint)local_50);
      }
    }
    printf("Server(%dGroup:%dChennel) Heart Beat Arrived.\n",(uint)(byte)local_21,
           (uint)(byte)local_22);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp](source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp)（约第 119 行）：

```cpp
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
    if (m_pclApp != 0 && m_pclApp->m_serverHandler != 0)
    {
        try
        {
            unsigned char channel = *(unsigned char*)((char*)pkt + 0xa);
            unsigned char group = *(unsigned char*)((char*)pkt + 0xb);
            if (100 < group || channel == 0 || 0xbe < channel)
            {
                throw CDNFException("CPacketTranslater::OnHeartBeat() Channel Index Error\n");
            }
            m_pclApp->m_serverHandler->ResetHeartBeat(group, channel);
            if (!m_pclApp->m_serverHandler->IsConnectedGameServer(group, channel))
            {
                m_pclApp->m_serverHandler->SetConnectFlag(group, channel, true);
                CGameServer* gs = m_pclApp->FindGameServer(group, channel);
                if (gs != 0)
                {
                    Packet_CutOff_UDP_Call_UserInfo pkt2;
                    gs->SendToGameServer((char*)&pkt2, *(unsigned short*)((char*)&pkt2 + 2));
                }
            }
            printf("Server(%dGroup:%dChennel) Heart Beat Arrived.\n", group, channel);
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnHeartBeat() Exception Break : %s\n", e.what());
            register const char* s = e.what();
            DNF_LOG_SCOPE_LINE(0xea,"./log/Except", "CPacketTranslater::OnHeartBeat() Exception Break : %s\n",
                s);
        }
        catch (...)
        {
            puts("CPacketTranslater::OnHeartBeat() Exception Break");
            DNF_LOG_SCOPE_LINE(0xf0, "./log/Except", "CPacketTranslater::OnHeartBeat() Exception Break\n");
        }
    }
}
```
