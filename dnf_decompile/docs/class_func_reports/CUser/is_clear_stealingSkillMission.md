# is_clear_stealingSkillMission

`_ZNK5CUser29is_clear_stealingSkillMissionEv`

`CUser::is_clear_stealingSkillMission() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086627e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086627e0  _ZNK5CUser29is_clear_stealingSkillMissionEv
#           CUser::is_clear_stealingSkillMission() const
# range [0x086627e0, 0x08662809]
086627e0 +0x00:  push   %ebp
086627e1 +0x01:  mov    %esp,%ebp
086627e3 +0x03:  sub    $0x28,%esp
086627e6 +0x06:  movl   $0x8,0x4(%esp)
086627ee +0x0e:  mov    0x8(%ebp),%eax
086627f1 +0x11:  mov    %eax,(%esp)
086627f4 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086627f9 +0x19:  mov    %eax,-0xc(%ebp)
086627fc +0x1c:  mov    -0xc(%ebp),%eax
086627ff +0x1f:  mov    %eax,(%esp)
08662802 +0x22:  call   086978aa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x40ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x40ff
08662807 +0x27:  leave
08662808 +0x28:  ret
08662809 +0x29:  nop
```

## 反编译 C

```c
// CUser::is_clear_stealingSkillMission @ 0x86627e0

/* CUser::is_clear_stealingSkillMission() const */

void __thiscall CUser::is_clear_stealingSkillMission(CUser *this)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::isClearStealingSkillMission(this_00);
  return;
}
```
