# _ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE

`nsl::InterDispatcher::dispatch(nsl::Message*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b9964` | `0x19b` | `0x807a1f2` | `0x198` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,112 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x44,%esp
+sub    $0x58,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
+call   <T> <_ZN3nsl18INTERNALMSG_HEADER16getInternalMsgIDEv>
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl18INTERNALMSG_HEADER16getInternalMsgIDEv>
-mov    %eax,-0x18(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl18INTERNALMSG_HEADER11getCategoryEv>
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-mov    &_ZN3nsl4pAppE,%eax
-lea    0xbc(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+mov    -0x18(%ebp),%eax
+mov    &_ZN3nsl4pAppE,%edx
+add    $0xbc,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers15getInterHandlerEi>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x166>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0xc,%eax
-mov    (%eax),%ecx
-lea    -0x28(%ebp),%eax
-mov    -0x18(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
-sub    $0x4,%esp
-mov    -0x28(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x134>
-mov    &_ZN3nsl4pAppE,%eax
-lea    0xbc(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN3nsl9IHandlers15getInterHandlerEi>
-mov    %eax,%edx
-mov    -0x28(%ebp),%eax
-and    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0xd6>
-mov    -0x24(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-mov    (%eax),%ecx
-mov    -0x28(%ebp),%eax
-sub    $0x1,%eax
-lea    (%ecx,%eax,1),%eax
-mov    (%eax),%eax
-jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0xd9>
-mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%ecx
-lea    (%edx,%ecx,1),%ecx
-mov    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   *%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x191>
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11GetErrorStrEi>
-mov    %eax,%ebx
+jne    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x97>
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x10(%esp)
 mov    -0x18(%ebp),%edx
 mov    %edx,0xc(%esp)
-movl   $"InterDispatcher : protocol: %d , Error: %s",0x8(%esp)
+movl   $"InterDispatcher : category : %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x196>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%edx
+lea    -0x2c(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   *%ecx
+sub    $0x4,%esp
+mov    -0x2c(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0xf6>
 call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x10(%esp)
 mov    -0x18(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    -0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"InterDispatcher : can't find handler for category: %d, protocol : %d.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x196>
+mov    -0x18(%ebp),%eax
+mov    &_ZN3nsl4pAppE,%edx
+add    $0xbc,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN3nsl9IHandlers15getInterHandlerEi>
+mov    %eax,-0x10(%ebp)
+mov    -0x2c(%ebp),%eax
+and    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x133>
+mov    -0x28(%ebp),%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x2c(%ebp),%eax
+sub    $0x1,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x136>
+mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%edx
+add    -0x10(%ebp),%edx
+mov    -0x24(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x158>
+mov    $0x1,%eax
+jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x196>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11GetErrorStrEi>
+mov    %eax,-0xc(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x14(%ebp),%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    -0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
-movl   $"InterDispatcher : category : %d",0x8(%esp)
+movl   $"InterDispatcher : protocol: %d , Error: %s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE+0x196>
-mov    $0x1,%eax
-mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool dispatch(InterDispatcher * this, Message * msg) */

bool __thiscall
nsl::InterDispatcher::_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE
          (InterDispatcher *this,Message *msg)

{
  bool bVar1;
  IInterHandler *pIVar2;
  char *pcVar3;
  TraceLog *pTVar4;
  code *local_2c;
  int local_28;
  CMsgCell *local_24;
  INTERNALMSG_HEADER *local_20;
  DWORD local_1c;
  DWORD local_18;
  int local_14;
  IInterHandler *local_10;
  
                    /* Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: INTERNALMSG_HEADER * pInternalMsgHeader@[???]
                       Unresolved local var: int nProtoId@[???]
                       Unresolved local var: int nCategory@[???]
                       Unresolved local var: DWORD ret@[???]
                       Unresolved local var: IInterHandler * pInterHandler@[???] */
  local_24 = Message::getCellFromMessage(msg);
  local_20 = CMsgCell::GetInternalMsg(local_24);
  local_1c = INTERNALMSG_HEADER::getInternalMsgID(local_20);
  local_18 = INTERNALMSG_HEADER::getCategory(local_20);
  local_14 = 0;
  local_10 = IHandlers::getInterHandler(&pApp->super_IHandlers,local_18);
  if (local_10 == (IInterHandler *)0x0) {
    pTVar4 = G_TraceLog();
    TraceLog::sysLog(pTVar4,7,"InterDispatcher : category : %d",local_18);
    bVar1 = false;
  }
  else {
                    /* Unresolved local var: interFuncType handle@[???] */
    (*(local_10->super_IHandler)._vptr_IHandler[3])(&local_2c,local_10,local_1c);
    if (local_2c == (code *)0x0) {
      pTVar4 = G_TraceLog();
      TraceLog::sysLog(pTVar4,7,
                       "InterDispatcher : can\'t find handler for category: %d, protocol : %d.",
                       local_18,local_1c);
      bVar1 = false;
    }
    else {
      pIVar2 = IHandlers::getInterHandler(&pApp->super_IHandlers,local_18);
      if (((uint)local_2c & 1) != 0) {
        local_2c = *(code **)(local_2c +
                             *(int *)((int)&(pIVar2->super_IHandler)._vptr_IHandler + local_28) + -1
                             );
      }
      local_14 = (*local_2c)((int)&(pIVar2->super_IHandler)._vptr_IHandler + local_28,local_24);
      if (local_14 == 0) {
        bVar1 = true;
      }
      else {
        pcVar3 = _ZN3nsl11GetErrorStrEi(local_14);
        pTVar4 = G_TraceLog();
        TraceLog::sysLog(pTVar4,7,"InterDispatcher : protocol: %d , Error: %s",local_1c,pcVar3);
        bVar1 = false;
      }
    }
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/InterDispatcher.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnections.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DataPools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Dispatchers.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/EncyptTools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IActiveConManager.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandler.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandlers.h 等 569 个文件*
