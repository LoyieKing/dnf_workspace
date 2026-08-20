# reset_tag_info_to_me

`_ZN5CUser20reset_tag_info_to_meEj`

`CUser::reset_tag_info_to_me(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864f930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864f930  _ZN5CUser20reset_tag_info_to_meEj
#           CUser::reset_tag_info_to_me(unsigned int)
# range [0x0864f930, 0x0864fa07]
0864f930 +0x00:  push   %ebp
0864f931 +0x01:  mov    %esp,%ebp
0864f933 +0x03:  sub    $0x28,%esp
0864f936 +0x06:  movb   $0x0,-0x9(%ebp)
0864f93a +0x0a:  mov    0x8(%ebp),%eax
0864f93d +0x0d:  lea    0x796e8(%eax),%edx
0864f943 +0x13:  lea    -0x14(%ebp),%eax
0864f946 +0x16:  mov    %edx,0x4(%esp)
0864f94a +0x1a:  mov    %eax,(%esp)
0864f94d +0x1d:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
0864f952 +0x22:  sub    $0x4,%esp
0864f955 +0x25:  jmp    0864f9ba <+0x8a>
0864f957 +0x27:  lea    -0x14(%ebp),%eax
0864f95a +0x2a:  mov    %eax,(%esp)
0864f95d +0x2d:  call   084f0f5a <_GLOBAL__I__Z7getUserj+0x7f0c>  ; global constructors keyed to getUser(unsigned int)+0x7f0c
0864f962 +0x32:  mov    0x14b8(%eax),%eax
0864f968 +0x38:  cmp    0xc(%ebp),%eax
0864f96b +0x3b:  sete   %al
0864f96e +0x3e:  test   %al,%al
0864f970 +0x40:  je     0864f9af <+0x7f>
0864f972 +0x42:  lea    -0x14(%ebp),%eax
0864f975 +0x45:  mov    %eax,(%esp)
0864f978 +0x48:  call   084f0f5a <_GLOBAL__I__Z7getUserj+0x7f0c>  ; global constructors keyed to getUser(unsigned int)+0x7f0c
0864f97d +0x4d:  movl   $0x0,0x14b8(%eax)
0864f987 +0x57:  lea    -0x14(%ebp),%eax
0864f98a +0x5a:  mov    %eax,(%esp)
0864f98d +0x5d:  call   084f0f5a <_GLOBAL__I__Z7getUserj+0x7f0c>  ; global constructors keyed to getUser(unsigned int)+0x7f0c
0864f992 +0x62:  movb   $0x0,0x14b7(%eax)
0864f999 +0x69:  lea    -0x14(%ebp),%eax
0864f99c +0x6c:  mov    %eax,(%esp)
0864f99f +0x6f:  call   084f0f5a <_GLOBAL__I__Z7getUserj+0x7f0c>  ; global constructors keyed to getUser(unsigned int)+0x7f0c
0864f9a4 +0x74:  movb   $0x0,0x14bc(%eax)
0864f9ab +0x7b:  movb   $0x1,-0x9(%ebp)
0864f9af +0x7f:  lea    -0x14(%ebp),%eax
0864f9b2 +0x82:  mov    %eax,(%esp)
0864f9b5 +0x85:  call   084f0f42 <_GLOBAL__I__Z7getUserj+0x7ef4>  ; global constructors keyed to getUser(unsigned int)+0x7ef4
0864f9ba +0x8a:  mov    0x8(%ebp),%eax
0864f9bd +0x8d:  lea    0x796e8(%eax),%edx
0864f9c3 +0x93:  lea    -0x10(%ebp),%eax
0864f9c6 +0x96:  mov    %edx,0x4(%esp)
0864f9ca +0x9a:  mov    %eax,(%esp)
0864f9cd +0x9d:  call   0827935c <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x40>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x40
0864f9d2 +0xa2:  sub    $0x4,%esp
0864f9d5 +0xa5:  lea    -0x10(%ebp),%eax
0864f9d8 +0xa8:  mov    %eax,0x4(%esp)
0864f9dc +0xac:  lea    -0x14(%ebp),%eax
0864f9df +0xaf:  mov    %eax,(%esp)
0864f9e2 +0xb2:  call   084f0f15 <_GLOBAL__I__Z7getUserj+0x7ec7>  ; global constructors keyed to getUser(unsigned int)+0x7ec7
0864f9e7 +0xb7:  test   %al,%al
0864f9e9 +0xb9:  jne    0864f957 <+0x27>
0864f9ef +0xbf:  cmpb   $0x0,-0x9(%ebp)
0864f9f3 +0xc3:  je     0864fa05 <+0xd5>
0864f9f5 +0xc5:  mov    0x8(%ebp),%eax
0864f9f8 +0xc8:  add    $0x796f4,%eax
0864f9fd +0xcd:  mov    %eax,(%esp)
0864fa00 +0xd0:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0864fa05 +0xd5:  leave
0864fa06 +0xd6:  ret
0864fa07 +0xd7:  nop
```

## 反编译 C

```c
// CUser::reset_tag_info_to_me @ 0x864f930

/* CUser::reset_tag_info_to_me(unsigned int) */

void __thiscall CUser::reset_tag_info_to_me(CUser *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_18 [4];
  __normal_iterator local_14 [7];
  char local_d;
  
  local_d = '\0';
  std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
  while( true ) {
    std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
            ::operator->(local_18);
    if (*(uint *)(iVar2 + 0x14b8) == param_1) {
      iVar2 = __gnu_cxx::
              __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_18);
      *(undefined4 *)(iVar2 + 0x14b8) = 0;
      iVar2 = __gnu_cxx::
              __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_18);
      *(undefined1 *)(iVar2 + 0x14b7) = 0;
      iVar2 = __gnu_cxx::
              __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_18);
      *(undefined1 *)(iVar2 + 0x14bc) = 0;
      local_d = '\x01';
    }
    __gnu_cxx::
    __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    operator++(local_18);
  }
  if (local_d != '\0') {
    CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  }
  return;
}
```
