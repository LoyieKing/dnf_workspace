# CNCryptoSkipjack

`_ZN16CNCryptoSkipjackC1ERKS_`

`CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c9bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c9bc  _ZN16CNCryptoSkipjackC1ERKS_
#           CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack const&)
# range [0x0809c9bc, 0x0809c9df]
0809c9bc +0x00:  push   %ebp
0809c9bd +0x01:  mov    %esp,%ebp
0809c9bf +0x03:  sub    $0x18,%esp
0809c9c2 +0x06:  mov    0x8(%ebp),%eax
0809c9c5 +0x09:  movl   $0xb,0x4(%esp)
0809c9cd +0x11:  mov    %eax,(%esp)
0809c9d0 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809c9d5 +0x19:  mov    0x8(%ebp),%eax
0809c9d8 +0x1c:  movl   $&_ZTV16CNCryptoSkipjack+0x8,(%eax)
0809c9de +0x22:  leave
0809c9df +0x23:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::CNCryptoSkipjack @ 0x809c9bc

/* CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack const&) */

void __thiscall CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack *this,CNCryptoSkipjack *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xb);
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  return;
}
```
