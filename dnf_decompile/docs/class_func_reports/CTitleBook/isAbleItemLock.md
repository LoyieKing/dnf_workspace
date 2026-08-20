# isAbleItemLock

`_ZN10CTitleBook14isAbleItemLockEm`

`CTitleBook::isAbleItemLock(unsigned long)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08642ec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08642ec2  _ZN10CTitleBook14isAbleItemLockEm
#           CTitleBook::isAbleItemLock(unsigned long)
# range [0x08642ec2, 0x0864306d]
08642ec2 +0x000:  push   %ebp
08642ec3 +0x001:  mov    %esp,%ebp
08642ec5 +0x003:  sub    $0x38,%esp
08642ec8 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08642ecd +0x00b:  lea    0xa7a0(%eax),%edx
08642ed3 +0x011:  lea    -0x24(%ebp),%eax
08642ed6 +0x014:  mov    %edx,0x4(%esp)
08642eda +0x018:  mov    %eax,(%esp)
08642edd +0x01b:  call   0828e232 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9df>  ; global constructors keyed to CAchievement::CAchievement()+0x9df
08642ee2 +0x020:  sub    $0x4,%esp
08642ee5 +0x023:  jmp    08643030 <+0x16e>
08642eea +0x028:  movl   $0x0,-0xc(%ebp)
08642ef1 +0x02f:  jmp    08643001 <+0x13f>
08642ef6 +0x034:  lea    -0x24(%ebp),%eax
08642ef9 +0x037:  mov    %eax,(%esp)
08642efc +0x03a:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642f01 +0x03f:  lea    0x4(%eax),%edx
08642f04 +0x042:  mov    -0xc(%ebp),%eax
08642f07 +0x045:  mov    %eax,0x4(%esp)
08642f0b +0x049:  mov    %edx,(%esp)
08642f0e +0x04c:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642f13 +0x051:  lea    0x4(%eax),%edx
08642f16 +0x054:  lea    -0x18(%ebp),%eax
08642f19 +0x057:  mov    %edx,0x4(%esp)
08642f1d +0x05b:  mov    %eax,(%esp)
08642f20 +0x05e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08642f25 +0x063:  sub    $0x4,%esp
08642f28 +0x066:  lea    -0x24(%ebp),%eax
08642f2b +0x069:  mov    %eax,(%esp)
08642f2e +0x06c:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642f33 +0x071:  lea    0x4(%eax),%edx
08642f36 +0x074:  mov    -0xc(%ebp),%eax
08642f39 +0x077:  mov    %eax,0x4(%esp)
08642f3d +0x07b:  mov    %edx,(%esp)
08642f40 +0x07e:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642f45 +0x083:  lea    0x4(%eax),%edx
08642f48 +0x086:  lea    -0x14(%ebp),%eax
08642f4b +0x089:  mov    %edx,0x4(%esp)
08642f4f +0x08d:  mov    %eax,(%esp)
08642f52 +0x090:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08642f57 +0x095:  sub    $0x4,%esp
08642f5a +0x098:  lea    -0x1c(%ebp),%eax
08642f5d +0x09b:  lea    0x8(%ebp),%edx
08642f60 +0x09e:  mov    %edx,0xc(%esp)
08642f64 +0x0a2:  mov    -0x18(%ebp),%edx
08642f67 +0x0a5:  mov    %edx,0x8(%esp)
08642f6b +0x0a9:  mov    -0x14(%ebp),%edx
08642f6e +0x0ac:  mov    %edx,0x4(%esp)
08642f72 +0x0b0:  mov    %eax,(%esp)
08642f75 +0x0b3:  call   0864317c <_GLOBAL__I__ZN10CTitleBookC2Ev+0x4d>  ; global constructors keyed to CTitleBook::CTitleBook()+0x4d
08642f7a +0x0b8:  sub    $0x4,%esp
08642f7d +0x0bb:  lea    -0x24(%ebp),%eax
08642f80 +0x0be:  mov    %eax,(%esp)
08642f83 +0x0c1:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642f88 +0x0c6:  lea    0x4(%eax),%edx
08642f8b +0x0c9:  mov    -0xc(%ebp),%eax
08642f8e +0x0cc:  mov    %eax,0x4(%esp)
08642f92 +0x0d0:  mov    %edx,(%esp)
08642f95 +0x0d3:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642f9a +0x0d8:  lea    0x4(%eax),%edx
08642f9d +0x0db:  lea    -0x10(%ebp),%eax
08642fa0 +0x0de:  mov    %edx,0x4(%esp)
08642fa4 +0x0e2:  mov    %eax,(%esp)
08642fa7 +0x0e5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08642fac +0x0ea:  sub    $0x4,%esp
08642faf +0x0ed:  lea    -0x1c(%ebp),%eax
08642fb2 +0x0f0:  mov    %eax,0x4(%esp)
08642fb6 +0x0f4:  lea    -0x10(%ebp),%eax
08642fb9 +0x0f7:  mov    %eax,(%esp)
08642fbc +0x0fa:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08642fc1 +0x0ff:  test   %al,%al
08642fc3 +0x101:  je     08642ffd <+0x13b>
08642fc5 +0x103:  lea    -0x24(%ebp),%eax
08642fc8 +0x106:  mov    %eax,(%esp)
08642fcb +0x109:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642fd0 +0x10e:  lea    0x4(%eax),%edx
08642fd3 +0x111:  mov    -0xc(%ebp),%eax
08642fd6 +0x114:  mov    %eax,0x4(%esp)
08642fda +0x118:  mov    %edx,(%esp)
08642fdd +0x11b:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
08642fe2 +0x120:  mov    0x1c(%eax),%eax
08642fe5 +0x123:  cmp    $0xffffffff,%eax
08642fe8 +0x126:  sete   %al
08642feb +0x129:  test   %al,%al
08642fed +0x12b:  je     08642ff6 <+0x134>
08642fef +0x12d:  mov    $0x1,%eax
08642ff4 +0x132:  jmp    0864306c <+0x1aa>
08642ff6 +0x134:  mov    $0x0,%eax
08642ffb +0x139:  jmp    0864306c <+0x1aa>
08642ffd +0x13b:  addl   $0x1,-0xc(%ebp)
08643001 +0x13f:  lea    -0x24(%ebp),%eax
08643004 +0x142:  mov    %eax,(%esp)
08643007 +0x145:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
0864300c +0x14a:  add    $0x4,%eax
0864300f +0x14d:  mov    %eax,(%esp)
08643012 +0x150:  call   0828e258 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa05>  ; global constructors keyed to CAchievement::CAchievement()+0xa05
08643017 +0x155:  cmp    -0xc(%ebp),%eax
0864301a +0x158:  seta   %al
0864301d +0x15b:  test   %al,%al
0864301f +0x15d:  jne    08642ef6 <+0x34>
08643025 +0x163:  lea    -0x24(%ebp),%eax
08643028 +0x166:  mov    %eax,(%esp)
0864302b +0x169:  call   0828e27a <_GLOBAL__I__ZN12CAchievementC2Ev+0xa27>  ; global constructors keyed to CAchievement::CAchievement()+0xa27
08643030 +0x16e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08643035 +0x173:  lea    0xa7a0(%eax),%edx
0864303b +0x179:  lea    -0x20(%ebp),%eax
0864303e +0x17c:  mov    %edx,0x4(%esp)
08643042 +0x180:  mov    %eax,(%esp)
08643045 +0x183:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
0864304a +0x188:  sub    $0x4,%esp
0864304d +0x18b:  lea    -0x20(%ebp),%eax
08643050 +0x18e:  mov    %eax,0x4(%esp)
08643054 +0x192:  lea    -0x24(%ebp),%eax
08643057 +0x195:  mov    %eax,(%esp)
0864305a +0x198:  call   0828dfde <_GLOBAL__I__ZN12CAchievementC2Ev+0x78b>  ; global constructors keyed to CAchievement::CAchievement()+0x78b
0864305f +0x19d:  test   %al,%al
08643061 +0x19f:  jne    08642eea <+0x28>
08643067 +0x1a5:  mov    $0x1,%eax
0864306c +0x1aa:  leave
0864306d +0x1ab:  ret
```

## 反编译 C

```c
// CTitleBook::isAbleItemLock @ 0x8642ec2

/* CTitleBook::isAbleItemLock(unsigned long) */

undefined4 CTitleBook::isAbleItemLock(ulong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
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
  
  puVar5 = (uint *)&stack0xffffffc4;
  local_38 = G_CDataManager();
  local_38 = local_38 + 0xa7a0;
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_28);
  do {
    puVar5[-1] = 0x8643035;
    iVar4 = G_CDataManager();
    puVar5[1] = iVar4 + 0xa7a0;
    *puVar5 = (uint)local_24;
    puVar5[-1] = 0x864304a;
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end((map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
           *)*puVar5);
    puVar5[1] = (uint)local_24;
    *puVar5 = (uint)local_28;
    puVar5[-1] = 0x864305f;
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)*puVar5,(_Rb_tree_iterator *)puVar5[1]);
    if (cVar2 == '\0') {
      return 1;
    }
    local_10 = 0;
    while( true ) {
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x864300c;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8643017;
      uVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5);
      if (uVar3 <= local_10) break;
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x8642f01;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      puVar5[1] = local_10;
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8642f13;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5,puVar5[1])
      ;
      puVar5[1] = iVar4 + 4;
      *puVar5 = (uint)&local_1c;
      puVar5[-1] = 0x8642f25;
      std::vector<int,std::allocator<int>>::end();
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x8642f33;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      puVar5[1] = local_10;
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8642f45;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5,puVar5[1])
      ;
      puVar5[1] = iVar4 + 4;
      *puVar5 = (uint)&local_18;
      puVar5[-1] = 0x8642f57;
      std::vector<int,std::allocator<int>>::begin();
      puVar5[3] = (uint)&param_1;
      puVar5[2] = local_1c;
      puVar5[1] = local_18;
      *puVar5 = (uint)local_20;
      puVar5[-1] = 0x8642f7a;
      std::
      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,unsigned_long>();
      puVar5[-1] = (uint)local_28;
      puVar5[-2] = 0x8642f88;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)puVar5[-1]);
      *puVar5 = local_10;
      puVar5[-1] = iVar4 + 4;
      puVar5[-2] = 0x8642f9a;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar5[-1],*puVar5
                        );
      *puVar5 = iVar4 + 4;
      puVar5[-1] = (uint)local_14;
      puVar5[-2] = 0x8642fac;
      std::vector<int,std::allocator<int>>::end();
      *puVar5 = (uint)local_20;
      puVar5[-1] = (uint)local_14;
      puVar5[-2] = 0x8642fc1;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)puVar5[-1],(__normal_iterator *)*puVar5);
      if (bVar1) {
        puVar5[-1] = (uint)local_28;
        puVar5[-2] = 0x8642fd0;
        iVar4 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                              *)puVar5[-1]);
        *puVar5 = local_10;
        puVar5[-1] = iVar4 + 4;
        puVar5[-2] = 0x8642fe2;
        iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                          ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar5[-1],
                           *puVar5);
        if (*(int *)(iVar4 + 0x1c) == -1) {
          return 1;
        }
        return 0;
      }
      local_10 = local_10 + 1;
      puVar5 = puVar5 + -1;
    }
    *puVar5 = (uint)local_28;
    puVar5[-1] = 0x8643030;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)*puVar5);
  } while( true );
}
```
