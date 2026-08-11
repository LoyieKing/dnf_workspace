# _ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader

`CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80903c6` | `0x371` | `0x807ba1a` | `0x37a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,255 +1,258 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0xef>
-lea    -0x45(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfoAll",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x95>
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
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0xb4>
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0xb4>
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
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x28b>
-lea    -0x45(%ebp),%eax
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x296>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x25f>
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
 mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x254>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
 movl   $0x1e1c,0x8(%esp)
 movl   $"onSocialEventRewardItemInfoAll",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfoAll(), buyUser(%s), characNo(%u)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x35(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemInfoAll : Not Exist User",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x208>
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
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x1f7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x231>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x28b>
-lea    -0x35(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x202>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x227>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x227>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x23c>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x227>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x296>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-mov    -0x24(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll>
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x372>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x30b>
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x314>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x1e28,0x8(%esp)
 movl   $"onSocialEventRewardItemInfoAll",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
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
 movl   $"CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x304>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x30d>
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
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x372>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1e2d,0x8(%esp)
 movl   $"onSocialEventRewardItemInfoAll",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x364>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x36d>
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
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *pCVar2;
  undefined4 uVar3;
  LimitNpcBuyItemManager *this;
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [8];
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  CUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080903fc to 08090400 has its CatchHandler @ 08090476 */
    std::string::string(local_50,"CPacketTranslater::onSocialEventRewardItemInfoAll",&local_49);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809041b to 0809041f has its CatchHandler @ 08090422 */
    CDNFException::CDNFException(pCVar2,local_50);
                    /* try { // try from 08090461 to 08090465 has its CatchHandler @ 08090468 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080904b0 to 08090543 has its CatchHandler @ 0809064d */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = (CUser *)CUserManager::FindUser((uint)(m_pclApp + 0x10));
  if (local_24 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 0x12);
    uVar3 = NumberToString(*(uint *)(local_28 + 0xe),0);
    CMyFileLog::CMyFileLog(local_48,"onSocialEventRewardItemInfoAll",0x1e1c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Except",
               "CPacketTranslater::onSocialEventRewardItemInfoAll(), buyUser(%s), characNo(%u)",
               uVar3,uVar1);
    std::allocator<char>::allocator();
                    /* try { // try from 08090564 to 08090568 has its CatchHandler @ 080905de */
    std::string::string(local_40,
                        "CPacketTranslater::onSocialEventRewardItemInfoAll : Not Exist User",
                        local_39);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08090583 to 08090587 has its CatchHandler @ 0809058a */
    CDNFException::CDNFException(pCVar2,local_40);
                    /* try { // try from 080905c9 to 080905cd has its CatchHandler @ 080905d0 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08090615 to 08090647 has its CatchHandler @ 0809064d */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  this = (LimitNpcBuyItemManager *)
         CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
  LimitNpcBuyItemManager::getNpcLimitBuyItemInfoAll(this,(LimitNpcBuyItemInfoAll *)local_28);
  CUser::SendTcpGameserver(local_24,local_28);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5034 行）：

```cpp
void CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemInfoAll");
        }
        PacketHeader* rpkt = pkt;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))
                ->FindUser(*(unsigned int*)((char*)pkt + 0xe));
        if (user == 0)
        {
            unsigned int cn = *(unsigned int*)((char*)pkt + 0x12);
            char* s = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
            DNF_LOG_SCOPE_LINE(0x1e1c,"./log/Except",
                "CPacketTranslater::onSocialEventRewardItemInfoAll(), buyUser(%s), "
                "characNo(%u)",
                s, cn);
            throw CDNFException(
                "CPacketTranslater::onSocialEventRewardItemInfoAll : Not Exist User");
        }
        m_pclApp->getLimitNpcBuyItemManager()->getNpcLimitBuyItemInfoAll(
            (LimitNpcBuyItemInfoAll*)pkt);
        user->SendTcpGameserver(pkt);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e28,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e2d,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break\n");
    }
}
```
