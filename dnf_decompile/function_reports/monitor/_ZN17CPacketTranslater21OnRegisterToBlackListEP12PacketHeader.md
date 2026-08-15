# _ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader

`CPacketTranslater::OnRegisterToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8085694` | `0x46a` | `0x8071088` | `0x47f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,302 +1,307 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xc0,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x55>
 movl   $0xc41,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
-lea    -0xa9(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0xb1(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DBMW_Register_To_BlackListC1Ev>
-lea    -0x75(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Register_To_BlackList_RESULTC1Ev>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x9f(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xa7(%ebp)
+mov    -0x24(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xa9(%ebp),%eax
+lea    -0xb1(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x101>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x10f>
 movl   $0xc50,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
+mov    -0x24(%ebp),%eax
 lea    0xe(%eax),%ebx
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x182>
-movb   $0x3,-0x45(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x190>
+movb   $0x3,-0x4d(%ebp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6b(%ebp)
-movl   $0xffffffff,-0x49(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x73(%ebp)
+movl   $0xffffffff,-0x51(%ebp)
+mov    -0x24(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x75(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-movzwl -0x73(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x75(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
+movzwl -0x7b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x7d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6b(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x73(%ebp)
+mov    -0x24(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x75(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16GetBlackListSizeEv>
 cmp    $0x9,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x1eb>
-movb   $0x4,-0x45(%ebp)
-movzwl -0x73(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x75(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
-lea    -0x2d(%ebp),%eax
+setbe  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x379>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 lea    0xe(%eax),%edx
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-lea    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %bl
-lea    -0x34(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x26d>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x24d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x255>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x235>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x38a>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x39f>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x368>
-mov    -0x1c(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x35f>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x49(%ebp)
+mov    %eax,-0x51(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13GetGMAccountsEv>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e8>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2ab>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts4isGMEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e8>
-movb   $0x5,-0x45(%ebp)
-movzwl -0x73(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x75(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2ab>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2b0>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2da>
+movb   $0x5,-0x4d(%ebp)
+movzwl -0x7b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x7d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
+mov    -0x24(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0x14(%ebp),%eax
-lea    0xe(%eax),%ebx
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser19RegisterToBlackListEjPc>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x339>
-movb   $0x2,-0x45(%ebp)
-movzwl -0x73(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x75(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x32d>
+movb   $0x2,-0x4d(%ebp)
+movzwl -0x7b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x7d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x85(%ebp)
+movb   $0x1,-0x4d(%ebp)
+movzwl -0x7b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x7d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+lea    -0xb1(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x7d(%ebp)
-movb   $0x1,-0x45(%ebp)
-movzwl -0x73(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x75(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-lea    -0xa9(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
+movb   $0x4,-0x4d(%ebp)
+movzwl -0x7b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x7d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x406>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x41b>
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
 movl   $0xc8c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x3ff>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x414>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x460>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x475>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc91,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x45b>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x470>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xc0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  char cVar2;
  char *__s1;
  int iVar3;
  uint uVar4;
  bool bVar5;
  Packet_DBMW_Register_To_BlackList local_ad [10];
  undefined4 local_a3;
  undefined1 auStack_9f [30];
  undefined4 local_81;
  Packet_Register_To_BlackList_RESULT local_79 [2];
  ushort local_77;
  undefined4 local_6f;
  undefined1 auStack_6b [30];
  undefined4 local_4d;
  undefined1 local_49;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  string local_38 [7];
  allocator local_31 [17];
  CUser *local_20;
  CUser *local_1c;
  PacketHeader *local_18;
  CGMAccounts *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 080856c4 to 08085879 has its CatchHandler @ 08085a1e */
    CMyFileLog::CMyFileLog(local_48,"OnRegisterToBlackList",0xc41);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/BlackList","CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp"
              );
  }
  else {
    Packet_DBMW_Register_To_BlackList::Packet_DBMW_Register_To_BlackList(local_ad);
    Packet_Register_To_BlackList_RESULT::Packet_Register_To_BlackList_RESULT(local_79);
    local_a3 = *(undefined4 *)(local_18 + 10);
    memcpy(auStack_9f,local_18 + 0xe,0x1d);
    local_1c = (CUser *)CUserManager::FindUser((uint)(m_pclApp + 0x10));
    if (local_1c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnRegisterToBlackList",0xc50);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/BlackList",
                 "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
    }
    else {
      pPVar1 = local_18 + 0xe;
      __s1 = (char *)CUser::GetCharName(local_1c);
      iVar3 = strcmp(__s1,(char *)pPVar1);
      if (iVar3 == 0) {
        local_49 = 3;
        local_6f = CUser::GetIdByChannel(local_1c);
        local_4d = 0xffffffff;
        memcpy(auStack_6b,local_18 + 0xe,0x1d);
        CUser::SendToGameserver(local_1c,(char *)local_79,(uint)local_77);
      }
      else {
        local_6f = CUser::GetIdByChannel(local_1c);
        memcpy(auStack_6b,local_18 + 0xe,0x1d);
        iVar3 = CUser::GetBlackListSize(local_1c);
        if (iVar3 < 10) {
          std::allocator<char>::allocator();
                    /* try { // try from 080858a1 to 080858a5 has its CatchHandler @ 080858e9 */
          std::string::string(local_38,(char *)(local_18 + 0xe),local_31);
                    /* try { // try from 080858b8 to 080858bc has its CatchHandler @ 080858d4 */
          local_20 = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_38);
          bVar5 = local_20 != (CUser *)0x0;
                    /* try { // try from 080858cd to 080858d1 has its CatchHandler @ 080858e9 */
          std::string::~string(local_38);
          std::allocator<char>::~allocator((allocator<char> *)local_31);
          if (bVar5) {
            local_4d = CUser::GetUniqCharNo(local_20);
            local_14 = (CGMAccounts *)CApplication::GetGMAccounts(m_pclApp);
            if (local_14 != (CGMAccounts *)0x0) {
              uVar4 = CUser::GetDBID(local_20);
                    /* try { // try from 0808594d to 08085a18 has its CatchHandler @ 08085a1e */
              cVar2 = WongWork::CGMAccounts::isGM(local_14,uVar4);
              if (cVar2 != '\0') {
                local_49 = 5;
                CUser::SendToGameserver(local_1c,(char *)local_79,(uint)local_77);
                return;
              }
            }
            pPVar1 = local_18 + 0xe;
            uVar4 = CUser::GetUniqCharNo(local_20);
            cVar2 = CUser::RegisterToBlackList(local_1c,uVar4,(char *)pPVar1);
            if (cVar2 != '\x01') {
              local_49 = 2;
              CUser::SendToGameserver(local_1c,(char *)local_79,(uint)local_77);
              return;
            }
            local_81 = CUser::GetUniqCharNo(local_20);
            local_49 = 1;
            CUser::SendToGameserver(local_1c,(char *)local_79,(uint)local_77);
          }
          CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_ad);
        }
        else {
          local_49 = 4;
          CUser::SendToGameserver(local_1c,(char *)local_79,(uint)local_77);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2285 行）：

```cpp
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt)
{try
{


    Packet_Register_To_BlackList* req = (Packet_Register_To_BlackList*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xc41, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp");
    }
    else
    {
        CUserManager* userMgr = &m_pclApp->m_userManager;
        CServerHandler* handler = m_pclApp->m_serverHandler2;
        Packet_DBMW_Register_To_BlackList dbPkt;
        Packet_Register_To_BlackList_RESULT result;
        dbPkt.m_charNo = req->m_dbid;
        memcpy(dbPkt.m_name, req->m_name, 0x1d);
        CUser* user = userMgr->FindUser(req->m_dbid);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xc50, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
        }
        else if (strcmp(user->GetCharName(), req->m_name) == 0)
        {
            result.m_result = 3;
            result.m_idByChannel = user->GetIdByChannel();
            result.m_charNo = 0xffffffff;
            memcpy(result.m_name, req->m_name, 0x1d);
            user->SendToGameserver((char*)&result, result.packetSize);
        }
        else
        {
            result.m_idByChannel = user->GetIdByChannel();
            memcpy(result.m_name, req->m_name, 0x1d);
            if (user->GetBlackListSize() < 10)
            {
                CUser* target = userMgr->FindUser_CharName(req->m_name);
                if (target != 0)
                {
                    result.m_charNo = target->GetUniqCharNo();
                    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
                    if (gm != 0 && gm->isGM(target->GetDBID()) != 0)
                    {
                        result.m_result = 5;
                        user->SendToGameserver((char*)&result,
                                               result.packetSize);
                        return;
                    }
                    if (user->RegisterToBlackList(target->GetUniqCharNo(),
                                                  req->m_name) != 1)
                    {
                        result.m_result = 2;
                        user->SendToGameserver((char*)&result,
                                               result.packetSize);
                        return;
                    }
                    dbPkt.m_charNo2 = target->GetUniqCharNo();
                    result.m_result = 1;
                    user->SendToGameserver((char*)&result,
                                           result.packetSize);
                }
                handler->SendToDB(&dbPkt);
            }
            else
            {
                result.m_result = 4;
                user->SendToGameserver((char*)&result, result.packetSize);
            }
        }
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xc8c, "./log/Except", "CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xc91, "./log/Except", "CPacketTranslater::OnRegisterToBlackList Exception Break\n");
    }
}
```
