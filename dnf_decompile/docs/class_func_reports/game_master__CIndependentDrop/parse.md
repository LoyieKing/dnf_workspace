# parse

`_ZN11game_master16CIndependentDrop5parseEv`

`game_master::CIndependentDrop::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDrop` | `0x084b0b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0b08  _ZN11game_master16CIndependentDrop5parseEv
#           game_master::CIndependentDrop::parse()
# range [0x084b0b08, 0x084b0b4d]
084b0b08 +0x00:  push   %ebp
084b0b09 +0x01:  mov    %esp,%ebp
084b0b0b +0x03:  sub    $0x18,%esp
084b0b0e +0x06:  mov    0x8(%ebp),%eax
084b0b11 +0x09:  mov    0x4(%eax),%eax
084b0b14 +0x0c:  add    $0xc,%eax
084b0b17 +0x0f:  mov    %eax,(%esp)
084b0b1a +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b0b1f +0x17:  mov    0x8(%ebp),%eax
084b0b22 +0x1a:  mov    0x4(%eax),%eax
084b0b25 +0x1d:  add    $0xc,%eax
084b0b28 +0x20:  movl   $"all",0x4(%esp)
084b0b30 +0x28:  mov    %eax,(%esp)
084b0b33 +0x2b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b0b38 +0x30:  test   %al,%al
084b0b3a +0x32:  je     084b0b45 <+0x3d>
084b0b3c +0x34:  mov    0x8(%ebp),%eax
084b0b3f +0x37:  movb   $0x1,0x8(%eax)
084b0b43 +0x3b:  jmp    084b0b4c <+0x44>
084b0b45 +0x3d:  mov    0x8(%ebp),%eax
084b0b48 +0x40:  movb   $0x0,0x8(%eax)
084b0b4c +0x44:  leave
084b0b4d +0x45:  ret
```

## 反编译 C

```c
// game_master::CIndependentDrop::parse @ 0x84b0b08

/* game_master::CIndependentDrop::parse() */

void __thiscall game_master::CIndependentDrop::parse(CIndependentDrop *this)

{
  bool bVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"all");
  if (bVar1) {
    this[8] = (CIndependentDrop)0x1;
  }
  else {
    this[8] = (CIndependentDrop)0x0;
  }
  return;
}
```
