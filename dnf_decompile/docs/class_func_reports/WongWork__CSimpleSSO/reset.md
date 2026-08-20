# reset

`_ZN8WongWork10CSimpleSSO5resetEv`

`WongWork::CSimpleSSO::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x086028b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086028b4  _ZN8WongWork10CSimpleSSO5resetEv
#           WongWork::CSimpleSSO::reset()
# range [0x086028b4, 0x086028c5]
086028b4 +0x00:  push   %ebp
086028b5 +0x01:  mov    %esp,%ebp
086028b7 +0x03:  mov    0x8(%ebp),%eax
086028ba +0x06:  movl   $0x0,0xd0860(%eax)
086028c4 +0x10:  pop    %ebp
086028c5 +0x11:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::reset @ 0x86028b4

/* WongWork::CSimpleSSO::reset() */

void __thiscall WongWork::CSimpleSSO::reset(CSimpleSSO *this)

{
  *(undefined4 *)(this + 0xd0860) = 0;
  return;
}
```
