# _ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader

`CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8075dc0` | `0x24c` | `0x806c32e` | `0x24b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,166 +1,166 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnUpdateChangableCharInfo : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xa4>
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x13c>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x13d>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
-mov    -0x20(%ebp),%eax
-movzbl 0x11(%eax),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x243>
+mov    -0x24(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
 movsbl %al,%edx
-mov    -0x20(%ebp),%eax
-movzwl 0xf(%eax),%eax
+mov    -0x24(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
 cwtl
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser20SetUserChangableInfoEsc>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x243>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1de>
+jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1dd>
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
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x6a4,0x8(%esp)
+movl   $"OnUpdateChangableCharInfo",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x6a4,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x243>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x6aa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23f>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_40 [7];
  allocator local_39 [17];
  CUser *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08075df6 to 08075dfa has its CatchHandler @ 08075e64 */
    std::string::string(local_40,"CPacketTranslater::OnUpdateChangableCharInfo : 0 == m_pclApp",
                        local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08075e15 to 08075e19 has its CatchHandler @ 08075e1c */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08075e53 to 08075e57 has its CatchHandler @ 08075e5a */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08075e9a to 08075ef6 has its CatchHandler @ 08075efc */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  local_28 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
  if (local_28 != (CUser *)0x0) {
    CUser::SetUserChangableInfo(local_28,*(short *)(local_24 + 0xf),(char)local_24[0x11]);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1301 行）：

```cpp
void CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnUpdateChangableCharInfo : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CUser* user = (&m_pclApp->m_userManager)->FindUser(*(unsigned int*)(pb + 0xa));
    if (user != 0)
    {
        user->SetUserChangableInfo(*(short*)(pb + 0xf), (char)pb[0x11]);
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n", e.what());
        CMyFileLog log("OnUpdateChangableCharInfo", 0x6a4);
        log("./log/Except", "CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeMemberChatMsg() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x6aa);
        log("./log/Except", "CPacketTranslater::OnNoticeMemberChatMsg() Exception Break\n");
    }
}
```
