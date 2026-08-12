# _ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader

`CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80918c4` | `0x301` | `0x807ce36` | `0x30f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,208 +1,213 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xdf>
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnWebEmergencyPatchMessage",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xa4>
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x223>
-lea    -0x49(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x231>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cc>
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1d5>
+mov    0x8(%ebp),%eax
 mov    -0x30(%ebp),%edx
-movzbl 0xa(%edx,%eax,1),%eax
+add    $0xa,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c7>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1d1>
+mov    0x8(%ebp),%eax
 mov    -0x30(%ebp),%edx
-movzbl 0xa(%edx,%eax,1),%eax
-movzbl %al,%ebx
+add    $0xa,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+mov    %al,-0x29(%ebp)
+movzbl -0x29(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20GetTcpGameServerByChEh>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1d1>
 movl   $0x10a,0x8(%esp)
 movl   $0x27f2,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1d1>
+mov    -0x24(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+movzbl 0x3c(%eax),%eax
+mov    %al,(%edx)
 mov    -0x24(%ebp),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0x3c(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %dl,0xa(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 add    $0xb,%eax
 movl   $0xff,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x30(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x3c(%eax),%eax
 movzbl %al,%eax
-mov    -0x30(%ebp),%edx
+mov    0x8(%ebp),%edx
 lea    0x3d(%edx),%ecx
 mov    -0x20(%ebp),%edx
 add    $0xb,%edx
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
-nop
-addl   $0x1,-0x2c(%ebp)
-cmpl   $0x31,-0x2c(%ebp)
+addl   $0x1,-0x30(%ebp)
+cmpl   $0x31,-0x30(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0xf1>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%ebx
+mov    %ax,-0x32(%ebp)
+movzwl -0x32(%ebp),%ebx
 movl   $0x204a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebEmergencyPatchMessage packet_id(%d)",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x307>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x29f>
+jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2ad>
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
 movl   $0x204e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebEmergencyPatchMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x298>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2a6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x307>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2053,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebEmergencyPatchMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f4>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x302>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  ushort uVar2;
  CDNFException *this;
  CServerHandler *this_00;
  string local_54 [7];
  allocator local_4d;
  CMyFileLog local_4c [24];
  PacketHeader *local_34;
  int local_30;
  CTcpGameServer *local_2c;
  char *local_28;
  char *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080918fa to 080918fe has its CatchHandler @ 08091968 */
    std::string::string(local_54,"CPacketTranslater::OnWebEmergencyPatchMessage",&local_4d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091919 to 0809191d has its CatchHandler @ 08091920 */
    CDNFException::CDNFException(this,local_54);
                    /* try { // try from 08091957 to 0809195b has its CatchHandler @ 0809195e */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809199e to 08091ae1 has its CatchHandler @ 08091ae7 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_34 = param_1;
  for (local_30 = 0; local_30 < 0x32; local_30 = local_30 + 1) {
    if (local_34[local_30 + 10] != (PacketHeader)0x0) {
      PVar1 = local_34[local_30 + 10];
      this_00 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      local_2c = (CTcpGameServer *)
                 CServerHandler::_ZN14CServerHandler20GetTcpGameServerByChEh(this_00,(uchar)PVar1);
      if (local_2c != (CTcpGameServer *)0x0) {
        local_28 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                     (local_2c,0x27f2,0x10a);
        if (local_28 != (char *)0x0) {
          *(PacketHeader *)(local_28 + 10) = local_34[0x3c];
          local_24 = local_28;
          memset(local_28 + 0xb,0,0xff);
          memcpy(local_24 + 0xb,local_34 + 0x3d,(uint)(byte)local_34[0x3c]);
          CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_2c,local_24);
        }
      }
    }
  }
  uVar2 = *(ushort *)param_1;
  CMyFileLog::CMyFileLog(local_4c,"OnWebEmergencyPatchMessage",0x204a);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_4c,"./log/Web","CPacketTranslater::OnWebEmergencyPatchMessage packet_id(%d)",
             (uint)uVar2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5418 行）：

```cpp
void CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnWebEmergencyPatchMessage");
        }
        PacketHeader* rpkt = pkt;
        for (int i = 0; i < 0x32; i++)
        {
            if (*(char*)((char*)pkt + 10 + i) != 0)
            {
                unsigned char ch = *(unsigned char*)((char*)pkt + 10 + i);
                CTcpGameServer* tcp =
                    m_pclApp->Get_ServerHandler()->GetTcpGameServerByCh(ch);
                if (tcp != 0)
                {
                    char* buf = tcp->makePacketHeader(0x27f2, 0x10a);
                    if (buf != 0)
                    {
                        *(char*)(buf + 10) = ((RA_S8<60>*)pkt)->v;
                        char* out = buf;
                        memset(buf + 0xb, 0, 0xff);
                        memcpy(out + 0xb, (char*)pkt + 0x3d,
                               (unsigned int)(unsigned char)((RA_S8<60>*)pkt)->v);
                        tcp->SendToGameServer(out);
                    }
                }
            }
        }
        unsigned short pid = *(unsigned short*)pkt;
        DNF_LOG_SCOPE_LINE(0x204a,"./log/Web", "CPacketTranslater::OnWebEmergencyPatchMessage packet_id(%d)",
            (unsigned int)pid);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x204e,"./log/Except",
            "CPacketTranslater::OnWebEmergencyPatchMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x2053, "./log/Except", "CPacketTranslater::OnWebEmergencyPatchMessage Exception Break\n");
    }
}
```
