# yy_try_NUL_trans

`_ZN23__dnf_script__FlexLexer16yy_try_NUL_transEi`

`__dnf_script__FlexLexer::yy_try_NUL_trans(int)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1b50  _ZN23__dnf_script__FlexLexer16yy_try_NUL_transEi
#           __dnf_script__FlexLexer::yy_try_NUL_trans(int)
# range [0x08ad1b50, 0x08ad1b5f]
08ad1b50 +0x00:  push   %ebp
08ad1b51 +0x01:  mov    %esp,%ebp
08ad1b53 +0x03:  mov    0xc(%ebp),%eax
08ad1b56 +0x06:  pop    %ebp
08ad1b57 +0x07:  mov    &_ZL12yy_NUL_trans(,%eax,4),%eax
08ad1b5e +0x0e:  ret
08ad1b5f +0x0f:  nop
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_try_NUL_trans @ 0x8ad1b50

/* DWARF original prototype: yy_state_type yy_try_NUL_trans(__dnf_script__FlexLexer * this,
   yy_state_type yy_current_state) */

yy_state_type __thiscall
__dnf_script__FlexLexer::yy_try_NUL_trans
          (__dnf_script__FlexLexer *this,yy_state_type yy_current_state)

{
  return yy_NUL_trans[yy_current_state];
}
```
