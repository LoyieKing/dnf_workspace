# GM_OpenKingHorn

`_ZN21CDailyScheduleManager15GM_OpenKingHornEv`

`CDailyScheduleManager::GM_OpenKingHorn()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126c5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126c5c  _ZN21CDailyScheduleManager15GM_OpenKingHornEv
#           CDailyScheduleManager::GM_OpenKingHorn()
# range [0x08126c5c, 0x08126c89]
08126c5c +0x00:  push   %ebp
08126c5d +0x01:  mov    %esp,%ebp
08126c5f +0x03:  sub    $0x18,%esp
08126c62 +0x06:  mov    0x8(%ebp),%eax
08126c65 +0x09:  add    $0x48,%eax
08126c68 +0x0c:  mov    %eax,0xc(%esp)
08126c6c +0x10:  movl   $0x3,0x8(%esp)
08126c74 +0x18:  movl   $0x1,0x4(%esp)
08126c7c +0x20:  mov    0x8(%ebp),%eax
08126c7f +0x23:  mov    %eax,(%esp)
08126c82 +0x26:  call   08126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)
08126c87 +0x2b:  leave
08126c88 +0x2c:  ret
08126c89 +0x2d:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::GM_OpenKingHorn @ 0x8126c5c

/* CDailyScheduleManager::GM_OpenKingHorn() */

void __thiscall CDailyScheduleManager::GM_OpenKingHorn(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,1,3,this + 0x48);
  return;
}
```
