# getStageType

`_ZNK12advancealtar9ProcStage12getStageTypeEv`

`advancealtar::ProcStage::getStageType() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eb04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eb04  _ZNK12advancealtar9ProcStage12getStageTypeEv
#           advancealtar::ProcStage::getStageType() const
# range [0x0812eb04, 0x0812eb25]
0812eb04 +0x00:  push   %ebp
0812eb05 +0x01:  mov    %esp,%ebp
0812eb07 +0x03:  mov    0x8(%ebp),%eax
0812eb0a +0x06:  mov    0x70(%eax),%eax
0812eb0d +0x09:  test   %eax,%eax
0812eb0f +0x0b:  jne    0812eb18 <+0x14>
0812eb11 +0x0d:  mov    $0x0,%eax
0812eb16 +0x12:  jmp    0812eb24 <+0x20>
0812eb18 +0x14:  mov    0x8(%ebp),%eax
0812eb1b +0x17:  mov    0x70(%eax),%eax
0812eb1e +0x1a:  mov    0x804(%eax),%eax
0812eb24 +0x20:  pop    %ebp
0812eb25 +0x21:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::getStageType @ 0x812eb04

/* advancealtar::ProcStage::getStageType() const */

undefined4 __thiscall advancealtar::ProcStage::getStageType(ProcStage *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x70) + 0x804);
  }
  return uVar1;
}
```
