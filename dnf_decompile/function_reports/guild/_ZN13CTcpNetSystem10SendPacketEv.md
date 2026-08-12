# _ZN13CTcpNetSystem10SendPacketEv

`CTcpNetSystem::SendPacket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80532b0` | `0x2f1` | `0x80a7cd2` | `0x2f1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,207 +1,207 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x40>
 mov    $0x0,%ebx
 mov    $0x0,%esi
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x77>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
 mov    %eax,-0x2c(%ebp)
 mov    $0x1,%esi
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x77>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 test   %esi,%esi
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x2e4>
 cmpl   $0x0,-0x2c(%ebp)
 jne    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x9a>
 mov    $0x0,%ebx
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x2e4>
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 lea    0x6(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%edx
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEeqERKS5_>
 test   %al,%al
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x16d>
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0xba,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem10SendPacketEvE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"SEND ERR:no peer(id:%d,size:%d,ip:%d)",0x8(%esp)
 movl   $"./log/TcpSend",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer>
 mov    $0x0,%ebx
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x2e4>
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x1a1>
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%ebx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 cmp    %eax,%ebx
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x1a8>
 mov    $0x1,%eax
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x1ad>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN13CTcpNetSystem10SendPacketEv+0x22f>
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0xc3,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem10SendPacketEvE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SEND ERR:invalid peer(%x)(id:%d)(size:%d)(ip:%d)",0x8(%esp)
 movl   $"./log/TcpSend",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer>
 mov    $0x0,%ebx
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x2e4>
 mov    -0x28(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer11send_packetEPci>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 jle    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x26c>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer>
 jmp    <T> <_ZN13CTcpNetSystem10SendPacketEv+0x2e1>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0xd5,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem10SendPacketEvE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"SEND(id:%d,size:%d,ip:%d, cnt:%d)",0x8(%esp)
 movl   $"./log/TcpSend",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x20(%ebp),%ebx
 mov    %ebx,%eax
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

/* CTcpNetSystem::SendPacket() */

int __thiscall CTcpNetSystem::_ZN13CTcpNetSystem10SendPacketEv(CTcpNetSystem *this)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  TCPSocket *this_00;
  int iVar8;
  int unaff_EBX;
  CGuard<CMutex> local_54 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>> local_50 [4];
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  local_4c [4];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CTcpSendBuffer *local_30;
  CTcpSendBuffer *local_2c;
  CPeer *local_28;
  int local_24;
  undefined4 local_20;
  
  CGuard<CMutex>::CGuard(local_54,(CMutex *)(this + 0xe8));
                    /* try { // try from 080532db to 080532ff has its CatchHandler @ 0805330c */
  cVar5 = std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::
          empty((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                 *)(this + 0xc0));
  if (cVar5 == '\0') {
    puVar6 = (undefined4 *)
             std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
             ::front();
    local_30 = (CTcpSendBuffer *)*puVar6;
  }
  else {
    unaff_EBX = 0;
  }
  CGuard<CMutex>::~CGuard(local_54);
  if (cVar5 != '\0') {
    return unaff_EBX;
  }
  if (local_30 == (CTcpSendBuffer *)0x0) {
    return 0;
  }
  local_2c = local_30;
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::find((uint *)local_50);
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::end(local_4c);
  cVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator==
                    (local_50,(_Rb_tree_iterator *)local_4c);
  if (cVar5 != '\0') {
    uVar3 = *(undefined4 *)(local_2c + 6);
    uVar1 = *(ushort *)(local_2c + 2);
    uVar2 = *(ushort *)local_2c;
    CMyFileLog::CMyFileLog(local_48,"SendPacket",0xba);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/TcpSend","SEND ERR:no peer(id:%d,size:%d,ip:%d)",(uint)uVar2,
               (uint)uVar1,uVar3);
    PopDeleteTcpSendPacketQ(this,local_30);
    return 0;
  }
  iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator->(local_50);
  local_28 = *(CPeer **)(iVar7 + 4);
  if (local_28 != (CPeer *)0x0) {
    iVar7 = *(int *)(local_2c + 6);
    this_00 = (TCPSocket *)CPeer::GetTcpSocket(local_28);
    iVar8 = TCPSocket::getHandle(this_00);
    if (iVar7 == iVar8) {
      bVar4 = false;
      goto LAB_0805345d;
    }
  }
  bVar4 = true;
LAB_0805345d:
  if (bVar4) {
    uVar3 = *(undefined4 *)(local_2c + 6);
    uVar1 = *(ushort *)(local_2c + 2);
    uVar2 = *(ushort *)local_2c;
    CMyFileLog::CMyFileLog(local_40,"SendPacket",0xc3);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/TcpSend","SEND ERR:invalid peer(%x)(id:%d)(size:%d)(ip:%d)",local_28,
               (uint)uVar2,(uint)uVar1,uVar3);
    PopDeleteTcpSendPacketQ(this,local_30);
    local_24 = 0;
  }
  else {
    local_24 = CPeer::send_packet(local_28,(char *)local_2c,(uint)*(ushort *)(local_2c + 2));
    if (local_24 < 1) {
      local_20 = std::
                 queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                 ::size((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                         *)(this + 0xc0));
      uVar3 = *(undefined4 *)(local_2c + 6);
      uVar1 = *(ushort *)(local_2c + 2);
      uVar2 = *(ushort *)local_2c;
      CMyFileLog::CMyFileLog(local_38,"SendPacket",0xd5);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/TcpSend","SEND(id:%d,size:%d,ip:%d, cnt:%d)",(uint)uVar2,
                 (uint)uVar1,uVar3,local_20);
    }
    else {
      PopDeleteTcpSendPacketQ(this,local_30);
    }
  }
  return local_24;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/TcpNetSystem.cpp](source/DNFServer/GameServer/Guild/TcpNetSystem.cpp)（约第 320 行）：

```cpp
int CTcpNetSystem::SendPacket()
{
    // R14：ORIG 形态——queue 访问在 guard 内层作用域，flag(esi)/ret(ebx) 寄存器变量，
    // buf(-0x2c) 用于 PopDelete、b2(-0x28) 副本用于字段访问。
    {
        register int ret;
        register int flag;
        CTcpSendBuffer* buf;
        CTcpSendBuffer* b2;
        CPeer* peer;
        int result;
        int cnt;
        {
            CGuard<CMutex> g(&m_mutexe8);
            if (m_sendQ.empty())
            {
                ret = 0;
                flag = 0;
            }
            else
            {
                buf = m_sendQ.front();
                flag = 1;
            }
        }
        if (flag)
        {
            if (!buf)
            {
                ret = 0;
                goto done;
            }
            b2 = buf;
            std::map<unsigned int, CPeer*>::iterator it = m_peers.find(*(unsigned int*)((char*)b2 + 6));
            if (it == m_peers.end())
            {
                DNF_LOG_SCOPE_LINE(0xba, "./log/TcpSend", "SEND ERR:no peer(id:%d,size:%d,ip:%d)",
                    ((TcpPacketFields*)b2)->m_id, ((TcpPacketFields*)b2)->m_size,
                    ((TcpPacketFields*)b2)->m_ip);
                PopDeleteTcpSendPacketQ(buf);
                ret = 0;
            }
            else
            {
                peer = it->second;
                if (peer == 0 || ((TcpPacketFields*)b2)->m_ip != peer->GetTcpSocket()->getHandle())
                {
                    DNF_LOG_SCOPE_LINE(0xc3, "./log/TcpSend", "SEND ERR:invalid peer(%x)(id:%d)(size:%d)(ip:%d)",
                        peer, ((TcpPacketFields*)b2)->m_id, ((TcpPacketFields*)b2)->m_size,
                        ((TcpPacketFields*)b2)->m_ip);
                    PopDeleteTcpSendPacketQ(buf);
                    ret = 0;
                }
                else
                {
                    result = peer->send_packet((char*)b2, ((TcpPacketFields*)b2)->m_size);
                    if (result > 0)
                    {
                        PopDeleteTcpSendPacketQ(buf);
                    }
                    else
                    {
                        cnt = (int)m_sendQ.size();
                        DNF_LOG_SCOPE_LINE(0xd5, "./log/TcpSend", "SEND(id:%d,size:%d,ip:%d, cnt:%d)",
                            ((TcpPacketFields*)b2)->m_id, ((TcpPacketFields*)b2)->m_size,
                            ((TcpPacketFields*)b2)->m_ip, cnt);
                    }
                    ret = result;
                }
            }
        }
    done:
        return ret;
    }
}
```
