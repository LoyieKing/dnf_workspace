# close

`_ZN5nexon4cash9UDPSocket5closeEv`

`nexon::cash::UDPSocket::close()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af184  _ZN5nexon4cash9UDPSocket5closeEv
#           nexon::cash::UDPSocket::close()
# range [0x081af184, 0x081af1b7]
081af184 +0x00:  push   %ebp
081af185 +0x01:  mov    %esp,%ebp
081af187 +0x03:  sub    $0x18,%esp
081af18a +0x06:  mov    0x8(%ebp),%eax
081af18d +0x09:  mov    (%eax),%eax
081af18f +0x0b:  cmp    $0xffffffff,%eax
081af192 +0x0e:  je     081af1b5 <+0x31>
081af194 +0x10:  mov    0x8(%ebp),%eax
081af197 +0x13:  mov    (%eax),%eax
081af199 +0x15:  mov    %eax,(%esp)
081af19c +0x18:  call   0807d860 <_init+0x158>
081af1a1 +0x1d:  mov    0x8(%ebp),%eax
081af1a4 +0x20:  movl   $0xffffffff,(%eax)
081af1aa +0x26:  mov    0x8(%ebp),%eax
081af1ad +0x29:  movw   $0x0,0x14(%eax)
081af1b3 +0x2f:  jmp    081af1b6 <+0x32>
081af1b5 +0x31:  nop
081af1b6 +0x32:  leave
081af1b7 +0x33:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::close @ 0x81af184

/* nexon::cash::UDPSocket::close() */

void __thiscall nexon::cash::UDPSocket::close(UDPSocket *this)

{
  if (*(int *)this != -1) {
    ::close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return;
}
```
