# ~Arad_StatisticsEventItemList

`_ZN4ARAD28Arad_StatisticsEventItemListD0Ev`

`ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819cd0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819cd0e  _ZN4ARAD28Arad_StatisticsEventItemListD0Ev
#           ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList()
# range [0x0819cd0e, 0x0819cd2b]
0819cd0e +0x00:  push   %ebp
0819cd0f +0x01:  mov    %esp,%ebp
0819cd11 +0x03:  sub    $0x18,%esp
0819cd14 +0x06:  mov    0x8(%ebp),%eax
0819cd17 +0x09:  mov    %eax,(%esp)
0819cd1a +0x0c:  call   0819ccac <_ZN4ARAD28Arad_StatisticsEventItemListD1Ev>  ; ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList()
0819cd1f +0x11:  mov    0x8(%ebp),%eax
0819cd22 +0x14:  mov    %eax,(%esp)
0819cd25 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819cd2a +0x1c:  leave
0819cd2b +0x1d:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList @ 0x819cd0e

/* ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList
          (Arad_StatisticsEventItemList *this)

{
  ~Arad_StatisticsEventItemList(this);
  operator_delete(this);
  return;
}
```
