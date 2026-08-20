# is_big_stream

`_ZN6Stream13is_big_streamEv`

`Stream::is_big_stream()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bedc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bedc  _ZN6Stream13is_big_streamEv
#           Stream::is_big_stream()
# range [0x0861bedc, 0x0861bee7]
0861bedc +0x00:  push   %ebp
0861bedd +0x01:  mov    %esp,%ebp
0861bedf +0x03:  mov    0x8(%ebp),%eax
0861bee2 +0x06:  movzbl 0x14(%eax),%eax
0861bee6 +0x0a:  pop    %ebp
0861bee7 +0x0b:  ret
```

## 反编译 C

```c
// Stream::is_big_stream @ 0x861bedc

/* Stream::is_big_stream() */

Stream __thiscall Stream::is_big_stream(Stream *this)

{
  return this[0x14];
}
```
