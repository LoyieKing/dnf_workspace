# CNCryptoShift

`_ZN13CNCryptoShiftC1Ev`

`CNCryptoShift::CNCryptoShift()`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c442  _ZN13CNCryptoShiftC1Ev
#           CNCryptoShift::CNCryptoShift()
# range [0x0809c442, 0x0809c479]
0809c442 +0x00:  push   %ebp
0809c443 +0x01:  mov    %esp,%ebp
0809c445 +0x03:  sub    $0x18,%esp
0809c448 +0x06:  mov    0x8(%ebp),%eax
0809c44b +0x09:  movl   $0x0,0x4(%esp)
0809c453 +0x11:  mov    %eax,(%esp)
0809c456 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809c45b +0x19:  mov    0x8(%ebp),%eax
0809c45e +0x1c:  movl   $&_ZTV13CNCryptoShift+0x8,(%eax)
0809c464 +0x22:  mov    0x8(%ebp),%eax
0809c467 +0x25:  movl   $0x7,0x8(%eax)
0809c46e +0x2c:  mov    0x8(%ebp),%eax
0809c471 +0x2f:  movl   $0x1d3b4e9c,0xc(%eax)
0809c478 +0x36:  leave
0809c479 +0x37:  ret
```

## 反编译 C

```c
// CNCryptoShift::CNCryptoShift @ 0x809c442

/* CNCryptoShift::CNCryptoShift() */

void __thiscall CNCryptoShift::CNCryptoShift(CNCryptoShift *this)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0);
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  *(undefined4 *)(this + 8) = 7;
  *(undefined4 *)(this + 0xc) = 0x1d3b4e9c;
  return;
}
```
