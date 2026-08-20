# _getTabComplete

`_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY`

`CAchievement::_getTabComplete(stTitleSection*, ENUM_TITLE_BOOK_CATEGORY)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bdc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bdc6  _ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY
#           CAchievement::_getTabComplete(stTitleSection*, ENUM_TITLE_BOOK_CATEGORY)
# range [0x0828bdc6, 0x0828bf29]
0828bdc6 +0x000:  push   %ebp
0828bdc7 +0x001:  mov    %esp,%ebp
0828bdc9 +0x003:  push   %esi
0828bdca +0x004:  push   %ebx
0828bdcb +0x005:  sub    $0x30,%esp
0828bdce +0x008:  mov    0x10(%ebp),%eax
0828bdd1 +0x00b:  mov    %eax,-0x14(%ebp)
0828bdd4 +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bdd9 +0x013:  lea    0xa7a0(%eax),%ecx
0828bddf +0x019:  lea    -0x18(%ebp),%eax
0828bde2 +0x01c:  lea    -0x14(%ebp),%edx
0828bde5 +0x01f:  mov    %edx,0x8(%esp)
0828bde9 +0x023:  mov    %ecx,0x4(%esp)
0828bded +0x027:  mov    %eax,(%esp)
0828bdf0 +0x02a:  call   0828df8c <_GLOBAL__I__ZN12CAchievementC2Ev+0x739>  ; global constructors keyed to CAchievement::CAchievement()+0x739
0828bdf5 +0x02f:  sub    $0x4,%esp
0828bdf8 +0x032:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bdfd +0x037:  lea    0xa7a0(%eax),%edx
0828be03 +0x03d:  lea    -0x10(%ebp),%eax
0828be06 +0x040:  mov    %edx,0x4(%esp)
0828be0a +0x044:  mov    %eax,(%esp)
0828be0d +0x047:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
0828be12 +0x04c:  sub    $0x4,%esp
0828be15 +0x04f:  lea    -0x10(%ebp),%eax
0828be18 +0x052:  mov    %eax,0x4(%esp)
0828be1c +0x056:  lea    -0x18(%ebp),%eax
0828be1f +0x059:  mov    %eax,(%esp)
0828be22 +0x05c:  call   0828dfde <_GLOBAL__I__ZN12CAchievementC2Ev+0x78b>  ; global constructors keyed to CAchievement::CAchievement()+0x78b
0828be27 +0x061:  test   %al,%al
0828be29 +0x063:  je     0828bf18 <+0x152>
0828be2f +0x069:  lea    -0x18(%ebp),%eax
0828be32 +0x06c:  mov    %eax,(%esp)
0828be35 +0x06f:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
0828be3a +0x074:  add    $0x4,%eax
0828be3d +0x077:  mov    %eax,0x4(%esp)
0828be41 +0x07b:  lea    -0x24(%ebp),%eax
0828be44 +0x07e:  mov    %eax,(%esp)
0828be47 +0x081:  call   0828e000 <_GLOBAL__I__ZN12CAchievementC2Ev+0x7ad>  ; global constructors keyed to CAchievement::CAchievement()+0x7ad
0828be4c +0x086:  mov    0xc(%ebp),%eax
0828be4f +0x089:  mov    0xc(%eax),%eax
0828be52 +0x08c:  mov    %eax,-0xc(%ebp)
0828be55 +0x08f:  jmp    0828bed3 <+0x10d>
0828be57 +0x091:  mov    -0xc(%ebp),%eax
0828be5a +0x094:  mov    %eax,0x4(%esp)
0828be5e +0x098:  lea    -0x24(%ebp),%eax
0828be61 +0x09b:  mov    %eax,(%esp)
0828be64 +0x09e:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
0828be69 +0x0a3:  mov    (%eax),%eax
0828be6b +0x0a5:  cmp    $0xffffffff,%eax
0828be6e +0x0a8:  sete   %al
0828be71 +0x0ab:  test   %al,%al
0828be73 +0x0ad:  jne    0828becb <+0x105>
0828be75 +0x0af:  mov    -0xc(%ebp),%eax
0828be78 +0x0b2:  mov    %eax,0x4(%esp)
0828be7c +0x0b6:  lea    -0x24(%ebp),%eax
0828be7f +0x0b9:  mov    %eax,(%esp)
0828be82 +0x0bc:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
0828be87 +0x0c1:  mov    0x1c(%eax),%eax
0828be8a +0x0c4:  cmp    $0xffffffff,%eax
0828be8d +0x0c7:  sete   %al
0828be90 +0x0ca:  test   %al,%al
0828be92 +0x0cc:  jne    0828bece <+0x108>
0828be94 +0x0ce:  mov    -0xc(%ebp),%eax
0828be97 +0x0d1:  mov    %eax,0x4(%esp)
0828be9b +0x0d5:  lea    -0x24(%ebp),%eax
0828be9e +0x0d8:  mov    %eax,(%esp)
0828bea1 +0x0db:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
0828bea6 +0x0e0:  mov    0x1c(%eax),%eax
0828bea9 +0x0e3:  mov    %eax,0x4(%esp)
0828bead +0x0e7:  mov    0x8(%ebp),%eax
0828beb0 +0x0ea:  mov    %eax,(%esp)
0828beb3 +0x0ed:  call   0828cbe4 <_ZN12CAchievement20isClearedAchievementEj>  ; CAchievement::isClearedAchievement(unsigned int)
0828beb8 +0x0f2:  xor    $0x1,%eax
0828bebb +0x0f5:  test   %al,%al
0828bebd +0x0f7:  je     0828becf <+0x109>
0828bebf +0x0f9:  mov    $0x0,%esi
0828bec4 +0x0fe:  mov    $0x0,%ebx
0828bec9 +0x103:  jmp    0828bf09 <+0x143>
0828becb +0x105:  nop
0828becc +0x106:  jmp    0828becf <+0x109>
0828bece +0x108:  nop
0828becf +0x109:  addl   $0x1,-0xc(%ebp)
0828bed3 +0x10d:  mov    0xc(%ebp),%eax
0828bed6 +0x110:  mov    0x10(%eax),%eax
0828bed9 +0x113:  cmp    -0xc(%ebp),%eax
0828bedc +0x116:  seta   %al
0828bedf +0x119:  test   %al,%al
0828bee1 +0x11b:  jne    0828be57 <+0x91>
0828bee7 +0x121:  mov    $0x1,%ebx
0828beec +0x126:  jmp    0828bf09 <+0x143>
0828beee +0x128:  mov    %edx,%ebx
0828bef0 +0x12a:  mov    %eax,%esi
0828bef2 +0x12c:  lea    -0x24(%ebp),%eax
0828bef5 +0x12f:  mov    %eax,(%esp)
0828bef8 +0x132:  call   0828e0b4 <_GLOBAL__I__ZN12CAchievementC2Ev+0x861>  ; global constructors keyed to CAchievement::CAchievement()+0x861
0828befd +0x137:  mov    %esi,%eax
0828beff +0x139:  mov    %ebx,%edx
0828bf01 +0x13b:  mov    %eax,(%esp)
0828bf04 +0x13e:  call   08ae3750 <_Unwind_Resume>
0828bf09 +0x143:  lea    -0x24(%ebp),%eax
0828bf0c +0x146:  mov    %eax,(%esp)
0828bf0f +0x149:  call   0828e0b4 <_GLOBAL__I__ZN12CAchievementC2Ev+0x861>  ; global constructors keyed to CAchievement::CAchievement()+0x861
0828bf14 +0x14e:  test   %ebx,%ebx
0828bf16 +0x150:  je     0828bf1d <+0x157>
0828bf18 +0x152:  mov    $0x1,%esi
0828bf1d +0x157:  mov    %esi,%eax
0828bf1f +0x159:  lea    -0x8(%ebp),%esp
0828bf22 +0x15c:  add    $0x0,%esp
0828bf25 +0x15f:  pop    %ebx
0828bf26 +0x160:  pop    %esi
0828bf27 +0x161:  pop    %ebp
0828bf28 +0x162:  ret
0828bf29 +0x163:  nop
```

## 反编译 C

```c
// CAchievement::_getTabComplete @ 0x828bdc6

/* CAchievement::_getTabComplete(stTitleSection*, ENUM_TITLE_BOOK_CATEGORY) */

undefined4 __thiscall
CAchievement::_getTabComplete(CAchievement *this,int param_1,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  vector<stTitleElement,std::allocator<stTitleElement>> local_28 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_1c [4];
  undefined4 local_18;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_14 [4];
  uint local_10;
  
  local_18 = param_3;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_1c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_14);
  cVar2 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator!=(local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_1c);
    std::vector<stTitleElement,std::allocator<stTitleElement>>::vector
              (local_28,(vector *)(iVar3 + 4));
    for (local_10 = *(uint *)(param_1 + 0xc); local_10 < *(uint *)(param_1 + 0x10);
        local_10 = local_10 + 1) {
      piVar4 = (int *)std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                                (local_28,local_10);
      if ((*piVar4 != -1) &&
         (iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                            (local_28,local_10), *(int *)(iVar3 + 0x1c) != -1)) {
        std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_28,local_10);
                    /* try { // try from 0828beb3 to 0828beb7 has its CatchHandler @ 0828beee */
        cVar2 = isClearedAchievement((uint)this);
        if (cVar2 != '\x01') {
          unaff_ESI = 0;
          bVar1 = false;
          goto LAB_0828bf09;
        }
      }
    }
    bVar1 = true;
LAB_0828bf09:
    std::vector<stTitleElement,std::allocator<stTitleElement>>::~vector(local_28);
    if (!bVar1) {
      return unaff_ESI;
    }
  }
  return 1;
}
```
