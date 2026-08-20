# GM_OpenBossTower

`_ZN21CDailyScheduleManager16GM_OpenBossTowerEv`

`CDailyScheduleManager::GM_OpenBossTower()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126cb8  _ZN21CDailyScheduleManager16GM_OpenBossTowerEv
#           CDailyScheduleManager::GM_OpenBossTower()
# range [0x08126cb8, 0x08126d0b]
08126cb8 +0x00:  push   %ebp
08126cb9 +0x01:  mov    %esp,%ebp
08126cbb +0x03:  sub    $0x18,%esp
08126cbe +0x06:  mov    0x8(%ebp),%eax
08126cc1 +0x09:  add    $0x6c,%eax
08126cc4 +0x0c:  mov    %eax,0xc(%esp)
08126cc8 +0x10:  movl   $0x0,0x8(%esp)
08126cd0 +0x18:  movl   $0xdb1,0x4(%esp)
08126cd8 +0x20:  mov    0x8(%ebp),%eax
08126cdb +0x23:  mov    %eax,(%esp)
08126cde +0x26:  call   08126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)
08126ce3 +0x2b:  mov    0x8(%ebp),%eax
08126ce6 +0x2e:  add    $0x90,%eax
08126ceb +0x33:  mov    %eax,0xc(%esp)
08126cef +0x37:  movl   $0x1,0x8(%esp)
08126cf7 +0x3f:  movl   $0x505a,0x4(%esp)
08126cff +0x47:  mov    0x8(%ebp),%eax
08126d02 +0x4a:  mov    %eax,(%esp)
08126d05 +0x4d:  call   08126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)
08126d0a +0x52:  leave
08126d0b +0x53:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_OpenBossTower @ 0x8126cb8

/* CDailyScheduleManager::GM_OpenBossTower() */

void __thiscall CDailyScheduleManager::GM_OpenBossTower(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,0xdb1,0,this + 0x6c);
  GM_OpenSchedule(this,0x505a,1,this + 0x90);
  return;
}
```
