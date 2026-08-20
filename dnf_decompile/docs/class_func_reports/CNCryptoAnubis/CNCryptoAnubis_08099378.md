# CNCryptoAnubis

`_ZN14CNCryptoAnubisC1ERKS_`

`CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x08099378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099378  _ZN14CNCryptoAnubisC1ERKS_
#           CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis const&)
# range [0x08099378, 0x0809939b]
08099378 +0x00:  push   %ebp
08099379 +0x01:  mov    %esp,%ebp
0809937b +0x03:  sub    $0x18,%esp
0809937e +0x06:  mov    0x8(%ebp),%eax
08099381 +0x09:  movl   $0xd,0x4(%esp)
08099389 +0x11:  mov    %eax,(%esp)
0809938c +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
08099391 +0x19:  mov    0x8(%ebp),%eax
08099394 +0x1c:  movl   $&_ZTV14CNCryptoAnubis+0x8,(%eax)
0809939a +0x22:  leave
0809939b +0x23:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::CNCryptoAnubis @ 0x8099378

/* CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis const&) */

void __thiscall CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis *this,CNCryptoAnubis *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xd);
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  return;
}
```
