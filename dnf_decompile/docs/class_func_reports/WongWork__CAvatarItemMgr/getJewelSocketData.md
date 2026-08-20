# getJewelSocketData

`_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi`

`WongWork::CAvatarItemMgr::getJewelSocketData(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f98f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f98f8  _ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi
#           WongWork::CAvatarItemMgr::getJewelSocketData(int) const
# range [0x082f98f8, 0x082f992d]
082f98f8 +0x00:  push   %ebp
082f98f9 +0x01:  mov    %esp,%ebp
082f98fb +0x03:  sub    $0x28,%esp
082f98fe +0x06:  mov    0xc(%ebp),%eax
082f9901 +0x09:  mov    %eax,0x4(%esp)
082f9905 +0x0d:  mov    0x8(%ebp),%eax
082f9908 +0x10:  mov    %eax,(%esp)
082f990b +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f9910 +0x18:  mov    %eax,-0xc(%ebp)
082f9913 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f9917 +0x1f:  jne    082f9921 <+0x29>
082f9919 +0x21:  mov    0x8(%ebp),%eax
082f991c +0x24:  add    $0x34,%eax
082f991f +0x27:  jmp    082f992c <+0x34>
082f9921 +0x29:  mov    -0xc(%ebp),%eax
082f9924 +0x2c:  mov    %eax,(%esp)
082f9927 +0x2f:  call   082fa2ee <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x120>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x120
082f992c +0x34:  leave
082f992d +0x35:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::getJewelSocketData @ 0x82f98f8

/* WongWork::CAvatarItemMgr::getJewelSocketData(int) const */

CAvatarItemMgr * __thiscall
WongWork::CAvatarItemMgr::getJewelSocketData(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  CAvatarItemMgr *pCVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    pCVar1 = this + 0x34;
  }
  else {
    pCVar1 = (CAvatarItemMgr *)Avatar_Item::getJewelSocketData(this_00);
  }
  return pCVar1;
}
```
