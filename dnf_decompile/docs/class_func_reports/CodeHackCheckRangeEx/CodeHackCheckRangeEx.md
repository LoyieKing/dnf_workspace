# CodeHackCheckRangeEx

`_ZN20CodeHackCheckRangeExC1Ev`

`CodeHackCheckRangeEx::CodeHackCheckRangeEx()`

| 类 | 地址 |
|---|---|
| `CodeHackCheckRangeEx` | `0x0808a966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a966  _ZN20CodeHackCheckRangeExC1Ev
#           CodeHackCheckRangeEx::CodeHackCheckRangeEx()
# range [0x0808a966, 0x0808a9a9]
0808a966 +0x00:  push   %ebp
0808a967 +0x01:  mov    %esp,%ebp
0808a969 +0x03:  sub    $0x18,%esp
0808a96c +0x06:  mov    0x8(%ebp),%eax
0808a96f +0x09:  movl   $0x20,0x8(%esp)
0808a977 +0x11:  movl   $0x0,0x4(%esp)
0808a97f +0x19:  mov    %eax,(%esp)
0808a982 +0x1c:  call   0807dcc0 <_init+0x5b8>
0808a987 +0x21:  mov    0x8(%ebp),%eax
0808a98a +0x24:  add    $0x104,%eax
0808a98f +0x29:  movl   $0x8,0x8(%esp)
0808a997 +0x31:  movl   $0x0,0x4(%esp)
0808a99f +0x39:  mov    %eax,(%esp)
0808a9a2 +0x3c:  call   0807dcc0 <_init+0x5b8>
0808a9a7 +0x41:  leave
0808a9a8 +0x42:  ret
0808a9a9 +0x43:  nop
```

## 反编译 C

```c
// CodeHackCheckRangeEx::CodeHackCheckRangeEx @ 0x808a966

/* CodeHackCheckRangeEx::CodeHackCheckRangeEx() */

void __thiscall CodeHackCheckRangeEx::CodeHackCheckRangeEx(CodeHackCheckRangeEx *this)

{
  memset(this,0,0x20);
  memset(this + 0x104,0,8);
  return;
}
```
