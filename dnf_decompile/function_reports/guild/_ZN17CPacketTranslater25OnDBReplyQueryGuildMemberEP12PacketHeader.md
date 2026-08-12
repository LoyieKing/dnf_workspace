# _ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader

`CPacketTranslater::OnDBReplyQueryGuildMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8072998` | `0x2a4` | `0x8068f20` | `0x3a9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,188 +1,270 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x5c,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xef>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x35(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnDBReplyQueryGuildMember()\tpclApp is NULL",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x3c(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x95>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x8f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xb4>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xb4>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xcc>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xb4>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x293>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x14b>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x244>
+mov    -0x24(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x85>
-mov    -0x24(%ebp),%eax
-lea    0x13(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo>
-mov    -0x24(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x29c>
-lea    -0x41(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x209>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyQueryGuildMember()\tpclUser is NULL\n",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xfc>
-mov    %edx,%esi
-mov    %eax,%edi
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1af>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0xf6>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x113>
-call   <T> <_ZSt9terminatev>
+mov    %edi,%ecx
 mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x113>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x128>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x113>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x194>
-lea    -0x41(%ebp),%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1a9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1ce>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1ce>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1e6>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x1ce>
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
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x293>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
+lea    0x13(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo>
+mov    -0x24(%ebp),%eax
+add    $0x13,%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo>
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x3a1>
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x24b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[DB ERROR]CPacketTranslater::OnDBReplyQueryGuildMember() packet->bSuccess : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x29c>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x236>
-mov    %eax,(%esp)
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x3a1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0x2,%eax
+jne    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x337>
+mov    %ecx,(%esp)
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
 movl   $"CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x251,0x8(%esp)
+movl   $"OnDBReplyQueryGuildMember",0x4(%esp)
+lea    -0x44(%ebp),%eax
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
-movl   $0x251,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x22f>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x330>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+call   <T> <__cxa_end_catch>
+mov    %esi,%ecx
+mov    %ebx,%eax
+mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x29c>
-mov    %eax,(%esp)
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x3a1>
+mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x257,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x297>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
+jmp    <T> <_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader+0x39c>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+call   <T> <__cxa_end_catch>
+mov    %esi,%ecx
+mov    %ebx,%eax
+mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x4c,%esp
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBReplyQueryGuildMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  CDNFException *this;
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  CUser *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  local_28 = param_1;
  if (param_1[10] == (PacketHeader)0x1) {
    local_24 = m_pclApp + 0x10;
                    /* try { // try from 080729d1 to 08072a17 has its CatchHandler @ 08072b2c */
    local_2c = (CUser *)CUserManager::FindUser_CharNo(local_24);
    if (local_2c == (CUser *)0x0) {
      std::allocator<char>::allocator();
                    /* try { // try from 08072a3d to 08072a41 has its CatchHandler @ 08072aab */
      std::string::string(local_4c,
                          "CPacketTranslater::OnDBReplyQueryGuildMember()\tpclUser is NULL\n",
                          &local_45);
      this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08072a5c to 08072a60 has its CatchHandler @ 08072a63 */
      CDNFException::CDNFException(this,local_4c);
                    /* try { // try from 08072a9a to 08072a9e has its CatchHandler @ 08072aa1 */
      std::string::~string(local_4c);
      std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08072ade to 08072b26 has its CatchHandler @ 08072b2c */
      __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    CUser::LoadGuildMember
              (local_2c,*(uint *)(local_28 + 0xb),(STGuildMemerDBInfo *)(local_28 + 0x13));
    CUser::SendGuildMemberDBInfo(local_2c,(STGuildMemerDBInfo *)(local_28 + 0x13));
  }
  else {
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_44,"OnDBReplyQueryGuildMember",0x24b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/Except",
               "[DB ERROR]CPacketTranslater::OnDBReplyQueryGuildMember() packet->bSuccess : %d\n",
               (uint)(byte)PVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 604 行）：

```cpp
void CPacketTranslater::OnDBReplyQueryGuildMember(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnDBReplyQueryGuildMember()\tpclApp is NULL")
    char* pb = (char*)pkt;
    if (pb[10] == 1)
    {
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xf));
        if (user == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnDBReplyQueryGuildMember()\tpclUser is NULL\n");
        }
        user->LoadGuildMember(*(unsigned int*)(pb + 0xb),
                              *(STGuildMemerDBInfo*)(pb + 0x13));
        user->SendGuildMemberDBInfo(*(STGuildMemerDBInfo*)(pb + 0x13));
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x24b,"./log/Except",
            "[DB ERROR]CPacketTranslater::OnDBReplyQueryGuildMember() packet->bSuccess : %d\n",
            (unsigned int)(unsigned char)pb[10]);
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break : %s\n", e.what());
        CMyFileLog log("OnDBReplyQueryGuildMember", 0x251);
        log("./log/Except", "CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x257);
        log("./log/Except", "CPacketTranslater::OnDBReplyQueryGuildMember() Exception Break\n");
    }
}
```
