# CNCryptoTea

`_ZN11CNCryptoTeaC1ERKS_`

`CNCryptoTea::CNCryptoTea(CNCryptoTea const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d01e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d01e  _ZN11CNCryptoTeaC1ERKS_
#           CNCryptoTea::CNCryptoTea(CNCryptoTea const&)
# range [0x0809d01e, 0x0809d041]
0809d01e +0x00:  push   %ebp
0809d01f +0x01:  mov    %esp,%ebp
0809d021 +0x03:  sub    $0x18,%esp
0809d024 +0x06:  mov    0x8(%ebp),%eax
0809d027 +0x09:  movl   $0x5,0x4(%esp)
0809d02f +0x11:  mov    %eax,(%esp)
0809d032 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809d037 +0x19:  mov    0x8(%ebp),%eax
0809d03a +0x1c:  movl   $&_ZTV11CNCryptoTea+0x8,(%eax)
0809d040 +0x22:  leave
0809d041 +0x23:  ret
```

## 反编译 C

```c
// CNCryptoTea::CNCryptoTea @ 0x809d01e

/* CNCryptoTea::CNCryptoTea(CNCryptoTea const&) */

void __thiscall CNCryptoTea::CNCryptoTea(CNCryptoTea *this,CNCryptoTea *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,5);
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  return;
}
```
