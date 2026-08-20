# getClearSurvivalRoundNo

`_ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv`

`advancealtar::ProcStage::getClearSurvivalRoundNo() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eb4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eb4e  _ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv
#           advancealtar::ProcStage::getClearSurvivalRoundNo() const
# range [0x0812eb4e, 0x0812eb59]
0812eb4e +0x00:  push   %ebp
0812eb4f +0x01:  mov    %esp,%ebp
0812eb51 +0x03:  mov    0x8(%ebp),%eax
0812eb54 +0x06:  mov    0x7c(%eax),%eax
0812eb57 +0x09:  pop    %ebp
0812eb58 +0x0a:  ret
0812eb59 +0x0b:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::getClearSurvivalRoundNo @ 0x812eb4e

/* advancealtar::ProcStage::getClearSurvivalRoundNo() const */

undefined4 __thiscall advancealtar::ProcStage::getClearSurvivalRoundNo(ProcStage *this)

{
  return *(undefined4 *)(this + 0x7c);
}
```
