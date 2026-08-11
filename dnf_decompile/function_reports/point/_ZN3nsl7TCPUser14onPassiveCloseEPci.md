# _ZN3nsl7TCPUser14onPassiveCloseEPci

`nsl::TCPUser::onPassiveClose(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b25ca` | `0x167` | `0x80afbfe` | `0x167` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool15GetTcpUserCountEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x14(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"call onPassiveClose : '%s', '%d'\tTotal Con = %d",0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15isBindedSessionEv>
 movzbl %al,%eax
 mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser26isPassiveCloseSyncByWorkerEv>
 movzbl %al,%edi
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%eax
 movzbl %al,%esi
 mov    0x8(%ebp),%eax
 movzbl 0x15(%eax),%eax
 movzbl %al,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d",0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 movzbl 0x15(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0xd1>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x15(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%eax
 test   %al,%al
-je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0xe3>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x15f>
+je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x15a>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser9IsSendingEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x10e>
+je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x107>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser9IsWorkingEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x10e>
+je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x107>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x113>
+jmp    <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x10c>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x13d>
+je     <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x136>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool14destroyTCPUserEPNS_7TCPUserE>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x15f>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"onPassiveClose(): mPendingSendNum not 0",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
+jmp    <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci+0x15f>
+mov    $0x1,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool onPassiveClose(TCPUser * this, char * file, int line) */

bool __thiscall nsl::TCPUser::_ZN3nsl7TCPUser14onPassiveCloseEPci(TCPUser *this,char *file,int line)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  DataPool *pDVar5;
  uint uVar6;
  TraceLog *pTVar7;
  
  pDVar5 = DataPools::getDataPool(&pApp->super_DataPools);
  uVar6 = DataPool::GetTcpUserCount(pDVar5);
  pTVar7 = G_TraceLog();
  TraceLog::sysLog(pTVar7,3,"call onPassiveClose : \'%s\', \'%d\'\tTotal Con = %d",file,line,uVar6);
  bVar2 = isBindedSession(this);
  bVar3 = isPassiveCloseSyncByWorker(this);
  bVar4 = this->bDisconnected_;
  bVar1 = this->bAboutToDisconnect_;
  pTVar7 = G_TraceLog();
  TraceLog::sysLog(pTVar7,3,
                   "bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d"
                   ,(uint)bVar1,(uint)bVar4,this,(uint)bVar3,(uint)bVar2);
  if (this->bAboutToDisconnect_ != true) {
    this->bAboutToDisconnect_ = true;
  }
  if (this->bDisconnected_ == false) {
    bVar4 = IsSending(this);
    if ((bVar4) || (bVar4 = IsWorking(this), bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      pTVar7 = G_TraceLog();
      TraceLog::sysLog(pTVar7,0,"onPassiveClose(): mPendingSendNum not 0");
    }
    else {
      pDVar5 = DataPools::getDataPool(&pApp->super_DataPools);
      DataPool::destroyTCPUser(pDVar5,this);
    }
    return bVar4;
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp)（约第 227 行）：

```cpp
bool TCPUser::onPassiveClose(char* file, int line)
{
    G_TraceLog()->sysLog(3, "call onPassiveClose : '%s', '%d'\tTotal Con = %d", file, line, pApp->super_DataPools.getDataPool()->GetTcpUserCount());
    G_TraceLog()->sysLog(3,
        "bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d",
        (unsigned int)bAboutToDisconnect_, (unsigned int)bDisconnected_, this,
        isPassiveCloseSyncByWorker(), isBindedSession());
    if (bAboutToDisconnect_ != true)
    {
        bAboutToDisconnect_ = true;
    }
    if (bDisconnected_ != false)
    {
        if (!IsSending() && !IsWorking())
        {
            pApp->super_DataPools.getDataPool()->destroyTCPUser(this);
            return true;
        }
        G_TraceLog()->sysLog(0, "onPassiveClose(): mPendingSendNum not 0");
        return false;
    }
    return true;
}
```
