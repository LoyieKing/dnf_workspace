# operator=

`_ZN12ICryptoGraphaSERKS_`

`ICryptoGraph::operator=(ICryptoGraph const&)`

| 类 | 地址 |
|---|---|
| `ICryptoGraph` | `0x0809df66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809df66  _ZN12ICryptoGraphaSERKS_
#           ICryptoGraph::operator=(ICryptoGraph const&)
# range [0x0809df66, 0x0809df81]
0809df66 +0x00:  push   %ebp
0809df67 +0x01:  mov    %esp,%ebp
0809df69 +0x03:  mov    0x8(%ebp),%eax
0809df6c +0x06:  cmp    0xc(%ebp),%eax
0809df6f +0x09:  je     0809df7d <+0x17>
0809df71 +0x0b:  mov    0xc(%ebp),%eax
0809df74 +0x0e:  mov    0x4(%eax),%edx
0809df77 +0x11:  mov    0x8(%ebp),%eax
0809df7a +0x14:  mov    %edx,0x4(%eax)
0809df7d +0x17:  mov    0x8(%ebp),%eax
0809df80 +0x1a:  pop    %ebp
0809df81 +0x1b:  ret
```

## 反编译 C

```c
// ICryptoGraph::operator= @ 0x809df66

/* ICryptoGraph::TEMPNAMEPLACEHOLDERVALUE(ICryptoGraph const&) */

ICryptoGraph * __thiscall ICryptoGraph::operator=(ICryptoGraph *this,ICryptoGraph *param_1)

{
  if (this != param_1) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  return this;
}
```
