# GetCodeHackCheckRange

`_ZN18CodeHackChecksumEx21GetCodeHackCheckRangeEv`

`CodeHackChecksumEx::GetCodeHackCheckRange()`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a7f4  _ZN18CodeHackChecksumEx21GetCodeHackCheckRangeEv
#           CodeHackChecksumEx::GetCodeHackCheckRange()
# range [0x0808a7f4, 0x0808a801]
0808a7f4 +0x00:  push   %ebp
0808a7f5 +0x01:  mov    %esp,%ebp
0808a7f7 +0x03:  mov    0x8(%ebp),%eax
0808a7fa +0x06:  add    $0x110,%eax
0808a7ff +0x0b:  pop    %ebp
0808a800 +0x0c:  ret
0808a801 +0x0d:  nop
```

## 反编译 C

```c
// CodeHackChecksumEx::GetCodeHackCheckRange @ 0x808a7f4

/* CodeHackChecksumEx::GetCodeHackCheckRange() */

CodeHackChecksumEx * __thiscall CodeHackChecksumEx::GetCodeHackCheckRange(CodeHackChecksumEx *this)

{
  return this + 0x110;
}
```
