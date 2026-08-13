# _ZN14CServerHandler7ProcessEv

`CServerHandler::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806cf2c` | `0x325` | `0x8080da8` | `0x37d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,238 +1,263 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x33>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%eax
-cmp    $0x3,%eax
-setg   %dl
-lea    0x1(%eax),%ecx
-mov    0x8(%ebp),%eax
-mov    %ecx,0x40(%eax)
-test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x33>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x38>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x66>
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x40(%eax)
+cmpl   $0x3,-0x30(%ebp)
+jg     <T> <_ZN14CServerHandler7ProcessEv+0x35>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x3a>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x44>
+movb   $0x0,-0x31(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x48>
+movb   $0x1,-0x31(%ebp)
+cmpb   $0x0,-0x31(%ebp)
+je     <T> <_ZN14CServerHandler7ProcessEv+0x78>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%edx
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CManagerServer13SendHeartBeatEi>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x40(%eax)
 mov    0x8(%ebp),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x115>
-lea    -0x38(%ebp),%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x131>
+lea    -0x50(%ebp),%eax
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
+je     <T> <_ZN14CServerHandler7ProcessEv+0xd7>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xd7>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv>
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-mov    -0x1c(%ebp),%eax
+test   %eax,%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0xd7>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0xdc>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x114>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
 cmp    $0xbd,%al
 setbe  %al
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0xea>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x109>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16OnGameServerDownEP11CGameServer>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12OnDisconnectEv>
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0xf8>
-nop
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x38(%ebp),%edx
+lea    -0x50(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x80>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x163>
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x92>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0x17f>
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
-jne    <T> <_ZN14CServerHandler7ProcessEv+0x319>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x186>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x18b>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x195>
+movb   $0x1,-0x29(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x199>
+movb   $0x0,-0x29(%ebp)
+cmpb   $0x0,-0x29(%ebp)
+jne    <T> <_ZN14CServerHandler7ProcessEv+0x371>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x1df>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x1ce>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv>
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x1df>
+test   %eax,%eax
+je     <T> <_ZN14CServerHandler7ProcessEv+0x1ce>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x1d3>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x21b>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12OnDisconnectEv>
 movl   $0xea,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CServerHandler::Process() DB Server Down!\n",0x8(%esp)
 movl   $"./log/DBServerErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer13IsValidServerEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x2e6>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x332>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5GetIPEv>
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x227>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x263>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
 test   %ax,%ax
-je     <T> <_ZN14CServerHandler7ProcessEv+0x227>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x22c>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CServerHandler7ProcessEv+0x2e6>
+je     <T> <_ZN14CServerHandler7ProcessEv+0x263>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x268>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN14CServerHandler7ProcessEv+0x272>
+movb   $0x1,-0x19(%ebp)
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x276>
+movb   $0x0,-0x19(%ebp)
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN14CServerHandler7ProcessEv+0x332>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
 movzwl %ax,%edi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5GetIPEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer10GetSockRefEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetPortEv>
 movzwl %ax,%esi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5GetIPEv>
 mov    %eax,%ebx
 movl   $0x135,0x8(%esp)
 movl   $&_ZZN14CServerHandler7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"try connect to DBMW(%s, %d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x58(%eax),%eax
-cmp    $0x3,%eax
-setg   %dl
-lea    0x1(%eax),%ecx
-mov    0x8(%ebp),%eax
-mov    %ecx,0x58(%eax)
-test   %dl,%dl
-je     <T> <_ZN14CServerHandler7ProcessEv+0x31a>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x3,-0x28(%ebp)
+setg   %al
+mov    %al,-0x21(%ebp)
+mov    -0x28(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x58(%eax)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN14CServerHandler7ProcessEv+0x372>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer13SendHeartbeatEv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x58(%eax)
-jmp    <T> <_ZN14CServerHandler7ProcessEv+0x31a>
+jmp    <T> <_ZN14CServerHandler7ProcessEv+0x372>
 nop
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
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
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  CTcpNetSystem *this_00;
  undefined4 uVar10;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_3c [4];
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_38 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_34 [4];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CServerInterface *local_20;
  
  if ((*(int *)(this + 0x1c) == 0) ||
     (iVar7 = *(int *)(this + 0x40), *(int *)(this + 0x40) = iVar7 + 1, iVar7 < 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar6 = _ZN14CServerHandler16GetServerGroupNoEv(this);
    CManagerServer::_ZN14CManagerServer13SendHeartBeatEi
              (*(CManagerServer **)(this + 0x1c),uVar6 & 0xff);
    *(undefined4 *)(this + 0x40) = 0;
  }
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::begin(local_3c);
  while( true ) {
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::end(local_38);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_3c,
                       (_Rb_tree_iterator *)local_38);
    if (cVar3 == '\0') break;
    iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_3c);
    local_20 = *(CServerInterface **)(iVar7 + 4);
    cVar3 = CServerInterface::IsValidServer(local_20);
    if (((cVar3 == '\x01') && (cVar3 = CServerInterface::IsConnected(local_20), cVar3 != '\0')) &&
       (cVar3 = CServerInterface::IsHeartBeatTimeOver(local_20), cVar3 != '\0')) {
      bVar2 = CServerInterface::GetChannelNo(local_20);
      if (bVar2 < 0xbe) {
        CApplication::OnGameServerDown(*(CApplication **)(this + 0x3c),(CGameServer *)local_20);
      }
      CServerInterface::OnDisconnect(local_20);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator++
              (local_34,(int)local_3c);
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
      CMyFileLog::CMyFileLog(local_30,"Process",0xea);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/DBServerErr","CServerHandler::Process() DB Server Down!\n");
    }
    cVar3 = CTcpDBServer::_ZN12CTcpDBServer13IsValidServerEv((CTcpDBServer *)(this + 0x44));
    if (cVar3 != '\x01') {
      pcVar8 = (char *)CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x44));
      if ((*pcVar8 == '\0') ||
         (sVar4 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x44)), sVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar5 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x44));
        pcVar8 = (char *)CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x44));
        piVar9 = (int *)CTcpDBServer::GetSockRef((CTcpDBServer *)(this + 0x44));
        this_00 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(*(CApplication **)(this + 0x3c));
        CTcpNetSystem::_ZN13CTcpNetSystem14OpenTcpServiceERiPKct(this_00,piVar9,pcVar8,uVar5);
        uVar6 = CTcpDBServer::GetPort((CTcpDBServer *)(this + 0x44));
        uVar10 = CTcpDBServer::GetIP((CTcpDBServer *)(this + 0x44));
        CMyFileLog::CMyFileLog(local_28,"Process",0x135);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/TcpServer","try connect to DBMW(%s, %d)",uVar10,uVar6 & 0xffff);
      }
    }
    iVar7 = *(int *)(this + 0x58);
    *(int *)(this + 0x58) = iVar7 + 1;
    if (3 < iVar7) {
      CTcpDBServer::_ZN12CTcpDBServer13SendHeartbeatEv((CTcpDBServer *)(this + 0x44));
      *(undefined4 *)(this + 0x58) = 0;
    }
    return;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 150 行）：

```cpp
void CServerHandler::Process()
{
    bool doHb;
    int old;
    if (m_managerServer == 0 || (old = m_heartbeat, m_heartbeat = old + 1, old < 4))
    {
        doHb = false;
    }
    else
    {
        doHb = true;
    }
    if (doHb)
    {
        m_managerServer->SendHeartBeat(GetServerGroupNo() & 0xff);
        m_heartbeat = 0;
    }
    for (std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.begin();
         it != m_gameServers.end(); it++)
    {
        CGameServer* gs = it->second;
        if (gs->IsValidServer() && gs->IsConnected() && gs->IsHeartBeatTimeOver())
        {
            if (gs->GetChannelNo() < 0xbe)
            {
                m_app->OnGameServerDown(gs);
            }
            gs->OnDisconnect();
        }
    }
    bool dbOk;
    if (m_dbServer == 0 || !m_dbServer->IsValidServer())
    {
        dbOk = true;
    }
    else
    {
        dbOk = false;
    }
    if (dbOk)
    {
        return;
    }
    if (m_dbServer->IsConnected() && m_dbServer->IsHeartBeatTimeOver())
    {
        m_dbServer->OnDisconnect();
        DNF_LOG_SCOPE_LINE(0xea, "./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
    }
    if (!m_tcpDbServer.IsValidServer())
    {
        bool canConnect;
        if (*m_tcpDbServer.GetIP() != '\0' && m_tcpDbServer.GetPort() != 0)
        {
            canConnect = true;
        }
        else
        {
            canConnect = false;
        }
        if (canConnect)
        {
            m_app->Get_TcpNetSystem()->OpenTcpService(
                m_tcpDbServer.GetSockRef(), m_tcpDbServer.GetIP(), m_tcpDbServer.GetPort());
            DNF_LOG_SCOPE_LINE(0x135, "./log/TcpServer", "try connect to DBMW(%s, %d)",
                m_tcpDbServer.GetIP(),
                (unsigned int)m_tcpDbServer.GetPort());
        }
    }
    int hbOld = m_hbCnt;
    bool hb = hbOld > 3;
    m_hbCnt = hbOld + 1;
    if (hb)
    {
        m_tcpDbServer.SendHeartbeat();
        m_hbCnt = 0;
    }
}
```
