# _ZN14CServerHandler7ProcessEv

`CServerHandler::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80796b4` | `0x46f` | `0x807fa30` | `0x475` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,329 +1,326 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x70,%esp
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%eax
+mov    %eax,-0x28(%ebp)
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x33>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%eax
-cmp    $0x3,%eax
-setg   %dl
-lea    0x1(%eax),%ecx
-mov    0x8(%ebp),%eax
-mov    %ecx,0x24(%eax)
-test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x33>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x38>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x66>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x58>
+cmpl   $0x3,-0x28(%ebp)
+jle    <T> <_ZN14CServerHandler7ProcessEv+0x58>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-movzbl %al,%edx
+mov    %al,-0x21(%ebp)
+movzbl -0x21(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CManagerServer13SendHeartBeatEi>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x24(%eax)
 mov    0x8(%ebp),%edx
-lea    -0x40(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x115>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x111>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13IsValidServerEv>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0xf7>
-mov    -0x1c(%ebp),%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xb7>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xb7>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xb7>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xbc>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0xf4>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-cmp    $0xbd,%al
-setbe  %al
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xea>
+mov    %al,-0x19(%ebp)
+cmpb   $0xbd,-0x19(%ebp)
+ja     <T> <_ZN14CServerHandler7ProcessEv+0xe9>
+mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16OnGameServerDownEP11CGameServer>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12OnDisconnectEv>
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-nop
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x40(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x80>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x72>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x163>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x15f>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13IsValidServerEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x16a>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x16f>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x463>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x166>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x16b>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x46b>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x1df>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x19e>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x1df>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x19e>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x1a3>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x1eb>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12OnDisconnectEv>
 movl   $0xdc,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CServerHandler::Process() DB Server Down!\n",0x8(%esp)
 movl   $"./log/DBServerErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer13IsValidServerEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x2e6>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x2f1>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer5GetIPEv>
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x227>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x234>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetPortEv>
 test   %ax,%ax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x227>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x22c>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x2e6>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x23b>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x240>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x2f1>
+mov    0x8(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetPortEv>
-movzwl %ax,%edi
-mov    0x8(%ebp),%eax
-add    $0x54,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CTcpManagerServer5GetIPEv>
-mov    %eax,%esi
+movzwl %ax,%ebx
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer10GetSockRefEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    0x20(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetPortEv>
 movzwl %ax,%esi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer5GetIPEv>
 mov    %eax,%ebx
 movl   $0x124,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"try connect to DBMW(%s, %d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x64(%eax),%eax
 cmp    $0x9,%eax
 setg   %dl
 lea    0x1(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    %ecx,0x64(%eax)
 test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x329>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x334>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%eax
 mov    0x8(%ebp),%edx
 add    $0x54,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17CTcpManagerServer13SendHeartbeatEh>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x64(%eax)
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer13IsValidServerEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x430>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x43a>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5GetIPEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x371>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x37d>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
 test   %ax,%ax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x371>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x376>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x430>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x384>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x389>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x43a>
+mov    0x8(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
-movzwl %ax,%edi
-mov    0x8(%ebp),%eax
-add    $0x40,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CTcpDBServer5GetIPEv>
-mov    %eax,%esi
+movzwl %ax,%ebx
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer10GetSockRefEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    0x20(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
 movzwl %ax,%esi
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5GetIPEv>
 mov    %eax,%ebx
 movl   $0x13d,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"try connect to DBMW(%s, %d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x50(%eax),%eax
 cmp    $0x9,%eax
 setg   %dl
 lea    0x1(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    %ecx,0x50(%eax)
 test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x464>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x46b>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer13SendHeartbeatEv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x50(%eax)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x464>
-nop
-lea    -0xc(%ebp),%esp
+lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::Process() */

void __thiscall CServerHandler::_ZN14CServerHandler7ProcessEv(CServerHandler *this)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uchar uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  CTcpNetSystem *pCVar11;
  undefined4 uVar12;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_44 [4];
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_40 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_3c [4];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CServerInterface *local_20;
  
  if ((*(int *)(this + 0x1c) == 0) ||
     (iVar8 = *(int *)(this + 0x24), *(int *)(this + 0x24) = iVar8 + 1, iVar8 < 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = GetServerGroupNo(this);
    CManagerServer::SendHeartBeat(*(CManagerServer **)(this + 0x1c),uVar7 & 0xff);
    *(undefined4 *)(this + 0x24) = 0;
  }
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::begin(local_44);
  while( true ) {
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::end(local_40);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_44,
                       (_Rb_tree_iterator *)local_40);
    if (cVar3 == '\0') break;
    iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_44);
    local_20 = *(CServerInterface **)(iVar8 + 4);
    cVar3 = CServerInterface::IsValidServer(local_20);
    if (((cVar3 == '\x01') && (cVar3 = CServerInterface::IsConnected(local_20), cVar3 != '\0')) &&
       (cVar3 = CServerInterface::IsHeartBeatTimeOver(local_20), cVar3 != '\0')) {
      bVar2 = CServerInterface::GetChannelNo(local_20);
      if (bVar2 < 0xbe) {
        CApplication::OnGameServerDown(*(CApplication **)(this + 0x20),(CGameServer *)local_20);
      }
      CServerInterface::OnDisconnect(local_20);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator++
              (local_3c,(int)local_44);
  }
  if ((*(int *)(this + 0x18) == 0) ||
     (cVar3 = CServerInterface::IsValidServer(*(CServerInterface **)(this + 0x18)), cVar3 != '\x01')
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar3 = CServerInterface::IsConnected(*(CServerInterface **)(this + 0x18));
    if ((cVar3 != '\0') &&
       (cVar3 = CServerInterface::IsHeartBeatTimeOver(*(CServerInterface **)(this + 0x18)),
       cVar3 != '\0')) {
      CServerInterface::OnDisconnect(*(CServerInterface **)(this + 0x18));
      CMyFileLog::CMyFileLog(local_38,"Process",0xdc);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/DBServerErr","CServerHandler::Process() DB Server Down!\n");
    }
    cVar3 = CTcpManagerServer::IsValidServer((CTcpManagerServer *)(this + 0x54));
    if (cVar3 != '\x01') {
      pcVar9 = (char *)CTcpManagerServer::GetIP((CTcpManagerServer *)(this + 0x54));
      if ((*pcVar9 == '\0') ||
         (sVar5 = CTcpManagerServer::GetPort((CTcpManagerServer *)(this + 0x54)), sVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = CTcpManagerServer::GetPort((CTcpManagerServer *)(this + 0x54));
        pcVar9 = (char *)CTcpManagerServer::GetIP((CTcpManagerServer *)(this + 0x54));
        piVar10 = (int *)CTcpManagerServer::GetSockRef((CTcpManagerServer *)(this + 0x54));
        pCVar11 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(*(CApplication **)(this + 0x20));
        CTcpNetSystem::_ZN13CTcpNetSystem14OpenTcpServiceERiPKct(pCVar11,piVar10,pcVar9,uVar6);
        uVar7 = CTcpManagerServer::GetPort((CTcpManagerServer *)(this + 0x54));
        uVar12 = CTcpManagerServer::GetIP((CTcpManagerServer *)(this + 0x54));
        CMyFileLog::CMyFileLog(local_30,"Process",0x124);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_30,"./log/TcpServer","try connect to DBMW(%s, %d)",uVar12,uVar7 & 0xffff);
      }
    }
    iVar8 = *(int *)(this + 100);
    *(int *)(this + 100) = iVar8 + 1;
    if (9 < iVar8) {
      uVar4 = GetServerGroupNo(this);
      CTcpManagerServer::SendHeartbeat((CTcpManagerServer *)(this + 0x54),uVar4);
      *(undefined4 *)(this + 100) = 0;
    }
    cVar3 = CTcpDBServer::_ZN12CTcpDBServer13IsValidServerEv((CTcpDBServer *)(this + 0x40));
    if (cVar3 != '\x01') {
      pcVar9 = (char *)CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x40));
      if ((*pcVar9 == '\0') ||
         (sVar5 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x40)), sVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x40));
        pcVar9 = (char *)CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x40));
        piVar10 = (int *)CTcpDBServer::_ZN12CTcpDBServer10GetSockRefEv
                                   ((CTcpDBServer *)(this + 0x40));
        pCVar11 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(*(CApplication **)(this + 0x20));
        CTcpNetSystem::_ZN13CTcpNetSystem14OpenTcpServiceERiPKct(pCVar11,piVar10,pcVar9,uVar6);
        uVar7 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x40));
        uVar12 = CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x40));
        CMyFileLog::CMyFileLog(local_28,"Process",0x13d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/TcpServer","try connect to DBMW(%s, %d)",uVar12,uVar7 & 0xffff);
      }
    }
    iVar8 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar8 + 1;
    if (9 < iVar8) {
      CTcpDBServer::_ZN12CTcpDBServer13SendHeartbeatEv((CTcpDBServer *)(this + 0x40));
      *(undefined4 *)(this + 0x50) = 0;
    }
    return;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 72 行）：

```cpp
void CServerHandler::Process()
{
    int tick = m_field24++;
    if (m_managerServer != 0 && tick > 3)
    {
        unsigned char group = GetServerGroupNo();
        m_managerServer->SendHeartBeat(group & 0xff);
        m_field24 = 0;
    }
    for (std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.begin();
         it != m_gameServers.end(); it++)
    {
        CServerInterface* gs = it->second;
        if (gs->IsValidServer() && gs->IsConnected() && gs->IsHeartBeatTimeOver())
        {
            unsigned char channel = gs->GetChannelNo();
            if (channel < 0xbe)
            {
                m_app->OnGameServerDown((CGameServer*)gs);
            }
            gs->OnDisconnect();
        }
    }
    if (m_dbServer == 0 || !m_dbServer->IsValidServer())
    {
    }
    else
    {
        if (m_dbServer->IsConnected() && m_dbServer->IsHeartBeatTimeOver())
        {
            m_dbServer->OnDisconnect();
            DNF_LOG_SCOPE_LINE(0xdc, "./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
        }
        if (m_tcpManagerServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpManagerServer.GetIP();
            if (*ip == '\0' || m_tcpManagerServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpManagerServer.GetSockRef(), ip,
                                    m_tcpManagerServer.GetPort());
                DNF_LOG_SCOPE_LINE(0x124,"./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpManagerServer.GetIP(), m_tcpManagerServer.GetPort());
            }
        }
        if (9 < m_field64++)
        {
            m_tcpManagerServer.SendHeartbeat(GetServerGroupNo());
            m_field64 = 0;
        }
        if (m_tcpDbServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpDbServer.GetIP();
            if (*ip == '\0' || m_tcpDbServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpDbServer.GetSockRef(), ip, m_tcpDbServer.GetPort());
                DNF_LOG_SCOPE_LINE(0x13d,"./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpDbServer.GetIP(), m_tcpDbServer.GetPort());
            }
        }
        if (9 < m_field50++)
        {
            m_tcpDbServer.SendHeartbeat();
            m_field50 = 0;
        }
    }
}
```
