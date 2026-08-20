# close

`_ZN5nexon4cash9TCPSocket5closeEv`

`nexon::cash::TCPSocket::close()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af80c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af80c  _ZN5nexon4cash9TCPSocket5closeEv
#           nexon::cash::TCPSocket::close()
# range [0x081af80c, 0x081af85d]
081af80c +0x00:  push   %ebp
081af80d +0x01:  mov    %esp,%ebp
081af80f +0x03:  sub    $0x18,%esp
081af812 +0x06:  mov    0x8(%ebp),%eax
081af815 +0x09:  mov    (%eax),%eax
081af817 +0x0b:  cmp    $0xffffffff,%eax
081af81a +0x0e:  je     081af85b <+0x4f>
081af81c +0x10:  mov    0x8(%ebp),%eax
081af81f +0x13:  mov    (%eax),%eax
081af821 +0x15:  mov    %eax,(%esp)
081af824 +0x18:  call   0807d860 <_init+0x158>
081af829 +0x1d:  mov    0x8(%ebp),%eax
081af82c +0x20:  movl   $0xffffffff,(%eax)
081af832 +0x26:  mov    0x8(%ebp),%eax
081af835 +0x29:  add    $0x14,%eax
081af838 +0x2c:  movl   $0x4,0x8(%esp)
081af840 +0x34:  movl   $0x0,0x4(%esp)
081af848 +0x3c:  mov    %eax,(%esp)
081af84b +0x3f:  call   0807dcc0 <_init+0x5b8>
081af850 +0x44:  mov    0x8(%ebp),%eax
081af853 +0x47:  movw   $0x0,0x18(%eax)
081af859 +0x4d:  jmp    081af85c <+0x50>
081af85b +0x4f:  nop
081af85c +0x50:  leave
081af85d +0x51:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::close @ 0x81af80c

/* nexon::cash::TCPSocket::close() */

void __thiscall nexon::cash::TCPSocket::close(TCPSocket *this)

{
  if (*(int *)this != -1) {
    ::close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
    memset(this + 0x14,0,4);
    *(undefined2 *)(this + 0x18) = 0;
  }
  return;
}
```
