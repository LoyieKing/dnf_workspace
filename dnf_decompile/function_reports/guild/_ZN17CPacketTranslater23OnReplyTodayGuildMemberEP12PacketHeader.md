# _ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader

`CPacketTranslater::OnReplyTodayGuildMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80888fa` | `0x1eb` | `0x807e86e` | `0x1eb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,126 +1,126 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x59>
 movl   $0x1f75,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyTodayGuildMember : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x1e4>
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0xc0>
 movl   $0x1f7b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyTodayGuildMember : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x1e4>
 mov    -0x14(%ebp),%eax
 lea    0xe(%eax),%esi
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager17InsertTodayMemberEjR18STTodayGuildMember>
 mov    -0x14(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x1e4>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x18a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1f8a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyTodayGuildMember Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x183>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x1e4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1f8f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyTodayGuildMember Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader+0x1df>
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

/* CPacketTranslater::OnReplyTodayGuildMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  STTodayGuildMember *pSVar1;
  uint uVar2;
  CGuildManager *this;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuild *local_14;
  
  local_18 = param_1;
  local_14 = (CGuild *)0x0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808892e to 08088a02 has its CatchHandler @ 08088a08 */
    CMyFileLog::CMyFileLog(local_38,"OnReplyTodayGuildMember",0x1f75);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/Guild","CPacketTranslater::OnReplyTodayGuildMember : 0 == m_pclApp");
  }
  else {
    local_14 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_14 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnReplyTodayGuildMember",0x1f7b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Guild","CPacketTranslater::OnReplyTodayGuildMember : 0 == pGuild");
    }
    else {
      pSVar1 = (STTodayGuildMember *)(local_18 + 0xe);
      uVar2 = *(uint *)(local_18 + 10);
      this = (CGuildManager *)CApplication::Get_GuildManager(m_pclApp);
      CGuildManager::_ZN13CGuildManager17InsertTodayMemberEjR18STTodayGuildMember(this,uVar2,pSVar1)
      ;
      CGuild::SetTodayGuildMember(local_14,(STTodayGuildMember *)(local_18 + 0xe));
      CGuild::NotifyAllTodayGuildMember(local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5605 行）：

```cpp
void CPacketTranslater::OnReplyTodayGuildMember(PacketHeader* pkt)
{
    Packet_Reply_Today_Guild_Member* pb = (Packet_Reply_Today_Guild_Member*)pkt;
    CGuild* guild = 0;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f75, "./log/Guild", "CPacketTranslater::OnReplyTodayGuildMember : 0 == m_pclApp");
        return;
    }
    try
    {
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildId)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1f7b, "./log/Guild", "CPacketTranslater::OnReplyTodayGuildMember : 0 == pGuild");
            return;
        }
        m_pclApp->Get_GuildManager()->InsertTodayMember(pb->m_guildId, pb->m_member);
        guild->SetTodayGuildMember(pb->m_member);
        guild->NotifyAllTodayGuildMember();
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnReplyTodayGuildMember Exception Break", 0x1f8a, 0x1f8f);
}
```
