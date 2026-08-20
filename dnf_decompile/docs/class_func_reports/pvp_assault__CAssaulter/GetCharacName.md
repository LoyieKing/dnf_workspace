# GetCharacName

`_ZNK11pvp_assault10CAssaulter13GetCharacNameEv`

`pvp_assault::CAssaulter::GetCharacName() const`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e663c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e663c  _ZNK11pvp_assault10CAssaulter13GetCharacNameEv
#           pvp_assault::CAssaulter::GetCharacName() const
# range [0x082e663c, 0x082e6661]
082e663c +0x00:  push   %ebp
082e663d +0x01:  mov    %esp,%ebp
082e663f +0x03:  sub    $0x18,%esp
082e6642 +0x06:  mov    0x8(%ebp),%eax
082e6645 +0x09:  mov    (%eax),%eax
082e6647 +0x0b:  test   %eax,%eax
082e6649 +0x0d:  je     082e665a <+0x1e>
082e664b +0x0f:  mov    0x8(%ebp),%eax
082e664e +0x12:  mov    (%eax),%eax
082e6650 +0x14:  mov    %eax,(%esp)
082e6653 +0x17:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082e6658 +0x1c:  jmp    082e665f <+0x23>
082e665a +0x1e:  mov    $"",%eax
082e665f +0x23:  leave
082e6660 +0x24:  ret
082e6661 +0x25:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::GetCharacName @ 0x82e663c

/* pvp_assault::CAssaulter::GetCharacName() const */

undefined * __thiscall pvp_assault::CAssaulter::GetCharacName(CAssaulter *this)

{
  undefined *puVar1;
  
  if (*(int *)this == 0) {
    puVar1 = &DAT_08c1bca0;
  }
  else {
    puVar1 = (undefined *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
  }
  return puVar1;
}
```
