# CNCryptoRc6

`_ZN11CNCryptoRc6C1ERKS_`

`CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bc4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bc4e  _ZN11CNCryptoRc6C1ERKS_
#           CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 const&)
# range [0x0809bc4e, 0x0809bc71]
0809bc4e +0x00:  push   %ebp
0809bc4f +0x01:  mov    %esp,%ebp
0809bc51 +0x03:  sub    $0x18,%esp
0809bc54 +0x06:  mov    0x8(%ebp),%eax
0809bc57 +0x09:  movl   $0x3,0x4(%esp)
0809bc5f +0x11:  mov    %eax,(%esp)
0809bc62 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809bc67 +0x19:  mov    0x8(%ebp),%eax
0809bc6a +0x1c:  movl   $&_ZTV11CNCryptoRc6+0x8,(%eax)
0809bc70 +0x22:  leave
0809bc71 +0x23:  ret
```

## 反编译 C

```c
// CNCryptoRc6::CNCryptoRc6 @ 0x809bc4e

/* CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 const&) */

void __thiscall CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 *this,CNCryptoRc6 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,3);
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  return;
}
```
