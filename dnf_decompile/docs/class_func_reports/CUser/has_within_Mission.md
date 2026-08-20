# has_within_Mission

`_ZNK5CUser18has_within_MissionEv`

`CUser::has_within_Mission() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866270a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866270a  _ZNK5CUser18has_within_MissionEv
#           CUser::has_within_Mission() const
# range [0x0866270a, 0x0866273b]
0866270a +0x00:  push   %ebp
0866270b +0x01:  mov    %esp,%ebp
0866270d +0x03:  sub    $0x28,%esp
08662710 +0x06:  movl   $0x8,0x4(%esp)
08662718 +0x0e:  mov    0x8(%ebp),%eax
0866271b +0x11:  mov    %eax,(%esp)
0866271e +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662723 +0x19:  mov    %eax,-0xc(%ebp)
08662726 +0x1c:  movl   $0x1b,0x4(%esp)
0866272e +0x24:  mov    -0xc(%ebp),%eax
08662731 +0x27:  mov    %eax,(%esp)
08662734 +0x2a:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
08662739 +0x2f:  leave
0866273a +0x30:  ret
0866273b +0x31:  nop
```

## 反编译 C

```c
// CUser::has_within_Mission @ 0x866270a

/* CUser::has_within_Mission() const */

void __thiscall CUser::has_within_Mission(CUser *this)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::getIndex_byKind(this_00,0x1b);
  return;
}
```
