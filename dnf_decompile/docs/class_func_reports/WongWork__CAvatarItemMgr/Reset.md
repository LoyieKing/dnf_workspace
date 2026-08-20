# Reset

`_ZN8WongWork14CAvatarItemMgr5ResetEv`

`WongWork::CAvatarItemMgr::Reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9ae4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9ae4  _ZN8WongWork14CAvatarItemMgr5ResetEv
#           WongWork::CAvatarItemMgr::Reset()
# range [0x082f9ae4, 0x082f9cab]
082f9ae4 +0x000:  push   %ebp
082f9ae5 +0x001:  mov    %esp,%ebp
082f9ae7 +0x003:  sub    $0x38,%esp
082f9aea +0x006:  mov    0x8(%ebp),%eax
082f9aed +0x009:  movl   $0x1,0x30(%eax)
082f9af4 +0x010:  mov    0x8(%ebp),%eax
082f9af7 +0x013:  mov    %eax,(%esp)
082f9afa +0x016:  call   082fa9ca <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x7fc>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x7fc
082f9aff +0x01b:  test   %al,%al
082f9b01 +0x01d:  je     082f9b1c <+0x38>
082f9b03 +0x01f:  mov    0x8(%ebp),%eax
082f9b06 +0x022:  add    $0x18,%eax
082f9b09 +0x025:  mov    %eax,(%esp)
082f9b0c +0x028:  call   082fa9ca <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x7fc>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x7fc
082f9b11 +0x02d:  test   %al,%al
082f9b13 +0x02f:  je     082f9b1c <+0x38>
082f9b15 +0x031:  mov    $0x1,%eax
082f9b1a +0x036:  jmp    082f9b21 <+0x3d>
082f9b1c +0x038:  mov    $0x0,%eax
082f9b21 +0x03d:  test   %al,%al
082f9b23 +0x03f:  jne    082f9ca8 <+0x1c4>
082f9b29 +0x045:  mov    0x8(%ebp),%edx
082f9b2c +0x048:  lea    -0x18(%ebp),%eax
082f9b2f +0x04b:  mov    %edx,0x4(%esp)
082f9b33 +0x04f:  mov    %eax,(%esp)
082f9b36 +0x052:  call   082fa9de <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x810>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x810
082f9b3b +0x057:  sub    $0x4,%esp
082f9b3e +0x05a:  lea    -0x18(%ebp),%eax
082f9b41 +0x05d:  mov    %eax,0x4(%esp)
082f9b45 +0x061:  lea    -0x1c(%ebp),%eax
082f9b48 +0x064:  mov    %eax,(%esp)
082f9b4b +0x067:  call   082faa04 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x836>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x836
082f9b50 +0x06c:  mov    0x8(%ebp),%edx
082f9b53 +0x06f:  lea    -0x14(%ebp),%eax
082f9b56 +0x072:  mov    %edx,0x4(%esp)
082f9b5a +0x076:  mov    %eax,(%esp)
082f9b5d +0x079:  call   082faa14 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x846>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x846
082f9b62 +0x07e:  sub    $0x4,%esp
082f9b65 +0x081:  lea    -0x14(%ebp),%eax
082f9b68 +0x084:  mov    %eax,0x4(%esp)
082f9b6c +0x088:  lea    -0x24(%ebp),%eax
082f9b6f +0x08b:  mov    %eax,(%esp)
082f9b72 +0x08e:  call   082faa04 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x836>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x836
082f9b77 +0x093:  jmp    082f9bb8 <+0xd4>
082f9b79 +0x095:  lea    -0x24(%ebp),%eax
082f9b7c +0x098:  mov    %eax,(%esp)
082f9b7f +0x09b:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9b84 +0x0a0:  mov    0x4(%eax),%eax
082f9b87 +0x0a3:  mov    %eax,(%esp)
082f9b8a +0x0a6:  call   082fa35a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x18c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x18c
082f9b8f +0x0ab:  lea    -0x24(%ebp),%eax
082f9b92 +0x0ae:  mov    %eax,(%esp)
082f9b95 +0x0b1:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9b9a +0x0b6:  mov    0x4(%eax),%eax
082f9b9d +0x0b9:  mov    %eax,0x4(%esp)
082f9ba1 +0x0bd:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f9ba8 +0x0c4:  call   082fa8a0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6d2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6d2
082f9bad +0x0c9:  lea    -0x24(%ebp),%eax
082f9bb0 +0x0cc:  mov    %eax,(%esp)
082f9bb3 +0x0cf:  call   082fa85a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x68c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x68c
082f9bb8 +0x0d4:  lea    -0x1c(%ebp),%eax
082f9bbb +0x0d7:  mov    %eax,0x4(%esp)
082f9bbf +0x0db:  lea    -0x24(%ebp),%eax
082f9bc2 +0x0de:  mov    %eax,(%esp)
082f9bc5 +0x0e1:  call   082fa846 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x678>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x678
082f9bca +0x0e6:  test   %al,%al
082f9bcc +0x0e8:  jne    082f9b79 <+0x95>
082f9bce +0x0ea:  mov    0x8(%ebp),%eax
082f9bd1 +0x0ed:  lea    0x18(%eax),%edx
082f9bd4 +0x0f0:  lea    -0x10(%ebp),%eax
082f9bd7 +0x0f3:  mov    %edx,0x4(%esp)
082f9bdb +0x0f7:  mov    %eax,(%esp)
082f9bde +0x0fa:  call   082fa9de <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x810>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x810
082f9be3 +0x0ff:  sub    $0x4,%esp
082f9be6 +0x102:  lea    -0x10(%ebp),%eax
082f9be9 +0x105:  mov    %eax,0x4(%esp)
082f9bed +0x109:  lea    -0x20(%ebp),%eax
082f9bf0 +0x10c:  mov    %eax,(%esp)
082f9bf3 +0x10f:  call   082faa04 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x836>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x836
082f9bf8 +0x114:  mov    0x8(%ebp),%eax
082f9bfb +0x117:  lea    0x18(%eax),%edx
082f9bfe +0x11a:  lea    -0xc(%ebp),%eax
082f9c01 +0x11d:  mov    %edx,0x4(%esp)
082f9c05 +0x121:  mov    %eax,(%esp)
082f9c08 +0x124:  call   082faa14 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x846>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x846
082f9c0d +0x129:  sub    $0x4,%esp
082f9c10 +0x12c:  lea    -0xc(%ebp),%eax
082f9c13 +0x12f:  mov    %eax,0x4(%esp)
082f9c17 +0x133:  lea    -0x28(%ebp),%eax
082f9c1a +0x136:  mov    %eax,(%esp)
082f9c1d +0x139:  call   082faa04 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x836>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x836
082f9c22 +0x13e:  jmp    082f9c4d <+0x169>
082f9c24 +0x140:  lea    -0x28(%ebp),%eax
082f9c27 +0x143:  mov    %eax,(%esp)
082f9c2a +0x146:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9c2f +0x14b:  mov    0x4(%eax),%eax
082f9c32 +0x14e:  mov    %eax,0x4(%esp)
082f9c36 +0x152:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f9c3d +0x159:  call   082fa8a0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6d2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6d2
082f9c42 +0x15e:  lea    -0x28(%ebp),%eax
082f9c45 +0x161:  mov    %eax,(%esp)
082f9c48 +0x164:  call   082fa85a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x68c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x68c
082f9c4d +0x169:  lea    -0x20(%ebp),%eax
082f9c50 +0x16c:  mov    %eax,0x4(%esp)
082f9c54 +0x170:  lea    -0x28(%ebp),%eax
082f9c57 +0x173:  mov    %eax,(%esp)
082f9c5a +0x176:  call   082fa846 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x678>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x678
082f9c5f +0x17b:  test   %al,%al
082f9c61 +0x17d:  jne    082f9c24 <+0x140>
082f9c63 +0x17f:  mov    0x8(%ebp),%eax
082f9c66 +0x182:  mov    %eax,(%esp)
082f9c69 +0x185:  call   082faa3a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x86c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x86c
082f9c6e +0x18a:  mov    0x8(%ebp),%eax
082f9c71 +0x18d:  add    $0x18,%eax
082f9c74 +0x190:  mov    %eax,(%esp)
082f9c77 +0x193:  call   082faa3a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x86c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x86c
082f9c7c +0x198:  mov    0x8(%ebp),%eax
082f9c7f +0x19b:  add    $0x34,%eax
082f9c82 +0x19e:  mov    %eax,(%esp)
082f9c85 +0x1a1:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
082f9c8a +0x1a6:  mov    0x8(%ebp),%eax
082f9c8d +0x1a9:  add    $0x54,%eax
082f9c90 +0x1ac:  mov    %eax,(%esp)
082f9c93 +0x1af:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
082f9c98 +0x1b4:  mov    0x8(%ebp),%eax
082f9c9b +0x1b7:  add    $0x6c,%eax
082f9c9e +0x1ba:  mov    %eax,(%esp)
082f9ca1 +0x1bd:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
082f9ca6 +0x1c2:  jmp    082f9ca9 <+0x1c5>
082f9ca8 +0x1c4:  nop
082f9ca9 +0x1c5:  leave
082f9caa +0x1c6:  ret
082f9cab +0x1c7:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::Reset @ 0x82f9ae4

/* WongWork::CAvatarItemMgr::Reset() */

void __thiscall WongWork::CAvatarItemMgr::Reset(CAvatarItemMgr *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_2c [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_20 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_1c [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_18 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  *(undefined4 *)(this + 0x30) = 1;
  cVar2 = std::
          map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
          ::empty((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
                   *)this);
  if (cVar2 != '\0') {
    cVar2 = std::
            map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
            ::empty((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
                     *)(this + 0x18));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_082f9b21;
    }
  }
  bVar1 = false;
LAB_082f9b21:
  if (!bVar1) {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::end(local_1c);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::begin(local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_18);
    while( true ) {
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                        (local_28,(_Rb_tree_const_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_28);
      Avatar_Item::init(*(Avatar_Item **)(iVar3 + 4));
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_28);
      DynamicPool<WongWork::Avatar_Item>::Free
                ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,*(Avatar_Item **)(iVar3 + 4)
                );
      std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
                (local_28);
    }
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::end(local_14);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::begin(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::
    _Rb_tree_const_iterator(local_2c,(_Rb_tree_iterator *)local_10);
    while( true ) {
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                        (local_2c,(_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                        (local_2c);
      DynamicPool<WongWork::Avatar_Item>::Free
                ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool,*(Avatar_Item **)(iVar3 + 4)
                );
      std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
                (local_2c);
    }
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::clear((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
             *)this);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::clear((map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
             *)(this + 0x18));
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)(this + 0x34));
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x54)
              );
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x6c)
              );
  }
  return;
}
```
