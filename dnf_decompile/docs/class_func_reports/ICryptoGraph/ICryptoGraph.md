# ICryptoGraph

`_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE`

`ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809def0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809def0  _ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE
#           ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
# range [0x0809def0, 0x0809df07]
0809def0 +0x00:  push   %ebp
0809def1 +0x01:  mov    %esp,%ebp
0809def3 +0x03:  mov    0x8(%ebp),%eax
0809def6 +0x06:  movl   $&_ZTV12ICryptoGraph+0x8,(%eax)
0809defc +0x0c:  mov    0x8(%ebp),%eax
0809deff +0x0f:  mov    0xc(%ebp),%edx
0809df02 +0x12:  mov    %edx,0x4(%eax)
0809df05 +0x15:  pop    %ebp
0809df06 +0x16:  ret
0809df07 +0x17:  nop
```

## 反编译 C

```c
// ICryptoGraph::ICryptoGraph @ 0x809def0

/* ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE) */

void __thiscall ICryptoGraph::ICryptoGraph(ICryptoGraph *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  *(undefined4 *)(this + 4) = param_2;
  return;
}
```
