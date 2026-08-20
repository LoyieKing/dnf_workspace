# set_second_growtype_max_level

`_ZN6CSkill29set_second_growtype_max_levelEiii`

`CSkill::set_second_growtype_max_level(int, int, int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350614` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350614  _ZN6CSkill29set_second_growtype_max_levelEiii
#           CSkill::set_second_growtype_max_level(int, int, int)
# range [0x08350614, 0x08350657]
08350614 +0x00:  push   %ebp
08350615 +0x01:  mov    %esp,%ebp
08350617 +0x03:  cmpl   $0x0,0xc(%ebp)
0835061b +0x07:  js     0835064c <+0x38>
0835061d +0x09:  cmpl   $0x5,0xc(%ebp)
08350621 +0x0d:  jg     0835064f <+0x3b>
08350623 +0x0f:  cmpl   $0x0,0x10(%ebp)
08350627 +0x13:  jle    08350652 <+0x3e>
08350629 +0x15:  cmpl   $0x2,0x10(%ebp)
0835062d +0x19:  jg     08350655 <+0x41>
0835062f +0x1b:  mov    0xc(%ebp),%edx
08350632 +0x1e:  mov    0x10(%ebp),%eax
08350635 +0x21:  lea    -0x1(%eax),%ecx
08350638 +0x24:  mov    0x8(%ebp),%eax
0835063b +0x27:  shl    $0x2,%edx
0835063e +0x2a:  add    %ecx,%edx
08350640 +0x2c:  lea    0x14(%edx),%ecx
08350643 +0x2f:  mov    0x14(%ebp),%edx
08350646 +0x32:  mov    %edx,0xc(%eax,%ecx,4)
0835064a +0x36:  jmp    08350656 <+0x42>
0835064c +0x38:  nop
0835064d +0x39:  jmp    08350656 <+0x42>
0835064f +0x3b:  nop
08350650 +0x3c:  jmp    08350656 <+0x42>
08350652 +0x3e:  nop
08350653 +0x3f:  jmp    08350656 <+0x42>
08350655 +0x41:  nop
08350656 +0x42:  pop    %ebp
08350657 +0x43:  ret
```

## 反编译 C

```c
// CSkill::set_second_growtype_max_level @ 0x8350614

/* CSkill::set_second_growtype_max_level(int, int, int) */

void __thiscall
CSkill::set_second_growtype_max_level(CSkill *this,int param_1,int param_2,int param_3)

{
  if ((((-1 < param_1) && (param_1 < 6)) && (0 < param_2)) && (param_2 < 3)) {
    *(int *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 0xc) = param_3;
  }
  return;
}
```
