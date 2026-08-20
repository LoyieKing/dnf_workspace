# closeSocket

`_ZN5yaSSL6Socket11closeSocketEv`

`yaSSL::Socket::closeSocket()`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1700  _ZN5yaSSL6Socket11closeSocketEv
#           yaSSL::Socket::closeSocket()
# range [0x087a1700, 0x087a173f]
087a1700 +0x00:  push   %ebp
087a1701 +0x01:  mov    %esp,%ebp
087a1703 +0x03:  sub    $0x18,%esp
087a1706 +0x06:  mov    %esi,-0x4(%ebp)
087a1709 +0x09:  mov    0x8(%ebp),%esi
087a170c +0x0c:  mov    %ebx,-0x8(%ebp)
087a170f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1714 +0x14:  add    $0xbcb484,%ebx
087a171a +0x1a:  mov    (%esi),%eax
087a171c +0x1c:  cmp    $0xffffffff,%eax
087a171f +0x1f:  je     087a172f <+0x2f>
087a1721 +0x21:  mov    %eax,(%esp)
087a1724 +0x24:  call   0807d860 <_init+0x158>
087a1729 +0x29:  movl   $0xffffffff,(%esi)
087a172f +0x2f:  mov    -0x8(%ebp),%ebx
087a1732 +0x32:  mov    -0x4(%ebp),%esi
087a1735 +0x35:  mov    %ebp,%esp
087a1737 +0x37:  pop    %ebp
087a1738 +0x38:  ret
087a1739 +0x39:  nop
087a173a +0x3a:  nop
087a173b +0x3b:  nop
087a173c +0x3c:  nop
087a173d +0x3d:  nop
087a173e +0x3e:  nop
087a173f +0x3f:  nop
```

## 反编译 C

```c
// yaSSL::Socket::closeSocket @ 0x87a1700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::closeSocket() */

void __thiscall yaSSL::Socket::closeSocket(Socket *this)

{
  if (*(int *)this != -1) {
    close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
  }
  return;
}
```
