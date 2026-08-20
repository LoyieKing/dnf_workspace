# GetRemainDate

`_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii`

`WongWork::CAvatarItemMgr::GetRemainDate(int, int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9850  _ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii
#           WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
# range [0x082f9850, 0x082f988b]
082f9850 +0x00:  push   %ebp
082f9851 +0x01:  mov    %esp,%ebp
082f9853 +0x03:  sub    $0x28,%esp
082f9856 +0x06:  mov    0xc(%ebp),%eax
082f9859 +0x09:  mov    %eax,0x4(%esp)
082f985d +0x0d:  mov    0x8(%ebp),%eax
082f9860 +0x10:  mov    %eax,(%esp)
082f9863 +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f9868 +0x18:  mov    %eax,-0xc(%ebp)
082f986b +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f986f +0x1f:  jne    082f9878 <+0x28>
082f9871 +0x21:  mov    $0xffffffff,%eax
082f9876 +0x26:  jmp    082f988a <+0x3a>
082f9878 +0x28:  mov    0x10(%ebp),%eax
082f987b +0x2b:  mov    %eax,0x4(%esp)
082f987f +0x2f:  mov    -0xc(%ebp),%eax
082f9882 +0x32:  mov    %eax,(%esp)
082f9885 +0x35:  call   082fa1f4 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x26>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x26
082f988a +0x3a:  leave
082f988b +0x3b:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetRemainDate @ 0x82f9850

/* WongWork::CAvatarItemMgr::GetRemainDate(int, int) const */

undefined4 __thiscall
WongWork::CAvatarItemMgr::GetRemainDate(CAvatarItemMgr *this,int param_1,int param_2)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetRemainDate(this_00,param_2);
  }
  return uVar1;
}
```
