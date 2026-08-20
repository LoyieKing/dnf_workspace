# CNCryptoShift

`_ZN13CNCryptoShiftC1ERKS_`

`CNCryptoShift::CNCryptoShift(CNCryptoShift const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c4c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c4c8  _ZN13CNCryptoShiftC1ERKS_
#           CNCryptoShift::CNCryptoShift(CNCryptoShift const&)
# range [0x0809c4c8, 0x0809c4eb]
0809c4c8 +0x00:  push   %ebp
0809c4c9 +0x01:  mov    %esp,%ebp
0809c4cb +0x03:  sub    $0x18,%esp
0809c4ce +0x06:  mov    0x8(%ebp),%eax
0809c4d1 +0x09:  movl   $0x0,0x4(%esp)
0809c4d9 +0x11:  mov    %eax,(%esp)
0809c4dc +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809c4e1 +0x19:  mov    0x8(%ebp),%eax
0809c4e4 +0x1c:  movl   $&_ZTV13CNCryptoShift+0x8,(%eax)
0809c4ea +0x22:  leave
0809c4eb +0x23:  ret
```

## 反编译 C

```c
// CNCryptoShift::CNCryptoShift @ 0x809c4c8

/* CNCryptoShift::CNCryptoShift(CNCryptoShift const&) */

void __thiscall CNCryptoShift::CNCryptoShift(CNCryptoShift *this,CNCryptoShift *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0);
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  return;
}
```
