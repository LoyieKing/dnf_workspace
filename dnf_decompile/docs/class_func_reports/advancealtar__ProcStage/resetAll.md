# resetAll

`_ZN12advancealtar9ProcStage8resetAllEv`

`advancealtar::ProcStage::resetAll()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812dd9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812dd9a  _ZN12advancealtar9ProcStage8resetAllEv
#           advancealtar::ProcStage::resetAll()
# range [0x0812dd9a, 0x0812dddf]
0812dd9a +0x00:  push   %ebp
0812dd9b +0x01:  mov    %esp,%ebp
0812dd9d +0x03:  sub    $0x18,%esp
0812dda0 +0x06:  mov    0x8(%ebp),%eax
0812dda3 +0x09:  movl   $0x0,0x70(%eax)
0812ddaa +0x10:  mov    0x8(%ebp),%eax
0812ddad +0x13:  movl   $0x0,0x8c(%eax)
0812ddb7 +0x1d:  movl   $0x0,0x4(%esp)
0812ddbf +0x25:  mov    0x8(%ebp),%eax
0812ddc2 +0x28:  mov    %eax,(%esp)
0812ddc5 +0x2b:  call   0812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>  ; advancealtar::ProcStage::reset(advancealtar::StageType::T)
0812ddca +0x30:  movl   $0x1,0x4(%esp)
0812ddd2 +0x38:  mov    0x8(%ebp),%eax
0812ddd5 +0x3b:  mov    %eax,(%esp)
0812ddd8 +0x3e:  call   0812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>  ; advancealtar::ProcStage::reset(advancealtar::StageType::T)
0812dddd +0x43:  leave
0812ddde +0x44:  ret
0812dddf +0x45:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::resetAll @ 0x812dd9a

/* advancealtar::ProcStage::resetAll() */

void __thiscall advancealtar::ProcStage::resetAll(ProcStage *this)

{
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  reset(this,0);
  reset(this,1);
  return;
}
```
