# incCurrentMs

`_ZN12advancealtar9ProcStage12incCurrentMsEv`

`advancealtar::ProcStage::incCurrentMs()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e146` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e146  _ZN12advancealtar9ProcStage12incCurrentMsEv
#           advancealtar::ProcStage::incCurrentMs()
# range [0x0812e146, 0x0812e16d]
0812e146 +0x00:  push   %ebp
0812e147 +0x01:  mov    %esp,%ebp
0812e149 +0x03:  sub    $0x10,%esp
0812e14c +0x06:  mov    &_ZN12advancealtar7Manager12gmTimeSpeed_E,%eax
0812e151 +0x0b:  imul   $0x3e8,%eax,%eax
0812e157 +0x11:  mov    %eax,-0x4(%ebp)
0812e15a +0x14:  mov    0x8(%ebp),%eax
0812e15d +0x17:  mov    0x8(%eax),%eax
0812e160 +0x1a:  mov    %eax,%edx
0812e162 +0x1c:  add    -0x4(%ebp),%edx
0812e165 +0x1f:  mov    0x8(%ebp),%eax
0812e168 +0x22:  mov    %edx,0x8(%eax)
0812e16b +0x25:  leave
0812e16c +0x26:  ret
0812e16d +0x27:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::incCurrentMs @ 0x812e146

/* advancealtar::ProcStage::incCurrentMs() */

void __thiscall advancealtar::ProcStage::incCurrentMs(ProcStage *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + Manager::gmTimeSpeed_ * 1000;
  return;
}
```
