# _ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader

`CPacketTranslater::OnDBCreateGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8082902` | `0x2e3` | `0x8078b3a` | `0x205` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x194c,%esp
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
+sub    $0x192c,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x5e>
+jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x56>
 movl   $0x1696,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d8>
-mov    0x8(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x1fa>
+mov    -0x24(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x1a0>
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0xc7>
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x9c>
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0xd8>
+movl   $0x16a9,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+nop
+jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x1fa>
+movl   $0x1,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16SetGuildAgitFlagEb>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %eax,%ebx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo12SetGuildInfoEi>
+lea    -0x1918(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STGuildCargoDBInfoC1Ev>
+movl   $0x18dc,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x1918(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x1918(%ebp),%eax
+add    $0x18d8,%eax
+movl   $0x8,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+lea    -0x1918(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo>
+mov    -0x24(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
+movl   $0x0,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x1fa>
+mov    -0x24(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%edi
+mov    -0x24(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%esi
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x16a0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBCreateGuildAgit / Failure! Create Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d8>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0xf8>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0xff>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x104>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x143>
-movl   $0x16a9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d8>
-movl   $0x1,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16SetGuildAgitFlagEb>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo12SetGuildInfoEi>
-lea    -0x192c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18STGuildCargoDBInfoC1Ev>
-movl   $0x18dc,0x8(%esp)
-movl   $0x0,0x4(%esp)
-lea    -0x192c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memset>
-movl   $0x8,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-lea    -0x192c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d8>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x27e>
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
-mov    %eax,%ebx
-movl   $0x16c4,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBCreateGuildAgit Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x277>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d8>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x16c9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBCreateGuildAgit Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader+0x2d3>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x194c,%esp
+add    $0x192c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBCreateGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  CGuildCargo *pCVar6;
  STGuildCargoDBInfo local_1930 [6360];
  undefined4 local_58;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  undefined4 local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_2c = 0;
  local_28 = (CGuild *)0x0;
  if (m_pclApp == 0) {
                    /* try { // try from 0808293b to 08082afe has its CatchHandler @ 08082b04 */
    CMyFileLog::CMyFileLog(local_54,"OnDBCreateGuildAgit",0x1696);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Except","CPacketTranslater::OnDBCreateGuildAgit : 0 == m_pclApp");
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
      CMyFileLog::CMyFileLog(local_44,"OnDBCreateGuildAgit",0x16a9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/GuildAgit","CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild"
                );
    }
    else {
      CGuild::SetGuildAgitFlag(local_28,true);
      iVar5 = CGuild::GetGuildKey(local_28);
      pCVar6 = (CGuildCargo *)CGuild::GetGuildCargo(local_28);
      CGuildCargo::_ZN11CGuildCargo12SetGuildInfoEi(pCVar6,iVar5);
      STGuildCargoDBInfo::STGuildCargoDBInfo(local_1930);
      memset(local_1930,0,0x18dc);
      local_58 = 8;
      pCVar6 = (CGuildCargo *)CGuild::GetGuildCargo(local_28);
      CGuildCargo::_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo(pCVar6,local_1930);
      CGuild::NotifyCreateGuildAgitToGuildMember(local_28,*(uint *)(local_24 + 0xe));
      CGuild::SendGuildAgitInfoToMembers(local_28);
      CGuild::SendGuildInfoToMembers(local_28,false);
    }
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_4c,"OnDBCreateGuildAgit",0x16a0);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_4c,"./log/GuildAgit",
             "CPacketTranslater::OnDBCreateGuildAgit / Failure! Create Guild Agit(Guild No : %d, Master No : %d, Reason : %d)"
             ,uVar3,uVar2,uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3923 行）：

```cpp
void CPacketTranslater::OnDBCreateGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1696, "./log/Except", "CPacketTranslater::OnDBCreateGuildAgit : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x16a9, "./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitFlag(true);
            guild->GetGuildCargo()->SetGuildInfo(guild->GetGuildKey());
            STGuildCargoDBInfo cargoInfo;
            memset(&cargoInfo, 0, 0x18dc);
            *(unsigned int*)((char*)&cargoInfo + 0x18d8) = 8;
            guild->GetGuildCargo()->SetGuildCargoDBInfo(cargoInfo);
            guild->NotifyCreateGuildAgitToGuildMember(*(unsigned int*)(pb + 0xe));
            guild->SendGuildAgitInfoToMembers();
            guild->SendGuildInfoToMembers(false);
        }
        return;
    }
    DNF_LOG_SCOPE_LINE(0x16a0,"./log/GuildAgit",
        "CPacketTranslater::OnDBCreateGuildAgit / Failure! Create Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
        *(unsigned int*)(pb + 0xa), *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0x12));
}
```
