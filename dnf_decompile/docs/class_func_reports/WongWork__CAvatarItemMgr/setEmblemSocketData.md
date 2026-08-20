# setEmblemSocketData

`_ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t`

`WongWork::CAvatarItemMgr::setEmblemSocketData(int, stAvatarEmblemInfo_t const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f91ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f91ce  _ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t
#           WongWork::CAvatarItemMgr::setEmblemSocketData(int, stAvatarEmblemInfo_t const&)
# range [0x082f91ce, 0x082f9227]
082f91ce +0x00:  push   %ebp
082f91cf +0x01:  mov    %esp,%ebp
082f91d1 +0x03:  sub    $0x28,%esp
082f91d4 +0x06:  mov    0xc(%ebp),%eax
082f91d7 +0x09:  mov    %eax,0x4(%esp)
082f91db +0x0d:  mov    0x8(%ebp),%eax
082f91de +0x10:  mov    %eax,(%esp)
082f91e1 +0x13:  call   082f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>  ; WongWork::CAvatarItemMgr::_FindItem(int) const
082f91e6 +0x18:  mov    %eax,-0xc(%ebp)
082f91e9 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f91ed +0x1f:  jne    082f91f6 <+0x28>
082f91ef +0x21:  mov    $0x0,%eax
082f91f4 +0x26:  jmp    082f9226 <+0x58>
082f91f6 +0x28:  mov    0x10(%ebp),%eax
082f91f9 +0x2b:  mov    %eax,0x4(%esp)
082f91fd +0x2f:  mov    -0xc(%ebp),%eax
082f9200 +0x32:  mov    %eax,(%esp)
082f9203 +0x35:  call   082fa26a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x9c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x9c
082f9208 +0x3a:  mov    -0xc(%ebp),%eax
082f920b +0x3d:  mov    %eax,0x8(%esp)
082f920f +0x41:  mov    0xc(%ebp),%eax
082f9212 +0x44:  mov    %eax,0x4(%esp)
082f9216 +0x48:  mov    0x8(%ebp),%eax
082f9219 +0x4b:  mov    %eax,(%esp)
082f921c +0x4e:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f9221 +0x53:  mov    $0x1,%eax
082f9226 +0x58:  leave
082f9227 +0x59:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::setEmblemSocketData @ 0x82f91ce

/* WongWork::CAvatarItemMgr::setEmblemSocketData(int, stAvatarEmblemInfo_t const&) */

bool __thiscall
WongWork::CAvatarItemMgr::setEmblemSocketData
          (CAvatarItemMgr *this,int param_1,stAvatarEmblemInfo_t *param_2)

{
  Avatar_Item *this_00;
  
  this_00 = (Avatar_Item *)_FindItem((int)this);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::setEmblemSocketData(this_00,param_2);
    AddEmblemEndurance(this,param_1,this_00);
  }
  return this_00 != (Avatar_Item *)0x0;
}
```
