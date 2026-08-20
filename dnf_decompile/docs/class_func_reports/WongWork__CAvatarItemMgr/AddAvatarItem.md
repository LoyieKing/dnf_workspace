# AddAvatarItem

`_ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE`

`WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f99d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f99d6  _ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE
#           WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*)
# range [0x082f99d6, 0x082f9a41]
082f99d6 +0x00:  push   %ebp
082f99d7 +0x01:  mov    %esp,%ebp
082f99d9 +0x03:  sub    $0x38,%esp
082f99dc +0x06:  lea    -0x10(%ebp),%eax
082f99df +0x09:  lea    0x10(%ebp),%edx
082f99e2 +0x0c:  mov    %edx,0x8(%esp)
082f99e6 +0x10:  lea    0xc(%ebp),%edx
082f99e9 +0x13:  mov    %edx,0x4(%esp)
082f99ed +0x17:  mov    %eax,(%esp)
082f99f0 +0x1a:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f99f5 +0x1f:  sub    $0x4,%esp
082f99f8 +0x22:  lea    -0x10(%ebp),%eax
082f99fb +0x25:  mov    %eax,0x4(%esp)
082f99ff +0x29:  lea    -0x18(%ebp),%eax
082f9a02 +0x2c:  mov    %eax,(%esp)
082f9a05 +0x2f:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f9a0a +0x34:  mov    0x8(%ebp),%edx
082f9a0d +0x37:  lea    -0x20(%ebp),%eax
082f9a10 +0x3a:  lea    -0x18(%ebp),%ecx
082f9a13 +0x3d:  mov    %ecx,0x8(%esp)
082f9a17 +0x41:  mov    %edx,0x4(%esp)
082f9a1b +0x45:  mov    %eax,(%esp)
082f9a1e +0x48:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f9a23 +0x4d:  sub    $0x4,%esp
082f9a26 +0x50:  mov    0x10(%ebp),%edx
082f9a29 +0x53:  mov    0xc(%ebp),%eax
082f9a2c +0x56:  mov    %edx,0x8(%esp)
082f9a30 +0x5a:  mov    %eax,0x4(%esp)
082f9a34 +0x5e:  mov    0x8(%ebp),%eax
082f9a37 +0x61:  mov    %eax,(%esp)
082f9a3a +0x64:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f9a3f +0x69:  leave
082f9a40 +0x6a:  ret
082f9a41 +0x6b:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::AddAvatarItem @ 0x82f99d6

/* WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*) */

void __thiscall
WongWork::CAvatarItemMgr::AddAvatarItem(CAvatarItemMgr *this,int param_1,Avatar_Item *param_2)

{
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_1);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  AddEmblemEndurance(this,param_1,param_2);
  return;
}
```
