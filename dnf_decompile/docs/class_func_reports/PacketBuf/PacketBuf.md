# PacketBuf

`_ZN9PacketBufC1Ev`

`PacketBuf::PacketBuf()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c8c0  _ZN9PacketBufC1Ev
#           PacketBuf::PacketBuf()
# range [0x0858c8c0, 0x0858c8db]
0858c8c0 +0x00:  push   %ebp
0858c8c1 +0x01:  mov    %esp,%ebp
0858c8c3 +0x03:  sub    $0x18,%esp
0858c8c6 +0x06:  mov    0x8(%ebp),%eax
0858c8c9 +0x09:  movl   $0x0,(%eax)
0858c8cf +0x0f:  mov    0x8(%ebp),%eax
0858c8d2 +0x12:  mov    %eax,(%esp)
0858c8d5 +0x15:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
0858c8da +0x1a:  leave
0858c8db +0x1b:  ret
```

## 反编译 C

```c
// PacketBuf::PacketBuf @ 0x858c8c0

/* PacketBuf::PacketBuf() */

void __thiscall PacketBuf::PacketBuf(PacketBuf *this)

{
  *(undefined4 *)this = 0;
  clear(this);
  return;
}
```
