# UnRegistItem

`_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi`

`WongWork::CAvatarItemMgr::UnRegistItem(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9402  _ZN8WongWork14CAvatarItemMgr12UnRegistItemEi
#           WongWork::CAvatarItemMgr::UnRegistItem(int)
# range [0x082f9402, 0x082f94bb]
082f9402 +0x00:  push   %ebp
082f9403 +0x01:  mov    %esp,%ebp
082f9405 +0x03:  sub    $0x28,%esp
082f9408 +0x06:  mov    0xc(%ebp),%eax
082f940b +0x09:  mov    %eax,0x4(%esp)
082f940f +0x0d:  mov    0x8(%ebp),%eax
082f9412 +0x10:  mov    %eax,(%esp)
082f9415 +0x13:  call   082f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>  ; WongWork::CAvatarItemMgr::_FindItem(int) const
082f941a +0x18:  mov    %eax,-0xc(%ebp)
082f941d +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f9421 +0x1f:  jne    082f942d <+0x2b>
082f9423 +0x21:  mov    $0x0,%eax
082f9428 +0x26:  jmp    082f94b9 <+0xb7>
082f942d +0x2b:  mov    0x8(%ebp),%eax
082f9430 +0x2e:  lea    0xc(%ebp),%edx
082f9433 +0x31:  mov    %edx,0x4(%esp)
082f9437 +0x35:  mov    %eax,(%esp)
082f943a +0x38:  call   082fa886 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6b8>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6b8
082f943f +0x3d:  mov    -0xc(%ebp),%eax
082f9442 +0x40:  mov    %eax,0x4(%esp)
082f9446 +0x44:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f944d +0x4b:  call   082fa8a0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6d2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6d2
082f9452 +0x50:  mov    0x8(%ebp),%eax
082f9455 +0x53:  lea    0x54(%eax),%edx
082f9458 +0x56:  lea    -0x14(%ebp),%eax
082f945b +0x59:  mov    %edx,0x4(%esp)
082f945f +0x5d:  mov    %eax,(%esp)
082f9462 +0x60:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082f9467 +0x65:  sub    $0x4,%esp
082f946a +0x68:  mov    0x8(%ebp),%eax
082f946d +0x6b:  lea    0x54(%eax),%ecx
082f9470 +0x6e:  lea    -0x10(%ebp),%eax
082f9473 +0x71:  lea    0xc(%ebp),%edx
082f9476 +0x74:  mov    %edx,0x8(%esp)
082f947a +0x78:  mov    %ecx,0x4(%esp)
082f947e +0x7c:  mov    %eax,(%esp)
082f9481 +0x7f:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
082f9486 +0x84:  sub    $0x4,%esp
082f9489 +0x87:  lea    -0x14(%ebp),%eax
082f948c +0x8a:  mov    %eax,0x4(%esp)
082f9490 +0x8e:  lea    -0x10(%ebp),%eax
082f9493 +0x91:  mov    %eax,(%esp)
082f9496 +0x94:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
082f949b +0x99:  test   %al,%al
082f949d +0x9b:  je     082f94b4 <+0xb2>
082f949f +0x9d:  mov    0x8(%ebp),%eax
082f94a2 +0xa0:  lea    0x54(%eax),%edx
082f94a5 +0xa3:  lea    0xc(%ebp),%eax
082f94a8 +0xa6:  mov    %eax,0x4(%esp)
082f94ac +0xaa:  mov    %edx,(%esp)
082f94af +0xad:  call   082fa9b0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x7e2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x7e2
082f94b4 +0xb2:  mov    $0x1,%eax
082f94b9 +0xb7:  leave
082f94ba +0xb8:  ret
082f94bb +0xb9:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::UnRegistItem @ 0x82f9402

/* WongWork::CAvatarItemMgr::UnRegistItem(int) */

undefined4 WongWork::CAvatarItemMgr::UnRegistItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  Avatar_Item *local_10;
  
  local_10 = (Avatar_Item *)_FindItem(param_1);
  if (local_10 == (Avatar_Item *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)param_1);
    DynamicPool<WongWork::Avatar_Item>::Free
              ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
                ((int *)(param_1 + 0x54));
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
