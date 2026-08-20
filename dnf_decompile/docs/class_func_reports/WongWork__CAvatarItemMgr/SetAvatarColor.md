# SetAvatarColor

`_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss`

`WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9964  _ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss
#           WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short)
# range [0x082f9964, 0x082f99bb]
082f9964 +0x00:  push   %ebp
082f9965 +0x01:  mov    %esp,%ebp
082f9967 +0x03:  sub    $0x38,%esp
082f996a +0x06:  mov    0x10(%ebp),%edx
082f996d +0x09:  mov    0x14(%ebp),%eax
082f9970 +0x0c:  mov    %dx,-0x1c(%ebp)
082f9974 +0x10:  mov    %ax,-0x20(%ebp)
082f9978 +0x14:  mov    0xc(%ebp),%eax
082f997b +0x17:  mov    %eax,0x4(%esp)
082f997f +0x1b:  mov    0x8(%ebp),%eax
082f9982 +0x1e:  mov    %eax,(%esp)
082f9985 +0x21:  call   082f9cac <_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi>  ; WongWork::CAvatarItemMgr::_FindItemAll(int) const
082f998a +0x26:  mov    %eax,-0xc(%ebp)
082f998d +0x29:  cmpl   $0x0,-0xc(%ebp)
082f9991 +0x2d:  jne    082f999a <+0x36>
082f9993 +0x2f:  mov    $0x0,%eax
082f9998 +0x34:  jmp    082f99ba <+0x56>
082f999a +0x36:  movswl -0x20(%ebp),%edx
082f999e +0x3a:  movswl -0x1c(%ebp),%eax
082f99a2 +0x3e:  mov    %edx,0x8(%esp)
082f99a6 +0x42:  mov    %eax,0x4(%esp)
082f99aa +0x46:  mov    -0xc(%ebp),%eax
082f99ad +0x49:  mov    %eax,(%esp)
082f99b0 +0x4c:  call   082fa2fa <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x12c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x12c
082f99b5 +0x51:  mov    $0x1,%eax
082f99ba +0x56:  leave
082f99bb +0x57:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::SetAvatarColor @ 0x82f9964

/* WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short) */

bool __thiscall
WongWork::CAvatarItemMgr::SetAvatarColor
          (CAvatarItemMgr *this,int param_1,short param_2,short param_3)

{
  Avatar_Item *this_00;
  
  this_00 = (Avatar_Item *)_FindItemAll(this,param_1);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::setColor(this_00,param_2,param_3);
  }
  return this_00 != (Avatar_Item *)0x0;
}
```
