# compare

`_ZN12StageMapList7compareERKNS_16_StageMapSummaryES2_`

`StageMapList::compare(StageMapList::_StageMapSummary const&, StageMapList::_StageMapSummary const&)`

| 类 | 地址 |
|---|---|
| `StageMapList` | `0x08364848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364848  _ZN12StageMapList7compareERKNS_16_StageMapSummaryES2_
#           StageMapList::compare(StageMapList::_StageMapSummary const&, StageMapList::_StageMapSummary const&)
# range [0x08364848, 0x0836485b]
08364848 +0x00:  push   %ebp
08364849 +0x01:  mov    %esp,%ebp
0836484b +0x03:  mov    0x8(%ebp),%eax
0836484e +0x06:  mov    (%eax),%edx
08364850 +0x08:  mov    0xc(%ebp),%eax
08364853 +0x0b:  mov    (%eax),%eax
08364855 +0x0d:  cmp    %eax,%edx
08364857 +0x0f:  setl   %al
0836485a +0x12:  pop    %ebp
0836485b +0x13:  ret
```

## 反编译 C

```c
// StageMapList::compare @ 0x8364848

/* StageMapList::compare(StageMapList::_StageMapSummary const&, StageMapList::_StageMapSummary
   const&) */

undefined4 StageMapList::compare(_StageMapSummary *param_1,_StageMapSummary *param_2)

{
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_1 < *(int *)param_2);
}
```
