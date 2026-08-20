# GetDungeonLimitDamageAndHackType

`_GLOBAL__I__ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE`

`global constructors keyed to CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&, WongWork::ENUM_HACKTYPE&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHackLog_OverDamage` | `0x08286a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286a00  _GLOBAL__I__ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE
#           global constructors keyed to CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&, WongWork::ENUM_HACKTYPE&)
# range [0x08286a00, 0x08286a1b]
08286a00 +0x00:  push   %ebp
08286a01 +0x01:  mov    %esp,%ebp
08286a03 +0x03:  sub    $0x18,%esp
08286a06 +0x06:  movl   $0xffff,0x4(%esp)
08286a0e +0x0e:  movl   $0x1,(%esp)
08286a15 +0x15:  call   082869c0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08286a1a +0x1a:  leave
08286a1b +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8286a00

/* CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&,
   WongWork::ENUM_HACKTYPE&) */

void CHackLog_OverDamage::_GLOBAL__I_GetDungeonLimitDamageAndHackType(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
