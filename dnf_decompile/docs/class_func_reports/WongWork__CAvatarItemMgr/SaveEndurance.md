# SaveEndurance

`_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv`

`WongWork::CAvatarItemMgr::SaveEndurance()`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082fa0a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fa0a8  _ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv
#           WongWork::CAvatarItemMgr::SaveEndurance()
# range [0x082fa0a8, 0x082fa154]
082fa0a8 +0x00:  push   %ebp
082fa0a9 +0x01:  mov    %esp,%ebp
082fa0ab +0x03:  push   %ebx
082fa0ac +0x04:  sub    $0x24,%esp
082fa0af +0x07:  mov    0x8(%ebp),%eax
082fa0b2 +0x0a:  add    $0x6c,%eax
082fa0b5 +0x0d:  mov    %eax,(%esp)
082fa0b8 +0x10:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
082fa0bd +0x15:  test   %al,%al
082fa0bf +0x17:  jne    082fa14f <+0xa7>
082fa0c5 +0x1d:  mov    0x8(%ebp),%eax
082fa0c8 +0x20:  lea    0x6c(%eax),%edx
082fa0cb +0x23:  lea    -0xc(%ebp),%eax
082fa0ce +0x26:  mov    %edx,0x4(%esp)
082fa0d2 +0x2a:  mov    %eax,(%esp)
082fa0d5 +0x2d:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
082fa0da +0x32:  sub    $0x4,%esp
082fa0dd +0x35:  mov    0x8(%ebp),%eax
082fa0e0 +0x38:  lea    0x6c(%eax),%edx
082fa0e3 +0x3b:  lea    -0x10(%ebp),%eax
082fa0e6 +0x3e:  mov    %edx,0x4(%esp)
082fa0ea +0x42:  mov    %eax,(%esp)
082fa0ed +0x45:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082fa0f2 +0x4a:  sub    $0x4,%esp
082fa0f5 +0x4d:  jmp    082fa129 <+0x81>
082fa0f7 +0x4f:  lea    -0xc(%ebp),%eax
082fa0fa +0x52:  mov    %eax,(%esp)
082fa0fd +0x55:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082fa102 +0x5a:  mov    0x4(%eax),%ebx
082fa105 +0x5d:  lea    -0xc(%ebp),%eax
082fa108 +0x60:  mov    %eax,(%esp)
082fa10b +0x63:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082fa110 +0x68:  mov    (%eax),%eax
082fa112 +0x6a:  mov    %ebx,0x4(%esp)
082fa116 +0x6e:  mov    %eax,(%esp)
082fa119 +0x71:  call   08190eae <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii>  ; AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int)
082fa11e +0x76:  lea    -0xc(%ebp),%eax
082fa121 +0x79:  mov    %eax,(%esp)
082fa124 +0x7c:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
082fa129 +0x81:  lea    -0x10(%ebp),%eax
082fa12c +0x84:  mov    %eax,0x4(%esp)
082fa130 +0x88:  lea    -0xc(%ebp),%eax
082fa133 +0x8b:  mov    %eax,(%esp)
082fa136 +0x8e:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
082fa13b +0x93:  test   %al,%al
082fa13d +0x95:  jne    082fa0f7 <+0x4f>
082fa13f +0x97:  mov    0x8(%ebp),%eax
082fa142 +0x9a:  add    $0x6c,%eax
082fa145 +0x9d:  mov    %eax,(%esp)
082fa148 +0xa0:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
082fa14d +0xa5:  jmp    082fa150 <+0xa8>
082fa14f +0xa7:  nop
082fa150 +0xa8:  mov    -0x4(%ebp),%ebx
082fa153 +0xab:  leave
082fa154 +0xac:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::SaveEndurance @ 0x82fa0a8

/* WongWork::CAvatarItemMgr::SaveEndurance() */

void __thiscall WongWork::CAvatarItemMgr::SaveEndurance(CAvatarItemMgr *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [8];
  
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 0x6c));
  if (cVar1 == '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
      AvatarRechargeServer::SaveAvatarEnduranceUnit(*piVar3,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_10);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x6c)
              );
  }
  return;
}
```
