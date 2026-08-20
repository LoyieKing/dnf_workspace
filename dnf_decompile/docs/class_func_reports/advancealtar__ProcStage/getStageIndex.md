# getStageIndex

`_ZNK12advancealtar9ProcStage13getStageIndexEv`

`advancealtar::ProcStage::getStageIndex() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eb26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eb26  _ZNK12advancealtar9ProcStage13getStageIndexEv
#           advancealtar::ProcStage::getStageIndex() const
# range [0x0812eb26, 0x0812eb4d]
0812eb26 +0x00:  push   %ebp
0812eb27 +0x01:  mov    %esp,%ebp
0812eb29 +0x03:  sub    $0x18,%esp
0812eb2c +0x06:  mov    0x8(%ebp),%eax
0812eb2f +0x09:  mov    0x70(%eax),%eax
0812eb32 +0x0c:  test   %eax,%eax
0812eb34 +0x0e:  jne    0812eb3d <+0x17>
0812eb36 +0x10:  mov    $0x0,%eax
0812eb3b +0x15:  jmp    0812eb4b <+0x25>
0812eb3d +0x17:  mov    0x8(%ebp),%eax
0812eb40 +0x1a:  mov    0x70(%eax),%eax
0812eb43 +0x1d:  mov    %eax,(%esp)
0812eb46 +0x20:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0812eb4b +0x25:  leave
0812eb4c +0x26:  ret
0812eb4d +0x27:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::getStageIndex @ 0x812eb26

/* advancealtar::ProcStage::getStageIndex() const */

undefined4 __thiscall advancealtar::ProcStage::getStageIndex(ProcStage *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CDungeon::get_index(*(CDungeon **)(this + 0x70));
  }
  return uVar1;
}
```
