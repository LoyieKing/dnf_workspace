# getSeriaRoomAniDecoItem

`_ZN12CDataManager23getSeriaRoomAniDecoItemEi`

`CDataManager::getSeriaRoomAniDecoItem(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365de4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365de4  _ZN12CDataManager23getSeriaRoomAniDecoItemEi
#           CDataManager::getSeriaRoomAniDecoItem(int)
# range [0x08365de4, 0x08365e77]
08365de4 +0x00:  push   %ebp
08365de5 +0x01:  mov    %esp,%ebp
08365de7 +0x03:  sub    $0x28,%esp
08365dea +0x06:  mov    0x8(%ebp),%eax
08365ded +0x09:  add    $0x4c5c,%eax
08365df2 +0x0e:  mov    %eax,(%esp)
08365df5 +0x11:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
08365dfa +0x16:  test   %al,%al
08365dfc +0x18:  je     08365e05 <+0x21>
08365dfe +0x1a:  mov    $0x0,%eax
08365e03 +0x1f:  jmp    08365e76 <+0x92>
08365e05 +0x21:  mov    0xc(%ebp),%eax
08365e08 +0x24:  add    $0x1,%eax
08365e0b +0x27:  mov    %eax,0xc(%ebp)
08365e0e +0x2a:  mov    0x8(%ebp),%eax
08365e11 +0x2d:  lea    0x4c5c(%eax),%ecx
08365e17 +0x33:  lea    -0x10(%ebp),%eax
08365e1a +0x36:  lea    0xc(%ebp),%edx
08365e1d +0x39:  mov    %edx,0x8(%esp)
08365e21 +0x3d:  mov    %ecx,0x4(%esp)
08365e25 +0x41:  mov    %eax,(%esp)
08365e28 +0x44:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08365e2d +0x49:  sub    $0x4,%esp
08365e30 +0x4c:  mov    0x8(%ebp),%eax
08365e33 +0x4f:  lea    0x4c5c(%eax),%edx
08365e39 +0x55:  lea    -0xc(%ebp),%eax
08365e3c +0x58:  mov    %edx,0x4(%esp)
08365e40 +0x5c:  mov    %eax,(%esp)
08365e43 +0x5f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08365e48 +0x64:  sub    $0x4,%esp
08365e4b +0x67:  lea    -0xc(%ebp),%eax
08365e4e +0x6a:  mov    %eax,0x4(%esp)
08365e52 +0x6e:  lea    -0x10(%ebp),%eax
08365e55 +0x71:  mov    %eax,(%esp)
08365e58 +0x74:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08365e5d +0x79:  test   %al,%al
08365e5f +0x7b:  je     08365e71 <+0x8d>
08365e61 +0x7d:  lea    -0x10(%ebp),%eax
08365e64 +0x80:  mov    %eax,(%esp)
08365e67 +0x83:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08365e6c +0x88:  mov    0x4(%eax),%eax
08365e6f +0x8b:  jmp    08365e76 <+0x92>
08365e71 +0x8d:  mov    $0x0,%eax
08365e76 +0x92:  leave
08365e77 +0x93:  ret
```

## 反编译 C

```c
// CDataManager::getSeriaRoomAniDecoItem @ 0x8365de4

/* CDataManager::getSeriaRoomAniDecoItem(int) */

undefined4 CDataManager::getSeriaRoomAniDecoItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (param_1 + 0x4c5c));
  if (cVar1 == '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
