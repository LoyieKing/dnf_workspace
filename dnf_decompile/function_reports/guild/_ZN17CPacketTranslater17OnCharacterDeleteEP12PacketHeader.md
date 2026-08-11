# _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader

`CPacketTranslater::OnCharacterDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807697a` | `0x320` | `0x806d068` | `0x229` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,210 +1,162 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xe2>
-lea    -0x41(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xf2>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCharacterDelete : 0 == m_pclApp",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x90>
-mov    %edx,%esi
-mov    %eax,%edi
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x95>
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
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x8a>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa7>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x8f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa7>
-lea    -0x48(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xb4>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xbf>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa7>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xcf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x41(%ebp),%eax
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x20d>
-lea    -0x41(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x159>
+je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x172>
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x7bb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCharacterDelete : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
-lea    -0x8b(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x221>
+lea    -0x77(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22ST_Notice_Guild_SecedeC1Ev>
+lea    -0x77(%ebp),%eax
+mov    -0x24(%ebp),%edx
+add    $0x12,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+lea    -0x77(%ebp),%eax
+lea    0x8(%eax),%edx
 mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8b(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x83(%ebp)
-movw   $0x1,-0x7f(%ebp)
-mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x77(%ebp),%eax
+add    $0xc,%eax
+movw   $0x1,(%eax)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x8b(%ebp),%eax
+lea    -0x77(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x290(%edx),%ecx
-lea    -0x8b(%ebp),%edx
+lea    -0x77(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede>
 movl   $0x0,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2af>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,0x4(%esp)
-movl   $"CPacketTranslater::OnCharacterDelete Exception Break : %s\n",(%esp)
-call   <T> <printf>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x7d2,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCharacterDelete Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2a8>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $"CPacketTranslater::OnCharacterDelete Exception Break",(%esp)
-call   <T> <puts>
-movl   $0x7d8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnCharacterDelete Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x310>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x9c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCharacterDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  void *__src;
  undefined4 local_8f [2];
  undefined4 local_87;
  undefined2 local_83;
  undefined1 auStack_81 [53];
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080769b3 to 080769b7 has its CatchHandler @ 08076a21 */
    std::string::string(local_4c,"CPacketTranslater::OnCharacterDelete : 0 == m_pclApp",&local_45);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080769d2 to 080769d6 has its CatchHandler @ 080769d9 */
    CDNFException::CDNFException(this,local_4c);
                    /* try { // try from 08076a10 to 08076a14 has its CatchHandler @ 08076a17 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08076a57 to 08076b81 has its CatchHandler @ 08076b87 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_2c == (CGuild *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_44,"OnCharacterDelete",0x7bb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/GuildModify",
               "CPacketTranslater::OnCharacterDelete : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)"
               ,uVar1);
  }
  else {
    ST_Notice_Guild_Secede::ST_Notice_Guild_Secede((ST_Notice_Guild_Secede *)local_8f);
    local_8f[0] = *(undefined4 *)(local_28 + 0x12);
    local_87 = *(undefined4 *)(local_28 + 0xe);
    local_83 = 1;
    __src = (void *)CGuild::GetGuildName(local_2c);
    memcpy(auStack_81,__src,0x16);
    CGuildManager::_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede
              ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_28 + 0x12),
               (ST_Notice_Guild_Secede *)local_8f);
    CGuild::SendGuildInfoToMembers(local_2c,false);
    local_24 = m_pclApp + 0x10;
    CUserManager::_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj(local_24);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1309 行）：

```cpp
void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCharacterDelete : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x7bb,"./log/GuildModify",
            "CPacketTranslater::OnCharacterDelete : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",
            *(unsigned int*)(pb + 0xe));
    }
    else
    {
        ST_Notice_Guild_Secede notice;
        *(unsigned int*)((char*)&notice + 0) = *(unsigned int*)(pb + 0x12);
        *(unsigned int*)((char*)&notice + 8) = *(unsigned int*)(pb + 0xe);
        *(unsigned short*)((char*)&notice + 0xc) = 1;
        memcpy((char*)&notice + 0xe, guild->GetGuildName(), 0x16);
        (&m_pclApp->m_guildManager)->GuildSecede(*(unsigned int*)(pb + 0x12), notice);
        guild->SendGuildInfoToMembers(false);
        (&m_pclApp->m_userManager)->DeleteBlackUserOnCharacDelete(*(unsigned int*)(pb + 0xe));
    }
}
```
