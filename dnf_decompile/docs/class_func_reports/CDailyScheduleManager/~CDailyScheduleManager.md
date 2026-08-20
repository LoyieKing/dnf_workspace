# ~CDailyScheduleManager

`_ZN21CDailyScheduleManagerD1Ev`

`CDailyScheduleManager::~CDailyScheduleManager()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125c24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125c24  _ZN21CDailyScheduleManagerD1Ev
#           CDailyScheduleManager::~CDailyScheduleManager()
# range [0x08125c24, 0x08125c3b]
08125c24 +0x00:  push   %ebp
08125c25 +0x01:  mov    %esp,%ebp
08125c27 +0x03:  sub    $0x18,%esp
08125c2a +0x06:  mov    0x8(%ebp),%eax
08125c2d +0x09:  add    $0xd8,%eax
08125c32 +0x0e:  mov    %eax,(%esp)
08125c35 +0x11:  call   081272a8 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x31>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x31
08125c3a +0x16:  leave
08125c3b +0x17:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::~CDailyScheduleManager @ 0x8125c24

/* CDailyScheduleManager::~CDailyScheduleManager() */

void __thiscall CDailyScheduleManager::~CDailyScheduleManager(CDailyScheduleManager *this)

{
  std::vector<_DailySchedule,std::allocator<_DailySchedule>>::~vector
            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  return;
}
```
