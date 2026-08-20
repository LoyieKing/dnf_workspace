# GetReturnItemRate

`_ZNK8WongWork12CUserPremium17GetReturnItemRateEi`

`WongWork::CUserPremium::GetReturnItemRate(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ae7a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ae7a8  _ZNK8WongWork12CUserPremium17GetReturnItemRateEi
#           WongWork::CUserPremium::GetReturnItemRate(int) const
# range [0x086ae7a8, 0x086ae833]
086ae7a8 +0x00:  push   %ebp
086ae7a9 +0x01:  mov    %esp,%ebp
086ae7ab +0x03:  sub    $0x28,%esp
086ae7ae +0x06:  mov    0x8(%ebp),%eax
086ae7b1 +0x09:  add    $0x964,%eax
086ae7b6 +0x0e:  mov    %eax,(%esp)
086ae7b9 +0x11:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
086ae7be +0x16:  test   %al,%al
086ae7c0 +0x18:  je     086ae7c9 <+0x21>
086ae7c2 +0x1a:  mov    $0x0,%eax
086ae7c7 +0x1f:  jmp    086ae831 <+0x89>
086ae7c9 +0x21:  mov    0x8(%ebp),%eax
086ae7cc +0x24:  lea    0x964(%eax),%ecx
086ae7d2 +0x2a:  lea    -0x10(%ebp),%eax
086ae7d5 +0x2d:  lea    0xc(%ebp),%edx
086ae7d8 +0x30:  mov    %edx,0x8(%esp)
086ae7dc +0x34:  mov    %ecx,0x4(%esp)
086ae7e0 +0x38:  mov    %eax,(%esp)
086ae7e3 +0x3b:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
086ae7e8 +0x40:  sub    $0x4,%esp
086ae7eb +0x43:  mov    0x8(%ebp),%eax
086ae7ee +0x46:  lea    0x964(%eax),%edx
086ae7f4 +0x4c:  lea    -0xc(%ebp),%eax
086ae7f7 +0x4f:  mov    %edx,0x4(%esp)
086ae7fb +0x53:  mov    %eax,(%esp)
086ae7fe +0x56:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
086ae803 +0x5b:  sub    $0x4,%esp
086ae806 +0x5e:  lea    -0xc(%ebp),%eax
086ae809 +0x61:  mov    %eax,0x4(%esp)
086ae80d +0x65:  lea    -0x10(%ebp),%eax
086ae810 +0x68:  mov    %eax,(%esp)
086ae813 +0x6b:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
086ae818 +0x70:  test   %al,%al
086ae81a +0x72:  je     086ae82c <+0x84>
086ae81c +0x74:  lea    -0x10(%ebp),%eax
086ae81f +0x77:  mov    %eax,(%esp)
086ae822 +0x7a:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
086ae827 +0x7f:  mov    0x4(%eax),%eax
086ae82a +0x82:  jmp    086ae831 <+0x89>
086ae82c +0x84:  mov    $0x0,%eax
086ae831 +0x89:  leave
086ae832 +0x8a:  ret
086ae833 +0x8b:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::GetReturnItemRate @ 0x86ae7a8

/* WongWork::CUserPremium::GetReturnItemRate(int) const */

undefined4 WongWork::CUserPremium::GetReturnItemRate(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (param_1 + 0x964));
  if (cVar1 == '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
