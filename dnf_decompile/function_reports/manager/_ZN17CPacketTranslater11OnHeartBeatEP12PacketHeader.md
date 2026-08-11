# _ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader

`CPacketTranslater::OnHeartBeat(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8064472` | `0x2e6` | `0x805a288` | `0x2e8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,200 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2de>
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2dc>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2dd>
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2df>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 mov    %al,-0x1d(%ebp)
 cmpb   $0x64,-0x1d(%ebp)
-ja     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x10d>
-movzbl -0x1d(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler14ResetHeartBeatEh>
-movzbl -0x1d(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2de>
-movzbl -0x1d(%ebp),%eax
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler14SetConnectFlagEhb>
-lea    -0x52(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN33Packet_Monitor_Manager_Connect_OKC1Ev>
-movzbl -0x1d(%ebp),%eax
-mov    %eax,0x8(%esp)
-lea    -0x52(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler15SendToTcpServerEP12PacketHeaderh>
-movzbl -0x1d(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"First Heart Beat Arrived From %d Group Monitor!\n",(%esp)
-call   <T> <printf>
-movzbl -0x1d(%ebp),%ebx
-movl   $0x43,0x8(%esp)
-movl   $"OnHeartBeat",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"First Heart Beat Arrived From %d Group Monitor!",0x8(%esp)
-movl   $"./log/Monitor",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2de>
-lea    -0x39(%ebp),%eax
+jbe    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x10a>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() 채널 인덱스 오류\n",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x184>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xb8>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x17e>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xb2>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x19b>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xcf>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x19b>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xcf>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1b0>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xe7>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x19b>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xcf>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1d3>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1d4>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+movzbl -0x1d(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler14ResetHeartBeatEh>
+movzbl -0x1d(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler24IsConnectedMonitorServerEh>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2e0>
+movzbl -0x1d(%ebp),%eax
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler14SetConnectFlagEhb>
+lea    -0x36(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN33Packet_Monitor_Manager_Connect_OKC1Ev>
+movzbl -0x1d(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x36(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler15SendToTcpServerEP12PacketHeaderh>
+movzbl -0x1d(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"First Heart Beat Arrived From %d Group Monitor!\n",(%esp)
+call   <T> <printf>
+movl   $0x43,0x8(%esp)
+movl   $"OnHeartBeat",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x1d(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"First Heart Beat Arrived From %d Group Monitor!",0x8(%esp)
+movl   $"./log/Monitor",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2e0>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x275>
+jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x274>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x52,0x8(%esp)
 movl   $"OnHeartBeat",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x26e>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x26d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2de>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2e0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x58,0x8(%esp)
 movl   $"OnHeartBeat",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2d6>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2d5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2de>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2e0>
+nop
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2e0>
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

/* CPacketTranslater::OnHeartBeat(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader(PacketHeader *param_1)

{
  char cVar1;
  CDNFException *this;
  uint uVar2;
  Packet_Monitor_Manager_Connect_OK local_56 [10];
  CMyFileLog local_4c [8];
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CServerHandler *local_28;
  PacketHeader local_21;
  
  local_2c = param_1;
  if ((m_pclApp != 0) &&
     (local_28 = *(CServerHandler **)(m_pclApp + 0x18), local_28 != (CServerHandler *)0x0)) {
    local_21 = param_1[10];
    if (100 < (byte)local_21) {
      std::allocator<char>::allocator();
                    /* try { // try from 0806459f to 080645a3 has its CatchHandler @ 0806460d */
      std::string::string(local_44,&DAT_0815a724,local_3d);
      this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080645be to 080645c2 has its CatchHandler @ 080645c5 */
      CDNFException::CDNFException(this,local_44);
                    /* try { // try from 080645fc to 08064600 has its CatchHandler @ 08064603 */
      std::string::~string(local_44);
      std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08064640 to 08064644 has its CatchHandler @ 08064645 */
      __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
                    /* try { // try from 080644c5 to 08064579 has its CatchHandler @ 08064645 */
    CServerHandler::_ZN14CServerHandler14ResetHeartBeatEh(local_28,(uchar)local_21);
    cVar1 = CServerHandler::_ZN14CServerHandler24IsConnectedMonitorServerEh
                      (local_28,(uchar)local_21);
    if (cVar1 != '\x01') {
      CServerHandler::_ZN14CServerHandler14SetConnectFlagEhb(local_28,(uchar)local_21,true);
      Packet_Monitor_Manager_Connect_OK::Packet_Monitor_Manager_Connect_OK(local_56);
      CServerHandler::_ZN14CServerHandler15SendToTcpServerEP12PacketHeaderh
                (local_28,(PacketHeader *)local_56,(uchar)local_21);
      printf("First Heart Beat Arrived From %d Group Monitor!\n",(uint)(byte)local_21);
      uVar2 = (uint)(byte)local_21;
      CMyFileLog::CMyFileLog(local_4c,"OnHeartBeat",0x43);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_4c,"./log/Monitor","First Heart Beat Arrived From %d Group Monitor!",uVar2);
    }
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
