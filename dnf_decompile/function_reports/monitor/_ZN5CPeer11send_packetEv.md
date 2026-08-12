# _ZN5CPeer11send_packetEv

`CPeer::send_packet()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8051a7a` | `0x24d` | `0x809b540` | `0x25f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,149 +1,151 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
-movl   $0x0,-0xc(%ebp)
+sub    $0x20,%esp
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN5CPeer11send_packetEv+0x26>
-mov    $0x1,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jne    <T> <_ZN5CPeer11send_packetEv+0x28>
+movl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
 mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%ebx
+mov    0x1834(%eax),%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%esi
+lea    0x183c(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CPeer11send_packetEv+0xdf>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jg     <T> <_ZN5CPeer11send_packetEv+0xeb>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x97>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x97>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x97>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN5CPeer11send_packetEv+0x9a>
-mov    $0x1,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jne    <T> <_ZN5CPeer11send_packetEv+0xa4>
+movl   $0x1,-0x10(%ebp)
+nop
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <__errno_location>
 mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",(%esp)
 call   <T> <printf>
-mov    $0x1,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
-cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN5CPeer11send_packetEv+0x243>
+movl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
+cmpl   $0x0,-0x10(%ebp)
+jle    <T> <_ZN5CPeer11send_packetEv+0x255>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
-cmp    -0xc(%ebp),%eax
-jle    <T> <_ZN5CPeer11send_packetEv+0x1ef>
+cmp    -0x10(%ebp),%eax
+jle    <T> <_ZN5CPeer11send_packetEv+0x1ff>
 mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%edx
-mov    -0xc(%ebp),%eax
-add    %eax,%edx
+mov    -0x10(%ebp),%edx
+add    $0x183c,%edx
+lea    (%eax,%edx,1),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%edx
-mov    -0xc(%ebp),%eax
-sub    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+sub    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1834(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
 cmp    $0x96000,%eax
-jbe    <T> <_ZN5CPeer11send_packetEv+0x1a5>
+ja     <T> <_ZN5CPeer11send_packetEv+0x194>
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x1838(%eax),%eax
+mov    0x8(%ebp),%ecx
+add    $0x183c,%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <memmove>
+mov    0x8(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+add    $0x183c,%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x1838(%eax)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%ebx
 movl   $0x17e,0x8(%esp)
 movl   $&_ZZN5CPeer11send_packetEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"m_remain_sendlen < MAX_PACKET_SIZE_UDP :  m_remain_sendlen:%d]",0x8(%esp)
 movl   $"./log/TcpErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 lea    0x183c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1834(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1838(%eax),%eax
-mov    0x8(%ebp),%ecx
-add    $0x183c,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <memmove>
-mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%edx
+movl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x1838(%eax)
-jmp    <T> <_ZN5CPeer11send_packetEv+0x243>
+cmp    -0x10(%ebp),%eax
+jge    <T> <_ZN5CPeer11send_packetEv+0x236>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
-cmp    -0xc(%ebp),%eax
-jge    <T> <_ZN5CPeer11send_packetEv+0x224>
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%eax
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"offset error[Remain_Data: %d Send:%d]",(%esp)
 call   <T> <printf>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+movl   $0xffffffff,-0x10(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x255>
 mov    0x8(%ebp),%eax
 lea    0x183c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1834(%eax)
-mov    -0xc(%ebp),%eax
-add    $0x30,%esp
+mov    -0x10(%ebp),%eax
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::send_packet() */

ssize_t __thiscall CPeer::_ZN5CPeer11send_packetEv(CPeer *this)

{
  size_t __n;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  CMyFileLog local_18 [8];
  ssize_t local_10;
  
  local_10 = 0;
  if (*(int *)(this + 0x1834) == 0) {
    local_10 = 1;
  }
  else {
    __n = *(size_t *)(this + 0x1834);
    iVar1 = TCPSocket::getHandle((TCPSocket *)this);
    local_10 = write(iVar1,this + 0x183c,__n);
    if (local_10 < 1) {
      piVar2 = __errno_location();
      if ((((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4)) ||
          (piVar2 = __errno_location(), *piVar2 == 0xb)) ||
         (piVar2 = __errno_location(), *piVar2 == 0)) {
        local_10 = 1;
      }
      else {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        uVar4 = TCPSocket::getHandle((TCPSocket *)this);
        printf("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar4,iVar1,pcVar3);
        local_10 = 1;
      }
    }
    else if (0 < local_10) {
      if (local_10 < *(int *)(this + 0x1834)) {
        *(CPeer **)(this + 0x1838) = this + local_10 + 0x183c;
        *(int *)(this + 0x1834) = *(int *)(this + 0x1834) - local_10;
        if (*(uint *)(this + 0x1834) < 0x96001) {
          memmove(this + 0x183c,*(void **)(this + 0x1838),*(size_t *)(this + 0x1834));
          *(CPeer **)(this + 0x1838) = this + *(int *)(this + 0x1834) + 0x183c;
        }
        else {
          uVar4 = *(undefined4 *)(this + 0x1834);
          CMyFileLog::CMyFileLog(local_18,"send_packet",0x17e);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_18,"./log/TcpErr",
                     "m_remain_sendlen < MAX_PACKET_SIZE_UDP :  m_remain_sendlen:%d]",uVar4);
          *(CPeer **)(this + 0x1838) = this + 0x183c;
          *(undefined4 *)(this + 0x1834) = 0;
          local_10 = 1;
        }
      }
      else if (*(int *)(this + 0x1834) < local_10) {
        printf("offset error[Remain_Data: %d Send:%d]",*(undefined4 *)(this + 0x1834),local_10);
        local_10 = -1;
      }
      else {
        *(CPeer **)(this + 0x1838) = this + 0x183c;
        *(undefined4 *)(this + 0x1834) = 0;
      }
    }
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Peer.cpp](source/DNFServer/GameServer/Monitor/Peer.cpp)（约第 87 行）：

```cpp
int CPeer::send_packet()
{
    int result = 0;
    if (m_sendRemain == 0)
    {
        result = 1;
    }
    else
    {
        size_t n = (size_t)m_sendRemain;
        result = write(getHandle(), m_sendBuf, n);
        if (result < 1)
        {
            if (errno == EAGAIN || errno == EINTR || errno == EAGAIN || errno == 0)
            {
                result = 1;
            }
            else
            {
                printf("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)", getHandle(), errno,
                       strerror(errno));
                result = 1;
            }
        }
        else if (0 < result)
        {
            if (result < m_sendRemain)
            {
                m_sendPtr = (char*)this + result + 0x183c;
                m_sendRemain = m_sendRemain - result;
                if ((unsigned int)m_sendRemain < 0x96001)
                {
                    memmove(m_sendBuf, m_sendPtr, (size_t)m_sendRemain);
                    m_sendPtr = (char*)this + m_sendRemain + 0x183c;
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x17e,"./log/TcpErr",
                        "m_remain_sendlen < MAX_PACKET_SIZE_UDP :  m_remain_sendlen:%d]",
                        m_sendRemain);
                    m_sendPtr = (char*)this + 0x183c;
                    m_sendRemain = 0;
                    result = 1;
                }
            }
            else if (m_sendRemain < result)
            {
                printf("offset error[Remain_Data: %d Send:%d]", m_sendRemain, result);
                result = -1;
            }
            else
            {
                m_sendPtr = (char*)this + 0x183c;
                m_sendRemain = 0;
            }
        }
    }
    return result;
}
```
