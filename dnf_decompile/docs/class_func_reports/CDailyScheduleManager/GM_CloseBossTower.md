# GM_CloseBossTower

`_ZN21CDailyScheduleManager17GM_CloseBossTowerEv`

`CDailyScheduleManager::GM_CloseBossTower()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126d0c  _ZN21CDailyScheduleManager17GM_CloseBossTowerEv
#           CDailyScheduleManager::GM_CloseBossTower()
# range [0x08126d0c, 0x08126d5f]
08126d0c +0x00:  push   %ebp
08126d0d +0x01:  mov    %esp,%ebp
08126d0f +0x03:  sub    $0x18,%esp
08126d12 +0x06:  mov    0x8(%ebp),%eax
08126d15 +0x09:  add    $0x6c,%eax
08126d18 +0x0c:  mov    %eax,0xc(%esp)
08126d1c +0x10:  movl   $0x0,0x8(%esp)
08126d24 +0x18:  movl   $0xdb1,0x4(%esp)
08126d2c +0x20:  mov    0x8(%ebp),%eax
08126d2f +0x23:  mov    %eax,(%esp)
08126d32 +0x26:  call   0812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)
08126d37 +0x2b:  mov    0x8(%ebp),%eax
08126d3a +0x2e:  add    $0x90,%eax
08126d3f +0x33:  mov    %eax,0xc(%esp)
08126d43 +0x37:  movl   $0x1,0x8(%esp)
08126d4b +0x3f:  movl   $0x505a,0x4(%esp)
08126d53 +0x47:  mov    0x8(%ebp),%eax
08126d56 +0x4a:  mov    %eax,(%esp)
08126d59 +0x4d:  call   0812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)
08126d5e +0x52:  leave
08126d5f +0x53:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_CloseBossTower @ 0x8126d0c

/* CDailyScheduleManager::GM_CloseBossTower() */

void __thiscall CDailyScheduleManager::GM_CloseBossTower(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,0xdb1,0,this + 0x6c);
  GM_CloseSchedule(this,0x505a,1,this + 0x90);
  return;
}
```
