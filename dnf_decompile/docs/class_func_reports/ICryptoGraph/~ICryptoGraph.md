# ~ICryptoGraph

`_ZN12ICryptoGraphD1Ev`

`ICryptoGraph::~ICryptoGraph()`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809df08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809df08  _ZN12ICryptoGraphD1Ev
#           ICryptoGraph::~ICryptoGraph()
# range [0x0809df08, 0x0809df2d]
0809df08 +0x00:  push   %ebp
0809df09 +0x01:  mov    %esp,%ebp
0809df0b +0x03:  sub    $0x18,%esp
0809df0e +0x06:  mov    0x8(%ebp),%eax
0809df11 +0x09:  movl   $&_ZTV12ICryptoGraph+0x8,(%eax)
0809df17 +0x0f:  mov    $0x0,%eax
0809df1c +0x14:  test   %al,%al
0809df1e +0x16:  je     0809df2b <+0x23>
0809df20 +0x18:  mov    0x8(%ebp),%eax
0809df23 +0x1b:  mov    %eax,(%esp)
0809df26 +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809df2b +0x23:  leave
0809df2c +0x24:  ret
0809df2d +0x25:  nop
```

## 反编译 C

```c
// ICryptoGraph::~ICryptoGraph @ 0x809df08

/* WARNING: Removing unreachable block (ram,0x0809df20) */
/* ICryptoGraph::~ICryptoGraph() */

void __thiscall ICryptoGraph::~ICryptoGraph(ICryptoGraph *this)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  return;
}
```
