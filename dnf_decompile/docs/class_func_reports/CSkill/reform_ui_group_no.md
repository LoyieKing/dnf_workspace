# reform_ui_group_no

`_ZN6CSkill18reform_ui_group_noERibi`

`CSkill::reform_ui_group_no(int&, bool, int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083507e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083507e8  _ZN6CSkill18reform_ui_group_noERibi
#           CSkill::reform_ui_group_no(int&, bool, int)
# range [0x083507e8, 0x08350841]
083507e8 +0x00:  push   %ebp
083507e9 +0x01:  mov    %esp,%ebp
083507eb +0x03:  sub    $0x4,%esp
083507ee +0x06:  mov    0x10(%ebp),%eax
083507f1 +0x09:  mov    %al,-0x4(%ebp)
083507f4 +0x0c:  cmpb   $0x0,-0x4(%ebp)
083507f8 +0x10:  je     08350805 <+0x1d>
083507fa +0x12:  mov    0xc(%ebp),%eax
083507fd +0x15:  movl   $0x3,(%eax)
08350803 +0x1b:  jmp    0835083f <+0x57>
08350805 +0x1d:  mov    0xc(%ebp),%eax
08350808 +0x20:  mov    (%eax),%eax
0835080a +0x22:  test   %eax,%eax
0835080c +0x24:  js     0835083f <+0x57>
0835080e +0x26:  cmp    $0x3,%eax
08350811 +0x29:  jle    0835081a <+0x32>
08350813 +0x2b:  cmp    $0x4,%eax
08350816 +0x2e:  je     08350836 <+0x4e>
08350818 +0x30:  jmp    0835083f <+0x57>
0835081a +0x32:  cmpl   $0x2,0x14(%ebp)
0835081e +0x36:  jle    0835082b <+0x43>
08350820 +0x38:  mov    0xc(%ebp),%eax
08350823 +0x3b:  movl   $0x0,(%eax)
08350829 +0x41:  jmp    0835083f <+0x57>
0835082b +0x43:  mov    0xc(%ebp),%eax
0835082e +0x46:  movl   $0x1,(%eax)
08350834 +0x4c:  jmp    0835083f <+0x57>
08350836 +0x4e:  mov    0xc(%ebp),%eax
08350839 +0x51:  movl   $0x2,(%eax)
0835083f +0x57:  leave
08350840 +0x58:  ret
08350841 +0x59:  nop
```

## 反编译 C

```c
// CSkill::reform_ui_group_no @ 0x83507e8

/* CSkill::reform_ui_group_no(int&, bool, int) */

void __thiscall CSkill::reform_ui_group_no(CSkill *this,int *param_1,bool param_2,int param_3)

{
  int iVar1;
  
  if (param_2) {
    *param_1 = 3;
  }
  else {
    iVar1 = *param_1;
    if (-1 < iVar1) {
      if (iVar1 < 4) {
        if (param_3 < 3) {
          *param_1 = 1;
        }
        else {
          *param_1 = 0;
        }
      }
      else if (iVar1 == 4) {
        *param_1 = 2;
      }
    }
  }
  return;
}
```
