# _reset

`_ZN15CItemDictionary6_resetEv`

`CItemDictionary::_reset()`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d774  _ZN15CItemDictionary6_resetEv
#           CItemDictionary::_reset()
# range [0x0811d774, 0x0811d799]
0811d774 +0x00:  push   %ebp
0811d775 +0x01:  mov    %esp,%ebp
0811d777 +0x03:  sub    $0x18,%esp
0811d77a +0x06:  mov    0x8(%ebp),%eax
0811d77d +0x09:  add    $0x5,%eax
0811d780 +0x0c:  movl   $0x1388,0x8(%esp)
0811d788 +0x14:  movl   $0x0,0x4(%esp)
0811d790 +0x1c:  mov    %eax,(%esp)
0811d793 +0x1f:  call   0807dcc0 <_init+0x5b8>
0811d798 +0x24:  leave
0811d799 +0x25:  ret
```

## 反编译 C

```c
// CItemDictionary::_reset @ 0x811d774

/* CItemDictionary::_reset() */

void __thiscall CItemDictionary::_reset(CItemDictionary *this)

{
  memset(this + 5,0,5000);
  return;
}
```
