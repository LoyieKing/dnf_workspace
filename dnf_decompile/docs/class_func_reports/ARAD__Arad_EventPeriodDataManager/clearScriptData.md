# clearScriptData

`_ZN4ARAD27Arad_EventPeriodDataManager15clearScriptDataEv`

`ARAD::Arad_EventPeriodDataManager::clearScriptData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195670  _ZN4ARAD27Arad_EventPeriodDataManager15clearScriptDataEv
#           ARAD::Arad_EventPeriodDataManager::clearScriptData()
# range [0x08195670, 0x08195685]
08195670 +0x00:  push   %ebp
08195671 +0x01:  mov    %esp,%ebp
08195673 +0x03:  sub    $0x18,%esp
08195676 +0x06:  mov    0x8(%ebp),%eax
08195679 +0x09:  add    $0xc,%eax
0819567c +0x0c:  mov    %eax,(%esp)
0819567f +0x0f:  call   08195f56 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x316>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x316
08195684 +0x14:  leave
08195685 +0x15:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::clearScriptData @ 0x8195670

/* ARAD::Arad_EventPeriodDataManager::clearScriptData() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::clearScriptData(Arad_EventPeriodDataManager *this)

{
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::clear
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)(this + 0xc));
  return;
}
```
