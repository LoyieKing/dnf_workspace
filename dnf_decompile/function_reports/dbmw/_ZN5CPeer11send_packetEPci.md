# _ZN5CPeer11send_packetEPci

`CPeer::send_packet(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x805a456` | `0x21b` | `0x80ec47c` | `0x21b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,133 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN5CPeer11send_packetEPci+0x24>
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN5CPeer11send_packetEPci+0x214>
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN5CPeer11send_packetEPci+0x64>
 mov    0xc(%ebp),%eax
 add    $0x1,%eax
 movzbl (%eax),%eax
 movsbl %al,%edx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    0x10(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"!!!Send Packet[(%d,%d) Size(%d) Error\n",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN5CPeer11send_packetEPci+0x214>
 call   <T> <__errno_location>
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%edx
-mov    0x10(%ebp),%eax
-add    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+add    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1834(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%eax
 cmp    $0x96000,%eax
 jbe    <T> <_ZN5CPeer11send_packetEPci+0x11d>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%esi
 mov    0xc(%ebp),%eax
 add    $0x1,%eax
 movzbl (%eax),%eax
 movsbl %al,%ebx
 movl   $0x133,0x8(%esp)
 movl   $&_ZZN5CPeer11send_packetEPciE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",0x8(%esp)
 movl   $"./log/TcpErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 lea    0x183c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1834(%eax)
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN5CPeer11send_packetEPci+0x214>
 mov    0x8(%ebp),%eax
 mov    0x1838(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x183c,%edx
 cmp    %edx,%eax
 jb     <T> <_ZN5CPeer11send_packetEPci+0x153>
 mov    0x8(%ebp),%eax
 mov    0x1838(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x183c,%edx
 add    $0x96000,%edx
 cmp    %edx,%eax
 jb     <T> <_ZN5CPeer11send_packetEPci+0x1d3>
 mov    0x8(%ebp),%eax
 mov    0x1834(%eax),%esi
 mov    0xc(%ebp),%eax
 add    $0x1,%eax
 movzbl (%eax),%eax
 movsbl %al,%ebx
 movl   $0x13b,0x8(%esp)
 movl   $&_ZZN5CPeer11send_packetEPciE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",0x8(%esp)
 movl   $"./log/TcpErr",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 lea    0x183c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1834(%eax)
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN5CPeer11send_packetEPci+0x214>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x1838(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x1838(%eax),%edx
 mov    0x10(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1838(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer11send_packetEv>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::send_packet(char*, int) */

undefined4 __thiscall CPeer::_ZN5CPeer11send_packetEPci(CPeer *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [8];
  
  iVar2 = TCPSocket::getHandle((TCPSocket *)this);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else if (param_2 < 1) {
    printf("!!!Send Packet[(%d,%d) Size(%d) Error\n",(int)*param_1,(int)param_1[1],param_2);
    uVar3 = 0xffffffff;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0;
    *(int *)(this + 0x1834) = *(int *)(this + 0x1834) + param_2;
    if (*(uint *)(this + 0x1834) < 0x96001) {
      if ((*(CPeer **)(this + 0x1838) < this + 0x183c) ||
         (this + 0x9783c <= *(CPeer **)(this + 0x1838))) {
        uVar3 = *(undefined4 *)(this + 0x1834);
        cVar1 = param_1[1];
        CMyFileLog::CMyFileLog(local_14,"send_packet",0x13b);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_14,"./log/TcpErr",
                   "!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",
                   (int)cVar1,uVar3,param_2);
        *(CPeer **)(this + 0x1838) = this + 0x183c;
        *(undefined4 *)(this + 0x1834) = 0;
        uVar3 = 0xffffffff;
      }
      else {
        memcpy(*(void **)(this + 0x1838),param_1,param_2);
        *(int *)(this + 0x1838) = *(int *)(this + 0x1838) + param_2;
        uVar3 = send_packet(this);
      }
    }
    else {
      uVar3 = *(undefined4 *)(this + 0x1834);
      cVar1 = param_1[1];
      CMyFileLog::CMyFileLog(local_1c,"send_packet",0x133);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/TcpErr",
                 "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",(int)cVar1,uVar3,
                 param_2);
      *(CPeer **)(this + 0x1838) = this + 0x183c;
      *(undefined4 *)(this + 0x1834) = 0;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/Peer.cpp](source/DNFServer/GameServer/DBMW/Peer.cpp)（约第 194 行）：

```cpp
int CPeer::send_packet(char* buf, int len)
{
    if (getHandle() < 0)
        return -1;
    if (len <= 0)
    {
        printf("!!!Send Packet[(%d,%d) Size(%d) Error\n", buf[0], buf[1], len);
        return -1;
    }
    errno = 0;
    m_remainSendLen += len;
    if ((unsigned int)m_remainSendLen > 0x96000)
    {
        DNF_LOG_SCOPE_LINE(0x133, "./log/TcpErr",
            "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",
            buf[1], m_remainSendLen, len);
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return -1;
    }
    if (m_recvBuf < (char*)this + 0x183c ||
        (unsigned int)m_recvBuf >= (unsigned int)((char*)this + 0x183c) + 0x96000)
    {
        DNF_LOG_SCOPE_LINE(0x13b, "./log/TcpErr",
            "!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",
            buf[1], m_remainSendLen, len);
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return -1;
    }
    memcpy(m_recvBuf, buf, len);
    m_recvBuf += len;
    return send_packet();
}
```
