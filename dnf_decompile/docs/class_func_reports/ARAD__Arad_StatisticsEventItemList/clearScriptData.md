# clearScriptData

`_ZN4ARAD28Arad_StatisticsEventItemList15clearScriptDataEv`

`ARAD::Arad_StatisticsEventItemList::clearScriptData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819d084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819d084  _ZN4ARAD28Arad_StatisticsEventItemList15clearScriptDataEv
#           ARAD::Arad_StatisticsEventItemList::clearScriptData()
# range [0x0819d084, 0x0819d099]
0819d084 +0x00:  push   %ebp
0819d085 +0x01:  mov    %esp,%ebp
0819d087 +0x03:  sub    $0x18,%esp
0819d08a +0x06:  mov    0x8(%ebp),%eax
0819d08d +0x09:  add    $0x8,%eax
0819d090 +0x0c:  mov    %eax,(%esp)
0819d093 +0x0f:  call   08152a96 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23cb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23cb
0819d098 +0x14:  leave
0819d099 +0x15:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::clearScriptData @ 0x819d084

/* ARAD::Arad_StatisticsEventItemList::clearScriptData() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::clearScriptData(Arad_StatisticsEventItemList *this)

{
  std::vector<unsigned_long,std::allocator<unsigned_long>>::clear
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  return;
}
```
