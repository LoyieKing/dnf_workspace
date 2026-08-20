# yy_top_state

`_ZN23__dnf_script__FlexLexer12yy_top_stateEv`

`__dnf_script__FlexLexer::yy_top_state()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1dd0  _ZN23__dnf_script__FlexLexer12yy_top_stateEv
#           __dnf_script__FlexLexer::yy_top_state()
# range [0x08ad1dd0, 0x08ad1de9]
08ad1dd0 +0x00:  push   %ebp
08ad1dd1 +0x01:  mov    %esp,%ebp
08ad1dd3 +0x03:  mov    0x8(%ebp),%eax
08ad1dd6 +0x06:  pop    %ebp
08ad1dd7 +0x07:  mov    0x14(%eax),%edx
08ad1dda +0x0a:  mov    0x1c(%eax),%eax
08ad1ddd +0x0d:  mov    -0x4(%eax,%edx,4),%eax
08ad1de1 +0x11:  ret
08ad1de2 +0x12:  lea    0x0(%esi,%eiz,1),%esi
08ad1de9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_top_state @ 0x8ad1dd0

/* DWARF original prototype: int yy_top_state(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yy_top_state(__dnf_script__FlexLexer *this)

{
  return this->yy_start_stack[this->yy_start_stack_ptr + -1];
}
```
