# clear

`_ZN12NpcMovieData5clearEv`

`NpcMovieData::clear()`

| 类 | 地址 |
|---|---|
| `NpcMovieData` | `0x089fb7d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb7d0  _ZN12NpcMovieData5clearEv
#           NpcMovieData::clear()
# range [0x089fb7d0, 0x089fb7ed]
089fb7d0 +0x00:  push   %ebp
089fb7d1 +0x01:  mov    %esp,%ebp
089fb7d3 +0x03:  sub    $0x18,%esp
089fb7d6 +0x06:  mov    0x8(%ebp),%eax
089fb7d9 +0x09:  mov    %eax,(%esp)
089fb7dc +0x0c:  call   08a01482 <_GLOBAL__I_g_npcScriptBaseDirectory+0xb14>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb14
089fb7e1 +0x11:  mov    0x8(%ebp),%eax
089fb7e4 +0x14:  movl   $0x0,0x28(%eax)
089fb7eb +0x1b:  leave
089fb7ec +0x1c:  ret
089fb7ed +0x1d:  nop
```

## 反编译 C

```c
// NpcMovieData::clear @ 0x89fb7d0

/* NpcMovieData::clear() */

void __thiscall NpcMovieData::clear(NpcMovieData *this)

{
  std::deque<std::string,std::allocator<std::string>>::clear
            ((deque<std::string,std::allocator<std::string>> *)this);
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
