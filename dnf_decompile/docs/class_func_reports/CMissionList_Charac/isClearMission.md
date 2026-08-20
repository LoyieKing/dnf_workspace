# isClearMission

`_ZNK19CMissionList_Charac14isClearMissionEi`

`CMissionList_Charac::isClearMission(int) const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e50fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e50fa  _ZNK19CMissionList_Charac14isClearMissionEi
#           CMissionList_Charac::isClearMission(int) const
# range [0x085e50fa, 0x085e5139]
085e50fa +0x00:  push   %ebp
085e50fb +0x01:  mov    %esp,%ebp
085e50fd +0x03:  sub    $0x18,%esp
085e5100 +0x06:  cmpl   $0x0,0xc(%ebp)
085e5104 +0x0a:  js     085e5132 <+0x38>
085e5106 +0x0c:  cmpl   $0xff,0xc(%ebp)
085e510d +0x13:  jg     085e5132 <+0x38>
085e510f +0x15:  mov    0xc(%ebp),%eax
085e5112 +0x18:  mov    0x8(%ebp),%edx
085e5115 +0x1b:  add    $0x128,%edx
085e511b +0x21:  mov    %eax,0x4(%esp)
085e511f +0x25:  mov    %edx,(%esp)
085e5122 +0x28:  call   085e80d4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x185c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x185c
085e5127 +0x2d:  test   %al,%al
085e5129 +0x2f:  je     085e5132 <+0x38>
085e512b +0x31:  mov    $0x1,%eax
085e5130 +0x36:  jmp    085e5137 <+0x3d>
085e5132 +0x38:  mov    $0x0,%eax
085e5137 +0x3d:  leave
085e5138 +0x3e:  ret
085e5139 +0x3f:  nop
```

## 反编译 C

```c
// CMissionList_Charac::isClearMission @ 0x85e50fa

/* CMissionList_Charac::isClearMission(int) const */

undefined4 __thiscall CMissionList_Charac::isClearMission(CMissionList_Charac *this,int param_1)

{
  char cVar1;
  
  if (((-1 < param_1) && (param_1 < 0x100)) &&
     (cVar1 = std::bitset<256u>::operator[]((bitset<256u> *)(this + 0x128),param_1), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}
```
