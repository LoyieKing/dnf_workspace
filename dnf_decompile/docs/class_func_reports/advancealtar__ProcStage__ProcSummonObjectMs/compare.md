# compare

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs7compareEPKNS_15_SummonObjectMsES4_`

`advancealtar::ProcStage::ProcSummonObjectMs::compare(advancealtar::_SummonObjectMs const*, advancealtar::_SummonObjectMs const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812daec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812daec  _ZN12advancealtar9ProcStage18ProcSummonObjectMs7compareEPKNS_15_SummonObjectMsES4_
#           advancealtar::ProcStage::ProcSummonObjectMs::compare(advancealtar::_SummonObjectMs const*, advancealtar::_SummonObjectMs const*)
# range [0x0812daec, 0x0812daff]
0812daec +0x00:  push   %ebp
0812daed +0x01:  mov    %esp,%ebp
0812daef +0x03:  mov    0x8(%ebp),%eax
0812daf2 +0x06:  mov    (%eax),%edx
0812daf4 +0x08:  mov    0xc(%ebp),%eax
0812daf7 +0x0b:  mov    (%eax),%eax
0812daf9 +0x0d:  cmp    %eax,%edx
0812dafb +0x0f:  setl   %al
0812dafe +0x12:  pop    %ebp
0812daff +0x13:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::compare @ 0x812daec

/* advancealtar::ProcStage::ProcSummonObjectMs::compare(advancealtar::_SummonObjectMs const*,
   advancealtar::_SummonObjectMs const*) */

undefined4
advancealtar::ProcStage::ProcSummonObjectMs::compare
          (_SummonObjectMs *param_1,_SummonObjectMs *param_2)

{
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_1 < *(int *)param_2);
}
```
