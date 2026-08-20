# CNCryptoCast5

`_ZN13CNCryptoCast5C1ERKS_`

`CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a01c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a01c  _ZN13CNCryptoCast5C1ERKS_
#           CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 const&)
# range [0x0809a01c, 0x0809a03f]
0809a01c +0x00:  push   %ebp
0809a01d +0x01:  mov    %esp,%ebp
0809a01f +0x03:  sub    $0x18,%esp
0809a022 +0x06:  mov    0x8(%ebp),%eax
0809a025 +0x09:  movl   $0xa,0x4(%esp)
0809a02d +0x11:  mov    %eax,(%esp)
0809a030 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809a035 +0x19:  mov    0x8(%ebp),%eax
0809a038 +0x1c:  movl   $&_ZTV13CNCryptoCast5+0x8,(%eax)
0809a03e +0x22:  leave
0809a03f +0x23:  ret
```

## 反编译 C

```c
// CNCryptoCast5::CNCryptoCast5 @ 0x809a01c

/* CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 const&) */

void __thiscall CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 *this,CNCryptoCast5 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,10);
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  return;
}
```
