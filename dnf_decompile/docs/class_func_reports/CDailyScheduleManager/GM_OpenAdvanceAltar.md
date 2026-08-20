# GM_OpenAdvanceAltar

`_ZN21CDailyScheduleManager19GM_OpenAdvanceAltarEv`

`CDailyScheduleManager::GM_OpenAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126d60  _ZN21CDailyScheduleManager19GM_OpenAdvanceAltarEv
#           CDailyScheduleManager::GM_OpenAdvanceAltar()
# range [0x08126d60, 0x08126d8f]
08126d60 +0x00:  push   %ebp
08126d61 +0x01:  mov    %esp,%ebp
08126d63 +0x03:  sub    $0x18,%esp
08126d66 +0x06:  mov    0x8(%ebp),%eax
08126d69 +0x09:  add    $0xb4,%eax
08126d6e +0x0e:  mov    %eax,0xc(%esp)
08126d72 +0x12:  movl   $0x4,0x8(%esp)
08126d7a +0x1a:  movl   $0xa,0x4(%esp)
08126d82 +0x22:  mov    0x8(%ebp),%eax
08126d85 +0x25:  mov    %eax,(%esp)
08126d88 +0x28:  call   08126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)
08126d8d +0x2d:  leave
08126d8e +0x2e:  ret
08126d8f +0x2f:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::GM_OpenAdvanceAltar @ 0x8126d60

/* CDailyScheduleManager::GM_OpenAdvanceAltar() */

void __thiscall CDailyScheduleManager::GM_OpenAdvanceAltar(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,10,4,this + 0xb4);
  return;
}
```
