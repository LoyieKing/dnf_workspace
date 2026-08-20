# IsArtifactEquipSlot

`_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi`

`user_creature::CCreatureMgr::IsArtifactEquipSlot(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x083393fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083393fc  _ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi
#           user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
# range [0x083393fc, 0x0833941f]
083393fc +0x00:  push   %ebp
083393fd +0x01:  mov    %esp,%ebp
083393ff +0x03:  cmpl   $0x17,0xc(%ebp)
08339403 +0x07:  je     08339411 <+0x15>
08339405 +0x09:  cmpl   $0x18,0xc(%ebp)
08339409 +0x0d:  je     08339411 <+0x15>
0833940b +0x0f:  cmpl   $0x19,0xc(%ebp)
0833940f +0x13:  jne    08339418 <+0x1c>
08339411 +0x15:  mov    $0x1,%eax
08339416 +0x1a:  jmp    0833941d <+0x21>
08339418 +0x1c:  mov    $0x0,%eax
0833941d +0x21:  pop    %ebp
0833941e +0x22:  ret
0833941f +0x23:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsArtifactEquipSlot @ 0x83393fc

/* user_creature::CCreatureMgr::IsArtifactEquipSlot(int) */

undefined4 __thiscall
user_creature::CCreatureMgr::IsArtifactEquipSlot(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x17) || (param_1 == 0x18)) || (param_1 == 0x19)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
