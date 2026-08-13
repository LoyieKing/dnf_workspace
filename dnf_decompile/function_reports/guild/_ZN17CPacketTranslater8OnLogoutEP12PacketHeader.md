# _ZN17CPacketTranslater8OnLogoutEP12PacketHeader

`CPacketTranslater::OnLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8071554` | `0x416` | `0x8067ace` | `0x410` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,282 +1,278 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
+sub    $0x9c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40a>
-mov    -0x28(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
+mov    -0x34(%ebp),%eax
+mov    0xa(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x28(%ebp)
+movl   $0xaa,0x8(%esp)
+movl   $"OnLogout",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x64(%ebp)
+mov    %eax,-0x6c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,-0x60(%ebp)
+mov    %eax,%esi
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15GetGuildMemFlagEv>
-movzwl %ax,%eax
-mov    %eax,-0x5c(%ebp)
+movzwl %ax,%edi
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,%edi
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x6c(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %edi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0xaa,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x64(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x60(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x5c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"LOGOUT : User DB ID(%s), Char No(%d), Guild K(%d)GFlag(%d), name(%s), F.O.C(%d)\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x144>
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x13c>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x290(%edx),%ecx
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x204>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1f3>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager17DeleteUser_CharNoEj>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+lea    -0x35(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager19DeleteUser_CharNameESs>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1c3>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1d0>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1e8>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2ff>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13ResetCharInfoEv>
+mov    -0x34(%ebp),%eax
+movzbl 0x17(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2e7>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager17DeleteUser_CharNoEj>
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-lea    -0x45(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%eax
+call   <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser>
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager19DeleteUser_CharNameESs>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1ee>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x1d6>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x300>
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13ResetCharInfoEv>
-mov    -0x28(%ebp),%eax
-movzbl 0x17(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2e8>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser>
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager13SetUserObjectEP5CUser>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14ResetBlackListEv>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10DeleteUserEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%edi
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x28(%ebp),%eax
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
+mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+movl   $0xd6,0x8(%esp)
+movl   $"OnLogout",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ebx
-movl   $0xd6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
 movl   $0x2,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetUserPosStateEh>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x3a2>
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x39f>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0xe5,0x8(%esp)
+movl   $"OnLogout",0x4(%esp)
+lea    -0x54(%ebp),%eax
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
-movl   $0xe5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x39b>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x398>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x405>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnLogout() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xeb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogout() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x403>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x400>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x40b>
-nop
-add    $0x8c,%esp
+add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater8OnLogoutEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  CMyFileLog local_58 [8];
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [24];
  CUser *local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  CMemoryCashManager *local_24;
  
  local_2c = param_1;
  if (m_pclApp != (CApplication *)0x0) {
    local_28 = m_pclApp + 0x10;
                    /* try { // try from 0807158e to 080716c9 has its CatchHandler @ 08071854 */
    local_30 = (CUser *)CUserManager::FindUser((uint)local_28);
    if (local_30 != (CUser *)0x0) {
      PVar1 = local_2c[0x17];
      uVar3 = CUser::GetCharName(local_30);
      uVar4 = CUser::GetGuildMemFlag(local_30);
      uVar5 = CUser::GetGuildKey(local_30);
      uVar6 = CUser::GetUniqCharNo(local_30);
      uVar7 = NumberToString(*(uint *)(local_2c + 10),0);
      CMyFileLog::CMyFileLog(local_58,"OnLogout",0xaa);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/User",
                 "LOGOUT : User DB ID(%s), Char No(%d), Guild K(%d)GFlag(%d), name(%s), F.O.C(%d)\n"
                 ,uVar7,uVar6,uVar5,uVar4 & 0xffff,uVar3,(uint)(byte)PVar1);
      iVar8 = CUser::GetGuildKey(local_30);
      if (iVar8 != 0) {
        uVar4 = CUser::GetGuildKey(local_30);
        CGuildManager::_ZN13CGuildManager14GuildMemLogoutEjP5CUser
                  ((CGuildManager *)(m_pclApp + 0x290),uVar4,local_30);
      }
      iVar8 = CUser::GetUniqCharNo(local_30);
      if (iVar8 != 0) {
        uVar4 = CUser::GetUniqCharNo(local_30);
        CUserManager::_ZN12CUserManager17DeleteUser_CharNoEj((CUserManager *)local_28,uVar4);
        std::allocator<char>::allocator();
        pcVar9 = (char *)CUser::GetCharName(local_30);
                    /* try { // try from 080716f1 to 080716f5 has its CatchHandler @ 0807172a */
        std::string::string(local_50,pcVar9,&local_49);
                    /* try { // try from 08071703 to 08071707 has its CatchHandler @ 08071715 */
        CUserManager::DeleteUser_CharName((CUserManager *)local_28,local_50);
                    /* try { // try from 0807170e to 08071712 has its CatchHandler @ 0807172a */
        std::string::~string(local_50);
        std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* try { // try from 08071753 to 08071836 has its CatchHandler @ 08071854 */
        CUser::ResetCharInfo(local_30);
      }
      if (local_2c[0x17] == (PacketHeader)0x0) {
        local_24 = (CMemoryCashManager *)CApplication::Get_MemoryCashManager(m_pclApp);
        CMemoryCashManager::InsertCashMemorySetCharacterObject(local_24,local_30);
        CMemoryCashManager::SetUserObject(local_24,local_30);
        CUser::ResetBlackList(local_30);
        cVar2 = CUserManager::_ZN12CUserManager10DeleteUserEP5CUser
                          ((CUserManager *)local_28,local_30);
        if (cVar2 != '\x01') {
          uVar3 = CUser::GetCharName(local_30);
          uVar5 = CUser::GetUniqCharNo(local_30);
          uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
          CMyFileLog::CMyFileLog(local_48,"OnLogout",0xd6);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/User",
                     "[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",uVar6,
                     uVar5,uVar3);
        }
      }
      else {
        CUser::SetUserPosState(local_30,'\x02');
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 422 行）：

```cpp
void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    PTL_LogoutPkt* pb = (PTL_LogoutPkt*)pkt;
    try
    {
        if (m_pclApp != 0)
        {
            CUserManager* um = &m_pclApp->m_userManager;
            CUser* user;
            if ((user = um->FindUser(pb->m_dbid)) != 0)
            {
                char* mid = NumberToString(pb->m_dbid, 0);
                CMyFileLog log("OnLogout", 0xaa);
                log("./log/User",
                    "LOGOUT : User DB ID(%s), Char No(%d), Guild K(%d)GFlag(%d), name(%s), F.O.C(%d)\n",
                    mid, user->GetUniqCharNo(), user->GetGuildKey(), user->GetGuildMemFlag(),
                    user->GetCharName(), (unsigned int)pb->m_foc);
                if (user->GetGuildKey() != 0)
                {
                    (&m_pclApp->m_guildManager)->GuildMemLogout(user->GetGuildKey(), user);
                }
                if (user->GetUniqCharNo() != 0)
                {
                    um->DeleteUser_CharNo(user->GetUniqCharNo());
                    um->DeleteUser_CharName(user->GetCharName());
                }
                user->ResetCharInfo();
                if (pb->m_foc == 0)
                {
                    CMemoryCashManager* mc = m_pclApp->Get_MemoryCashManager();
                    mc->InsertCashMemorySetCharacterObject(user);
                    mc->SetUserObject(user);
                    user->ResetBlackList();
                    if (um->DeleteUser(user) != 1)
                    {
                        char* mid2 = NumberToString(pb->m_dbid, 0);
                        CMyFileLog log2("OnLogout", 0xd6);
                        log2("./log/User",
                            "[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",
                            mid2, user->GetUniqCharNo(), user->GetCharName());
                    }
                }
                else
                {
                    user->SetUserPosState(2);
                }
            }
        }
    }
    catch (std::exception& e)
    {
        printf("CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
        CMyFileLog log("OnLogout", 0xe5);
        log("./log/Except",
            "CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnLogout() Exception Break");
        CMyFileLog log(__FUNCTION__, 0xeb);
        log("./log/Except",
            "CPacketTranslater::OnLogout() Exception Break\n");
    }
}
```
