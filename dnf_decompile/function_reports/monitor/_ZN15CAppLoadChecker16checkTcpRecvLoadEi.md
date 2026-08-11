# _ZN15CAppLoadChecker16checkTcpRecvLoadEi

`CAppLoadChecker::checkTcpRecvLoad(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806bf0e` | `0x26c` | `0x809caf6` | `0x219` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,204 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzbl 0xc(%eax),%eax
-test   %al,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x32>
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x3a>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x32,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x32>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x3a>
 mov    0x8(%ebp),%eax
 movb   $0x1,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x61>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x1,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x64>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x64,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x61>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x64>
 mov    0x8(%ebp),%eax
 movb   $0x2,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x2,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x92>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x2,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x90>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0xc8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x92>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x90>
 mov    0x8(%ebp),%eax
 movb   $0x3,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x3,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xc3>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x3,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xbc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1f4,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xc3>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xbc>
 mov    0x8(%ebp),%eax
 movb   $0x4,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x4,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xf4>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x4,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xe8>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x3e8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xf4>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0xe8>
 mov    0x8(%ebp),%eax
 movb   $0x5,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x5,%al
-jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x125>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x5,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x114>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x125>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x114>
 mov    0x8(%ebp),%eax
 movb   $0x6,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x6,%al
-jne    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x14f>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x6,-0x1(%ebp)
+jne    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x139>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x14f>
+jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x139>
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-test   %al,%al
-js     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x178>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+cmpb   $0x0,-0x1(%ebp)
+js     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x150>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x32,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x178>
-mov    0x8(%ebp),%eax
-movb   $0xff,0xc(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xff,%al
-jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1a1>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x20b>
+cmpb   $0xff,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x167>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x64,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1a1>
-mov    0x8(%ebp),%eax
-movb   $0xfe,0xc(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xfe,%al
-jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1cc>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1fd>
+cmpb   $0xfe,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x17c>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0xc8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1cc>
-mov    0x8(%ebp),%eax
-movb   $0xfd,0xc(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xfd,%al
-jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1f4>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1ef>
+cmpb   $0xfd,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x191>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x1f4,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1f4>
-mov    0x8(%ebp),%eax
-movb   $0xfc,0xc(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xfc,%al
-jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x21c>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1e1>
+cmpb   $0xfc,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1a6>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x3e8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x21c>
-mov    0x8(%ebp),%eax
-movb   $0xfb,0xc(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xfb,%al
-jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x244>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1d3>
+cmpb   $0xfb,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1bd>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x244>
+jg     <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1c5>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x1be>
+nop
+mov    $0x0,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
 mov    0x8(%ebp),%eax
 movb   $0xfa,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
 mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0xfa,%al
-jne    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x265>
+movb   $0xfb,0xc(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
 mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-sub    0xc(%ebp),%eax
-cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x265>
+movb   $0xfc,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x26a>
-mov    $0x0,%eax
-pop    %ebp
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+mov    0x8(%ebp),%eax
+movb   $0xfd,0xc(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+mov    0x8(%ebp),%eax
+movb   $0xfe,0xc(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi+0x217>
+mov    0x8(%ebp),%eax
+movb   $0xff,0xc(%eax)
+mov    $0x1,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppLoadChecker::checkTcpRecvLoad(int) */

undefined4 __thiscall
CAppLoadChecker::_ZN15CAppLoadChecker16checkTcpRecvLoadEi(CAppLoadChecker *this,int param_1)

{
  undefined4 uVar1;
  
  if (((char)this[0xc] < '\x01') && (0x32 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x1;
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\x02') && (100 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x2;
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\x03') && (200 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x3;
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\x04') && (500 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x4;
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\x05') && (1000 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x5;
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\x06') && (5000 < param_1 - *(int *)this)) {
    this[0xc] = (CAppLoadChecker)0x6;
    uVar1 = 1;
  }
  else if ((this[0xc] == (CAppLoadChecker)0x6) && (5000 < param_1 - *(int *)this)) {
    uVar1 = 1;
  }
  else if (((char)this[0xc] < '\0') || (*(int *)this - param_1 < 0x33)) {
    if (((char)this[0xc] < -1) || (*(int *)this - param_1 < 0x65)) {
      if (((char)this[0xc] < -2) || (*(int *)this - param_1 < 0xc9)) {
        if (((char)this[0xc] < -3) || (*(int *)this - param_1 < 0x1f5)) {
          if (((char)this[0xc] < -4) || (*(int *)this - param_1 < 0x3e9)) {
            if (((char)this[0xc] < -5) || (*(int *)this - param_1 < 0x1389)) {
              if ((this[0xc] == (CAppLoadChecker)0xfa) && (5000 < *(int *)this - param_1)) {
                uVar1 = 1;
              }
              else {
                uVar1 = 0;
              }
            }
            else {
              this[0xc] = (CAppLoadChecker)0xfa;
              uVar1 = 1;
            }
          }
          else {
            this[0xc] = (CAppLoadChecker)0xfb;
            uVar1 = 1;
          }
        }
        else {
          this[0xc] = (CAppLoadChecker)0xfc;
          uVar1 = 1;
        }
      }
      else {
        this[0xc] = (CAppLoadChecker)0xfd;
        uVar1 = 1;
      }
    }
    else {
      this[0xc] = (CAppLoadChecker)0xfe;
      uVar1 = 1;
    }
  }
  else {
    this[0xc] = (CAppLoadChecker)0xff;
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp](source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp)（约第 83 行）：

```cpp
bool CAppLoadChecker::checkTcpRecvLoad(int size)
{
    if (m_tcpRecvLevel < 1 && 0x32 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 1;
        return 1;
    }
    if (m_tcpRecvLevel < 2 && 0x64 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 2;
        return 1;
    }
    if (m_tcpRecvLevel < 3 && 0xc8 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 3;
        return 1;
    }
    if (m_tcpRecvLevel < 4 && 0x1f4 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 4;
        return 1;
    }
    if (m_tcpRecvLevel < 5 && 0x3e8 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 5;
        return 1;
    }
    if (m_tcpRecvLevel < 6 && 0x1388 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 6;
        return 1;
    }
    if (m_tcpRecvLevel == 6 && 0x1388 < size - m_tcpRecvLast)
        return 1;
    if (m_tcpRecvLevel >= 0 && 0x32 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xff;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xff && 0x64 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfe;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfe && 0xc8 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfd;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfd && 0x1f4 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfc;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfc && 0x3e8 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfb;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfb && 0x1388 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfa;
        return 1;
    }
    if (m_tcpRecvLevel == (char)0xfa && 0x1388 < m_tcpRecvLast - size)
        return 1;
    return 0;
}
```
