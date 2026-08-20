# get_creature_level_exp

`_ZNK12CDataManager22get_creature_level_expEi`

`CDataManager::get_creature_level_exp(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836053c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836053c  _ZNK12CDataManager22get_creature_level_expEi
#           CDataManager::get_creature_level_exp(int) const
# range [0x0836053c, 0x08360561]
0836053c +0x00:  push   %ebp
0836053d +0x01:  mov    %esp,%ebp
0836053f +0x03:  cmpl   $0x1,0xc(%ebp)
08360543 +0x07:  jle    0836054b <+0xf>
08360545 +0x09:  cmpl   $0x63,0xc(%ebp)
08360549 +0x0d:  jle    08360552 <+0x16>
0836054b +0x0f:  mov    $0x0,%eax
08360550 +0x14:  jmp    0836055f <+0x23>
08360552 +0x16:  mov    0xc(%ebp),%eax
08360555 +0x19:  sub    $0x2,%eax
08360558 +0x1c:  mov    &_ZN14CreatureScript9ExpTable_E(,%eax,4),%eax
0836055f +0x23:  pop    %ebp
08360560 +0x24:  ret
08360561 +0x25:  nop
```

## 反编译 C

```c
// CDataManager::get_creature_level_exp @ 0x836053c

/* CDataManager::get_creature_level_exp(int) const */

undefined4 __thiscall CDataManager::get_creature_level_exp(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 2) || (99 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(CreatureScript::ExpTable_ + (param_1 + -2) * 4);
  }
  return uVar1;
}
```
