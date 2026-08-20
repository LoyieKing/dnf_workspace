# getCenterCount

`_ZNK12advancealtar12StageControl14getCenterCountEv`

`advancealtar::StageControl::getCenterCount() const`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081307a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081307a6  _ZNK12advancealtar12StageControl14getCenterCountEv
#           advancealtar::StageControl::getCenterCount() const
# range [0x081307a6, 0x08130901]
081307a6 +0x000:  push   %ebp
081307a7 +0x001:  mov    %esp,%ebp
081307a9 +0x003:  push   %esi
081307aa +0x004:  push   %ebx
081307ab +0x005:  sub    $0x40,%esp
081307ae +0x008:  mov    0x8(%ebp),%eax
081307b1 +0x00b:  add    $0x4,%eax
081307b4 +0x00e:  mov    %eax,(%esp)
081307b7 +0x011:  call   08134860 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x467>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x467
081307bc +0x016:  mov    %eax,-0x1c(%ebp)
081307bf +0x019:  cmpl   $0x0,-0x1c(%ebp)
081307c3 +0x01d:  jne    081307cf <+0x29>
081307c5 +0x01f:  mov    $0x0,%ebx
081307ca +0x024:  jmp    081308f5 <+0x14f>
081307cf +0x029:  mov    0x8(%ebp),%eax
081307d2 +0x02c:  add    $0x98,%eax
081307d7 +0x031:  mov    %eax,(%esp)
081307da +0x034:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
081307df +0x039:  mov    %eax,-0x18(%ebp)
081307e2 +0x03c:  cmpl   $0x0,-0x18(%ebp)
081307e6 +0x040:  jne    081307f2 <+0x4c>
081307e8 +0x042:  mov    $0x0,%ebx
081307ed +0x047:  jmp    081308f5 <+0x14f>
081307f2 +0x04c:  movl   $0x0,-0x14(%ebp)
081307f9 +0x053:  lea    -0x2c(%ebp),%eax
081307fc +0x056:  mov    -0x1c(%ebp),%edx
081307ff +0x059:  mov    %edx,0x4(%esp)
08130803 +0x05d:  mov    %eax,(%esp)
08130806 +0x060:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
0813080b +0x065:  sub    $0x4,%esp
0813080e +0x068:  lea    -0x2c(%ebp),%eax
08130811 +0x06b:  mov    %eax,-0x10(%ebp)
08130814 +0x06e:  lea    -0x30(%ebp),%eax
08130817 +0x071:  mov    -0x10(%ebp),%edx
0813081a +0x074:  mov    %edx,0x4(%esp)
0813081e +0x078:  mov    %eax,(%esp)
08130821 +0x07b:  call   08135d88 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x198f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x198f
08130826 +0x080:  sub    $0x4,%esp
08130829 +0x083:  jmp    0813089b <+0xf5>
0813082b +0x085:  movl   $0x0,-0x34(%ebp)
08130832 +0x08c:  movl   $0x0,-0x38(%ebp)
08130839 +0x093:  lea    -0x30(%ebp),%eax
0813083c +0x096:  mov    %eax,(%esp)
0813083f +0x099:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
08130844 +0x09e:  mov    (%eax),%eax
08130846 +0x0a0:  mov    -0x18(%ebp),%edx
08130849 +0x0a3:  lea    0x8df60(%edx),%ecx
0813084f +0x0a9:  lea    -0x38(%ebp),%edx
08130852 +0x0ac:  mov    %edx,0xc(%esp)
08130856 +0x0b0:  lea    -0x34(%ebp),%edx
08130859 +0x0b3:  mov    %edx,0x8(%esp)
0813085d +0x0b7:  mov    %eax,0x4(%esp)
08130861 +0x0bb:  mov    %ecx,(%esp)
08130864 +0x0be:  call   081328ea <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_>  ; advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const
08130869 +0x0c3:  mov    %al,-0x9(%ebp)
0813086c +0x0c6:  movzbl -0x9(%ebp),%eax
08130870 +0x0ca:  xor    $0x1,%eax
08130873 +0x0cd:  test   %al,%al
08130875 +0x0cf:  jne    0813087d <+0xd7>
08130877 +0x0d1:  addl   $0x1,-0x14(%ebp)
0813087b +0x0d5:  jmp    0813087e <+0xd8>
0813087d +0x0d7:  nop
0813087e +0x0d8:  lea    -0x20(%ebp),%eax
08130881 +0x0db:  movl   $0x0,0x8(%esp)
08130889 +0x0e3:  lea    -0x30(%ebp),%edx
0813088c +0x0e6:  mov    %edx,0x4(%esp)
08130890 +0x0ea:  mov    %eax,(%esp)
08130893 +0x0ed:  call   08135de6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19ed>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19ed
08130898 +0x0f2:  sub    $0x4,%esp
0813089b +0x0f5:  lea    -0x24(%ebp),%eax
0813089e +0x0f8:  mov    -0x10(%ebp),%edx
081308a1 +0x0fb:  mov    %edx,0x4(%esp)
081308a5 +0x0ff:  mov    %eax,(%esp)
081308a8 +0x102:  call   08135dae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19b5
081308ad +0x107:  sub    $0x4,%esp
081308b0 +0x10a:  lea    -0x24(%ebp),%eax
081308b3 +0x10d:  mov    %eax,0x4(%esp)
081308b7 +0x111:  lea    -0x30(%ebp),%eax
081308ba +0x114:  mov    %eax,(%esp)
081308bd +0x117:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
081308c2 +0x11c:  test   %al,%al
081308c4 +0x11e:  jne    0813082b <+0x85>
081308ca +0x124:  mov    -0x14(%ebp),%ebx
081308cd +0x127:  lea    -0x2c(%ebp),%eax
081308d0 +0x12a:  mov    %eax,(%esp)
081308d3 +0x12d:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
081308d8 +0x132:  jmp    081308f5 <+0x14f>
081308da +0x134:  mov    %edx,%ebx
081308dc +0x136:  mov    %eax,%esi
081308de +0x138:  lea    -0x2c(%ebp),%eax
081308e1 +0x13b:  mov    %eax,(%esp)
081308e4 +0x13e:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
081308e9 +0x143:  mov    %esi,%eax
081308eb +0x145:  mov    %ebx,%edx
081308ed +0x147:  mov    %eax,(%esp)
081308f0 +0x14a:  call   08ae3750 <_Unwind_Resume>
081308f5 +0x14f:  mov    %ebx,%eax
081308f7 +0x151:  lea    -0x8(%ebp),%esp
081308fa +0x154:  add    $0x0,%esp
081308fd +0x157:  pop    %ebx
081308fe +0x158:  pop    %esi
081308ff +0x159:  pop    %ebp
08130900 +0x15a:  ret
08130901 +0x15b:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::getCenterCount @ 0x81307a6

/* advancealtar::StageControl::getCenterCount() const */

int __thiscall advancealtar::StageControl::getCenterCount(StageControl *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_3c [2];
  _List_const_iterator<_mapMonster> local_34 [4];
  list<_mapMonster,std::allocator<_mapMonster>> local_30 [8];
  _List_const_iterator local_28 [4];
  _List_const_iterator<_mapMonster> local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  list<_mapMonster,std::allocator<_mapMonster>> *local_14;
  char local_d;
  
  local_20 = ProcStage::getMap((ProcStage *)(this + 4));
  if (local_20 == 0) {
    iVar3 = 0;
  }
  else {
    local_1c = CharacData::getUser((CharacData *)(this + 0x98));
    if (local_1c == 0) {
      iVar3 = 0;
    }
    else {
      local_18 = 0;
      CMap::get_monster_list();
      local_14 = local_30;
                    /* try { // try from 08130821 to 081308ac has its CatchHandler @ 081308da */
      std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
      while( true ) {
        std::list<_mapMonster,std::allocator<_mapMonster>>::end();
        cVar1 = std::_List_const_iterator<_mapMonster>::operator!=(local_34,local_28);
        iVar3 = local_18;
        if (cVar1 == '\0') break;
        local_3c[1] = 0;
        local_3c[0] = 0;
        piVar2 = (int *)std::_List_const_iterator<_mapMonster>::operator->(local_34);
        local_d = CharacAdvanceAltarManager::getTowerInfo
                            ((CharacAdvanceAltarManager *)(local_1c + 0x8df60),*piVar2,local_3c + 1,
                             local_3c);
        if (local_d == '\x01') {
          local_18 = local_18 + 1;
        }
        std::_List_const_iterator<_mapMonster>::operator++(local_24,(int)local_34);
      }
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_30);
    }
  }
  return iVar3;
}
```
