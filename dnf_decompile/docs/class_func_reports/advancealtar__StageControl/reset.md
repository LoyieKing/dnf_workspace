# reset

`_ZN12advancealtar12StageControl5resetEv`

`advancealtar::StageControl::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fa54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fa54  _ZN12advancealtar12StageControl5resetEv
#           advancealtar::StageControl::reset()
# range [0x0812fa54, 0x0812fa79]
0812fa54 +0x00:  push   %ebp
0812fa55 +0x01:  mov    %esp,%ebp
0812fa57 +0x03:  sub    $0x18,%esp
0812fa5a +0x06:  mov    0x8(%ebp),%eax
0812fa5d +0x09:  add    $0x4,%eax
0812fa60 +0x0c:  mov    %eax,(%esp)
0812fa63 +0x0f:  call   0812dd9a <_ZN12advancealtar9ProcStage8resetAllEv>  ; advancealtar::ProcStage::resetAll()
0812fa68 +0x14:  mov    0x8(%ebp),%eax
0812fa6b +0x17:  add    $0x98,%eax
0812fa70 +0x1c:  mov    %eax,(%esp)
0812fa73 +0x1f:  call   0812d078 <_ZN12advancealtar10CharacData5resetEv>  ; advancealtar::CharacData::reset()
0812fa78 +0x24:  leave
0812fa79 +0x25:  ret
```

## 反编译 C

```c
// advancealtar::StageControl::reset @ 0x812fa54

/* advancealtar::StageControl::reset() */

void __thiscall advancealtar::StageControl::reset(StageControl *this)

{
  ProcStage::resetAll((ProcStage *)(this + 4));
  CharacData::reset((CharacData *)(this + 0x98));
  return;
}
```
