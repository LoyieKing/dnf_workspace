# _ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader

`CPacketTranslater::OnDBLoadGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8082fac` | `0x1d7` | `0x8079102` | `0x1b9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,122 +1,113 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-movl   $0x0,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x53>
+jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x4c>
 movl   $0x173a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1d0>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1b2>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x8a>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
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
-jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x91>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x96>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0xd5>
+je     <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x7e>
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0xb9>
 movl   $0x1743,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1b2>
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1b2>
+cmp    $0x2,%edx
+jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x158>
+mov    %eax,(%esp)
+call   <T> <__cxa_begin_catch>
+mov    %eax,-0xc(%ebp)
+movl   $0x174f,0x8(%esp)
+movl   $"OnDBLoadGuildAgit",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDBLoadGuildAgit Exception Break : %s\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1d0>
-mov    -0x10(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1d0>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x176>
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
-movl   $0x174f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadGuildAgit Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x16f>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x151>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1d0>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1b2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1754,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1cb>
+jmp    <T> <_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader+0x1ad>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  local_18 = (CGuild *)0x0;
  if (m_pclApp != 0) {
    local_14 = param_1;
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290),
       local_18 == (CGuild *)0x0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CMyFileLog::CMyFileLog(local_30,"OnDBLoadGuildAgit",0x1743);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildAgit","CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild"
                );
    }
    else {
      CGuild::SetGuildAgitInfo(local_18,(STGuildAgitDBInfo *)(local_14 + 0xe));
      CGuild::SendGuildAgitInfoToMembers(local_18);
    }
    return;
  }
                    /* try { // try from 08082fda to 080830a0 has its CatchHandler @ 080830a6 */
  CMyFileLog::CMyFileLog(local_38,"OnDBLoadGuildAgit",0x173a);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/Except","CPacketTranslater::OnDBLoadGuildAgit : 0 == m_pclApp");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4158 行）：

```cpp
void CPacketTranslater::OnDBLoadGuildAgit(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            CMyFileLog log(__FUNCTION__, 0x173a);
            log("./log/Except", "CPacketTranslater::OnDBLoadGuildAgit : 0 == m_pclApp");
            return;
        }
        unsigned int guildKey = ((Packet_Guild_Load_Guild_Agit*)pkt)->m_guildId;
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log(__FUNCTION__, 0x1743);
            log("./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitInfo(((Packet_Guild_Load_Guild_Agit*)pkt)->m_info);
            guild->SendGuildAgitInfoToMembers();
        }
    }
    catch (std::exception& e)
    {
        CMyFileLog log("OnDBLoadGuildAgit", 0x174f);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadGuildAgit Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1754);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadGuildAgit Exception Break\n");
    }
}
```
