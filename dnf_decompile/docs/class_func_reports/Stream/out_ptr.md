# out_ptr

`_ZN6Stream7out_ptrEv`

`Stream::out_ptr()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861be28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861be28  _ZN6Stream7out_ptrEv
#           Stream::out_ptr()
# range [0x0861be28, 0x0861be33]
0861be28 +0x00:  push   %ebp
0861be29 +0x01:  mov    %esp,%ebp
0861be2b +0x03:  mov    0x8(%ebp),%eax
0861be2e +0x06:  mov    0x10(%eax),%eax
0861be31 +0x09:  pop    %ebp
0861be32 +0x0a:  ret
0861be33 +0x0b:  nop
```

## 反编译 C

```c
// Stream::out_ptr @ 0x861be28

/* Stream::out_ptr() */

undefined4 __thiscall Stream::out_ptr(Stream *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
