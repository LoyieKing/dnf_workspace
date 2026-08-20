# CNCryptoMulti2

`_ZN14CNCryptoMulti2C1ERKS_`

`CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b108  _ZN14CNCryptoMulti2C1ERKS_
#           CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 const&)
# range [0x0809b108, 0x0809b12b]
0809b108 +0x00:  push   %ebp
0809b109 +0x01:  mov    %esp,%ebp
0809b10b +0x03:  sub    $0x18,%esp
0809b10e +0x06:  mov    0x8(%ebp),%eax
0809b111 +0x09:  movl   $0xc,0x4(%esp)
0809b119 +0x11:  mov    %eax,(%esp)
0809b11c +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809b121 +0x19:  mov    0x8(%ebp),%eax
0809b124 +0x1c:  movl   $&_ZTV14CNCryptoMulti2+0x8,(%eax)
0809b12a +0x22:  leave
0809b12b +0x23:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::CNCryptoMulti2 @ 0x809b108

/* CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 const&) */

void __thiscall CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 *this,CNCryptoMulti2 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xc);
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  return;
}
```
