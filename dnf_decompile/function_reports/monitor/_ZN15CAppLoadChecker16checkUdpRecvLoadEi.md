# _ZN15CAppLoadChecker16checkUdpRecvLoadEi

`CAppLoadChecker::checkUdpRecvLoad(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806c17a` | `0x27a` | `0x809cd10` | `0x226` |

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
 movzbl 0xd(%eax),%eax
-test   %al,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x33>
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x3b>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x32,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x33>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x3b>
 mov    0x8(%ebp),%eax
 movb   $0x1,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x1,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x63>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x1,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x66>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x64,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x63>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x66>
 mov    0x8(%ebp),%eax
 movb   $0x2,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x2,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x95>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x2,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x93>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0xc8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x95>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x93>
 mov    0x8(%ebp),%eax
 movb   $0x3,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x3,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xc7>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x3,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xc0>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1f4,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xc7>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xc0>
 mov    0x8(%ebp),%eax
 movb   $0x4,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x4,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xf9>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x4,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xed>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x3e8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xf9>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0xed>
 mov    0x8(%ebp),%eax
 movb   $0x5,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x5,%al
-jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x12b>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x5,-0x1(%ebp)
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x11a>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x12b>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x11a>
 mov    0x8(%ebp),%eax
 movb   $0x6,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0x6,%al
-jne    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x156>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x6,-0x1(%ebp)
+jne    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x140>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x156>
+jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x140>
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-test   %al,%al
-js     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x180>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+cmpb   $0x0,-0x1(%ebp)
+js     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x158>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x32,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x180>
-mov    0x8(%ebp),%eax
-movb   $0xff,0xd(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xff,%al
-jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1aa>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x218>
+cmpb   $0xff,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x170>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x64,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1aa>
-mov    0x8(%ebp),%eax
-movb   $0xfe,0xd(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xfe,%al
-jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1d6>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x20a>
+cmpb   $0xfe,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x186>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0xc8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1d6>
-mov    0x8(%ebp),%eax
-movb   $0xfd,0xd(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xfd,%al
-jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1ff>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1fc>
+cmpb   $0xfd,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x19c>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x1f4,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1ff>
-mov    0x8(%ebp),%eax
-movb   $0xfc,0xd(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xfc,%al
-jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x228>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1ee>
+cmpb   $0xfc,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1b2>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x3e8,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x228>
-mov    0x8(%ebp),%eax
-movb   $0xfb,0xd(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xfb,%al
-jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x251>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1e0>
+cmpb   $0xfb,-0x1(%ebp)
+jl     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1ca>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0xc(%ebp),%eax
 cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x251>
+jg     <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1d2>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x1cb>
+nop
+mov    $0x0,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
 mov    0x8(%ebp),%eax
 movb   $0xfa,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
 mov    0x8(%ebp),%eax
-movzbl 0xd(%eax),%eax
-cmp    $0xfa,%al
-jne    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x273>
+movb   $0xfb,0xd(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-sub    0xc(%ebp),%eax
-cmp    $0x1388,%eax
-jle    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x273>
+movb   $0xfc,0xd(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x278>
-mov    $0x0,%eax
-pop    %ebp
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+mov    0x8(%ebp),%eax
+movb   $0xfd,0xd(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+mov    0x8(%ebp),%eax
+movb   $0xfe,0xd(%eax)
+mov    $0x1,%eax
+jmp    <T> <_ZN15CAppLoadChecker16checkUdpRecvLoadEi+0x224>
+mov    0x8(%ebp),%eax
+movb   $0xff,0xd(%eax)
+mov    $0x1,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppLoadChecker::checkUdpRecvLoad(int) */

undefined4 __thiscall
CAppLoadChecker::_ZN15CAppLoadChecker16checkUdpRecvLoadEi(CAppLoadChecker *this,int param_1)

{
  undefined4 uVar1;
  
  if (((char)this[0xd] < '\x01') && (0x32 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x1;
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\x02') && (100 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x2;
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\x03') && (200 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x3;
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\x04') && (500 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x4;
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\x05') && (1000 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x5;
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\x06') && (5000 < param_1 - *(int *)(this + 4))) {
    this[0xd] = (CAppLoadChecker)0x6;
    uVar1 = 1;
  }
  else if ((this[0xd] == (CAppLoadChecker)0x6) && (5000 < param_1 - *(int *)(this + 4))) {
    uVar1 = 1;
  }
  else if (((char)this[0xd] < '\0') || (*(int *)(this + 4) - param_1 < 0x33)) {
    if (((char)this[0xd] < -1) || (*(int *)(this + 4) - param_1 < 0x65)) {
      if (((char)this[0xd] < -2) || (*(int *)(this + 4) - param_1 < 0xc9)) {
        if (((char)this[0xd] < -3) || (*(int *)(this + 4) - param_1 < 0x1f5)) {
          if (((char)this[0xd] < -4) || (*(int *)(this + 4) - param_1 < 0x3e9)) {
            if (((char)this[0xd] < -5) || (*(int *)(this + 4) - param_1 < 0x1389)) {
              if ((this[0xd] == (CAppLoadChecker)0xfa) && (5000 < *(int *)(this + 4) - param_1)) {
                uVar1 = 1;
              }
              else {
                uVar1 = 0;
              }
            }
            else {
              this[0xd] = (CAppLoadChecker)0xfa;
              uVar1 = 1;
            }
          }
          else {
            this[0xd] = (CAppLoadChecker)0xfb;
            uVar1 = 1;
          }
        }
        else {
          this[0xd] = (CAppLoadChecker)0xfc;
          uVar1 = 1;
        }
      }
      else {
        this[0xd] = (CAppLoadChecker)0xfd;
        uVar1 = 1;
      }
    }
    else {
      this[0xd] = (CAppLoadChecker)0xfe;
      uVar1 = 1;
    }
  }
  else {
    this[0xd] = (CAppLoadChecker)0xff;
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp](source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp)（约第 151 行）：

```cpp
bool CAppLoadChecker::checkUdpRecvLoad(int size)
{
    if (m_udpRecvLevel < 1 && 0x32 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 1;
        return 1;
    }
    if (m_udpRecvLevel < 2 && 0x64 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 2;
        return 1;
    }
    if (m_udpRecvLevel < 3 && 0xc8 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 3;
        return 1;
    }
    if (m_udpRecvLevel < 4 && 0x1f4 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 4;
        return 1;
    }
    if (m_udpRecvLevel < 5 && 0x3e8 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 5;
        return 1;
    }
    if (m_udpRecvLevel < 6 && 0x1388 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 6;
        return 1;
    }
    if (m_udpRecvLevel == 6 && 0x1388 < size - m_udpRecvLast)
        return 1;
    if (m_udpRecvLevel >= 0 && 0x32 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xff;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xff && 0x64 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfe;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfe && 0xc8 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfd;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfd && 0x1f4 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfc;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfc && 0x3e8 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfb;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfb && 0x1388 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfa;
        return 1;
    }
    if (m_udpRecvLevel == (char)0xfa && 0x1388 < m_udpRecvLast - size)
        return 1;
    return 0;
}
```
