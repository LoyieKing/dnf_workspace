# _ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader

`CPacketTranslater::OnMonitorSecuServiceConnWeb(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808e8ce` | `0x3bd` | `0x8079f72` | `0x3b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,277 +1,274 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0xef>
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb : 0 == m_pclApp",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x95>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0xb4>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x2a5>
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x295>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movl   $0x0,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x135>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x123>
+movl   $0xffffffff,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x131>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2c(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x13c>
-movl   $0xffffffff,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x1cb>
-movl   $0x0,-0x20(%ebp)
-lea    -0x61(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_SecuService_Connect_WebC1Ev>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x1bb>
+mov    -0x28(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3b5>
+je     <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3a7>
+lea    -0x5d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_SecuService_Connect_WebC1Ev>
 movl   $0x15,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x61(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x5d(%ebp),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x57(%ebp)
-movzwl -0x5f(%ebp),%eax
+mov    %eax,0xa(%ebx)
+lea    -0x5d(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x61(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3b5>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3a8>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x24a>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x23a>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x244>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x269>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x269>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x27e>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x269>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x2a5>
-lea    -0x3d(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x234>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x259>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x259>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x26e>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x259>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x295>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x34b>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x33b>
 mov    %ecx,(%esp)
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
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1c4f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x344>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x334>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3b5>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3a8>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1c55,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3b0>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3a0>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader+0x3a8>
+nop
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorSecuServiceConnWeb(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  Packet_SecuService_Connect_Web local_65 [2];
  ushort local_63;
  undefined4 local_5b;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41 [17];
  int local_30;
  PacketHeader *local_2c;
  CUser *local_28;
  CUser *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808e904 to 0808e908 has its CatchHandler @ 0808e97e */
    std::string::string(local_50,"CPacketTranslater::OnMonitorSecuServiceConnWeb : 0 == m_pclApp",
                        &local_49);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808e923 to 0808e927 has its CatchHandler @ 0808e92a */
    CDNFException::CDNFException(pCVar1,local_50);
                    /* try { // try from 0808e969 to 0808e96d has its CatchHandler @ 0808e970 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808e9b8 to 0808ea93 has its CatchHandler @ 0808eb6f */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_30 = 0;
  local_2c = param_1;
  local_28 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
  if (local_28 == (CUser *)0x0) {
    local_30 = -1;
  }
  else {
    local_30 = CUser::GetUniqCharNo(local_28);
  }
  if (local_30 != 0) {
    local_24 = (CUser *)0x0;
    Packet_SecuService_Connect_Web::Packet_SecuService_Connect_Web(local_65);
    local_24 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_24 != (CUser *)0x0) {
      memcpy(local_65,local_2c,0x15);
      local_5b = CUser::GetIdByChannel(local_24);
      CUser::SendToGameserver(local_24,(char *)local_65,(uint)local_63);
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0808eab9 to 0808eabd has its CatchHandler @ 0808eb33 */
  std::string::string(local_48,"CPacketTranslater::OnMonitorSecuServiceConnWeb",local_41);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808ead8 to 0808eadc has its CatchHandler @ 0808eadf */
  CDNFException::CDNFException(pCVar1,local_48);
                    /* try { // try from 0808eb1e to 0808eb22 has its CatchHandler @ 0808eb25 */
  std::string::~string(local_48);
  std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808eb6a to 0808eb6e has its CatchHandler @ 0808eb6f */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4843 行）：

```cpp
void CPacketTranslater::OnMonitorSecuServiceConnWeb(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnMonitorSecuServiceConnWeb : 0 == m_pclApp");
        }
        int charNo = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                ((RA_UINT<10>*)pkt)->v);
        if (user == 0)
        {
            charNo = -1;
        }
        else
        {
            charNo = (int)user->GetUniqCharNo();
        }
        if (charNo != 0)
        {
            CUser* target = ((CUserManager*)((char*)m_pclApp + 0x10))
                                ->FindUser_CharNo((unsigned int)charNo);
            if (target != 0)
            {
                Packet_SecuService_Connect_Web reply;
                memcpy(&reply, pkt, 0x15);
                ((RA_UINT<10>*)&reply)->v = target->GetIdByChannel();
                target->SendToGameserver((char*)&reply,
                                         ((RA_U16<2>*)&reply)->v);
            }
            return;
        }
        throw CDNFException("CPacketTranslater::OnMonitorSecuServiceConnWeb");
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",
               e.what());
        DNF_LOG_SCOPE_LINE(0x1c4f,"./log/Except",
            "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1c55, "./log/Except",
            "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break\n");
    }
}
```
