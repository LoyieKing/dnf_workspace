# _ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi

`socket_event::CEpoll<CNetworkSession>::WaitForEvent(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804c9d0` | `0x22b` | `0x80531e2` | `0x21d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,177 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    0xc(%ebp),%ebx
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jns    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x5a>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
 je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x5a>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x5a>
 mov    $0x0,%eax
-jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x225>
+jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x217>
 movb   $0x1,-0x1d(%ebp)
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x20f>
+jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x201>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ecx
 mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
 movb   $0x1,-0x1d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ecx
 mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x121>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x11c>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAbstractSocketILi4096ELi4096EE26GetTriggerSessionEventTypeEv>
 and    $0x8,%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x101>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0xfc>
 movl   $0x0,-0x10(%ebp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession8OnAcceptEv>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x121>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x11c>
 movl   $0x7,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12socket_event6CEpollI15CNetworkSessionE15RegisterSessionEPS1_i>
-jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x121>
+jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x11c>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAbstractSocketILi4096ELi4096EE26GetTriggerSessionEventTypeEv>
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x121>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x11c>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession6OnRecvEv>
 mov    %al,-0x1d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ecx
 mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1b7>
-movl   $0x0,-0xc(%ebp)
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1a9>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAbstractSocketILi4096ELi4096EE26GetTriggerSessionEventTypeEv>
 and    $0x10,%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x188>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x17a>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession9OnConnectEv>
 mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1b7>
+cmpb   $0x0,-0x1d(%ebp)
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1a9>
 mov    -0x18(%ebp),%eax
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CAbstractSocketILi4096ELi4096EE26SetTriggerSessionEventTypeEi>
-jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1b7>
+jmp    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1a9>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAbstractSocketILi4096ELi4096EE26GetTriggerSessionEventTypeEv>
 and    $0x2,%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1b7>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1a9>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession6OnSendEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1b7>
+jns    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1a9>
 movb   $0x0,-0x1d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ecx
 mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x18,%eax
 test   %eax,%eax
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1e3>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1d5>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession7OnErrorEv>
 mov    %al,-0x1d(%ebp)
 movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x20b>
+je     <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x1fd>
 mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12socket_event6CEpollI15CNetworkSessionE17UnregisterSessionEPS1_>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession10DisconnectEv>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi+0x6a>
 mov    $0x1,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* socket_event::CEpoll<CNetworkSession>::WaitForEvent(int) */

undefined4 __thiscall
socket_event::CEpoll<CNetworkSession>::_ZN12socket_event6CEpollI15CNetworkSessionE12WaitForEventEi
          (CEpoll<CNetworkSession> *this,int param_1)

{
  CAbstractSocket<4096,4096> *this_00;
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  CNetworkSession *pCVar5;
  int iVar6;
  char local_21;
  int local_20;
  
  iVar2 = epoll_wait(*(int *)(this + 8),*(epoll_event **)(this + 4),*(int *)(this + 0xc),param_1);
  if (((iVar2 < 0) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
     (piVar3 = __errno_location(), *piVar3 != 0)) {
    return 0;
  }
  for (local_20 = 0; local_20 < iVar2; local_20 = local_20 + 1) {
    this_00 = *(CAbstractSocket<4096,4096> **)(*(int *)(this + 4) + local_20 * 0xc + 4);
    local_21 = '\x01';
    if ((*(uint *)(*(int *)(this + 4) + local_20 * 0xc) & 1) != 0) {
      uVar4 = CAbstractSocket<4096,4096>::GetTriggerSessionEventType(this_00);
      if ((uVar4 & 8) == 0) {
        bVar1 = CAbstractSocket<4096,4096>::GetTriggerSessionEventType(this_00);
        if ((bVar1 & 1) != 0) {
          local_21 = CNetworkSession::OnRecv((CNetworkSession *)this_00);
        }
      }
      else {
        pCVar5 = (CNetworkSession *)CNetworkSession::OnAccept((CNetworkSession *)this_00);
        if (pCVar5 != (CNetworkSession *)0x0) {
          RegisterSession(this,pCVar5,7);
        }
      }
    }
    if ((*(uint *)(*(int *)(this + 4) + local_20 * 0xc) & 4) != 0) {
      uVar4 = CAbstractSocket<4096,4096>::GetTriggerSessionEventType(this_00);
      if ((uVar4 & 0x10) == 0) {
        uVar4 = CAbstractSocket<4096,4096>::GetTriggerSessionEventType(this_00);
        if (((uVar4 & 2) != 0) &&
           (iVar6 = CNetworkSession::OnSend((CNetworkSession *)this_00), iVar6 < 0)) {
          local_21 = '\0';
        }
      }
      else {
        local_21 = CNetworkSession::OnConnect((CNetworkSession *)this_00);
        if (local_21 != '\0') {
          CAbstractSocket<4096,4096>::SetTriggerSessionEventType(this_00,7);
        }
      }
    }
    if ((*(uint *)(*(int *)(this + 4) + local_20 * 0xc) & 0x18) != 0) {
      local_21 = CNetworkSession::OnError((CNetworkSession *)this_00);
    }
    if (local_21 != '\x01') {
      UnregisterSession(this,(CNetworkSession *)this_00);
      CNetworkSession::Disconnect((CNetworkSession *)this_00);
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/Community/SessionManager.cpp](source/Community/SessionManager.cpp)（约第 122 行）：

```cpp
int CEpoll<Session>::WaitForEvent(int timeout) {
    int count = epoll_wait(this->epfd, this->epollEvents, this->eventCount, timeout);
    if (count < 0 && errno != EINTR /*4*/ && errno != 0) {
        return 0;
    }
    // 原始：succeed 在循环外初始化（mov BYTE [ebp-0x1d],1），循环体内再显式赋值
    bool succeed = true;
    for (int i = 0; i < count; i++) {
        Session *session = (Session *)this->epollEvents[i].data.ptr;
        // 原始：newSession 先初始化 0（mov DWORD [ebp-0x14],0）再 succeed=true
        Session *newSession = NULL;
        succeed = true;
        if (this->epollEvents[i].events & EPOLLIN) {
            // 原始：(type & 8) != 0 分支在前（OnAccept），== 0 为 else（OnRecv）
            if (((session)->GetTriggerSessionEventType() & 8) != 0) {
                // 原始：OnAccept 结果经独立临时承接（mov DWORD [ebp-0x10],0 再赋值）
                Session *ns = NULL;
                ns = session->OnAccept();
                if (ns != NULL) {
                    RegisterSession(ns, 7);
                }
            } else {
                if ((session)->GetTriggerSessionEventType() & 1) {
                    succeed = session->OnRecv();
                }
            }
        }
        if (this->epollEvents[i].events & EPOLLOUT) {
            // 原始：(type & 0x10) != 0 分支在前（OnConnect），== 0 为 else（OnSend）
            if (((session)->GetTriggerSessionEventType() & 0x10) != 0) {
                succeed = (session)->OnConnect();
                if (succeed) {
                    (session)->SetTriggerSessionEventType(7);
                }
            } else {
                if ((session)->GetTriggerSessionEventType() & 2) {
                    int size = (session)->OnSend();
                    if (size < 0) {
                        succeed = false;
                    }
                }
            }
        }
        if (this->epollEvents[i].events & (EPOLLERR | EPOLLHUP)) {
            succeed = (char)(session)->OnError();
        }
        if (!succeed) {
            UnregisterSession(session);
            (session)->Disconnect();
        }
    }
    return 1;
}
```
