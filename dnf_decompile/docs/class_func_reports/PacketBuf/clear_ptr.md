# clear_ptr

`_ZN9PacketBuf9clear_ptrEv`

`PacketBuf::clear_ptr()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c93a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c93a  _ZN9PacketBuf9clear_ptrEv
#           PacketBuf::clear_ptr()
# range [0x0858c93a, 0x0858c949]
0858c93a +0x00:  push   %ebp
0858c93b +0x01:  mov    %esp,%ebp
0858c93d +0x03:  mov    0x8(%ebp),%eax
0858c940 +0x06:  movl   $0xd,0x4(%eax)
0858c947 +0x0d:  pop    %ebp
0858c948 +0x0e:  ret
0858c949 +0x0f:  nop
```

## 反编译 C

```c
// PacketBuf::clear_ptr @ 0x858c93a

/* PacketBuf::clear_ptr() */

void __thiscall PacketBuf::clear_ptr(PacketBuf *this)

{
  *(undefined4 *)(this + 4) = 0xd;
  return;
}
```
