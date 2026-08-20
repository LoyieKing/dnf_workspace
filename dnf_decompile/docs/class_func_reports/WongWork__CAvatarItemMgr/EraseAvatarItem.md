# EraseAvatarItem

`_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi`

`WongWork::CAvatarItemMgr::EraseAvatarItem(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9a42  _ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi
#           WongWork::CAvatarItemMgr::EraseAvatarItem(int)
# range [0x082f9a42, 0x082f9ae3]
082f9a42 +0x00:  push   %ebp
082f9a43 +0x01:  mov    %esp,%ebp
082f9a45 +0x03:  sub    $0x28,%esp
082f9a48 +0x06:  mov    0xc(%ebp),%eax
082f9a4b +0x09:  mov    %eax,0x4(%esp)
082f9a4f +0x0d:  mov    0x8(%ebp),%eax
082f9a52 +0x10:  mov    %eax,(%esp)
082f9a55 +0x13:  call   082f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>  ; WongWork::CAvatarItemMgr::_FindItem(int) const
082f9a5a +0x18:  mov    %eax,-0xc(%ebp)
082f9a5d +0x1b:  cmpl   $0x0,-0xc(%ebp)
082f9a61 +0x1f:  jne    082f9a6a <+0x28>
082f9a63 +0x21:  mov    $0x0,%eax
082f9a68 +0x26:  jmp    082f9ae1 <+0x9f>
082f9a6a +0x28:  mov    0x8(%ebp),%eax
082f9a6d +0x2b:  lea    0xc(%ebp),%edx
082f9a70 +0x2e:  mov    %edx,0x4(%esp)
082f9a74 +0x32:  mov    %eax,(%esp)
082f9a77 +0x35:  call   082fa886 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6b8>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6b8
082f9a7c +0x3a:  mov    0x8(%ebp),%eax
082f9a7f +0x3d:  lea    0x54(%eax),%edx
082f9a82 +0x40:  lea    -0x14(%ebp),%eax
082f9a85 +0x43:  mov    %edx,0x4(%esp)
082f9a89 +0x47:  mov    %eax,(%esp)
082f9a8c +0x4a:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082f9a91 +0x4f:  sub    $0x4,%esp
082f9a94 +0x52:  mov    0x8(%ebp),%eax
082f9a97 +0x55:  lea    0x54(%eax),%ecx
082f9a9a +0x58:  lea    -0x10(%ebp),%eax
082f9a9d +0x5b:  lea    0xc(%ebp),%edx
082f9aa0 +0x5e:  mov    %edx,0x8(%esp)
082f9aa4 +0x62:  mov    %ecx,0x4(%esp)
082f9aa8 +0x66:  mov    %eax,(%esp)
082f9aab +0x69:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
082f9ab0 +0x6e:  sub    $0x4,%esp
082f9ab3 +0x71:  lea    -0x14(%ebp),%eax
082f9ab6 +0x74:  mov    %eax,0x4(%esp)
082f9aba +0x78:  lea    -0x10(%ebp),%eax
082f9abd +0x7b:  mov    %eax,(%esp)
082f9ac0 +0x7e:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
082f9ac5 +0x83:  test   %al,%al
082f9ac7 +0x85:  je     082f9ade <+0x9c>
082f9ac9 +0x87:  mov    0x8(%ebp),%eax
082f9acc +0x8a:  lea    0x54(%eax),%edx
082f9acf +0x8d:  lea    0xc(%ebp),%eax
082f9ad2 +0x90:  mov    %eax,0x4(%esp)
082f9ad6 +0x94:  mov    %edx,(%esp)
082f9ad9 +0x97:  call   082fa9b0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x7e2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x7e2
082f9ade +0x9c:  mov    -0xc(%ebp),%eax
082f9ae1 +0x9f:  leave
082f9ae2 +0xa0:  ret
082f9ae3 +0xa1:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::EraseAvatarItem @ 0x82f9a42

/* WongWork::CAvatarItemMgr::EraseAvatarItem(int) */

int WongWork::CAvatarItemMgr::EraseAvatarItem(int param_1)

{
  char cVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  int local_10;
  
  local_10 = _FindItem(param_1);
  if (local_10 == 0) {
    local_10 = 0;
  }
  else {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)param_1);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
                ((int *)(param_1 + 0x54));
    }
  }
  return local_10;
}
```
