# CNCryptoKhazad

`_ZN14CNCryptoKhazadC1ERKS_`

`CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ab64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ab64  _ZN14CNCryptoKhazadC1ERKS_
#           CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad const&)
# range [0x0809ab64, 0x0809ab87]
0809ab64 +0x00:  push   %ebp
0809ab65 +0x01:  mov    %esp,%ebp
0809ab67 +0x03:  sub    $0x18,%esp
0809ab6a +0x06:  mov    0x8(%ebp),%eax
0809ab6d +0x09:  movl   $0x9,0x4(%esp)
0809ab75 +0x11:  mov    %eax,(%esp)
0809ab78 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809ab7d +0x19:  mov    0x8(%ebp),%eax
0809ab80 +0x1c:  movl   $&_ZTV14CNCryptoKhazad+0x8,(%eax)
0809ab86 +0x22:  leave
0809ab87 +0x23:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::CNCryptoKhazad @ 0x809ab64

/* CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad const&) */

void __thiscall CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad *this,CNCryptoKhazad *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,9);
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  return;
}
```
