# in_ptr

`_ZN6Stream6in_ptrEv`

`Stream::in_ptr()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861be00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861be00  _ZN6Stream6in_ptrEv
#           Stream::in_ptr()
# range [0x0861be00, 0x0861be0b]
0861be00 +0x00:  push   %ebp
0861be01 +0x01:  mov    %esp,%ebp
0861be03 +0x03:  mov    0x8(%ebp),%eax
0861be06 +0x06:  mov    0xc(%eax),%eax
0861be09 +0x09:  pop    %ebp
0861be0a +0x0a:  ret
0861be0b +0x0b:  nop
```

## 反编译 C

```c
// Stream::in_ptr @ 0x861be00

/* Stream::in_ptr() */

undefined4 __thiscall Stream::in_ptr(Stream *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
