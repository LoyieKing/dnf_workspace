# clear

`_ZN19EventRewardItemInfo5clearEv`

`EventRewardItemInfo::clear()`

| 类 | 地址 |
|---|---|
| `EventRewardItemInfo` | `0x089154bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089154bc  _ZN19EventRewardItemInfo5clearEv
#           EventRewardItemInfo::clear()
# range [0x089154bc, 0x089154ed]
089154bc +0x00:  push   %ebp
089154bd +0x01:  mov    %esp,%ebp
089154bf +0x03:  sub    $0x18,%esp
089154c2 +0x06:  mov    0x8(%ebp),%eax
089154c5 +0x09:  movl   $0x0,(%eax)
089154cb +0x0f:  mov    0x8(%ebp),%eax
089154ce +0x12:  movl   $0x0,0x4(%eax)
089154d5 +0x19:  mov    0x8(%ebp),%eax
089154d8 +0x1c:  movw   $0x0,0x8(%eax)
089154de +0x22:  mov    0x8(%ebp),%eax
089154e1 +0x25:  add    $0xc,%eax
089154e4 +0x28:  mov    %eax,(%esp)
089154e7 +0x2b:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089154ec +0x30:  leave
089154ed +0x31:  ret
```

## 反编译 C

```c
// EventRewardItemInfo::clear @ 0x89154bc

/* EventRewardItemInfo::clear() */

void __thiscall EventRewardItemInfo::clear(EventRewardItemInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}
```
