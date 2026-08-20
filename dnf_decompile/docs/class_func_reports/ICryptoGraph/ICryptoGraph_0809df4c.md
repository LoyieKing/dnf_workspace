# ICryptoGraph

`_ZN12ICryptoGraphC1ERKS_`

`ICryptoGraph::ICryptoGraph(ICryptoGraph const&)`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809df4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809df4c  _ZN12ICryptoGraphC1ERKS_
#           ICryptoGraph::ICryptoGraph(ICryptoGraph const&)
# range [0x0809df4c, 0x0809df65]
0809df4c +0x00:  push   %ebp
0809df4d +0x01:  mov    %esp,%ebp
0809df4f +0x03:  mov    0x8(%ebp),%eax
0809df52 +0x06:  movl   $&_ZTV12ICryptoGraph+0x8,(%eax)
0809df58 +0x0c:  mov    0xc(%ebp),%eax
0809df5b +0x0f:  mov    0x4(%eax),%edx
0809df5e +0x12:  mov    0x8(%ebp),%eax
0809df61 +0x15:  mov    %edx,0x4(%eax)
0809df64 +0x18:  pop    %ebp
0809df65 +0x19:  ret
```

## 反编译 C

```c
// ICryptoGraph::ICryptoGraph @ 0x809df4c

/* ICryptoGraph::ICryptoGraph(ICryptoGraph const&) */

void __thiscall ICryptoGraph::ICryptoGraph(ICryptoGraph *this,ICryptoGraph *param_1)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}
```
