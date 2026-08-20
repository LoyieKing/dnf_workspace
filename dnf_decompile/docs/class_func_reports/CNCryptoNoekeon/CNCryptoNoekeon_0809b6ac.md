# CNCryptoNoekeon

`_ZN15CNCryptoNoekeonC1ERKS_`

`CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b6ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b6ac  _ZN15CNCryptoNoekeonC1ERKS_
#           CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon const&)
# range [0x0809b6ac, 0x0809b6cf]
0809b6ac +0x00:  push   %ebp
0809b6ad +0x01:  mov    %esp,%ebp
0809b6af +0x03:  sub    $0x18,%esp
0809b6b2 +0x06:  mov    0x8(%ebp),%eax
0809b6b5 +0x09:  movl   $0x8,0x4(%esp)
0809b6bd +0x11:  mov    %eax,(%esp)
0809b6c0 +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809b6c5 +0x19:  mov    0x8(%ebp),%eax
0809b6c8 +0x1c:  movl   $&_ZTV15CNCryptoNoekeon+0x8,(%eax)
0809b6ce +0x22:  leave
0809b6cf +0x23:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::CNCryptoNoekeon @ 0x809b6ac

/* CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon const&) */

void __thiscall CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon *this,CNCryptoNoekeon *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,8);
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  return;
}
```
