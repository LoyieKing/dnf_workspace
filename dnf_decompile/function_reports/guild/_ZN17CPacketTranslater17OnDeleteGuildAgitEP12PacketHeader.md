# _ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader

`CPacketTranslater::OnDeleteGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808252e` | `0x3d3` | `0x807879c` | `0x3a7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,242 +1,227 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x90,%esp
-movl   $0x0,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x55>
 movl   $0x1647,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
-mov    0x8(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x8d>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x94>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x99>
-mov    $0x0,%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x87>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xc2>
+movl   $0x164f,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnDeleteGuildAgit : 0 == pclGuild",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xd8>
-movl   $0x164f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDeleteGuildAgit : 0 == pclGuild",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
-mov    -0x18(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x27b>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x239>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo7IsEmptyEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x13b>
+mov    -0x1c(%ebp),%eax
+mov    0xe(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %ebx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild15DeleteGuildAgitEP14CServerHandlerjj>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
+movl   $0x1663,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild cargo is not empty",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x143>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1655,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDeleteGuildAgit : %d is not guild master(g:%d)",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x19a>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x165b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild do not have guild agit",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo7IsEmptyEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x2be>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1663,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild cargo is not empty",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x266>
-mov    -0x18(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x1e1>
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x166b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDeleteGuildAgit : 0 == pclUser(%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
 lea    -0x73(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Channel_Delete_Guild_AgitC1Ev>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x69(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x65(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x61(%ebp)
 movb   $0xd4,-0x5d(%ebp)
 lea    -0x73(%ebp),%eax
 movl   $0x17,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild15DeleteGuildAgitEP14CServerHandlerjj>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
+movl   $0x165b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild do not have guild agit",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
+mov    -0x1c(%ebp),%eax
+mov    0xe(%eax),%ebx
+movl   $0x1655,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnDeleteGuildAgit : %d is not guild master(g:%d)",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x36f>
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x343>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x167d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDeleteGuildAgit Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x368>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x33c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x39d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1682,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x3c4>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x398>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x90,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDeleteGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  CGuildCargo *this;
  CServerHandler *pCVar7;
  Packet_Channel_Delete_Guild_Agit local_77 [10];
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined1 local_61;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CGuild *local_20;
  PacketHeader *local_1c;
  CApplication *local_18;
  CUser *local_14;
  
  local_20 = (CGuild *)0x0;
  if (m_pclApp != (CApplication *)0x0) {
    local_1c = param_1;
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_20 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_20 == (CGuild *)0x0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      CMyFileLog::CMyFileLog(local_58,"OnDeleteGuildAgit",0x164f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildAgit","CPacketTranslater::OnDeleteGuildAgit : 0 == pclGuild");
    }
    else {
      cVar6 = CGuild::IsGuildMaster(local_20,*(uint *)(local_1c + 0xe));
      if (cVar6 == '\x01') {
        cVar6 = CGuild::IsExistGuildAgit(local_20);
        if (cVar6 == '\x01') {
          this = (CGuildCargo *)CGuild::GetGuildCargo(local_20);
          cVar6 = CGuildCargo::_ZN11CGuildCargo7IsEmptyEv(this);
          if (cVar6 == '\x01') {
            uVar3 = *(uint *)(local_1c + 0xe);
            uVar4 = *(uint *)(local_1c + 10);
            pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CGuild::DeleteGuildAgit(local_20,pCVar7,uVar4,uVar3);
          }
          else {
            uVar1 = *(undefined4 *)(local_1c + 10);
            CMyFileLog::CMyFileLog(local_40,"OnDeleteGuildAgit",0x1663);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_40,"./log/GuildAgit",
                       "CPacketTranslater::OnDeleteGuildAgit : %d guild cargo is not empty",uVar1);
            local_18 = m_pclApp + 0x10;
            local_14 = (CUser *)CUserManager::FindUser_CharNo((uint)local_18);
            if (local_14 == (CUser *)0x0) {
              uVar1 = *(undefined4 *)(local_1c + 0xe);
              CMyFileLog::CMyFileLog(local_38,"OnDeleteGuildAgit",0x166b);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_38,"./log/GuildCargo",
                         "CPacketTranslater::OnDeleteGuildAgit : 0 == pclUser(%d)",uVar1);
            }
            else {
              Packet_Channel_Delete_Guild_Agit::Packet_Channel_Delete_Guild_Agit(local_77);
              local_6d = CUser::GetIdByChannel(local_14);
              local_69 = CUser::GetUniqCharNo(local_14);
              local_65 = CUser::GetUniqCharNo(local_14);
              local_61 = 0xd4;
              CUser::SendToGameserver(local_14,(char *)local_77,0x17);
            }
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_1c + 10);
          CMyFileLog::CMyFileLog(local_48,"OnDeleteGuildAgit",0x165b);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/GuildAgit",
                     "CPacketTranslater::OnDeleteGuildAgit : %d guild do not have guild agit",uVar1)
          ;
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_1c + 10);
        uVar2 = *(undefined4 *)(local_1c + 0xe);
        CMyFileLog::CMyFileLog(local_50,"OnDeleteGuildAgit",0x1655);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/GuildAgit",
                   "CPacketTranslater::OnDeleteGuildAgit : %d is not guild master(g:%d)",uVar2,uVar1
                  );
      }
    }
    return;
  }
                    /* try { // try from 0808255f to 0808281b has its CatchHandler @ 08082821 */
  CMyFileLog::CMyFileLog(local_60,"OnDeleteGuildAgit",0x1647);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_60,"./log/Except","CPacketTranslater::OnDeleteGuildAgit : 0 == m_pclApp");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4753 行）：

```cpp
void CPacketTranslater::OnDeleteGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1647, "./log/Except", "CPacketTranslater::OnDeleteGuildAgit : 0 == m_pclApp");
            return;
        }
        else
        {
            unsigned int guildKey = ((PTL_GuildAgitPkt*)pb)->m_guildKey;
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
            if (guildKey == 0 || guild == 0)
            {
                DNF_LOG_SCOPE_LINE(0x164f, "./log/GuildAgit", "CPacketTranslater::OnDeleteGuildAgit : 0 == pclGuild");
            }
            else if (guild->IsGuildMaster(((PTL_GuildAgitPkt*)pb)->m_charNo) == 1)
            {
                if (guild->IsExistGuildAgit() == 1)
                {
                    if (guild->GetGuildCargo()->IsEmpty() == 1)
                    {
                        guild->DeleteGuildAgit(m_pclApp->Get_ServerHandler(), guildKey,
                                               ((PTL_GuildAgitPkt*)pb)->m_charNo);
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x1663,"./log/GuildAgit",
                            "CPacketTranslater::OnDeleteGuildAgit : %d guild cargo is not empty",
                            guildKey);
                        CUser* user =
                            (&m_pclApp->m_userManager)->FindUser_CharNo(
                                ((PTL_GuildAgitPkt*)pb)->m_charNo);
                        if (user == 0)
                        {
                            DNF_LOG_SCOPE_LINE(0x166b,"./log/GuildCargo",
                                "CPacketTranslater::OnDeleteGuildAgit : 0 == pclUser(%d)",
                                ((PTL_GuildAgitPkt*)pb)->m_charNo);
                        }
                        else
                        {
                            Packet_Channel_Delete_Guild_Agit reply;
                            reply.ma = user->GetIdByChannel();
                            reply.me = user->GetUniqCharNo();
                            reply.m12 = user->GetUniqCharNo();
                            reply.m16 = 0xd4;
                            user->SendToGameserver((char*)&reply, 0x17);
                        }
                    }
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x165b,"./log/GuildAgit",
                        "CPacketTranslater::OnDeleteGuildAgit : %d guild do not have guild agit",
                        guildKey);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x1655,"./log/GuildAgit",
                    "CPacketTranslater::OnDeleteGuildAgit : %d is not guild master(g:%d)",
                    ((PTL_GuildAgitPkt*)pb)->m_charNo, guildKey);
            }
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnDeleteGuildAgit Exception Break", 0x167d, 0x1682);
}
```
