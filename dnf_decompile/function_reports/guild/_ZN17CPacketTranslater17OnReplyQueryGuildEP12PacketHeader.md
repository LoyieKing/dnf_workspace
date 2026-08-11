# _ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader

`CPacketTranslater::OnReplyQueryGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80726ba` | `0x2dd` | `0x8068eb6` | `0x2b3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,185 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x155>
-mov    -0x18(%ebp),%eax
-lea    0xd0(%eax),%ebx
-mov    -0x18(%ebp),%eax
-lea    0x13(%eax),%ecx
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %ebx,0xc(%esp)
-mov    %ecx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jne    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x125>
+mov    -0x2c(%ebp),%eax
+lea    0xd0(%eax),%edi
+mov    -0x2c(%ebp),%eax
+lea    0x13(%eax),%esi
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %edi,0xc(%esp)
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc>
-xor    $0x1,%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+movl   $0x1,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb>
+mov    -0x2c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%esi
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager11AttendGuildEjj>
+mov    -0x2c(%ebp),%eax
+add    $0xb1,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x99>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%ebx
-movl   $0x202,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2ab>
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnReplyQueryGuild()\tLoadGuild Err(%d)",0x8(%esp)
-movl   $"./log/GuildErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb>
-mov    -0x18(%ebp),%eax
-mov    0xf(%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x290,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN13CGuildManager11AttendGuildEjj>
-mov    -0x18(%ebp),%eax
-movzbl 0xb1(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d6>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d6>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2ab>
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13LoadGuildAgitEP14CServerHandlerj>
-jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d6>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2ab>
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb>
-mov    -0x18(%ebp),%eax
-mov    0xb(%eax),%esi
-mov    -0x18(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x2c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%esi
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x21d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[DB ERROR]CPacketTranslater::OnReplyQueryGuild() packet->bSuccess : %d,guildKey(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d6>
+jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2ab>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x270>
+jne    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x245>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnReplyQueryGuild() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0xc(%ebp),%eax
+movl   $0x223,0x8(%esp)
+movl   $"OnReplyQueryGuild",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x223,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyQueryGuild() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x269>
+jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x23e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d6>
+jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2ab>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnReplyQueryGuild() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x229,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyQueryGuild() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2d1>
+jmp    <T> <_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader+0x2a6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x50,%esp
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnReplyQueryGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CGuild *local_18;
  CServerHandler *local_14;
  
  local_1c = param_1;
  if (param_1[10] == (PacketHeader)0x1) {
                    /* try { // try from 08072707 to 08072882 has its CatchHandler @ 08072888 */
    cVar3 = CGuildManager::_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc
                      ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(param_1 + 0xb),
                       (STGuildDBInfoOnly *)(param_1 + 0x13),(char *)(param_1 + 0xd0));
    if (cVar3 != '\x01') {
      uVar2 = *(undefined4 *)(local_1c + 0xb);
      CMyFileLog::CMyFileLog(local_3c,"OnReplyQueryGuild",0x202);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/GuildErr",
                 "CPacketTranslater::OnReplyQueryGuild()\tLoadGuild Err(%d)",uVar2);
    }
    CGuildManager::_ZN13CGuildManager22SendGuildInfoToMembersEjb
              ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_1c + 0xb),true);
    CGuildManager::_ZN13CGuildManager11AttendGuildEjj
              ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_1c + 0xb),
               *(uint *)(local_1c + 0xf));
    if (local_1c[0xb1] != (PacketHeader)0x0) {
      local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      local_14 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      if (local_18 != (CGuild *)0x0) {
        CGuild::LoadGuildAgit(local_18,local_14,*(uint *)(local_1c + 0xb));
      }
    }
  }
  else {
    CGuildManager::_ZN13CGuildManager22SendGuildInfoToMembersEjb
              ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(param_1 + 0xb),true);
    uVar2 = *(undefined4 *)(local_1c + 0xb);
    PVar1 = local_1c[10];
    CMyFileLog::CMyFileLog(local_34,"OnReplyQueryGuild",0x21d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/Except",
               "[DB ERROR]CPacketTranslater::OnReplyQueryGuild() packet->bSuccess : %d,guildKey(%d)"
               ,(uint)(byte)PVar1,uVar2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 424 行）：

```cpp
void CPacketTranslater::OnReplyQueryGuild(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (pb[10] == 1)
    {
        int rc = m_pclApp->Get_GuildManager()->LoadGuild(
            *(unsigned int*)(pb + 0xb), *(STGuildDBInfoOnly*)(pb + 0x13), pb + 0xd0);
        (void)rc;
        m_pclApp->Get_GuildManager()->SendGuildInfoToMembers(
            *(unsigned int*)(pb + 0xb), true);
        m_pclApp->Get_GuildManager()->AttendGuild(
            *(unsigned int*)(pb + 0xb), *(unsigned int*)(pb + 0xf));
        if (pb[0xb1] != 0)
        {
            CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(
                *(unsigned int*)(pb + 0xb));
            CServerHandler* handler = m_pclApp->Get_ServerHandler();
            if (guild != 0)
            {
                guild->LoadGuildAgit(handler, *(unsigned int*)(pb + 0xb));
            }
        }
    }
    else
    {
        m_pclApp->Get_GuildManager()->SendGuildInfoToMembers(
            *(unsigned int*)(pb + 0xb), true);
        DNF_LOG_SCOPE_LINE(0x21d,"./log/Except",
            "[DB ERROR]CPacketTranslater::OnReplyQueryGuild() packet->bSuccess : %d,guildKey(%d)",
            (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb));
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnReplyQueryGuild() Exception Break : %s\n", e.what());
        CMyFileLog log("OnReplyQueryGuild", 0x223);
        log("./log/Except", "CPacketTranslater::OnReplyQueryGuild() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnReplyQueryGuild() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x229);
        log("./log/Except", "CPacketTranslater::OnReplyQueryGuild() Exception Break\n");
    }
}
```
