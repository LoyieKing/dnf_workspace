# CDailyScheduleManager

`_ZN21CDailyScheduleManagerC1Ev`

`CDailyScheduleManager::CDailyScheduleManager()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125c0c  _ZN21CDailyScheduleManagerC1Ev
#           CDailyScheduleManager::CDailyScheduleManager()
# range [0x08125c0c, 0x08125c23]
08125c0c +0x00:  push   %ebp
08125c0d +0x01:  mov    %esp,%ebp
08125c0f +0x03:  sub    $0x18,%esp
08125c12 +0x06:  mov    0x8(%ebp),%eax
08125c15 +0x09:  add    $0xd8,%eax
08125c1a +0x0e:  mov    %eax,(%esp)
08125c1d +0x11:  call   08127294 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x1d>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x1d
08125c22 +0x16:  leave
08125c23 +0x17:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::CDailyScheduleManager @ 0x8125c0c

/* CDailyScheduleManager::CDailyScheduleManager() */

void __thiscall CDailyScheduleManager::CDailyScheduleManager(CDailyScheduleManager *this)

{
  std::vector<_DailySchedule,std::allocator<_DailySchedule>>::vector
            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  return;
}
```
