# _ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE

`RelayServiceApp::TCPUser::send(RelayServiceApp::PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805d752` | `0x1c1` | `0x805c33e` | `0x1cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,132 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1a>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x39>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
 jne    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x57>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x5e>
 mov    $0x1,%eax
 jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x63>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x71>
 mov    $0xfffffffe,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x87>
+jne    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x89>
 mov    $0xfffffffd,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 test   %eax,%eax
-setg   %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x115>
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x15d>
+mov    0xc(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    0xc(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN9TCPSocket4sendEPci>
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edx
+mov    -0xc(%ebp),%eax
+cmp    %eax,%edx
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x156>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 mov    0xc(%ebp),%edx
-movzwl 0x2(%edx),%edx
+add    $0x2,%edx
+movzwl (%edx),%edx
 movzwl %dx,%edx
+sub    -0xc(%ebp),%edx
 add    %edx,%eax
 cmp    $0xc7ff,%eax
 setg   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0xd2>
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x118>
 mov    $0xfffffffc,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+sub    -0xc(%ebp),%eax
+mov    0xc(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+add    %edx,%ecx
+mov    0x8(%ebp),%edx
+add    $0x1902c,%edx
+mov    %eax,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci>
+shr    $0x1f,%eax
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x156>
+mov    $0xfffffffb,%eax
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
+mov    $0x0,%eax
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
+mov    0x8(%ebp),%eax
+add    $0x1902c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
+mov    0xc(%ebp),%edx
+add    $0x2,%edx
+movzwl (%edx),%edx
+movzwl %dx,%edx
+add    %edx,%eax
+cmp    $0xc7ff,%eax
+setle  %al
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c4>
+mov    0xc(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0xc(%ebp),%eax
 mov    0x8(%ebp),%ecx
 add    $0x1902c,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x10b>
+shr    $0x1f,%eax
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bd>
 mov    $0xfffffffb,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    $0x0,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
-mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN9TCPSocket4sendEPci>
-mov    %eax,-0x10(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x10(%ebp),%eax
-je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1ba>
-mov    0x8(%ebp),%eax
-add    $0x1902c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
-mov    0xc(%ebp),%edx
-movzwl 0x2(%edx),%edx
-movzwl %dx,%edx
-sub    -0x10(%ebp),%edx
-add    %edx,%eax
-cmp    $0xc7ff,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x17c>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1c9>
 mov    $0xfffffffc,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
-mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%eax
-sub    -0x10(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    -0x10(%ebp),%edx
-add    %edx,%ecx
-mov    0x8(%ebp),%edx
-add    $0x1902c,%edx
-mov    %eax,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1ba>
-mov    $0xfffffffb,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE+0x1bf>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::send(RelayServiceApp::PacketHeader*) */

undefined4 __thiscall
RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser4sendEPNS_12PacketHeaderE
          (TCPUser *this,PacketHeader *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(int *)(this + 0x1c) == 0) {
    return 0xffffffff;
  }
  iVar3 = TCPSocket::getHandle(*(TCPSocket **)(this + 0x1c));
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  cVar2 = isAboutToDisconnect(this);
  if ((cVar2 == '\0') && (cVar2 = isDisconnected(this), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0xfffffffe;
  }
  else if (*(short *)(param_1 + 2) == 0) {
    uVar4 = 0xfffffffd;
  }
  else {
    iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
    if (iVar3 < 1) {
      uVar5 = TCPSocket::send(*(TCPSocket **)(this + 0x1c),(char *)param_1,
                              (uint)*(ushort *)(param_1 + 2));
      if (*(ushort *)(param_1 + 2) != uVar5) {
        iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                          ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
        if (0xc7ff < (int)(iVar3 + (*(ushort *)(param_1 + 2) - uVar5))) {
          return 0xfffffffc;
        }
        iVar3 = TDoubleCircularQueueBuffer<51200u>::push
                          ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c),
                           (char *)(param_1 + uVar5),*(ushort *)(param_1 + 2) - uVar5);
        if (iVar3 < 0) {
          return 0xfffffffb;
        }
      }
      uVar4 = 0;
    }
    else {
      iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                        ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
      if ((int)(iVar3 + (uint)*(ushort *)(param_1 + 2)) < 0xc800) {
        iVar3 = TDoubleCircularQueueBuffer<51200u>::push
                          ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c),(char *)param_1,
                           (uint)*(ushort *)(param_1 + 2));
        if (iVar3 < 0) {
          uVar4 = 0xfffffffb;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xfffffffc;
      }
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/TCPUser.cpp](source/DNFServer/GameServer/Relay/TCPUser.cpp)（约第 137 行）：

```cpp
            while (!m_sendQueue.isEmpty())
            {
                if (!m_sendQueue.isPushGreaterThanPop())
                {
                    int len = m_sendQueue.getPopLengthToEnd();
                    if (0 < len)
                    {
                        char* p = m_sendQueue.peekPop();
                        int r = m_sock->send(p, len);
                        if (r < 1)
                        {
                            if (-1 < r)
                            {
                                return;
                            }
                            postDisconnected(0);
                            return;
                        }
                        m_sendQueue.pop(r);
                    }
                }
                else
                {
                    int len = m_sendQueue.getPushedLength();
                    if (0 < len)
                    {
                        char* p = m_sendQueue.peekPop();
                        int r = m_sock->send(p, len);
                        if (r < 1)
                        {
                            if (-1 < r)
                            {
                                return;
                            }
                            postDisconnected(0);
                            return;
                        }
                        m_sendQueue.pop(r);
                    }
                }
            }
```
