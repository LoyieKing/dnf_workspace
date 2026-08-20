# CreateRandomSequenceVector

`_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi`

`CRelayBattleMgr::CreateRandomSequenceVector(std::vector<int, std::allocator<int> >&, int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de5e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de5e4  _ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi
#           CRelayBattleMgr::CreateRandomSequenceVector(std::vector<int, std::allocator<int> >&, int)
# range [0x085de5e4, 0x085de78f]
085de5e4 +0x000:  push   %ebp
085de5e5 +0x001:  mov    %esp,%ebp
085de5e7 +0x003:  push   %esi
085de5e8 +0x004:  push   %ebx
085de5e9 +0x005:  sub    $0x60,%esp
085de5ec +0x008:  mov    0x10(%ebp),%eax
085de5ef +0x00b:  mov    %eax,%ebx
085de5f1 +0x00d:  mov    0xc(%ebp),%eax
085de5f4 +0x010:  mov    %eax,(%esp)
085de5f7 +0x013:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085de5fc +0x018:  cmp    %eax,%ebx
085de5fe +0x01a:  seta   %al
085de601 +0x01d:  test   %al,%al
085de603 +0x01f:  je     085de613 <+0x2f>
085de605 +0x021:  mov    0xc(%ebp),%eax
085de608 +0x024:  mov    %eax,(%esp)
085de60b +0x027:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085de610 +0x02c:  mov    %eax,0x10(%ebp)
085de613 +0x02f:  mov    0x10(%ebp),%eax
085de616 +0x032:  test   %eax,%eax
085de618 +0x034:  jle    085de73c <+0x158>
085de61e +0x03a:  movl   $0xa,0x10(%esp)
085de626 +0x042:  movl   $0x64,0xc(%esp)
085de62e +0x04a:  movl   $0x1,0x8(%esp)
085de636 +0x052:  mov    0xc(%ebp),%eax
085de639 +0x055:  mov    %eax,0x4(%esp)
085de63d +0x059:  lea    -0x40(%ebp),%eax
085de640 +0x05c:  mov    %eax,(%esp)
085de643 +0x05f:  call   085df7fe <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x85>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x85
085de648 +0x064:  lea    -0x30(%ebp),%eax
085de64b +0x067:  mov    0xc(%ebp),%edx
085de64e +0x06a:  mov    %edx,0x4(%esp)
085de652 +0x06e:  mov    %eax,(%esp)
085de655 +0x071:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085de65a +0x076:  sub    $0x4,%esp
085de65d +0x079:  lea    -0x2c(%ebp),%eax
085de660 +0x07c:  mov    0xc(%ebp),%edx
085de663 +0x07f:  mov    %edx,0x4(%esp)
085de667 +0x083:  mov    %eax,(%esp)
085de66a +0x086:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085de66f +0x08b:  sub    $0x4,%esp
085de672 +0x08e:  mov    -0x40(%ebp),%eax
085de675 +0x091:  mov    %eax,0x8(%esp)
085de679 +0x095:  mov    -0x3c(%ebp),%eax
085de67c +0x098:  mov    %eax,0xc(%esp)
085de680 +0x09c:  mov    -0x38(%ebp),%eax
085de683 +0x09f:  mov    %eax,0x10(%esp)
085de687 +0x0a3:  mov    -0x34(%ebp),%eax
085de68a +0x0a6:  mov    %eax,0x14(%esp)
085de68e +0x0aa:  mov    -0x30(%ebp),%eax
085de691 +0x0ad:  mov    %eax,0x4(%esp)
085de695 +0x0b1:  mov    -0x2c(%ebp),%eax
085de698 +0x0b4:  mov    %eax,(%esp)
085de69b +0x0b7:  call   085e00bf <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x946>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x946
085de6a0 +0x0bc:  lea    -0x28(%ebp),%eax
085de6a3 +0x0bf:  mov    0xc(%ebp),%edx
085de6a6 +0x0c2:  mov    %edx,0x4(%esp)
085de6aa +0x0c6:  mov    %eax,(%esp)
085de6ad +0x0c9:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085de6b2 +0x0ce:  sub    $0x4,%esp
085de6b5 +0x0d1:  lea    -0x24(%ebp),%eax
085de6b8 +0x0d4:  mov    0xc(%ebp),%edx
085de6bb +0x0d7:  mov    %edx,0x4(%esp)
085de6bf +0x0db:  mov    %eax,(%esp)
085de6c2 +0x0de:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085de6c7 +0x0e3:  sub    $0x4,%esp
085de6ca +0x0e6:  mov    %esi,%eax
085de6cc +0x0e8:  mov    %al,0x8(%esp)
085de6d0 +0x0ec:  mov    -0x28(%ebp),%eax
085de6d3 +0x0ef:  mov    %eax,0x4(%esp)
085de6d7 +0x0f3:  mov    -0x24(%ebp),%eax
085de6da +0x0f6:  mov    %eax,(%esp)
085de6dd +0x0f9:  call   085e0109 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x990>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x990
085de6e2 +0x0fe:  lea    -0x1c(%ebp),%eax
085de6e5 +0x101:  mov    0xc(%ebp),%edx
085de6e8 +0x104:  mov    %edx,0x4(%esp)
085de6ec +0x108:  mov    %eax,(%esp)
085de6ef +0x10b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085de6f4 +0x110:  sub    $0x4,%esp
085de6f7 +0x113:  lea    -0x20(%ebp),%eax
085de6fa +0x116:  lea    0x10(%ebp),%edx
085de6fd +0x119:  mov    %edx,0x8(%esp)
085de701 +0x11d:  lea    -0x1c(%ebp),%edx
085de704 +0x120:  mov    %edx,0x4(%esp)
085de708 +0x124:  mov    %eax,(%esp)
085de70b +0x127:  call   080ea9a2 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5db>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5db
085de710 +0x12c:  sub    $0x4,%esp
085de713 +0x12f:  lea    -0x18(%ebp),%eax
085de716 +0x132:  mov    0xc(%ebp),%edx
085de719 +0x135:  mov    %edx,0x4(%esp)
085de71d +0x139:  mov    %eax,(%esp)
085de720 +0x13c:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085de725 +0x141:  sub    $0x4,%esp
085de728 +0x144:  mov    -0x20(%ebp),%eax
085de72b +0x147:  mov    %eax,0x4(%esp)
085de72f +0x14b:  mov    -0x18(%ebp),%eax
085de732 +0x14e:  mov    %eax,(%esp)
085de735 +0x151:  call   08134d8e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x995>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x995
085de73a +0x156:  jmp    085de785 <+0x1a1>
085de73c +0x158:  mov    0xc(%ebp),%eax
085de73f +0x15b:  mov    %eax,(%esp)
085de742 +0x15e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085de747 +0x163:  mov    %eax,-0x14(%ebp)
085de74a +0x166:  mov    -0x14(%ebp),%eax
085de74d +0x169:  mov    %eax,-0x10(%ebp)
085de750 +0x16c:  movl   $0x0,-0xc(%ebp)
085de757 +0x173:  jmp    085de778 <+0x194>
085de759 +0x175:  mov    -0xc(%ebp),%eax
085de75c +0x178:  mov    %eax,0x4(%esp)
085de760 +0x17c:  mov    0xc(%ebp),%eax
085de763 +0x17f:  mov    %eax,(%esp)
085de766 +0x182:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085de76b +0x187:  mov    -0x10(%ebp),%edx
085de76e +0x18a:  mov    %edx,(%eax)
085de770 +0x18c:  subl   $0x1,-0x10(%ebp)
085de774 +0x190:  addl   $0x1,-0xc(%ebp)
085de778 +0x194:  mov    -0xc(%ebp),%eax
085de77b +0x197:  cmp    -0x14(%ebp),%eax
085de77e +0x19a:  setl   %al
085de781 +0x19d:  test   %al,%al
085de783 +0x19f:  jne    085de759 <+0x175>
085de785 +0x1a1:  lea    -0x8(%ebp),%esp
085de788 +0x1a4:  add    $0x0,%esp
085de78b +0x1a7:  pop    %ebx
085de78c +0x1a8:  pop    %esi
085de78d +0x1a9:  pop    %ebp
085de78e +0x1aa:  ret
085de78f +0x1ab:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::CreateRandomSequenceVector @ 0x85de5e4

/* CRelayBattleMgr::CreateRandomSequenceVector(std::vector<int, std::allocator<int> >&, int) */

void __thiscall
CRelayBattleMgr::CreateRandomSequenceVector(CRelayBattleMgr *this,vector *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 unaff_SI;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = param_2;
  uVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
  if (uVar2 < (uint)iVar1) {
    param_2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1)
    ;
  }
  if (param_2 < 1) {
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_14 = local_18;
    for (local_10 = 0; (int)local_10 < local_18; local_10 = local_10 + 1) {
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)param_1,local_10);
      *piVar3 = local_14;
      local_14 = local_14 + -1;
    }
  }
  else {
    CRandomValue::CRandomValue((CRandomValue *)&local_44,param_1,1,100,10);
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    generate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,CRandomValue>
              (local_30,local_34,local_44,local_40,local_3c,local_38);
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,CDescending>
              (local_28,local_2c,unaff_SI);
    std::vector<int,std::allocator<int>>::begin();
    piVar3 = &param_2;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_24,&local_20);
    std::vector<int,std::allocator<int>>::begin();
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (local_1c,local_24,piVar3);
  }
  return;
}
```
