# _ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader

`CPacketTranslater::OnChangeCharName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8081942` | `0x3ef` | `0x8077c48` | `0x3a7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,257 +1,233 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0xb0,%esp
+sub    $0x90,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x4f>
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x55>
 movl   $0x1544,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x9a>
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x9c>
 movl   $0x154c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeCharName : packet->m_uGuildKey",0x8(%esp)
 movl   $"./log/ServerUnify",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
-lea    -0xa2(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_UnChangable_GuildInfo_SaveC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x98(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x94(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x7a(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x76(%ebp)
+mov    -0x1c(%ebp),%eax
 add    $0x16,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xa2(%ebp),%eax
+lea    -0x84(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0xa2(%ebp),%edx
+lea    -0x84(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%ebx
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager14GetTodayMemberEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x177>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x17b>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x177>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x17b>
+mov    -0x18(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 lea    0x16(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1d,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1df>
+movl   $0x1563,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnChangeCharName : 0 == pclGuild",0x8(%esp)
+movl   $"./log/ServerUnify",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc>
+cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1de>
-movl   $0x1563,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnChangeCharName : 0 == pclGuild",0x8(%esp)
-movl   $"./log/ServerUnify",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
-lea    -0x72(%ebp),%eax
-mov    $0x1e,%ebx
-mov    $0x0,%edx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1fd>
-mov    %dx,(%eax)
-add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
-mov    $0x0,%ecx
-mov    %edx,(%eax,%ecx,1)
-add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x207>
-add    %ecx,%eax
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x222>
-mov    %dx,(%eax)
-add    $0x2,%eax
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x230>
-mov    %dl,(%eax)
-add    $0x1,%eax
-mov    -0x14(%ebp),%eax
-lea    0x16(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x291>
-movl   $0x156b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnChangeGuildName : false == pclGuild->ChangeGuildMemberCharName()",0x8(%esp)
-movl   $"./log/ServerUnify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x28e>
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2f5>
+je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x274>
 movl   $0x1572,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser",0x8(%esp)
 movl   $"./log/ServerUnify",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
-mov    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14ChangeCharNameEPc>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
+movl   $0x156b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnChangeGuildName : false == pclGuild->ChangeGuildMemberCharName()",0x8(%esp)
+movl   $"./log/ServerUnify",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x38b>
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x343>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x157f,0x8(%esp)
+movl   $"OnChangeCharName",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x157f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeCharName Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x384>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x33c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e5>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x39d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1584,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeCharName Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3e0>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x398>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xb0,%esp
+add    $0x90,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x08081b6d) */
/* CPacketTranslater::OnChangeCharName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CServerHandler *this;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  bool bVar5;
  Packet_UnChangable_GuildInfo_Save local_a6 [10];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [30];
  undefined2 local_76;
  undefined2 local_74 [14];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  CGuild *local_1c;
  PacketHeader *local_18;
  int *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808196c to 08081c4b has its CatchHandler @ 08081c51 */
    CMyFileLog::CMyFileLog(local_58,"OnChangeCharName",0x1544);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_58,"./log/Except","CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
  }
  else {
    local_18 = param_1;
    if (*(int *)(param_1 + 0x12) == 0) {
      CMyFileLog::CMyFileLog(local_50,"OnChangeCharName",0x154c);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/ServerUnify",
                 "CPacketTranslater::OnChangeCharName : packet->m_uGuildKey");
    }
    else {
      Packet_UnChangable_GuildInfo_Save::Packet_UnChangable_GuildInfo_Save(local_a6);
      local_9c = *(undefined4 *)(local_18 + 0x12);
      local_98 = *(undefined4 *)(local_18 + 0xe);
      memcpy(auStack_94,local_18 + 0x16,0x1d);
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(this,(PacketHeader *)local_a6);
      uVar2 = CApplication::Get_GuildManager(m_pclApp);
      local_14 = (int *)CGuildManager::GetTodayMember(uVar2);
      if ((local_14 != (int *)0x0) && (*local_14 == *(int *)(local_18 + 0xe))) {
        memset(local_14 + 1,0,0x1e);
        strncpy((char *)(local_14 + 1),(char *)(local_18 + 0x16),0x1d);
      }
      local_1c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      if (local_1c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_48,"OnChangeCharName",0x1563);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/ServerUnify",
                   "CPacketTranslater::OnChangeCharName : 0 == pclGuild");
      }
      else {
        puVar3 = &local_76;
        uVar2 = 0x1e;
        bVar5 = ((uint)puVar3 & 2) != 0;
        if (bVar5) {
          local_76 = 0;
          puVar3 = local_74;
          uVar2 = 0x1c;
        }
        uVar4 = 0;
        do {
          *(undefined4 *)((int)puVar3 + uVar4) = 0;
          uVar4 = uVar4 + 4;
        } while (uVar4 < (uVar2 & 0xfffffffc));
        if (!bVar5) {
          *(undefined2 *)((int)puVar3 + uVar4) = 0;
        }
        cVar1 = CGuild::ChangeGuildMemberCharName
                          (local_1c,*(uint *)(local_18 + 0xe),(char *)(local_18 + 0x16));
        if (cVar1 == '\x01') {
          local_20 = (CUser *)CUserManager::FindUser((uint)(m_pclApp + 0x10));
          if (local_20 == (CUser *)0x0) {
            CMyFileLog::CMyFileLog(local_38,"OnChangeCharName",0x1572);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_38,"./log/ServerUnify",
                       "CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser");
          }
          else {
            CUser::ChangeCharName(local_20,(char *)(local_18 + 0x16));
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_40,"OnChangeCharName",0x156b);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_40,"./log/ServerUnify",
                     "CPacketTranslater::OnChangeGuildName : false == pclGuild->ChangeGuildMemberCharName()"
                    );
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4011 行）：

```cpp
void CPacketTranslater::OnChangeCharName(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1544, "./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x154c, "./log/ServerUnify", "CPacketTranslater::OnChangeCharName : packet->m_uGuildKey");
        return;
    }
    Packet_UnChangable_GuildInfo_Save save;
    save.ma = *(unsigned int*)(pb + 0x12);
    save.me = *(unsigned int*)(pb + 0xe);
    memcpy(save.m_name, pb + 0x16, 0x1d);
    m_pclApp->Get_ServerHandler()->SendToDB(&save);
    STTodayGuildMember* today =
        m_pclApp->Get_GuildManager()->GetTodayMember(*(unsigned int*)(pb + 0x12));
    if (today != 0 && *(int*)today == *(int*)(pb + 0xe))
    {
        memset((char*)today + 4, 0, 0x1e);
        strncpy((char*)today + 4, pb + 0x16, 0x1d);
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1563, "./log/ServerUnify", "CPacketTranslater::OnChangeCharName : 0 == pclGuild");
        return;
    }
    if (guild->ChangeGuildMemberCharName(*(unsigned int*)(pb + 0xe), pb + 0x16) == 1)
    {
        CUser* user;
        if ((user = (&m_pclApp->m_userManager)->FindUser(*(unsigned int*)(pb + 0xa))) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1572,"./log/ServerUnify",
                "CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser");
        }
        else
        {
            user->ChangeCharName(pb + 0x16);
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x156b,"./log/ServerUnify",
            "CPacketTranslater::OnChangeGuildName : false == pclGuild->ChangeGuildMemberCharName()");
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnChangeCharName", 0x157f);
        log("./log/Except", "CPacketTranslater::OnChangeCharName Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1584);
        log("./log/Except", "CPacketTranslater::OnChangeCharName Exception Break\n");
    }
}
```
