# CNCryptoXTea

`_ZN12CNCryptoXTeaC1ERKS_`

`CNCryptoXTea::CNCryptoXTea(CNCryptoXTea const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809d9dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d9dc  _ZN12CNCryptoXTeaC1ERKS_
#           CNCryptoXTea::CNCryptoXTea(CNCryptoXTea const&)
# range [0x0809d9dc, 0x0809d9ff]
0809d9dc +0x00:  push   %ebp
0809d9dd +0x01:  mov    %esp,%ebp
0809d9df +0x03:  sub    $0x18,%esp
0809d9e2 +0x06:  mov    0x8(%ebp),%eax
0809d9e5 +0x09:  movl   $0x7,0x4(%esp)
0809d9ed +0x11:  mov    %eax,(%esp)
0809d9f0 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809d9f5 +0x19:  mov    0x8(%ebp),%eax
0809d9f8 +0x1c:  movl   $&_ZTV12CNCryptoXTea+0x8,(%eax)
0809d9fe +0x22:  leave
0809d9ff +0x23:  ret
```

## 反编译 C

```c
// CNCryptoXTea::CNCryptoXTea @ 0x809d9dc

/* CNCryptoXTea::CNCryptoXTea(CNCryptoXTea const&) */

void __thiscall CNCryptoXTea::CNCryptoXTea(CNCryptoXTea *this,CNCryptoXTea *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,7);
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  return;
}
```
