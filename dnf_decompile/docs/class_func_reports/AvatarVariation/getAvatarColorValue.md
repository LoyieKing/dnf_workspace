# getAvatarColorValue

`_ZN15AvatarVariation19getAvatarColorValueEi`

`AvatarVariation::getAvatarColorValue(int)`

| 类 | 地址 |
|---|---|
| `AvatarVariation` | `0x088d4782` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d4782  _ZN15AvatarVariation19getAvatarColorValueEi
#           AvatarVariation::getAvatarColorValue(int)
# range [0x088d4782, 0x088d4853]
088d4782 +0x00:  push   %ebp
088d4783 +0x01:  mov    %esp,%ebp
088d4785 +0x03:  push   %ebx
088d4786 +0x04:  sub    $0x34,%esp
088d4789 +0x07:  mov    0x8(%ebp),%ebx
088d478c +0x0a:  mov    0xc(%ebp),%eax
088d478f +0x0d:  test   %eax,%eax
088d4791 +0x0f:  js     088d479d <+0x1b>
088d4793 +0x11:  mov    0xc(%ebp),%eax
088d4796 +0x14:  cmp    $0x1ff,%eax
088d479b +0x19:  jle    088d47a4 <+0x22>
088d479d +0x1b:  movl   $0x0,0xc(%ebp)
088d47a4 +0x22:  call   088d46d3 <_ZN15AvatarVariation22getAvatarColorInfoInstEv>  ; AvatarVariation::getAvatarColorInfoInst()
088d47a9 +0x27:  mov    %eax,-0xc(%ebp)
088d47ac +0x2a:  cmpl   $0x0,-0xc(%ebp)
088d47b0 +0x2e:  jne    088d47bf <+0x3d>
088d47b2 +0x30:  mov    %ebx,(%esp)
088d47b5 +0x33:  call   088d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>  ; AvatarVariation::colorRGB::colorRGB()
088d47ba +0x38:  jmp    088d484d <+0xcb>
088d47bf +0x3d:  lea    -0x18(%ebp),%eax
088d47c2 +0x40:  lea    0xc(%ebp),%edx
088d47c5 +0x43:  mov    %edx,0x8(%esp)
088d47c9 +0x47:  mov    -0xc(%ebp),%edx
088d47cc +0x4a:  mov    %edx,0x4(%esp)
088d47d0 +0x4e:  mov    %eax,(%esp)
088d47d3 +0x51:  call   0823769e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd48
088d47d8 +0x56:  sub    $0x4,%esp
088d47db +0x59:  lea    -0x18(%ebp),%eax
088d47de +0x5c:  mov    %eax,0x4(%esp)
088d47e2 +0x60:  lea    -0x1c(%ebp),%eax
088d47e5 +0x63:  mov    %eax,(%esp)
088d47e8 +0x66:  call   088d4a70 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0xd4>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0xd4
088d47ed +0x6b:  lea    -0x10(%ebp),%eax
088d47f0 +0x6e:  mov    -0xc(%ebp),%edx
088d47f3 +0x71:  mov    %edx,0x4(%esp)
088d47f7 +0x75:  mov    %eax,(%esp)
088d47fa +0x78:  call   08237678 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd22>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd22
088d47ff +0x7d:  sub    $0x4,%esp
088d4802 +0x80:  lea    -0x10(%ebp),%eax
088d4805 +0x83:  mov    %eax,0x4(%esp)
088d4809 +0x87:  lea    -0x14(%ebp),%eax
088d480c +0x8a:  mov    %eax,(%esp)
088d480f +0x8d:  call   088d4a70 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0xd4>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0xd4
088d4814 +0x92:  lea    -0x14(%ebp),%eax
088d4817 +0x95:  mov    %eax,0x4(%esp)
088d481b +0x99:  lea    -0x1c(%ebp),%eax
088d481e +0x9c:  mov    %eax,(%esp)
088d4821 +0x9f:  call   088d4a80 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0xe4>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0xe4
088d4826 +0xa4:  test   %al,%al
088d4828 +0xa6:  je     088d4845 <+0xc3>
088d482a +0xa8:  lea    -0x1c(%ebp),%eax
088d482d +0xab:  mov    %eax,(%esp)
088d4830 +0xae:  call   088d4a94 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0xf8>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0xf8
088d4835 +0xb3:  movzwl 0x4(%eax),%edx
088d4839 +0xb7:  mov    %dx,(%ebx)
088d483c +0xba:  movzbl 0x6(%eax),%eax
088d4840 +0xbe:  mov    %al,0x2(%ebx)
088d4843 +0xc1:  jmp    088d484d <+0xcb>
088d4845 +0xc3:  mov    %ebx,(%esp)
088d4848 +0xc6:  call   088d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>  ; AvatarVariation::colorRGB::colorRGB()
088d484d +0xcb:  mov    %ebx,%eax
088d484f +0xcd:  mov    -0x4(%ebp),%ebx
088d4852 +0xd0:  leave
088d4853 +0xd1:  ret    $0x4
```

## 反编译 C

```c
// AvatarVariation::getAvatarColorValue @ 0x88d4782

/* AvatarVariation::getAvatarColorValue(int) */

int AvatarVariation::getAvatarColorValue(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>> local_18 [4];
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_14 [4];
  int local_10;
  
  local_10 = getAvatarColorInfoInst();
  if (local_10 == 0) {
    colorRGB::colorRGB((colorRGB *)param_1);
  }
  else {
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::find((int *)local_1c);
    std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
    _Rb_tree_const_iterator(local_20,local_1c);
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::end(local_14);
    std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
    _Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      colorRGB::colorRGB((colorRGB *)param_1);
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
              operator->(local_20);
      *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + 4);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 6);
    }
  }
  return param_1;
}
```
