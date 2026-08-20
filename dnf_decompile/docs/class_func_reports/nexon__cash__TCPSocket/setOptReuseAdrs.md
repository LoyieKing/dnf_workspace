# setOptReuseAdrs

`_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb`

`nexon::cash::TCPSocket::setOptReuseAdrs(bool)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af8bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af8bc  _ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb
#           nexon::cash::TCPSocket::setOptReuseAdrs(bool)
# range [0x081af8bc, 0x081af925]
081af8bc +0x00:  push   %ebp
081af8bd +0x01:  mov    %esp,%ebp
081af8bf +0x03:  sub    $0x48,%esp
081af8c2 +0x06:  mov    0xc(%ebp),%eax
081af8c5 +0x09:  mov    %al,-0x1c(%ebp)
081af8c8 +0x0c:  movl   $0x0,-0xc(%ebp)
081af8cf +0x13:  cmpb   $0x0,-0x1c(%ebp)
081af8d3 +0x17:  je     081af8de <+0x22>
081af8d5 +0x19:  movl   $0x1,-0xc(%ebp)
081af8dc +0x20:  jmp    081af8e5 <+0x29>
081af8de +0x22:  movl   $0x0,-0xc(%ebp)
081af8e5 +0x29:  mov    0x8(%ebp),%eax
081af8e8 +0x2c:  mov    (%eax),%eax
081af8ea +0x2e:  movl   $0x4,0x10(%esp)
081af8f2 +0x36:  lea    -0xc(%ebp),%edx
081af8f5 +0x39:  mov    %edx,0xc(%esp)
081af8f9 +0x3d:  movl   $0x2,0x8(%esp)
081af901 +0x45:  movl   $0x1,0x4(%esp)
081af909 +0x4d:  mov    %eax,(%esp)
081af90c +0x50:  call   0807e2a0 <_init+0xb98>
081af911 +0x55:  shr    $0x1f,%eax
081af914 +0x58:  test   %al,%al
081af916 +0x5a:  je     081af91f <+0x63>
081af918 +0x5c:  mov    $0x0,%eax
081af91d +0x61:  jmp    081af924 <+0x68>
081af91f +0x63:  mov    $0x1,%eax
081af924 +0x68:  leave
081af925 +0x69:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptReuseAdrs @ 0x81af8bc

/* nexon::cash::TCPSocket::setOptReuseAdrs(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptReuseAdrs(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_10 [3];
  
  local_10[0] = (uint)param_1;
  iVar1 = setsockopt(*(int *)this,1,2,local_10,4);
  return -1 < iVar1;
}
```
