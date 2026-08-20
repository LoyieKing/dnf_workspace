# UpdateEndurance

`_ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii`

`WongWork::CAvatarItemMgr::UpdateEndurance(int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082fa008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fa008  _ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii
#           WongWork::CAvatarItemMgr::UpdateEndurance(int, int)
# range [0x082fa008, 0x082fa0a7]
082fa008 +0x00:  push   %ebp
082fa009 +0x01:  mov    %esp,%ebp
082fa00b +0x03:  sub    $0x38,%esp
082fa00e +0x06:  mov    0x8(%ebp),%eax
082fa011 +0x09:  lea    0x6c(%eax),%ecx
082fa014 +0x0c:  lea    -0x1c(%ebp),%eax
082fa017 +0x0f:  lea    0xc(%ebp),%edx
082fa01a +0x12:  mov    %edx,0x8(%esp)
082fa01e +0x16:  mov    %ecx,0x4(%esp)
082fa022 +0x1a:  mov    %eax,(%esp)
082fa025 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
082fa02a +0x22:  sub    $0x4,%esp
082fa02d +0x25:  mov    0x8(%ebp),%eax
082fa030 +0x28:  lea    0x6c(%eax),%edx
082fa033 +0x2b:  lea    -0x20(%ebp),%eax
082fa036 +0x2e:  mov    %edx,0x4(%esp)
082fa03a +0x32:  mov    %eax,(%esp)
082fa03d +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082fa042 +0x3a:  sub    $0x4,%esp
082fa045 +0x3d:  lea    -0x20(%ebp),%eax
082fa048 +0x40:  mov    %eax,0x4(%esp)
082fa04c +0x44:  lea    -0x1c(%ebp),%eax
082fa04f +0x47:  mov    %eax,(%esp)
082fa052 +0x4a:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
082fa057 +0x4f:  test   %al,%al
082fa059 +0x51:  je     082fa095 <+0x8d>
082fa05b +0x53:  lea    0x10(%ebp),%eax
082fa05e +0x56:  mov    %eax,0x8(%esp)
082fa062 +0x5a:  lea    0xc(%ebp),%eax
082fa065 +0x5d:  mov    %eax,0x4(%esp)
082fa069 +0x61:  lea    -0x10(%ebp),%eax
082fa06c +0x64:  mov    %eax,(%esp)
082fa06f +0x67:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
082fa074 +0x6c:  mov    0x8(%ebp),%eax
082fa077 +0x6f:  lea    0x6c(%eax),%ecx
082fa07a +0x72:  lea    -0x18(%ebp),%eax
082fa07d +0x75:  lea    -0x10(%ebp),%edx
082fa080 +0x78:  mov    %edx,0x8(%esp)
082fa084 +0x7c:  mov    %ecx,0x4(%esp)
082fa088 +0x80:  mov    %eax,(%esp)
082fa08b +0x83:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
082fa090 +0x88:  sub    $0x4,%esp
082fa093 +0x8b:  jmp    082fa0a6 <+0x9e>
082fa095 +0x8d:  lea    -0x1c(%ebp),%eax
082fa098 +0x90:  mov    %eax,(%esp)
082fa09b +0x93:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082fa0a0 +0x98:  mov    0x10(%ebp),%edx
082fa0a3 +0x9b:  mov    %edx,0x4(%eax)
082fa0a6 +0x9e:  leave
082fa0a7 +0x9f:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::UpdateEndurance @ 0x82fa008

/* WongWork::CAvatarItemMgr::UpdateEndurance(int, int) */

void __thiscall
WongWork::CAvatarItemMgr::UpdateEndurance(CAvatarItemMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  pair local_1c [8];
  pair<int_const,int> local_14 [16];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_20);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
    *(int *)(iVar2 + 4) = param_2;
  }
  else {
    std::pair<int_const,int>::pair<int&,int&>(local_14,&param_1,&param_2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_1c);
  }
  return;
}
```
