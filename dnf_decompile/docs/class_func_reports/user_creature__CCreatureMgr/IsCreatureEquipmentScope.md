# IsCreatureEquipmentScope

`_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi`

`user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833926c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833926c  _ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi
#           user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
# range [0x0833926c, 0x08339291]
0833926c +0x00:  push   %ebp
0833926d +0x01:  mov    %esp,%ebp
0833926f +0x03:  cmpl   $0x0,0xc(%ebp)
08339273 +0x07:  js     0833927e <+0x12>
08339275 +0x09:  cmpl   $0x8b,0xc(%ebp)
0833927c +0x10:  jle    08339284 <+0x18>
0833927e +0x12:  cmpl   $0x16,0xc(%ebp)
08339282 +0x16:  jne    0833928b <+0x1f>
08339284 +0x18:  mov    $0x1,%eax
08339289 +0x1d:  jmp    08339290 <+0x24>
0833928b +0x1f:  mov    $0x0,%eax
08339290 +0x24:  pop    %ebp
08339291 +0x25:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsCreatureEquipmentScope @ 0x833926c

/* user_creature::CCreatureMgr::IsCreatureEquipmentScope(int) */

undefined4 __thiscall
user_creature::CCreatureMgr::IsCreatureEquipmentScope(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 0) || (0x8b < param_1)) && (param_1 != 0x16)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
