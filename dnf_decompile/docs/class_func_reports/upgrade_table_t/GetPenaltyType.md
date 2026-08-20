# GetPenaltyType

`_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t`

`upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const`

| 类 | 地址 |
|---|---|
| `upgrade_table_t` | `0x089003ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089003ee  _ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t
#           upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const
# range [0x089003ee, 0x08900435]
089003ee +0x00:  push   %ebp
089003ef +0x01:  mov    %esp,%ebp
089003f1 +0x03:  sub    $0x4,%esp
089003f4 +0x06:  mov    0xc(%ebp),%eax
089003f7 +0x09:  mov    %al,-0x4(%ebp)
089003fa +0x0c:  mov    0x10(%ebp),%edx
089003fd +0x0f:  mov    0x8(%ebp),%eax
08900400 +0x12:  add    $0x100,%edx
08900406 +0x18:  mov    0x4(%eax,%edx,4),%eax
0890040a +0x1c:  cmp    $0xffffffff,%eax
0890040d +0x1f:  je     0890042e <+0x40>
0890040f +0x21:  movzbl -0x4(%ebp),%edx
08900413 +0x25:  mov    0x10(%ebp),%ecx
08900416 +0x28:  mov    0x8(%ebp),%eax
08900419 +0x2b:  add    $0x100,%ecx
0890041f +0x31:  mov    0x4(%eax,%ecx,4),%eax
08900423 +0x35:  cmp    %eax,%edx
08900425 +0x37:  jl     0890042e <+0x40>
08900427 +0x39:  mov    $0x3,%eax
0890042c +0x3e:  jmp    08900434 <+0x46>
0890042e +0x40:  mov    0x14(%ebp),%eax
08900431 +0x43:  mov    0x24(%eax),%eax
08900434 +0x46:  leave
08900435 +0x47:  ret
```

## 反编译 C

```c
// upgrade_table_t::GetPenaltyType @ 0x89003ee

/* upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const */

undefined4 __thiscall
upgrade_table_t::GetPenaltyType(upgrade_table_t *this,byte param_1,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + (param_3 + 0x100) * 4 + 4) == -1) ||
     ((int)(uint)param_1 < *(int *)(this + (param_3 + 0x100) * 4 + 4))) {
    uVar1 = *(undefined4 *)(param_4 + 0x24);
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}
```
