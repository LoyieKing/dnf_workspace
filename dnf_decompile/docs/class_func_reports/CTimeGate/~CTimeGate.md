# ~CTimeGate

`_ZN9CTimeGateD1Ev`

`CTimeGate::~CTimeGate()`

| 类 | 地址 |
|---|---|
| `CTimeGate` | `0x08284536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284536  _ZN9CTimeGateD1Ev
#           CTimeGate::~CTimeGate()
# range [0x08284536, 0x08284543]
08284536 +0x00:  push   %ebp
08284537 +0x01:  mov    %esp,%ebp
08284539 +0x03:  mov    0x8(%ebp),%eax
0828453c +0x06:  movl   $&_ZTV9CTimeGate+0x8,(%eax)
08284542 +0x0c:  pop    %ebp
08284543 +0x0d:  ret
```

## 反编译 C

```c
// CTimeGate::~CTimeGate @ 0x8284536

/* CTimeGate::~CTimeGate() */

void __thiscall CTimeGate::~CTimeGate(CTimeGate *this)

{
  *(undefined ***)this = &PTR_include_08c0beb8;
  return;
}
```
