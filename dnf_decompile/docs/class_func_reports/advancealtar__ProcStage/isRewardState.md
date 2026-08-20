# isRewardState

`_ZNK12advancealtar9ProcStage13isRewardStateEv`

`advancealtar::ProcStage::isRewardState() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f770  _ZNK12advancealtar9ProcStage13isRewardStateEv
#           advancealtar::ProcStage::isRewardState() const
# range [0x0812f770, 0x0812f797]
0812f770 +0x00:  push   %ebp
0812f771 +0x01:  mov    %esp,%ebp
0812f773 +0x03:  mov    0x8(%ebp),%eax
0812f776 +0x06:  mov    0x4(%eax),%eax
0812f779 +0x09:  cmp    $0x3,%eax
0812f77c +0x0c:  je     0812f789 <+0x19>
0812f77e +0x0e:  mov    0x8(%ebp),%eax
0812f781 +0x11:  mov    0x4(%eax),%eax
0812f784 +0x14:  cmp    $0x4,%eax
0812f787 +0x17:  jne    0812f790 <+0x20>
0812f789 +0x19:  mov    $0x1,%eax
0812f78e +0x1e:  jmp    0812f795 <+0x25>
0812f790 +0x20:  mov    $0x0,%eax
0812f795 +0x25:  pop    %ebp
0812f796 +0x26:  ret
0812f797 +0x27:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::isRewardState @ 0x812f770

/* advancealtar::ProcStage::isRewardState() const */

undefined4 __thiscall advancealtar::ProcStage::isRewardState(ProcStage *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 4) == 3) || (*(int *)(this + 4) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
