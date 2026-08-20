# GetRegistTime

`_ZNK8WongWork14CAvatarItemMgr13GetRegistTimeEi`

`WongWork::CAvatarItemMgr::GetRegistTime(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f988c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f988c  _ZNK8WongWork14CAvatarItemMgr13GetRegistTimeEi
#           WongWork::CAvatarItemMgr::GetRegistTime(int) const
# range [0x082f988c, 0x082f98c1]
082f988c +0x00:  push   %ebp
082f988d +0x01:  mov    %esp,%ebp
082f988f +0x03:  sub    $0x28,%esp
082f9892 +0x06:  mov    0xc(%ebp),%eax
082f9895 +0x09:  mov    %eax,0x4(%esp)
082f9899 +0x0d:  mov    0x8(%ebp),%eax
082f989c +0x10:  mov    %eax,(%esp)
082f989f +0x13:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f98a4 +0x18:  mov    %eax,-0xc(%ebp)
082f98a7 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f98ab +0x1f:  jne    082f98b4 <+0x28>
082f98ad +0x21:  mov    $0xffffffff,%eax
082f98b2 +0x26:  jmp    082f98bf <+0x33>
082f98b4 +0x28:  mov    -0xc(%ebp),%eax
082f98b7 +0x2b:  mov    %eax,(%esp)
082f98ba +0x2e:  call   082fa228 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5a>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5a
082f98bf +0x33:  leave
082f98c0 +0x34:  ret
082f98c1 +0x35:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetRegistTime @ 0x82f988c

/* WongWork::CAvatarItemMgr::GetRegistTime(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::GetRegistTime(CAvatarItemMgr *this,int param_1)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Avatar_Item::GetRegistTime(this_00);
  }
  return uVar1;
}
```
