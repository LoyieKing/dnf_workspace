# get_creature_exp_level

`_ZNK12CDataManager22get_creature_exp_levelEi`

`CDataManager::get_creature_exp_level(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360562` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360562  _ZNK12CDataManager22get_creature_exp_levelEi
#           CDataManager::get_creature_exp_level(int) const
# range [0x08360562, 0x083605a7]
08360562 +0x00:  push   %ebp
08360563 +0x01:  mov    %esp,%ebp
08360565 +0x03:  sub    $0x18,%esp
08360568 +0x06:  movl   $0x1,-0x4(%ebp)
0836056f +0x0d:  jmp    08360591 <+0x2f>
08360571 +0x0f:  mov    -0x4(%ebp),%eax
08360574 +0x12:  mov    %eax,0x4(%esp)
08360578 +0x16:  mov    0x8(%ebp),%eax
0836057b +0x19:  mov    %eax,(%esp)
0836057e +0x1c:  call   0836053c <_ZNK12CDataManager22get_creature_level_expEi>  ; CDataManager::get_creature_level_exp(int) const
08360583 +0x21:  cmp    0xc(%ebp),%eax
08360586 +0x24:  setg   %al
08360589 +0x27:  test   %al,%al
0836058b +0x29:  jne    0836059e <+0x3c>
0836058d +0x2b:  addl   $0x1,-0x4(%ebp)
08360591 +0x2f:  cmpl   $0x62,-0x4(%ebp)
08360595 +0x33:  setle  %al
08360598 +0x36:  test   %al,%al
0836059a +0x38:  jne    08360571 <+0xf>
0836059c +0x3a:  jmp    0836059f <+0x3d>
0836059e +0x3c:  nop
0836059f +0x3d:  mov    -0x4(%ebp),%eax
083605a2 +0x40:  sub    $0x1,%eax
083605a5 +0x43:  leave
083605a6 +0x44:  ret
083605a7 +0x45:  nop
```

## 反编译 C

```c
// CDataManager::get_creature_exp_level @ 0x8360562

/* CDataManager::get_creature_exp_level(int) const */

int __thiscall CDataManager::get_creature_exp_level(CDataManager *this,int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  while ((local_8 < 99 && (iVar1 = get_creature_level_exp(this,local_8), iVar1 <= param_1))) {
    local_8 = local_8 + 1;
  }
  return local_8 + -1;
}
```
