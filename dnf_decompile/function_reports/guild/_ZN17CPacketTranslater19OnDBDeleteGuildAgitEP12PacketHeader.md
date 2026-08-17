# _ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader

`CPacketTranslater::OnDBDeleteGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8082be6` | `0x25e` | `0x8078e8c` | `0x242` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,154 +1,147 @@
-push   %ebp
-mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x6c,%esp
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x5b>
+jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x53>
 movl   $0x16dd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBDeleteGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x256>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x23a>
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0xc4>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0xb6>
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x16e6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBDeleteGuildAgit / Failure! Delete Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x256>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x23a>
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0xf5>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0xfc>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x101>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x140>
+je     <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0xe8>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x124>
 movl   $0x16ef,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x256>
+nop
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x23a>
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16SetGuildAgitFlagEb>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild34NotifyDeleteGuildAgitToGuildMemberEj>
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x23a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x1fc>
+jne    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x1e0>
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
 mov    %eax,%ebx
 movl   $0x16fe,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBDeleteGuildAgit Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x1d9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x23a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1703,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBDeleteGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader+0x235>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+push   %ebp
+mov    %esp,%ebp
+push   %esi
+push   %ebx
+sub    $0x40,%esp
+movl   $0x0,-0x1c(%ebp)
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBDeleteGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  undefined4 local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_2c = 0;
  local_28 = (CGuild *)0x0;
  if (m_pclApp == 0) {
                    /* try { // try from 08082c1c to 08082d60 has its CatchHandler @ 08082d66 */
    CMyFileLog::CMyFileLog(local_54,"OnDBDeleteGuildAgit",0x16dd);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Except","CPacketTranslater::OnDBDeleteGuildAgit : 0 == m_pclApp");
    return;
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 0x12) == 0) {
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290),
       local_28 == (CGuild *)0x0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      CMyFileLog::CMyFileLog(local_44,"OnDBDeleteGuildAgit",0x16ef);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/GuildAgit","CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild"
                );
    }
    else {
      CGuild::SetGuildAgitFlag(local_28,false);
      CGuild::NotifyDeleteGuildAgitToGuildMember(local_28,*(uint *)(local_24 + 0xe));
      CGuild::SendGuildInfoToMembers(local_28,false);
    }
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_4c,"OnDBDeleteGuildAgit",0x16e6);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_4c,"./log/GuildAgit",
             "CPacketTranslater::OnDBDeleteGuildAgit / Failure! Delete Guild Agit(Guild No : %d, Master No : %d, Reason : %d)"
             ,uVar3,uVar2,uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4166 行）：

```cpp
void CPacketTranslater::OnDBDeleteGuildAgit(PacketHeader* pkt)
{
    Packet_DB_Delete_Guild_Agit_Reply* pb = (Packet_DB_Delete_Guild_Agit_Reply*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x16dd, "./log/Except", "CPacketTranslater::OnDBDeleteGuildAgit : 0 == m_pclApp");
            return;
        }
        if (pb->m_field12 != 0)
        {
            DNF_LOG_SCOPE_LINE(0x16e6,"./log/GuildAgit",
                "CPacketTranslater::OnDBDeleteGuildAgit / Failure! Delete Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
                pb->m_guildKey, pb->m_charNo, pb->m_field12);
            return;
        }
        {
            unsigned int guildKey = pb->m_guildKey;
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
            if (guildKey == 0 || guild == 0)
            {
                DNF_LOG_SCOPE_LINE(0x16ef, "./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
            }
            else
            {
                guild->SetGuildAgitFlag(false);
                guild->NotifyDeleteGuildAgitToGuildMember(
                    pb->m_charNo);
                guild->SendGuildInfoToMembers(false);
            }
        }
        return;
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnDBDeleteGuildAgit Exception Break", 0x16fe, 0x1703);
}
```
