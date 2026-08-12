# _ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader

`CPacketTranslater::OnPacketJoinPower(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807ff8a` | `0x3d5` | `0x8076256` | `0x3e6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,253 +1,256 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-add    $0xffffff80,%esp
+sub    $0x90,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x63(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x5f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Answer_Join_PowerC1Ev>
-movl   $0x0,-0x59(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x51(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x4d(%ebp)
+lea    -0x5f(%ebp),%eax
+add    $0xa,%eax
+movl   $0x0,(%eax)
+lea    -0x5f(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x5f(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x77>
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x8d>
 movl   $0x1237,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketJoinPower : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0xdb>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0xf3>
 movl   $0x123d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketJoinPower : 0 == pclRequestUser",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
-mov    -0x18(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
+lea    -0x5f(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x55(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x11a>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,(%ebx)
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x121>
+je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x13a>
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x19b>
+movl   $0x1244,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnPacketJoinPower : 0 == pclGuild",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x5f(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x5f(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1c7>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1ce>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x126>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1d3>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x189>
-movl   $0x1244,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnPacketJoinPower : 0 == pclGuild",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x64,-0x59(%ebp)
-movzwl -0x61(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x63(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1c8>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1c8>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1cd>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x244>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x124f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnPacketJoinPower : %d is not guild master or sub master(g:%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x56,-0x59(%ebp)
-movzwl -0x61(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x63(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
-mov    -0x14(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0xd(%ebp)
-cmpb   $0x1,-0xd(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x25a>
-movb   $0x3,-0xd(%ebp)
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x25e>
-movb   $0x4,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x299>
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1ef>
+mov    $0x3,%eax
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x1f4>
+mov    $0x4,%eax
+mov    %al,-0x11(%ebp)
+movzbl -0x11(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SetPowerSideEh>
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17IncPowerJoinCountEv>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x0,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
-movzbl -0xd(%ebp),%eax
-mov    %al,-0x4d(%ebp)
-movzwl -0x61(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x63(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+lea    -0x5f(%ebp),%eax
+lea    0x16(%eax),%edx
+movzbl -0x11(%ebp),%eax
+mov    %al,(%edx)
+lea    -0x5f(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0x0,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
+movl   $0x124f,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
+mov    %eax,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnPacketJoinPower : %d is not guild master or sub master(g:%d)",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x5f(%ebp),%eax
+add    $0xa,%eax
+movl   $0x56,(%eax)
+lea    -0x5f(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x374>
+jne    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x382>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x1291,0x8(%esp)
+movl   $"OnPacketJoinPower",0x4(%esp)
+lea    -0x68(%ebp),%eax
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
-movl   $0x1291,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPacketJoinPower Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x36d>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x37b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3ce>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3dc>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1296,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketJoinPower Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3c9>
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader+0x3d7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-sub    $0xffffff80,%esp
+add    $0x90,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPacketJoinPower(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  uchar uVar5;
  CServerHandler *pCVar6;
  CServerInterface *this;
  Packet_Answer_Join_Power local_67 [2];
  ushort local_65;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  PacketHeader local_51;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CGuild *local_20;
  CUser *local_1c;
  PacketHeader *local_18;
  uchar local_11;
  
  local_18 = param_1;
  Packet_Answer_Join_Power::Packet_Answer_Join_Power(local_67);
  local_5d = 0;
  local_55 = *(undefined4 *)(local_18 + 10);
  local_51 = local_18[0x12];
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807ffdc to 0808027c has its CatchHandler @ 08080282 */
    CMyFileLog::CMyFileLog(local_50,"OnPacketJoinPower",0x1237);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_50,"./log/Power","CPacketTranslater::OnPacketJoinPower : 0 == m_pclApp");
    return;
  }
  local_1c = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_1c != (CUser *)0x0) {
    local_59 = CUser::GetIdByChannel(local_1c);
    if ((*(int *)(local_18 + 0xe) == 0) ||
       (local_20 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_20 == (CGuild *)0x0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      cVar4 = CGuild::IsSubGuildMaster(local_20,*(uint *)(local_18 + 10));
      if ((cVar4 == '\x01') ||
         (cVar4 = CGuild::IsGuildMaster(local_20,*(uint *)(local_18 + 10)), cVar4 == '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar1 = *(undefined4 *)(local_18 + 0xe);
        uVar2 = *(undefined4 *)(local_18 + 10);
        CMyFileLog::CMyFileLog(local_38,"OnPacketJoinPower",0x124f);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/Power",
                   "CPacketTranslater::OnPacketJoinPower : %d is not guild master or sub master(g:%d)"
                   ,uVar2,uVar1);
        local_5d = 0x56;
        CUser::SendToGameserver(local_1c,(char *)local_67,(uint)local_65);
      }
      else {
        if (local_18[0x12] == (PacketHeader)0x1) {
          local_11 = '\x03';
        }
        else {
          local_11 = '\x04';
        }
        CGuild::SetPowerSide(local_20,local_11);
        CGuild::IncPowerJoinCount(local_20);
        pCVar6 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        this = (CServerInterface *)CUser::GetGameServer(local_1c);
        uVar5 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(this);
        CGuild::DBGuildSave(local_20,uVar5,pCVar6,0);
        local_51 = (PacketHeader)local_11;
        CUser::SendToGameserver(local_1c,(char *)local_67,(uint)local_65);
        CGuild::SendGuildInfoToMembers(local_20,false);
      }
      return;
    }
    CMyFileLog::CMyFileLog(local_40,"OnPacketJoinPower",0x1244);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Power","CPacketTranslater::OnPacketJoinPower : 0 == pclGuild");
    local_5d = 100;
    CUser::SendToGameserver(local_1c,(char *)local_67,(uint)local_65);
    return;
  }
  CMyFileLog::CMyFileLog(local_48,"OnPacketJoinPower",0x123d);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/Power","CPacketTranslater::OnPacketJoinPower : 0 == pclRequestUser");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3434 行）：

```cpp
void CPacketTranslater::OnPacketJoinPower(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        Packet_Answer_Join_Power reply;
        *(unsigned int*)((char*)&reply + 0xa) = 0;
        *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)(pb + 0xa);
        *(unsigned char*)((char*)&reply + 0x16) = *(unsigned char*)(pb + 0x12);
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1237, "./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == m_pclApp");
            return;
        }
        unsigned int charNo = *(unsigned int*)(pb + 0xa);
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x123d, "./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == pclRequestUser");
            return;
        }
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        unsigned int guildKey = *(unsigned int*)(pb + 0xe);
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1244, "./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == pclGuild");
            *(unsigned int*)((char*)&reply + 0xa) = 100;
            user->SendToGameserver((char*)&reply, 0x17);
            return;
        }
        if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
        {
            unsigned char side = (unsigned char)pb[0x12] == 1 ? 3 : 4;
            guild->SetPowerSide(side);
            guild->IncPowerJoinCount();
            CServerInterface* gs = user->GetGameServer();
            guild->DBGuildSave(gs->GetGroupNo(), m_pclApp->Get_ServerHandler(), 0);
            *(unsigned char*)((char*)&reply + 0x16) = side;
            user->SendToGameserver((char*)&reply, 0x17);
            guild->SendGuildInfoToMembers(false);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x124f,"./log/Power",
                "CPacketTranslater::OnPacketJoinPower : %d is not guild master or sub master(g:%d)",
                charNo, guildKey);
            *(unsigned int*)((char*)&reply + 0xa) = 0x56;
            user->SendToGameserver((char*)&reply, 0x17);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnPacketJoinPower", 0x1291);
        log("./log/Except",
            "CPacketTranslater::OnPacketJoinPower Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1296);
        log("./log/Except", "CPacketTranslater::OnPacketJoinPower Exception Break\n");
    }
}
```
