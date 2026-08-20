# getLastInsertDataIndex

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs22getLastInsertDataIndexEv`

`advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d5ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d5ba  _ZN12advancealtar9ProcStage18ProcSummonObjectMs22getLastInsertDataIndexEv
#           advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex()
# range [0x0812d5ba, 0x0812d5cf]
0812d5ba +0x00:  push   %ebp
0812d5bb +0x01:  mov    %esp,%ebp
0812d5bd +0x03:  sub    $0x18,%esp
0812d5c0 +0x06:  mov    0x8(%ebp),%eax
0812d5c3 +0x09:  add    $0x4,%eax
0812d5c6 +0x0c:  mov    %eax,(%esp)
0812d5c9 +0x0f:  call   08135152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd59
0812d5ce +0x14:  leave
0812d5cf +0x15:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex @ 0x812d5ba

/* advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex(ProcSummonObjectMs *this)

{
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::size
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
  return;
}
```
