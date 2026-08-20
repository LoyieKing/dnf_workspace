# GM_CloseKingHorn

`_ZN21CDailyScheduleManager16GM_CloseKingHornEv`

`CDailyScheduleManager::GM_CloseKingHorn()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126c8a  _ZN21CDailyScheduleManager16GM_CloseKingHornEv
#           CDailyScheduleManager::GM_CloseKingHorn()
# range [0x08126c8a, 0x08126cb7]
08126c8a +0x00:  push   %ebp
08126c8b +0x01:  mov    %esp,%ebp
08126c8d +0x03:  sub    $0x18,%esp
08126c90 +0x06:  mov    0x8(%ebp),%eax
08126c93 +0x09:  add    $0x48,%eax
08126c96 +0x0c:  mov    %eax,0xc(%esp)
08126c9a +0x10:  movl   $0x3,0x8(%esp)
08126ca2 +0x18:  movl   $0x1,0x4(%esp)
08126caa +0x20:  mov    0x8(%ebp),%eax
08126cad +0x23:  mov    %eax,(%esp)
08126cb0 +0x26:  call   0812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)
08126cb5 +0x2b:  leave
08126cb6 +0x2c:  ret
08126cb7 +0x2d:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::GM_CloseKingHorn @ 0x8126c8a

/* CDailyScheduleManager::GM_CloseKingHorn() */

void __thiscall CDailyScheduleManager::GM_CloseKingHorn(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,1,3,this + 0x48);
  return;
}
```
