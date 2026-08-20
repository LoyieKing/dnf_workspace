# loadScriptData

`_ZN4ARAD27Arad_EventPeriodDataManager14loadScriptDataEv`

`ARAD::Arad_EventPeriodDataManager::loadScriptData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195650  _ZN4ARAD27Arad_EventPeriodDataManager14loadScriptDataEv
#           ARAD::Arad_EventPeriodDataManager::loadScriptData()
# range [0x08195650, 0x0819566f]
08195650 +0x00:  push   %ebp
08195651 +0x01:  mov    %esp,%ebp
08195653 +0x03:  sub    $0x18,%esp
08195656 +0x06:  mov    0x8(%ebp),%eax
08195659 +0x09:  lea    0x18(%eax),%edx
0819565c +0x0c:  mov    0x8(%ebp),%eax
0819565f +0x0f:  add    $0xc,%eax
08195662 +0x12:  mov    %edx,0x4(%esp)
08195666 +0x16:  mov    %eax,(%esp)
08195669 +0x19:  call   088b3bd8 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE>  ; ARAD::SCRIPT::importAradEventScript(std::vector<ARAD::SCRIPT::SEventPeriodData, std::allocator<ARAD::SCRIPT::SEventPeriodData> >&, std::vector<ARAD::SCRIPT::SRewardPeriodData, std::allocator<ARAD::SCRIPT::SRewardPeriodData> >&)
0819566e +0x1e:  leave
0819566f +0x1f:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::loadScriptData @ 0x8195650

/* ARAD::Arad_EventPeriodDataManager::loadScriptData() */

void __thiscall ARAD::Arad_EventPeriodDataManager::loadScriptData(Arad_EventPeriodDataManager *this)

{
  SCRIPT::importAradEventScript((vector *)(this + 0xc),(vector *)(this + 0x18));
  return;
}
```
