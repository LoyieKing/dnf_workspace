# MissionClearCondition_Parameter

`_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE`

`MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)`

| 类 | 地址 |
|---|---|
| `MissionClearCondition_Parameter` | `0x085e1a44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1a44  _ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE
#           MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
# range [0x085e1a44, 0x085e1a69]
085e1a44 +0x00:  push   %ebp
085e1a45 +0x01:  mov    %esp,%ebp
085e1a47 +0x03:  mov    0x8(%ebp),%eax
085e1a4a +0x06:  movb   $0xa,(%eax)
085e1a4d +0x09:  cmpl   $0x2,0xc(%ebp)
085e1a51 +0x0d:  jne    085e1a5b <+0x17>
085e1a53 +0x0f:  mov    0x8(%ebp),%eax
085e1a56 +0x12:  movb   $0x1,(%eax)
085e1a59 +0x15:  jmp    085e1a67 <+0x23>
085e1a5b +0x17:  cmpl   $0x3,0xc(%ebp)
085e1a5f +0x1b:  jne    085e1a67 <+0x23>
085e1a61 +0x1d:  mov    0x8(%ebp),%eax
085e1a64 +0x20:  movb   $0x2,(%eax)
085e1a67 +0x23:  pop    %ebp
085e1a68 +0x24:  ret
085e1a69 +0x25:  nop
```

## 反编译 C

```c
// MissionClearCondition_Parameter::MissionClearCondition_Parameter @ 0x85e1a44

/* MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE) */

void __thiscall
MissionClearCondition_Parameter::MissionClearCondition_Parameter
          (MissionClearCondition_Parameter *this,int param_2)

{
  *this = (MissionClearCondition_Parameter)0xa;
  if (param_2 == 2) {
    *this = (MissionClearCondition_Parameter)0x1;
  }
  else if (param_2 == 3) {
    *this = (MissionClearCondition_Parameter)0x2;
  }
  return;
}
```
