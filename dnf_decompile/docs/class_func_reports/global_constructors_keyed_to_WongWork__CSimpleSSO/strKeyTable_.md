# strKeyTable_

`_GLOBAL__I__ZN8WongWork10CSimpleSSO12strKeyTable_E`

`global constructors keyed to WongWork::CSimpleSSO::strKeyTable_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CSimpleSSO` | `0x08603345` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603345  _GLOBAL__I__ZN8WongWork10CSimpleSSO12strKeyTable_E
#           global constructors keyed to WongWork::CSimpleSSO::strKeyTable_
# range [0x08603345, 0x08603363]
08603345 +0x00:  push   %ebp
08603346 +0x01:  mov    %esp,%ebp
08603348 +0x03:  sub    $0x18,%esp
0860334b +0x06:  movl   $0xffff,0x4(%esp)
08603353 +0x0e:  movl   $0x1,(%esp)
0860335a +0x15:  call   08603305 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0860335f +0x1a:  leave
08603360 +0x1b:  ret
08603361 +0x1c:  nop
08603362 +0x1d:  nop
08603363 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8603345

/* WongWork::CSimpleSSO::strKeyTable_ */

void WongWork::CSimpleSSO::_GLOBAL__I_strKeyTable_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
