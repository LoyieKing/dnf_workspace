# _ZN3nsl7TCPUser13onActiveCloseEj

`nsl::TCPUser::onActiveClose(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b2732` | `0x1a8` | `0x80afd6a` | `0x1a4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,121 +1,120 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"call onActiveClose",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17GetPendingWorkNumEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17GetPendingSendNumEv>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15isBindedSessionEv>
 movzbl %al,%eax
 mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser25isActiveCloseSyncByWorkerEv>
 movzbl %al,%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10getSessionEv>
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x15(%eax),%eax
 movzbl %al,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x24(%esp)
 mov    -0x28(%ebp),%edx
 mov    %edx,0x20(%esp)
 mov    -0x24(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    -0x20(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d, pending send num=%d, pending work num=%d",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl6ddebugE,%eax
 cmp    $0x13,%eax
 setle  %dl
 add    $0x1,%eax
 mov    %eax,&_ZN3nsl6ddebugE
 test   %dl,%dl
 je     <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x14a>
 movl   $"call onActiveClose",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15isBindedSessionEv>
 movzbl %al,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser25isActiveCloseSyncByWorkerEv>
 movzbl %al,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10getSessionEv>
 mov    0x8(%ebp),%edx
 movzbl 0x14(%edx),%edx
 movzbl %dl,%ecx
 mov    0x8(%ebp),%edx
 movzbl 0x15(%edx),%edx
 movzbl %dl,%edx
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 movl   $"bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%p, isSyncByWorker=%d, isBindedSession=%d\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x19b>
+jne    <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x197>
 mov    0x8(%ebp),%eax
 movzbl 0x15(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x16a>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x15(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%eax
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x17c>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x1a0>
+je     <T> <_ZN3nsl7TCPUser13onActiveCloseEj+0x197>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool14destroyTCPUserEPNS_7TCPUserE>
 mov    $0x1,%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool onActiveClose(TCPUser * this, uint key) */

bool __thiscall nsl::TCPUser::_ZN3nsl7TCPUser13onActiveCloseEj(TCPUser *this,uint key)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TraceLog *pTVar5;
  uint uVar6;
  uint uVar7;
  ISession *pIVar8;
  DataPool *this_00;
  
  pTVar5 = G_TraceLog();
  TraceLog::sysLog(pTVar5,0,"call onActiveClose");
  uVar6 = GetPendingWorkNum(this);
  uVar7 = GetPendingSendNum(this);
  bVar1 = isBindedSession(this);
  bVar2 = isActiveCloseSyncByWorker(this);
  pIVar8 = getSession(this);
  bVar3 = this->bDisconnected_;
  bVar4 = this->bAboutToDisconnect_;
  pTVar5 = G_TraceLog();
  TraceLog::sysLog(pTVar5,5,
                   "bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d, pending send num=%d, pending work num=%d"
                   ,(uint)bVar4,(uint)bVar3,pIVar8,(uint)bVar2,(uint)bVar1,uVar7,uVar6);
  bVar3 = ddebug < 0x14;
  ddebug = ddebug + 1;
  if (bVar3) {
    puts("call onActiveClose");
    bVar3 = isBindedSession(this);
    bVar4 = isActiveCloseSyncByWorker(this);
    pIVar8 = getSession(this);
    printf("bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%p, isSyncByWorker=%d, isBindedSession=%d\n"
           ,(uint)this->bAboutToDisconnect_,(uint)this->bDisconnected_,pIVar8,(uint)bVar4,
           (uint)bVar3);
  }
  if (this->mUserId == key) {
    if (this->bAboutToDisconnect_ != true) {
      this->bAboutToDisconnect_ = true;
    }
    if (this->bDisconnected_ == false) {
      this_00 = DataPools::getDataPool(&pApp->super_DataPools);
      DataPool::destroyTCPUser(this_00,this);
    }
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp)（约第 251 行）：

```cpp
bool TCPUser::onActiveClose(unsigned int key)
{
    G_TraceLog()->sysLog(0, "call onActiveClose");
    G_TraceLog()->sysLog(5,
        "bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%x, isSyncByWorker=%d, isBindedSession=%d, pending send num=%d, pending work num=%d",
        (unsigned int)bAboutToDisconnect_, (unsigned int)bDisconnected_, getSession(),
        isActiveCloseSyncByWorker(), isBindedSession(), GetPendingSendNum(),
        GetPendingWorkNum());
    if (ddebug++ <= 0x13)
    {
        puts("call onActiveClose");
        printf("bAboutToDisconnect_=%d, bDisconnected_=%d, getSession=%p, isSyncByWorker=%d, isBindedSession=%d\n",
               (unsigned int)bAboutToDisconnect_, (unsigned int)bDisconnected_,
               getSession(), isActiveCloseSyncByWorker(), isBindedSession());
    }
    if (mUserId == key)
    {
        if (bAboutToDisconnect_ != true)
        {
            bAboutToDisconnect_ = true;
        }
        // ORIG：正条件直 test+je（== false 会物化 xor+test+je，差 1 条）。
        if (!bDisconnected_)
        {
            pApp->super_DataPools.getDataPool()->destroyTCPUser(this);
        }
    }
    return true;
}
```
