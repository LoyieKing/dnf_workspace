# IntValue

`_ZNK14TiXmlAttribute8IntValueEv`

`TiXmlAttribute::IntValue() const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e08d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e08d0  _ZNK14TiXmlAttribute8IntValueEv
#           TiXmlAttribute::IntValue() const
# range [0x087e08d0, 0x087e08f9]
087e08d0 +0x00:  push   %ebp
087e08d1 +0x01:  mov    %esp,%ebp
087e08d3 +0x03:  sub    $0x18,%esp
087e08d6 +0x06:  mov    0x8(%ebp),%eax
087e08d9 +0x09:  movl   $0xa,0x8(%esp)
087e08e1 +0x11:  movl   $0x0,0x4(%esp)
087e08e9 +0x19:  mov    0x18(%eax),%eax
087e08ec +0x1c:  mov    %eax,(%esp)
087e08ef +0x1f:  call   0807e5e0 <_init+0xed8>
087e08f4 +0x24:  leave
087e08f5 +0x25:  ret
087e08f6 +0x26:  lea    0x0(%esi),%esi
087e08f9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlAttribute::IntValue @ 0x87e08d0

/* TiXmlAttribute::IntValue() const */

void __thiscall TiXmlAttribute::IntValue(TiXmlAttribute *this)

{
  strtol(*(char **)(this + 0x18),(char **)0x0,10);
  return;
}
```
