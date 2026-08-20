# ~Arad_EventPeriodDataManager

`_ZN4ARAD27Arad_EventPeriodDataManagerD0Ev`

`ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195632` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195632  _ZN4ARAD27Arad_EventPeriodDataManagerD0Ev
#           ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager()
# range [0x08195632, 0x0819564f]
08195632 +0x00:  push   %ebp
08195633 +0x01:  mov    %esp,%ebp
08195635 +0x03:  sub    $0x18,%esp
08195638 +0x06:  mov    0x8(%ebp),%eax
0819563b +0x09:  mov    %eax,(%esp)
0819563e +0x0c:  call   08195536 <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev>  ; ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager()
08195643 +0x11:  mov    0x8(%ebp),%eax
08195646 +0x14:  mov    %eax,(%esp)
08195649 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819564e +0x1c:  leave
0819564f +0x1d:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager @ 0x8195632

/* ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  ~Arad_EventPeriodDataManager(this);
  operator_delete(this);
  return;
}
```
