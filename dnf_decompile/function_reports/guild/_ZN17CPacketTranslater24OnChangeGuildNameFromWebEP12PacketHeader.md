# _ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader

`CPacketTranslater::OnChangeGuildNameFromWeb(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8081d32` | `0x277` | `0x807812e` | `0x17e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,163 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x60,%esp
+sub    $0x58,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x4c>
+jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x50>
 movl   $0x159d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildNameFromWeb : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x270>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x83>
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x17c>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x8a>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x8f>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0xce>
+je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x84>
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0xbf>
 movl   $0x15a5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildNameFromWeb : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x270>
+jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x17c>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x10d>
+jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0xf6>
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x10d>
+je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0xfd>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x112>
+jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x102>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x165>
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x15ab,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnChangeGuildNameFromWeb : %d is not guild master or sub master(g:%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x270>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x138>
+mov    -0x18(%ebp),%eax
 add    $0x12,%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15ChangeGuildNameEPci>
 movl   $0x0,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x270>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x216>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x15b7,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x17c>
+movl   $0x15ab,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnChangeGuildNameFromWeb Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnChangeGuildNameFromWeb : %d is not guild master or sub master(g:%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x20f>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x270>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x15bc,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnChangeGuildNameFromWeb Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader+0x26b>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x60,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangeGuildNameFromWeb(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  if (m_pclApp == 0) {
                    /* try { // try from 08081d59 to 08081ec6 has its CatchHandler @ 08081ecc */
    CMyFileLog::CMyFileLog(local_40,"OnChangeGuildNameFromWeb",0x159d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Except","CPacketTranslater::OnChangeGuildNameFromWeb : 0 == m_pclApp"
              );
    return;
  }
  local_14 = param_1;
  if ((*(int *)(param_1 + 0xe) == 0) ||
     (local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290),
     local_18 == (CGuild *)0x0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    cVar4 = CGuild::IsSubGuildMaster(local_18,*(uint *)(local_14 + 10));
    if ((cVar4 == '\x01') ||
       (cVar4 = CGuild::IsGuildMaster(local_18,*(uint *)(local_14 + 10)), cVar4 == '\x01')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar2 = *(undefined4 *)(local_14 + 10);
      CMyFileLog::CMyFileLog(local_30,"OnChangeGuildNameFromWeb",0x15ab);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildModify",
                 "CPacketTranslater::OnChangeGuildNameFromWeb : %d is not guild master or sub master(g:%d)"
                 ,uVar2,uVar1);
    }
    else {
      CGuild::ChangeGuildName(local_18,(char *)(local_14 + 0x12),0);
      CGuild::SendGuildInfoToMembers(local_18,false);
    }
    return;
  }
  CMyFileLog::CMyFileLog(local_38,"OnChangeGuildNameFromWeb",0x15a5);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/GuildModify",
             "CPacketTranslater::OnChangeGuildNameFromWeb : 0 == pclGuild");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3910 行）：

```cpp
void CPacketTranslater::OnChangeGuildNameFromWeb(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x159d,"./log/Except",
            "CPacketTranslater::OnChangeGuildNameFromWeb : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x15a5,"./log/GuildModify",
            "CPacketTranslater::OnChangeGuildNameFromWeb : 0 == pclGuild");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
    {
        guild->ChangeGuildName(pb + 0x12, 0);
        guild->SendGuildInfoToMembers(false);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x15ab,"./log/GuildModify",
            "CPacketTranslater::OnChangeGuildNameFromWeb : %d is not guild master or sub master(g:%d)",
            charNo, guildKey);
    }
}
```
