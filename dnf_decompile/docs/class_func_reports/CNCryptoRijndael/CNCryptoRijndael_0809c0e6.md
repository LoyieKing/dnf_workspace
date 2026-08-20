# CNCryptoRijndael

`_ZN16CNCryptoRijndaelC1ERKS_`

`CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c0e6  _ZN16CNCryptoRijndaelC1ERKS_
#           CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael const&)
# range [0x0809c0e6, 0x0809c109]
0809c0e6 +0x00:  push   %ebp
0809c0e7 +0x01:  mov    %esp,%ebp
0809c0e9 +0x03:  sub    $0x18,%esp
0809c0ec +0x06:  mov    0x8(%ebp),%eax
0809c0ef +0x09:  movl   $0x1,0x4(%esp)
0809c0f7 +0x11:  mov    %eax,(%esp)
0809c0fa +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809c0ff +0x19:  mov    0x8(%ebp),%eax
0809c102 +0x1c:  movl   $&_ZTV16CNCryptoRijndael+0x8,(%eax)
0809c108 +0x22:  leave
0809c109 +0x23:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::CNCryptoRijndael @ 0x809c0e6

/* CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael const&) */

void __thiscall CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael *this,CNCryptoRijndael *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,1);
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  return;
}
```
