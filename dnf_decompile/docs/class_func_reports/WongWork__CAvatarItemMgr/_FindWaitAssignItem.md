# _FindWaitAssignItem

`_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi`

`WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9d98  _ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi
#           WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const
# range [0x082f9d98, 0x082f9e01]
082f9d98 +0x00:  push   %ebp
082f9d99 +0x01:  mov    %esp,%ebp
082f9d9b +0x03:  sub    $0x28,%esp
082f9d9e +0x06:  mov    0x8(%ebp),%eax
082f9da1 +0x09:  lea    0x18(%eax),%ecx
082f9da4 +0x0c:  lea    -0x10(%ebp),%eax
082f9da7 +0x0f:  lea    0xc(%ebp),%edx
082f9daa +0x12:  mov    %edx,0x8(%esp)
082f9dae +0x16:  mov    %ecx,0x4(%esp)
082f9db2 +0x1a:  mov    %eax,(%esp)
082f9db5 +0x1d:  call   082faa4e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x880>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x880
082f9dba +0x22:  sub    $0x4,%esp
082f9dbd +0x25:  mov    0x8(%ebp),%eax
082f9dc0 +0x28:  lea    0x18(%eax),%edx
082f9dc3 +0x2b:  lea    -0xc(%ebp),%eax
082f9dc6 +0x2e:  mov    %edx,0x4(%esp)
082f9dca +0x32:  mov    %eax,(%esp)
082f9dcd +0x35:  call   082fa820 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x652>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x652
082f9dd2 +0x3a:  sub    $0x4,%esp
082f9dd5 +0x3d:  lea    -0xc(%ebp),%eax
082f9dd8 +0x40:  mov    %eax,0x4(%esp)
082f9ddc +0x44:  lea    -0x10(%ebp),%eax
082f9ddf +0x47:  mov    %eax,(%esp)
082f9de2 +0x4a:  call   082faa7a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8ac>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8ac
082f9de7 +0x4f:  test   %al,%al
082f9de9 +0x51:  je     082f9df2 <+0x5a>
082f9deb +0x53:  mov    $0x0,%eax
082f9df0 +0x58:  jmp    082f9e00 <+0x68>
082f9df2 +0x5a:  lea    -0x10(%ebp),%eax
082f9df5 +0x5d:  mov    %eax,(%esp)
082f9df8 +0x60:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9dfd +0x65:  mov    0x4(%eax),%eax
082f9e00 +0x68:  leave
082f9e01 +0x69:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::_FindWaitAssignItem @ 0x82f9d98

/* WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const */

undefined4 WongWork::CAvatarItemMgr::_FindWaitAssignItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
