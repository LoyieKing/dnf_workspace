# resetHackInfo

`_ZN8WongWork13CHackAnalyzer13resetHackInfoEv`

`WongWork::CHackAnalyzer::resetHackInfo()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f81a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f81a6  _ZN8WongWork13CHackAnalyzer13resetHackInfoEv
#           WongWork::CHackAnalyzer::resetHackInfo()
# range [0x080f81a6, 0x080f81fb]
080f81a6 +0x00:  push   %ebp
080f81a7 +0x01:  mov    %esp,%ebp
080f81a9 +0x03:  sub    $0x18,%esp
080f81ac +0x06:  mov    0x8(%ebp),%eax
080f81af +0x09:  add    $0x8,%eax
080f81b2 +0x0c:  mov    %eax,(%esp)
080f81b5 +0x0f:  call   080f9d3a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x546>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x546
080f81ba +0x14:  mov    0x8(%ebp),%eax
080f81bd +0x17:  movb   $0x0,0x4(%eax)
080f81c1 +0x1b:  mov    0x8(%ebp),%eax
080f81c4 +0x1e:  movl   $0x0,(%eax)
080f81ca +0x24:  mov    0x8(%ebp),%eax
080f81cd +0x27:  add    $0x14,%eax
080f81d0 +0x2a:  mov    %eax,(%esp)
080f81d3 +0x2d:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080f81d8 +0x32:  mov    0x8(%ebp),%eax
080f81db +0x35:  movl   $0x0,0x20(%eax)
080f81e2 +0x3c:  mov    0x8(%ebp),%eax
080f81e5 +0x3f:  movl   $0x0,0x24(%eax)
080f81ec +0x46:  mov    0x8(%ebp),%eax
080f81ef +0x49:  movl   $0x0,0x7a08(%eax)
080f81f9 +0x53:  leave
080f81fa +0x54:  ret
080f81fb +0x55:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::resetHackInfo @ 0x80f81a6

/* WongWork::CHackAnalyzer::resetHackInfo() */

void __thiscall WongWork::CHackAnalyzer::resetHackInfo(CHackAnalyzer *this)

{
  std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::clear
            ((vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>> *)(this + 8));
  this[4] = (CHackAnalyzer)0x0;
  *(undefined4 *)this = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x7a08) = 0;
  return;
}
```
