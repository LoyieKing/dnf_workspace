# CNCryptoKasumi

`_ZN14CNCryptoKasumiC1ERKS_`

`CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a5c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a5c0  _ZN14CNCryptoKasumiC1ERKS_
#           CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi const&)
# range [0x0809a5c0, 0x0809a5e3]
0809a5c0 +0x00:  push   %ebp
0809a5c1 +0x01:  mov    %esp,%ebp
0809a5c3 +0x03:  sub    $0x18,%esp
0809a5c6 +0x06:  mov    0x8(%ebp),%eax
0809a5c9 +0x09:  movl   $0x6,0x4(%esp)
0809a5d1 +0x11:  mov    %eax,(%esp)
0809a5d4 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809a5d9 +0x19:  mov    0x8(%ebp),%eax
0809a5dc +0x1c:  movl   $&_ZTV14CNCryptoKasumi+0x8,(%eax)
0809a5e2 +0x22:  leave
0809a5e3 +0x23:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::CNCryptoKasumi @ 0x809a5c0

/* CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi const&) */

void __thiscall CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi *this,CNCryptoKasumi *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,6);
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  return;
}
```
