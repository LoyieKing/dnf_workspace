# ~ICryptoGraph

`_ZN12ICryptoGraphD0Ev`

`ICryptoGraph::~ICryptoGraph()`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809df2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809df2e  _ZN12ICryptoGraphD0Ev
#           ICryptoGraph::~ICryptoGraph()
# range [0x0809df2e, 0x0809df4b]
0809df2e +0x00:  push   %ebp
0809df2f +0x01:  mov    %esp,%ebp
0809df31 +0x03:  sub    $0x18,%esp
0809df34 +0x06:  mov    0x8(%ebp),%eax
0809df37 +0x09:  mov    %eax,(%esp)
0809df3a +0x0c:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809df3f +0x11:  mov    0x8(%ebp),%eax
0809df42 +0x14:  mov    %eax,(%esp)
0809df45 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809df4a +0x1c:  leave
0809df4b +0x1d:  ret
```

## 反编译 C

```c
// ICryptoGraph::~ICryptoGraph @ 0x809df2e

/* ICryptoGraph::~ICryptoGraph() */

void __thiscall ICryptoGraph::~ICryptoGraph(ICryptoGraph *this)

{
  ~ICryptoGraph(this);
  operator_delete(this);
  return;
}
```
