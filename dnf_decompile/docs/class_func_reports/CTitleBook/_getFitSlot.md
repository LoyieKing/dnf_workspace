# _getFitSlot

`_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi`

`CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08642baa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08642baa  _ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi
#           CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)
# range [0x08642baa, 0x08642d41]
08642baa +0x000:  push   %ebp
08642bab +0x001:  mov    %esp,%ebp
08642bad +0x003:  sub    $0x38,%esp
08642bb0 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08642bb5 +0x00b:  lea    0xa7a0(%eax),%edx
08642bbb +0x011:  lea    -0x24(%ebp),%eax
08642bbe +0x014:  mov    %edx,0x4(%esp)
08642bc2 +0x018:  mov    %eax,(%esp)
08642bc5 +0x01b:  call   0828e232 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9df>  ; global constructors keyed to CAchievement::CAchievement()+0x9df
08642bca +0x020:  sub    $0x4,%esp
08642bcd +0x023:  jmp    08642d03 <+0x159>
08642bd2 +0x028:  movl   $0x0,-0xc(%ebp)
08642bd9 +0x02f:  jmp    08642cd4 <+0x12a>
08642bde +0x034:  lea    -0x24(%ebp),%eax
08642be1 +0x037:  mov    %eax,(%esp)
08642be4 +0x03a:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642be9 +0x03f:  lea    0x4(%eax),%edx
08642bec +0x042:  mov    -0xc(%ebp),%eax
08642bef +0x045:  mov    %eax,0x4(%esp)
08642bf3 +0x049:  mov    %edx,(%esp)
08642bf6 +0x04c:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642bfb +0x051:  lea    0x4(%eax),%edx
08642bfe +0x054:  lea    -0x18(%ebp),%eax
08642c01 +0x057:  mov    %edx,0x4(%esp)
08642c05 +0x05b:  mov    %eax,(%esp)
08642c08 +0x05e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08642c0d +0x063:  sub    $0x4,%esp
08642c10 +0x066:  lea    -0x24(%ebp),%eax
08642c13 +0x069:  mov    %eax,(%esp)
08642c16 +0x06c:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642c1b +0x071:  lea    0x4(%eax),%edx
08642c1e +0x074:  mov    -0xc(%ebp),%eax
08642c21 +0x077:  mov    %eax,0x4(%esp)
08642c25 +0x07b:  mov    %edx,(%esp)
08642c28 +0x07e:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642c2d +0x083:  lea    0x4(%eax),%edx
08642c30 +0x086:  lea    -0x14(%ebp),%eax
08642c33 +0x089:  mov    %edx,0x4(%esp)
08642c37 +0x08d:  mov    %eax,(%esp)
08642c3a +0x090:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08642c3f +0x095:  sub    $0x4,%esp
08642c42 +0x098:  lea    -0x1c(%ebp),%eax
08642c45 +0x09b:  lea    0x8(%ebp),%edx
08642c48 +0x09e:  mov    %edx,0xc(%esp)
08642c4c +0x0a2:  mov    -0x18(%ebp),%edx
08642c4f +0x0a5:  mov    %edx,0x8(%esp)
08642c53 +0x0a9:  mov    -0x14(%ebp),%edx
08642c56 +0x0ac:  mov    %edx,0x4(%esp)
08642c5a +0x0b0:  mov    %eax,(%esp)
08642c5d +0x0b3:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
08642c62 +0x0b8:  sub    $0x4,%esp
08642c65 +0x0bb:  lea    -0x24(%ebp),%eax
08642c68 +0x0be:  mov    %eax,(%esp)
08642c6b +0x0c1:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642c70 +0x0c6:  lea    0x4(%eax),%edx
08642c73 +0x0c9:  mov    -0xc(%ebp),%eax
08642c76 +0x0cc:  mov    %eax,0x4(%esp)
08642c7a +0x0d0:  mov    %edx,(%esp)
08642c7d +0x0d3:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642c82 +0x0d8:  lea    0x4(%eax),%edx
08642c85 +0x0db:  lea    -0x10(%ebp),%eax
08642c88 +0x0de:  mov    %edx,0x4(%esp)
08642c8c +0x0e2:  mov    %eax,(%esp)
08642c8f +0x0e5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08642c94 +0x0ea:  sub    $0x4,%esp
08642c97 +0x0ed:  lea    -0x1c(%ebp),%eax
08642c9a +0x0f0:  mov    %eax,0x4(%esp)
08642c9e +0x0f4:  lea    -0x10(%ebp),%eax
08642ca1 +0x0f7:  mov    %eax,(%esp)
08642ca4 +0x0fa:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08642ca9 +0x0ff:  test   %al,%al
08642cab +0x101:  je     08642cd0 <+0x126>
08642cad +0x103:  lea    -0x24(%ebp),%eax
08642cb0 +0x106:  mov    %eax,(%esp)
08642cb3 +0x109:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642cb8 +0x10e:  mov    (%eax),%eax
08642cba +0x110:  mov    %eax,%edx
08642cbc +0x112:  mov    0xc(%ebp),%eax
08642cbf +0x115:  mov    %edx,(%eax)
08642cc1 +0x117:  mov    -0xc(%ebp),%edx
08642cc4 +0x11a:  mov    0x10(%ebp),%eax
08642cc7 +0x11d:  mov    %edx,(%eax)
08642cc9 +0x11f:  mov    $0x1,%eax
08642cce +0x124:  jmp    08642d3f <+0x195>
08642cd0 +0x126:  addl   $0x1,-0xc(%ebp)
08642cd4 +0x12a:  lea    -0x24(%ebp),%eax
08642cd7 +0x12d:  mov    %eax,(%esp)
08642cda +0x130:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642cdf +0x135:  add    $0x4,%eax
08642ce2 +0x138:  mov    %eax,(%esp)
08642ce5 +0x13b:  call   0828e258 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa05>  ; global constructors keyed to CAchievement::CAchievement()+0xa05
08642cea +0x140:  cmp    -0xc(%ebp),%eax
08642ced +0x143:  seta   %al
08642cf0 +0x146:  test   %al,%al
08642cf2 +0x148:  jne    08642bde <+0x34>
08642cf8 +0x14e:  lea    -0x24(%ebp),%eax
08642cfb +0x151:  mov    %eax,(%esp)
08642cfe +0x154:  call   0828e27a <_GLOBAL__I__ZN12CAchievementC2Ev+0xa27>  ; global constructors keyed to CAchievement::CAchievement()+0xa27
08642d03 +0x159:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08642d08 +0x15e:  lea    0xa7a0(%eax),%edx
08642d0e +0x164:  lea    -0x20(%ebp),%eax
08642d11 +0x167:  mov    %edx,0x4(%esp)
08642d15 +0x16b:  mov    %eax,(%esp)
08642d18 +0x16e:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
08642d1d +0x173:  sub    $0x4,%esp
08642d20 +0x176:  lea    -0x20(%ebp),%eax
08642d23 +0x179:  mov    %eax,0x4(%esp)
08642d27 +0x17d:  lea    -0x24(%ebp),%eax
08642d2a +0x180:  mov    %eax,(%esp)
08642d2d +0x183:  call   0828dfde <_GLOBAL__I__ZN12CAchievementC2Ev+0x78b>  ; global constructors keyed to CAchievement::CAchievement()+0x78b
08642d32 +0x188:  test   %al,%al
08642d34 +0x18a:  jne    08642bd2 <+0x28>
08642d3a +0x190:  mov    $0x0,%eax
08642d3f +0x195:  leave
08642d40 +0x196:  ret
08642d41 +0x197:  nop
```

## 反编译 C

```c
// CTitleBook::_getFitSlot @ 0x8642baa

/* CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&) */

undefined4 CTitleBook::_getFitSlot(int param_1,ENUM_TITLE_BOOK_CATEGORY *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int local_48 [3];
  int local_38;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10;
  
  puVar6 = (uint *)&stack0xffffffc4;
  local_38 = G_CDataManager();
  local_38 = local_38 + 0xa7a0;
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_28);
  do {
    puVar6[-1] = 0x8642d08;
    iVar5 = G_CDataManager();
    puVar6[1] = iVar5 + 0xa7a0;
    *puVar6 = (uint)local_24;
    puVar6[-1] = 0x8642d1d;
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end((map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
           *)*puVar6);
    puVar6[1] = (uint)local_24;
    *puVar6 = (uint)local_28;
    puVar6[-1] = 0x8642d32;
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)*puVar6,(_Rb_tree_iterator *)puVar6[1]);
    if (cVar2 == '\0') {
      return 0;
    }
    local_10 = 0;
    while( true ) {
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642cdf;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642cea;
      uVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6);
      if (uVar4 <= local_10) break;
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642be9;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      puVar6[1] = local_10;
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642bfb;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6,puVar6[1])
      ;
      puVar6[1] = iVar5 + 4;
      *puVar6 = (uint)&local_1c;
      puVar6[-1] = 0x8642c0d;
      std::vector<int,std::allocator<int>>::end();
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642c1b;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      puVar6[1] = local_10;
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642c2d;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6,puVar6[1])
      ;
      puVar6[1] = iVar5 + 4;
      *puVar6 = (uint)&local_18;
      puVar6[-1] = 0x8642c3f;
      std::vector<int,std::allocator<int>>::begin();
      puVar6[3] = (uint)&param_1;
      puVar6[2] = local_1c;
      puVar6[1] = local_18;
      *puVar6 = (uint)local_20;
      puVar6[-1] = 0x8642c62;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      puVar6[-1] = (uint)local_28;
      puVar6[-2] = 0x8642c70;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)puVar6[-1]);
      *puVar6 = local_10;
      puVar6[-1] = iVar5 + 4;
      puVar6[-2] = 0x8642c82;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar6[-1],*puVar6
                        );
      *puVar6 = iVar5 + 4;
      puVar6[-1] = (uint)local_14;
      puVar6[-2] = 0x8642c94;
      std::vector<int,std::allocator<int>>::end();
      *puVar6 = (uint)local_20;
      puVar6[-1] = (uint)local_14;
      puVar6[-2] = 0x8642ca9;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)puVar6[-1],(__normal_iterator *)*puVar6);
      if (bVar1) {
        puVar6[-1] = (uint)local_28;
        puVar6[-2] = 0x8642cb8;
        puVar3 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                               *)puVar6[-1]);
        *(undefined4 *)param_2 = *puVar3;
        *param_3 = local_10;
        return 1;
      }
      local_10 = local_10 + 1;
      puVar6 = puVar6 + -1;
    }
    *puVar6 = (uint)local_28;
    puVar6[-1] = 0x8642d03;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)*puVar6);
  } while( true );
}
```
