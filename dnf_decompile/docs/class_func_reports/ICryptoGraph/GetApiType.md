# GetApiType

`_ZNK12ICryptoGraph10GetApiTypeEv`

`ICryptoGraph::GetApiType() const`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809df82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809df82  _ZNK12ICryptoGraph10GetApiTypeEv
#           ICryptoGraph::GetApiType() const
# range [0x0809df82, 0x0809df8f]
0809df82 +0x00:  push   %ebp
0809df83 +0x01:  mov    %esp,%ebp
0809df85 +0x03:  mov    0x8(%ebp),%eax
0809df88 +0x06:  mov    0x4(%eax),%eax
0809df8b +0x09:  pop    %ebp
0809df8c +0x0a:  ret
0809df8d +0x0b:  nop
0809df8e +0x0c:  nop
0809df8f +0x0d:  nop
```

## 反编译 C

```c
// ICryptoGraph::GetApiType @ 0x809df82

/* ICryptoGraph::GetApiType() const */

undefined4 __thiscall ICryptoGraph::GetApiType(ICryptoGraph *this)

{
  return *(undefined4 *)(this + 4);
}
```
