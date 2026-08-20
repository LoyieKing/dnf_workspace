# get_skillslot_group

`_ZNK9SkillSlot19get_skillslot_groupEi`

`SkillSlot::get_skillslot_group(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086049fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086049fc  _ZNK9SkillSlot19get_skillslot_groupEi
#           SkillSlot::get_skillslot_group(int) const
# range [0x086049fc, 0x08604a85]
086049fc +0x00:  push   %ebp
086049fd +0x01:  mov    %esp,%ebp
086049ff +0x03:  sub    $0x10,%esp
08604a02 +0x06:  movl   $0x6,-0x4(%ebp)
08604a09 +0x0d:  cmpl   $0x5,0xc(%ebp)
08604a0d +0x11:  jg     08604a18 <+0x1c>
08604a0f +0x13:  movl   $0xffffffff,-0x4(%ebp)
08604a16 +0x1a:  jmp    08604a6a <+0x6e>
08604a18 +0x1c:  cmpl   $0x35,0xc(%ebp)
08604a1c +0x20:  jg     08604a27 <+0x2b>
08604a1e +0x22:  movl   $0x0,-0x4(%ebp)
08604a25 +0x29:  jmp    08604a6a <+0x6e>
08604a27 +0x2b:  cmpl   $0x65,0xc(%ebp)
08604a2b +0x2f:  jg     08604a36 <+0x3a>
08604a2d +0x31:  movl   $0x1,-0x4(%ebp)
08604a34 +0x38:  jmp    08604a6a <+0x6e>
08604a36 +0x3a:  cmpl   $0x95,0xc(%ebp)
08604a3d +0x41:  jg     08604a48 <+0x4c>
08604a3f +0x43:  movl   $0x2,-0x4(%ebp)
08604a46 +0x4a:  jmp    08604a6a <+0x6e>
08604a48 +0x4c:  cmpl   $0xc5,0xc(%ebp)
08604a4f +0x53:  jg     08604a5a <+0x5e>
08604a51 +0x55:  movl   $0x3,-0x4(%ebp)
08604a58 +0x5c:  jmp    08604a6a <+0x6e>
08604a5a +0x5e:  cmpl   $0xcb,0xc(%ebp)
08604a61 +0x65:  jg     08604a6a <+0x6e>
08604a63 +0x67:  movl   $0xffffffff,-0x4(%ebp)
08604a6a +0x6e:  cmpl   $0x2,-0x4(%ebp)
08604a6e +0x72:  jne    08604a80 <+0x84>
08604a70 +0x74:  cmpl   $0x89,0xc(%ebp)
08604a77 +0x7b:  jle    08604a80 <+0x84>
08604a79 +0x7d:  movl   $0x4,-0x4(%ebp)
08604a80 +0x84:  mov    -0x4(%ebp),%eax
08604a83 +0x87:  leave
08604a84 +0x88:  ret
08604a85 +0x89:  nop
```

## 反编译 C

```c
// SkillSlot::get_skillslot_group @ 0x86049fc

/* SkillSlot::get_skillslot_group(int) const */

int __thiscall SkillSlot::get_skillslot_group(SkillSlot *this,int param_1)

{
  undefined4 local_8;
  
  local_8 = 6;
  if (param_1 < 6) {
    local_8 = -1;
  }
  else if (param_1 < 0x36) {
    local_8 = 0;
  }
  else if (param_1 < 0x66) {
    local_8 = 1;
  }
  else if (param_1 < 0x96) {
    local_8 = 2;
  }
  else if (param_1 < 0xc6) {
    local_8 = 3;
  }
  else if (param_1 < 0xcc) {
    local_8 = -1;
  }
  if ((local_8 == 2) && (0x89 < param_1)) {
    local_8 = 4;
  }
  return local_8;
}
```
