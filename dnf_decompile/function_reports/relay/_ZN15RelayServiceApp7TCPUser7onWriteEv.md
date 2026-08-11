# _ZN15RelayServiceApp7TCPUser7onWriteEv

`RelayServiceApp::TCPUser::onWrite()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805d59c` | `0x1b5` | `0x805c09a` | `0x1c9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,124 +1,129 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1a9>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x29>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-shr    $0x1f,%eax
+test   %eax,%eax
+js     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x29>
+mov    $0x1,%eax
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x2e>
+mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1ac>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x4b>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x61>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser14isDisconnectedEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x52>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x61>
 mov    $0x1,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x57>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x66>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18a>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1a6>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE20isPushGreaterThanPopEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x10a>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x122>
+mov    0x8(%ebp),%eax
+add    $0x1902c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE17getPopLengthToEndEv>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1a6>
+mov    0x8(%ebp),%eax
+add    $0x1902c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7peekPopEv>
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    -0x20(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN9TCPSocket4sendEPci>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jg     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x105>
+cmpl   $0x0,-0x18(%ebp)
+jns    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c3>
+movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
+mov    0x8(%ebp),%eax
+lea    0x1902c(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1a6>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18a>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1a6>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7peekPopEv>
-mov    0x8(%ebp),%edx
-mov    0x1c(%edx),%edx
-mov    -0x18(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4sendEPci>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0xe8>
-mov    0x8(%ebp),%eax
-lea    0x1902c(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18a>
-cmpl   $0x0,-0x14(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1af>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jg     <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18e>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c6>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
-mov    0x8(%ebp),%eax
-add    $0x1902c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE17getPopLengthToEndEv>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18a>
-mov    0x8(%ebp),%eax
-add    $0x1902c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7peekPopEv>
-mov    0x8(%ebp),%edx
-mov    0x1c(%edx),%edx
-mov    -0x10(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN9TCPSocket4sendEPci>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x16f>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
 mov    0x8(%ebp),%eax
 lea    0x1902c(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x18a>
-cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b2>
-movl   $0x0,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE7isEmptyEv>
-test   %eax,%eax
-sete   %al
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x64>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
+jne    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x73>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
 nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1b3>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv+0x1c7>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::onWrite() */

void __thiscall RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser7onWriteEv(TCPUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if ((*(int *)(this + 0x1c) != 0) &&
     (iVar3 = TCPSocket::getHandle(*(TCPSocket **)(this + 0x1c)), -1 < iVar3)) {
    cVar2 = isAboutToDisconnect(this);
    if ((cVar2 == '\0') && (cVar2 = isDisconnected(this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      while (iVar3 = TDoubleCircularQueueBuffer<51200u>::isEmpty
                               ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c)), iVar3 == 0)
      {
        cVar2 = TDoubleCircularQueueBuffer<51200u>::isPushGreaterThanPop
                          ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
        if (cVar2 == '\0') {
          iVar3 = TDoubleCircularQueueBuffer<51200u>::getPopLengthToEnd
                            ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
          if (0 < iVar3) {
            pcVar4 = (char *)TDoubleCircularQueueBuffer<51200u>::peekPop
                                       ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
            iVar3 = TCPSocket::send(*(TCPSocket **)(this + 0x1c),pcVar4,iVar3);
            if (iVar3 < 1) {
              if (-1 < iVar3) {
                return;
              }
              postDisconnected(this,0);
              return;
            }
            TDoubleCircularQueueBuffer<51200u>::pop
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c),iVar3);
          }
        }
        else {
          iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                            ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
          if (0 < iVar3) {
            pcVar4 = (char *)TDoubleCircularQueueBuffer<51200u>::peekPop
                                       ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
            iVar3 = TCPSocket::send(*(TCPSocket **)(this + 0x1c),pcVar4,iVar3);
            if (iVar3 < 1) {
              if (-1 < iVar3) {
                return;
              }
              postDisconnected(this,0);
              return;
            }
            TDoubleCircularQueueBuffer<51200u>::pop
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c),iVar3);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 243 行）：

```cpp
void ChannelServiceApp::TCPUser::onWrite(char* file, int line)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > slock(lockSend_);
    onWrite_();
}
```
