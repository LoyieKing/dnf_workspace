# _ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader

`CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ffb6` | `0x40f` | `0x807b5e6` | `0x428` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,293 +1,300 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x8c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xef>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xf2>
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfo",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x95>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x98>
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
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x8f>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcc>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x329>
-lea    -0x51(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x33f>
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x257>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x25f>
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x30(%ebp)
 movl   $0x1dee,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfo(), buyUser(%s), characNo(%u)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfo : Not Exist User characNo",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x205>
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
-lea    -0x48(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1f7>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1ff>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x23c>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x329>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x33f>
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-mov    -0x28(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jg     <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x29b>
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
+mov    0x8(%ebp),%eax
+movl   $0x0,0x1a(%eax)
+mov    0x8(%ebp),%eax
+mov    -0x38(%ebp),%edx
+mov    %edx,0x22(%eax)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+mov    0x8(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
 mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jle    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x30e>
-mov    -0x28(%ebp),%eax
-movl   $0x0,0x1a(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %edx,0x22(%eax)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    -0x28(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    -0x28(%ebp),%eax
-mov    0x22(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
 movl   $0x1dfc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x5c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"don't sell-> characNo: %u, errorNo: %u, itemId: %u, buyCount: %u)",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a9>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3bf>
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
 mov    %eax,%ebx
 movl   $0x1e06,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3b8>
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
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1e0b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onSocialEventRewardItemInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x402>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x418>
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
-add    $0x7c,%esp
+add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CDNFException *pCVar4;
  undefined4 uVar5;
  LimitNpcBuyItemManager *this;
  string local_5c [7];
  allocator local_55;
  CMyFileLog local_54 [8];
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  PacketHeader *local_2c;
  CUser *local_28;
  int local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808ffec to 0808fff0 has its CatchHandler @ 08090066 */
    std::string::string(local_5c,"CPacketTranslater::onSocialEventRewardItemInfo",&local_55);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809000b to 0809000f has its CatchHandler @ 08090012 */
    CDNFException::CDNFException(pCVar4,local_5c);
                    /* try { // try from 08090051 to 08090055 has its CatchHandler @ 08090058 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080900a0 to 08090133 has its CatchHandler @ 080902db */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  local_28 = (CUser *)CUserManager::FindUser((uint)(m_pclApp + 0x10));
  if (local_28 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_2c + 0x12);
    uVar5 = NumberToString(*(uint *)(local_2c + 0xe),0);
    CMyFileLog::CMyFileLog(local_54,"onSocialEventRewardItemInfo",0x1dee);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Except",
               "CPacketTranslater::onSocialEventRewardItemInfo(), buyUser(%s), characNo(%u)",uVar5,
               uVar1);
    std::allocator<char>::allocator();
                    /* try { // try from 08090154 to 08090158 has its CatchHandler @ 080901ce */
    std::string::string(local_4c,
                        "CPacketTranslater::onSocialEventRewardItemInfo : Not Exist User characNo",
                        &local_45);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08090173 to 08090177 has its CatchHandler @ 0809017a */
    CDNFException::CDNFException(pCVar4,local_4c);
                    /* try { // try from 080901b9 to 080901bd has its CatchHandler @ 080901c0 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08090208 to 080902d5 has its CatchHandler @ 080902db */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  this = (LimitNpcBuyItemManager *)
         CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
  local_24 = LimitNpcBuyItemManager::sellNpcLimitBuyItem(this,(LimitNpcBuyItemInfo *)local_2c);
  if (local_24 < 1) {
    CUser::SendTcpGameserver(local_28,local_2c);
  }
  else {
    *(undefined4 *)(local_2c + 0x1a) = 0;
    *(int *)(local_2c + 0x22) = local_24;
    CUser::SendTcpGameserver(local_28,local_2c);
    uVar1 = *(undefined4 *)(local_2c + 0x1a);
    uVar5 = *(undefined4 *)(local_2c + 0x16);
    uVar2 = *(undefined4 *)(local_2c + 0x22);
    uVar3 = *(undefined4 *)(local_2c + 0x12);
    CMyFileLog::CMyFileLog(local_44,"onSocialEventRewardItemInfo",0x1dfc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/NpcBuyLimitItem",
               "don\'t sell-> characNo: %u, errorNo: %u, itemId: %u, buyCount: %u)",uVar3,uVar2,
               uVar5,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5045 行）：

```cpp
void CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemInfo");
        }
        PacketHeader* rpkt = pkt;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))
                ->FindUser(((RA_UINT<14>*)pkt)->v);
        if (user == 0)
        {
            unsigned int cn = ((RA_UINT<18>*)pkt)->v;
            char* s = NumberToString(((RA_UINT<14>*)pkt)->v, 0);
            DNF_LOG_SCOPE_LINE(0x1dee,"./log/Except",
                "CPacketTranslater::onSocialEventRewardItemInfo(), buyUser(%s), "
                "characNo(%u)",
                s, cn);
            throw CDNFException(
                "CPacketTranslater::onSocialEventRewardItemInfo : Not Exist User characNo");
        }
        int result = m_pclApp->getLimitNpcBuyItemManager()->sellNpcLimitBuyItem(
            (LimitNpcBuyItemInfo*)pkt);
        if (result < 1)
        {
            user->SendTcpGameserver(pkt);
        }
        else
        {
            ((RA_UINT<26>*)pkt)->v = 0;
            ((RA_INT<34>*)pkt)->v = result;
            user->SendTcpGameserver(pkt);
            unsigned int buyCount = ((RA_UINT<26>*)pkt)->v;
            unsigned int itemId = ((RA_UINT<22>*)pkt)->v;
            unsigned int errorNo = ((RA_UINT<34>*)pkt)->v;
            unsigned int charNo = ((RA_UINT<18>*)pkt)->v;
            DNF_LOG_SCOPE_LINE(0x1dfc,"./log/NpcBuyLimitItem",
                "don\'t sell-> characNo: %u, errorNo: %u, itemId: %u, buyCount: %u)",
                charNo, errorNo, itemId, buyCount);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e06, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e0b,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfo() Exception Break\n");
    }
}
```
