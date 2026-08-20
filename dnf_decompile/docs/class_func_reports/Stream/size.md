# size

`_ZN6Stream4sizeEv`

`Stream::size()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bdc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bdc8  _ZN6Stream4sizeEv
#           Stream::size()
# range [0x0861bdc8, 0x0861bdd3]
0861bdc8 +0x00:  push   %ebp
0861bdc9 +0x01:  mov    %esp,%ebp
0861bdcb +0x03:  mov    0x8(%ebp),%eax
0861bdce +0x06:  mov    0x4(%eax),%eax
0861bdd1 +0x09:  pop    %ebp
0861bdd2 +0x0a:  ret
0861bdd3 +0x0b:  nop
```

## 反编译 C

```c
// Stream::size @ 0x861bdc8

/* Stream::size() */

undefined4 __thiscall Stream::size(Stream *this)

{
  return *(undefined4 *)(this + 4);
}
```
