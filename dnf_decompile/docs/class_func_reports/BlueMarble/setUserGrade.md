# setUserGrade

`_ZN10BlueMarble12setUserGradeEi`

`BlueMarble::setUserGrade(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7afc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7afc  _ZN10BlueMarble12setUserGradeEi
#           BlueMarble::setUserGrade(int)
# range [0x080d7afc, 0x080d7d5d]
080d7afc +0x000:  push   %ebp
080d7afd +0x001:  mov    %esp,%ebp
080d7aff +0x003:  push   %esi
080d7b00 +0x004:  push   %ebx
080d7b01 +0x005:  sub    $0x60,%esp
080d7b04 +0x008:  lea    -0x48(%ebp),%eax
080d7b07 +0x00b:  mov    %eax,(%esp)
080d7b0a +0x00e:  call   080da60e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x7ab>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x7ab
080d7b0f +0x013:  mov    0xc(%ebp),%eax
080d7b12 +0x016:  mov    0x8(%ebp),%edx
080d7b15 +0x019:  add    $0x4,%edx
080d7b18 +0x01c:  mov    %eax,0x4(%esp)
080d7b1c +0x020:  mov    %edx,(%esp)
080d7b1f +0x023:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7b24 +0x028:  movl   $0x0,0x4(%esp)
080d7b2c +0x030:  mov    %eax,(%esp)
080d7b2f +0x033:  call   080d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>  ; BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T)
080d7b34 +0x038:  movl   $0x0,-0x50(%ebp)
080d7b3b +0x03f:  jmp    080d7c09 <+0x10d>
080d7b40 +0x044:  mov    -0x50(%ebp),%eax
080d7b43 +0x047:  mov    0x8(%ebp),%edx
080d7b46 +0x04a:  add    $0x4,%edx
080d7b49 +0x04d:  mov    %eax,0x4(%esp)
080d7b4d +0x051:  mov    %edx,(%esp)
080d7b50 +0x054:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7b55 +0x059:  mov    %eax,(%esp)
080d7b58 +0x05c:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d7b5d +0x061:  test   %eax,%eax
080d7b5f +0x063:  sete   %al
080d7b62 +0x066:  test   %al,%al
080d7b64 +0x068:  jne    080d7bfc <+0x100>
080d7b6a +0x06e:  mov    -0x50(%ebp),%eax
080d7b6d +0x071:  mov    0x8(%ebp),%edx
080d7b70 +0x074:  add    $0x4,%edx
080d7b73 +0x077:  mov    %eax,0x4(%esp)
080d7b77 +0x07b:  mov    %edx,(%esp)
080d7b7a +0x07e:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7b7f +0x083:  mov    %eax,(%esp)
080d7b82 +0x086:  call   080d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>  ; BlueMarbleUserInfo::getGrade() const
080d7b87 +0x08b:  test   %eax,%eax
080d7b89 +0x08d:  sete   %al
080d7b8c +0x090:  test   %al,%al
080d7b8e +0x092:  jne    080d7bff <+0x103>
080d7b90 +0x094:  mov    -0x50(%ebp),%eax
080d7b93 +0x097:  mov    0x8(%ebp),%edx
080d7b96 +0x09a:  add    $0x4,%edx
080d7b99 +0x09d:  mov    %eax,0x4(%esp)
080d7b9d +0x0a1:  mov    %edx,(%esp)
080d7ba0 +0x0a4:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7ba5 +0x0a9:  mov    %eax,(%esp)
080d7ba8 +0x0ac:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d7bad +0x0b1:  mov    %eax,-0x1c(%ebp)
080d7bb0 +0x0b4:  lea    -0x24(%ebp),%eax
080d7bb3 +0x0b7:  lea    -0x50(%ebp),%edx
080d7bb6 +0x0ba:  mov    %edx,0x8(%esp)
080d7bba +0x0be:  lea    -0x1c(%ebp),%edx
080d7bbd +0x0c1:  mov    %edx,0x4(%esp)
080d7bc1 +0x0c5:  mov    %eax,(%esp)
080d7bc4 +0x0c8:  call   080da687 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x824>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x824
080d7bc9 +0x0cd:  sub    $0x4,%esp
080d7bcc +0x0d0:  lea    -0x24(%ebp),%eax
080d7bcf +0x0d3:  mov    %eax,0x4(%esp)
080d7bd3 +0x0d7:  lea    -0x2c(%ebp),%eax
080d7bd6 +0x0da:  mov    %eax,(%esp)
080d7bd9 +0x0dd:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
080d7bde +0x0e2:  lea    -0x30(%ebp),%eax
080d7be1 +0x0e5:  lea    -0x2c(%ebp),%edx
080d7be4 +0x0e8:  mov    %edx,0x8(%esp)
080d7be8 +0x0ec:  lea    -0x48(%ebp),%edx
080d7beb +0x0ef:  mov    %edx,0x4(%esp)
080d7bef +0x0f3:  mov    %eax,(%esp)
080d7bf2 +0x0f6:  call   080da6ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x86b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x86b
080d7bf7 +0x0fb:  sub    $0x4,%esp
080d7bfa +0x0fe:  jmp    080d7c00 <+0x104>
080d7bfc +0x100:  nop
080d7bfd +0x101:  jmp    080d7c00 <+0x104>
080d7bff +0x103:  nop
080d7c00 +0x104:  mov    -0x50(%ebp),%eax
080d7c03 +0x107:  add    $0x1,%eax
080d7c06 +0x10a:  mov    %eax,-0x50(%ebp)
080d7c09 +0x10d:  mov    0x8(%ebp),%eax
080d7c0c +0x110:  mov    0x38(%eax),%eax
080d7c0f +0x113:  mov    0x30(%eax),%edx
080d7c12 +0x116:  mov    -0x50(%ebp),%eax
080d7c15 +0x119:  cmp    %eax,%edx
080d7c17 +0x11b:  setg   %al
080d7c1a +0x11e:  test   %al,%al
080d7c1c +0x120:  jne    080d7b40 <+0x44>
080d7c22 +0x126:  lea    -0x4c(%ebp),%eax
080d7c25 +0x129:  lea    -0x48(%ebp),%edx
080d7c28 +0x12c:  mov    %edx,0x4(%esp)
080d7c2c +0x130:  mov    %eax,(%esp)
080d7c2f +0x133:  call   080da6fa <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x897>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x897
080d7c34 +0x138:  sub    $0x4,%esp
080d7c37 +0x13b:  movl   $0x0,-0x14(%ebp)
080d7c3e +0x142:  movl   $0x1,-0x10(%ebp)
080d7c45 +0x149:  movl   $0x0,-0xc(%ebp)
080d7c4c +0x150:  jmp    080d7cfd <+0x201>
080d7c51 +0x155:  lea    -0x4c(%ebp),%eax
080d7c54 +0x158:  mov    %eax,(%esp)
080d7c57 +0x15b:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080d7c5c +0x160:  mov    (%eax),%eax
080d7c5e +0x162:  cmp    -0xc(%ebp),%eax
080d7c61 +0x165:  sete   %al
080d7c64 +0x168:  test   %al,%al
080d7c66 +0x16a:  je     080d7ca9 <+0x1ad>
080d7c68 +0x16c:  lea    -0x4c(%ebp),%eax
080d7c6b +0x16f:  mov    %eax,(%esp)
080d7c6e +0x172:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080d7c73 +0x177:  mov    (%eax),%eax
080d7c75 +0x179:  mov    %eax,-0xc(%ebp)
080d7c78 +0x17c:  mov    -0x14(%ebp),%ebx
080d7c7b +0x17f:  lea    -0x4c(%ebp),%eax
080d7c7e +0x182:  mov    %eax,(%esp)
080d7c81 +0x185:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080d7c86 +0x18a:  mov    0x4(%eax),%eax
080d7c89 +0x18d:  mov    0x8(%ebp),%edx
080d7c8c +0x190:  add    $0x4,%edx
080d7c8f +0x193:  mov    %eax,0x4(%esp)
080d7c93 +0x197:  mov    %edx,(%esp)
080d7c96 +0x19a:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7c9b +0x19f:  mov    %ebx,0x4(%esp)
080d7c9f +0x1a3:  mov    %eax,(%esp)
080d7ca2 +0x1a6:  call   080d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>  ; BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T)
080d7ca7 +0x1ab:  jmp    080d7cf2 <+0x1f6>
080d7ca9 +0x1ad:  lea    -0x4c(%ebp),%eax
080d7cac +0x1b0:  mov    %eax,(%esp)
080d7caf +0x1b3:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080d7cb4 +0x1b8:  mov    (%eax),%eax
080d7cb6 +0x1ba:  mov    %eax,-0xc(%ebp)
080d7cb9 +0x1bd:  mov    -0x10(%ebp),%ebx
080d7cbc +0x1c0:  lea    -0x4c(%ebp),%eax
080d7cbf +0x1c3:  mov    %eax,(%esp)
080d7cc2 +0x1c6:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080d7cc7 +0x1cb:  mov    0x4(%eax),%eax
080d7cca +0x1ce:  mov    0x8(%ebp),%edx
080d7ccd +0x1d1:  add    $0x4,%edx
080d7cd0 +0x1d4:  mov    %eax,0x4(%esp)
080d7cd4 +0x1d8:  mov    %edx,(%esp)
080d7cd7 +0x1db:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7cdc +0x1e0:  mov    %ebx,0x4(%esp)
080d7ce0 +0x1e4:  mov    %eax,(%esp)
080d7ce3 +0x1e7:  call   080d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>  ; BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T)
080d7ce8 +0x1ec:  mov    -0x10(%ebp),%eax
080d7ceb +0x1ef:  mov    %eax,-0x14(%ebp)
080d7cee +0x1f2:  addl   $0x1,-0x10(%ebp)
080d7cf2 +0x1f6:  lea    -0x4c(%ebp),%eax
080d7cf5 +0x1f9:  mov    %eax,(%esp)
080d7cf8 +0x1fc:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
080d7cfd +0x201:  lea    -0x18(%ebp),%eax
080d7d00 +0x204:  lea    -0x48(%ebp),%edx
080d7d03 +0x207:  mov    %edx,0x4(%esp)
080d7d07 +0x20b:  mov    %eax,(%esp)
080d7d0a +0x20e:  call   080da720 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8bd>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8bd
080d7d0f +0x213:  sub    $0x4,%esp
080d7d12 +0x216:  lea    -0x18(%ebp),%eax
080d7d15 +0x219:  mov    %eax,0x4(%esp)
080d7d19 +0x21d:  lea    -0x4c(%ebp),%eax
080d7d1c +0x220:  mov    %eax,(%esp)
080d7d1f +0x223:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
080d7d24 +0x228:  test   %al,%al
080d7d26 +0x22a:  jne    080d7c51 <+0x155>
080d7d2c +0x230:  jmp    080d7d49 <+0x24d>
080d7d2e +0x232:  mov    %edx,%ebx
080d7d30 +0x234:  mov    %eax,%esi
080d7d32 +0x236:  lea    -0x48(%ebp),%eax
080d7d35 +0x239:  mov    %eax,(%esp)
080d7d38 +0x23c:  call   080da3b4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x551>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x551
080d7d3d +0x241:  mov    %esi,%eax
080d7d3f +0x243:  mov    %ebx,%edx
080d7d41 +0x245:  mov    %eax,(%esp)
080d7d44 +0x248:  call   08ae3750 <_Unwind_Resume>
080d7d49 +0x24d:  lea    -0x48(%ebp),%eax
080d7d4c +0x250:  mov    %eax,(%esp)
080d7d4f +0x253:  call   080da3b4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x551>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x551
080d7d54 +0x258:  lea    -0x8(%ebp),%esp
080d7d57 +0x25b:  add    $0x0,%esp
080d7d5a +0x25e:  pop    %ebx
080d7d5b +0x25f:  pop    %esi
080d7d5c +0x260:  pop    %ebp
080d7d5d +0x261:  ret
```

## 反编译 C

```c
// BlueMarble::setUserGrade @ 0x80d7afc

/* BlueMarble::setUserGrade(int) */

void __thiscall BlueMarble::setUserGrade(BlueMarble *this,int param_1)

{
  char cVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_54;
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_4c [24];
  pair local_34 [4];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  int local_20;
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::multimap
            (local_4c);
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  BlueMarbleUserInfo::setGrade(pBVar2,0);
  for (local_54 = 0; (int)local_54 < *(int *)(*(int *)(this + 0x38) + 0x30); local_54 = local_54 + 1
      ) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_54);
    iVar3 = BlueMarbleUserInfo::getUser(pBVar2);
    if (iVar3 != 0) {
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_54);
      iVar3 = BlueMarbleUserInfo::getGrade(pBVar2);
      if (iVar3 != 0) {
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_54);
        local_20 = BlueMarbleUserInfo::getBoardZone(pBVar2);
                    /* try { // try from 080d7bc4 to 080d7d0e has its CatchHandler @ 080d7d2e */
        std::make_pair<int,int&>(local_28,&local_20);
        std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
        std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::insert
                  (local_34);
      }
    }
  }
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::begin(local_50)
  ;
  local_18 = 0;
  local_14 = 1;
  local_10 = 0;
  while( true ) {
    std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
    if (*piVar4 == local_10) {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      iVar3 = local_18;
      local_10 = *piVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),*(uint *)(iVar5 + 4));
      BlueMarbleUserInfo::setGrade(pBVar2,iVar3);
    }
    else {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      iVar3 = local_14;
      local_10 = *piVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),*(uint *)(iVar5 + 4));
      BlueMarbleUserInfo::setGrade(pBVar2,iVar3);
      local_18 = local_14;
      local_14 = local_14 + 1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
  }
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            (local_4c);
  return;
}
```
