# _ZN17CPacketTranslater7OnLoginEP12PacketHeader

`CPacketTranslater::OnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80711a2` | `0x3b2` | `0x8067848` | `0x3be` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,244 +1,249 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x44(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
-mov    -0x38(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%edx
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEi>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xad>
-mov    -0x38(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%esi
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xb3>
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x3c(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
 movl   $0x65,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Not Found M_ID(%s) Channel No(%d)",0x8(%esp)
 movl   $"./log/Channel",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
-mov    -0x38(%ebp),%eax
-mov    0x6(%eax),%edx
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a6>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1b8>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%esi
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%edi
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x70,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x6c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
-mov    -0x38(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    -0x34(%ebp),%ecx
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x235>
+mov    -0x44(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    -0x40(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 movl   $"",0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer>
-mov    %eax,-0x20(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%esi
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager4SizeEv>
 mov    %eax,%ebx
 movl   $0x76,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Current user count : %d\tConnected User DB ID : %s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x44(%ebp),%eax
+add    $0x23,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6SetSexEh>
+mov    -0x44(%ebp),%eax
+add    $0x2c,%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6SetSsnEPc>
 mov    -0x38(%ebp),%eax
-movzbl 0x23(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SetTcpGameServerEP14CTcpGameServer>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+movzbl %al,%edi
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,%ebx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+movzbl %al,%esi
+movl   $0x70,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %edi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %esi,0x10(%esp)
 mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6SetSexEh>
-mov    -0x38(%ebp),%eax
-add    $0x2c,%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6SetSsnEPc>
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SetTcpGameServerEP14CTcpGameServer>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
+mov    %eax,0xc(%esp)
+movl   $"DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x34a>
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x359>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x85,0x8(%esp)
+movl   $"OnLogin",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x85,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x343>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x352>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3b3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x8a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x39f>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3a7>
-nop
 add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater7OnLoginEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  CMemoryCashManager *this;
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [24];
  PacketHeader *local_3c;
  CGameServer *local_38;
  CServerInterface *local_34;
  CUser *local_30;
  CTcpGameServer *local_2c;
  CUserManager *local_28;
  CUser *local_24;
  
  local_3c = param_1;
  if (m_pclApp != (CApplication *)0x0) {
                    /* try { // try from 080711d7 to 0807146a has its CatchHandler @ 08071470 */
    local_38 = (CGameServer *)CApplication::FindGameServer((int)m_pclApp);
    if (local_38 == (CGameServer *)0x0) {
      PVar1 = local_3c[0x12];
      uVar3 = NumberToString(*(uint *)(local_3c + 0xe),0);
      CMyFileLog::CMyFileLog(local_64,"OnLogin",0x65);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_64,"./log/Channel","Not Found M_ID(%s) Channel No(%d)",uVar3,
                 (uint)(byte)PVar1);
    }
    else {
      local_2c = (CTcpGameServer *)
                 CApplication::_ZN12CApplication17FindTcpGameServerEj((uint)m_pclApp);
      if (local_2c != (CTcpGameServer *)0x0) {
        local_28 = (CUserManager *)(m_pclApp + 0x10);
        local_30 = (CUser *)CUserManager::FindUser((uint)local_28);
        if (local_30 == (CUser *)0x0) {
          local_24 = (CUser *)CUserManager::_ZN12CUserManager10CreateUserEjjPciP11CGameServer
                                        (local_28,*(uint *)(local_3c + 0xe),0,"",
                                         *(int *)(local_3c + 10),local_38);
          uVar3 = NumberToString(*(uint *)(local_3c + 0xe),0);
          uVar7 = CUserManager::Size(local_28);
          CMyFileLog::CMyFileLog(local_54,"OnLogin",0x76);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_54,"./log/User","Current user count : %d\tConnected User DB ID : %s\n",
                     uVar7,uVar3);
          CUser::SetSex(local_24,(uchar)local_3c[0x23]);
          CUser::SetSsn(local_24,(char *)(local_3c + 0x2c));
          CUser::SetTcpGameServer(local_24,local_2c);
          this = (CMemoryCashManager *)CApplication::Get_MemoryCashManager(m_pclApp);
          cVar2 = CMemoryCashManager::QueryCashMemoryBlackList(this,local_24);
          if (cVar2 != '\x01') {
            _ZN17CPacketTranslater22RequestBlackListToDBMWEj(*(uint *)(local_3c + 0xe));
          }
        }
        else {
          local_34 = (CServerInterface *)CUser::GetGameServer(local_30);
          uVar4 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv
                            ((CServerInterface *)local_38);
          uVar3 = NumberToString(*(uint *)(local_3c + 0xe),1);
          uVar5 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(local_34);
          uVar6 = CUser::GetDBID(local_30);
          uVar7 = NumberToString(uVar6,0);
          CMyFileLog::CMyFileLog(local_5c,"OnLogin",0x70);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_5c,"./log/User",
                     "DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n"
                     ,uVar7,uVar5 & 0xff,uVar3,uVar4 & 0xff);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 93 行）：

```cpp
void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CGameServer* gs;
        if ((gs = m_pclApp->FindGameServer(*(int*)(pb + 0xe))) == 0)
        {
            char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
            DNF_LOG_SCOPE_LINE(0x65,"./log/Channel", "Not Found M_ID(%s) Channel No(%d)", mid,
                (unsigned int)(unsigned char)pb[0x12]);
        }
        else
        {
            CTcpGameServer* tgs = m_pclApp->FindTcpGameServer(*(unsigned int*)(pb + 0xe));
            if (tgs != 0)
            {
                CUserManager* um = &m_pclApp->m_userManager;
                CUser* user = um->FindUser(*(unsigned int*)(pb + 0xe));
                if (user == 0)
                {
                    CUser* nu = um->CreateUser(*(unsigned int*)(pb + 0xe), 0, "",
                                               *(int*)(pb + 10), gs);
                    char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
                    DNF_LOG_SCOPE_LINE(0x76,"./log/User", "Current user count : %d\tConnected User DB ID : %s\n",
                        um->Size(), mid);
                    nu->SetSex((unsigned char)pb[0x23]);
                    nu->SetSsn(pb + 0x2c);
                    nu->SetTcpGameServer(tgs);
                    CMemoryCashManager* mc = m_pclApp->Get_MemoryCashManager();
                    if (mc->QueryCashMemoryBlackList(nu) != 1)
                    {
                        RequestBlackListToDBMW(*(unsigned int*)(pb + 0xe));
                    }
                }
                else
                {
                    char* mid = NumberToString(user->GetDBID(), 0);
                    DNF_LOG_SCOPE_LINE(0x70,"./log/User",
                        "DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",
                        mid, (unsigned int)user->GetGameServer()->GetChannelNo(),
                        NumberToString(*(unsigned int*)(pb + 0xe), 1),
                        (unsigned int)gs->GetChannelNo());
                }
            }
        }
    }
}
    catch (CDNFException& e)
    {
        CMyFileLog log("OnLogin", 0x85);
        log("./log/Except", "CPacketTranslater::OnLogin() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x8a);
        log("./log/Except", "CPacketTranslater::OnLogin() Exception Break\n");
    }
}
```
