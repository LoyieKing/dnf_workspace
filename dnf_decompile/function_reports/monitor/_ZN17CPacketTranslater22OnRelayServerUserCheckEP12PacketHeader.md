# _ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader

`CPacketTranslater::OnRelayServerUserCheck(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80872e6` | `0x254` | `0x80701fa` | `0x24d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,169 +1,167 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x28(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x4e>
-mov    -0x30(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x42>
+mov    0x8(%ebp),%eax
 movb   $0x0,0xe(%eax)
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x55>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x49>
+mov    0x8(%ebp),%eax
 movb   $0x1,0xe(%eax)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEi>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x147>
-lea    -0x41(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x140>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
-lea    -0x41(%ebp),%edx
+lea    -0x39(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0xf8>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0xf1>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0xf2>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0xeb>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x10f>
+jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x108>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x10f>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x108>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x124>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x11d>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x10f>
+jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x108>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x41(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x166>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x15f>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x30(%ebp),%edx
+mov    0x8(%ebp),%eax
+movl   $0xf,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
-movl   $0xf,0x8(%esp)
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x245>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x1ea>
+jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x1e3>
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
 movl   $0xfc8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x1e3>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x1dc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x245>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xfcd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&_ZZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x247>
+jmp    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x240>
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

/* CPacketTranslater::OnRelayServerUserCheck(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader
               (PacketHeader *param_1)

{
  int *piVar1;
  char *pcVar2;
  CDNFException *this;
  string local_4c [7];
  allocator local_45 [17];
  PacketHeader *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  CServerInterface *local_24;
  
  local_34 = param_1;
  local_30 = m_pclApp + 0x10;
                    /* try { // try from 08087310 to 0808734e has its CatchHandler @ 0808744c */
  local_2c = CUserManager::FindUser(local_30);
  local_28 = (uint)(byte)local_34[0xe];
  if (local_2c == 0) {
    local_34[0xe] = (PacketHeader)0x0;
  }
  else {
    local_34[0xe] = (PacketHeader)0x1;
  }
  local_24 = (CServerInterface *)CApplication::FindGameServer(m_pclApp);
  if (local_24 == (CServerInterface *)0x0) {
    std::allocator<char>::allocator();
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
                    /* try { // try from 08087387 to 0808738b has its CatchHandler @ 080873f5 */
    std::string::string(local_4c,pcVar2,local_45);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080873a6 to 080873aa has its CatchHandler @ 080873ad */
    CDNFException::CDNFException(this,local_4c);
                    /* try { // try from 080873e4 to 080873e8 has its CatchHandler @ 080873eb */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08087428 to 08087446 has its CatchHandler @ 0808744c */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  CServerInterface::_ZN16CServerInterface12SendToServerEPci(local_24,(char *)local_34,0xf);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1930 行）：

```cpp
void CPacketTranslater::OnRelayServerUserCheck(PacketHeader* pkt)
{try
{


    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int found = 0;
    if (userMgr->FindUser(((RA_UINT<10>*)pkt)->v) == 0)
    {
        ((RA_S8<14>*)pkt)->v = 0;
    }
    else
    {
        ((RA_S8<14>*)pkt)->v = 1;
    }
    CServerInterface* gs =
        (CServerInterface*)m_pclApp->FindGameServer((int)((RA_UINT<10>*)pkt)->v);
    if (gs == 0)
    {
        throw CDNFException(strerror(errno));
    }
    gs->SendToServer((char*)pkt, 0xf);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xfc8, "./log/Except", "%s Exception Break : %s\n", __FUNCTION__, e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xfcd, "./log/Except", "%s Exception Break\n", __FUNCTION__);
    }
}
```
