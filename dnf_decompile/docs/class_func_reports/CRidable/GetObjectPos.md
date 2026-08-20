# GetObjectPos

`_ZN8CRidable12GetObjectPosERSt6vectorISt4pairIiiESaIS2_EE`

`CRidable::GetObjectPos(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082fec2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fec2c  _ZN8CRidable12GetObjectPosERSt6vectorISt4pairIiiESaIS2_EE
#           CRidable::GetObjectPos(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x082fec2c, 0x082fece1]
082fec2c +0x00:  push   %ebp
082fec2d +0x01:  mov    %esp,%ebp
082fec2f +0x03:  sub    $0x48,%esp
082fec32 +0x06:  mov    0x8(%ebp),%edx
082fec35 +0x09:  lea    -0x18(%ebp),%eax
082fec38 +0x0c:  mov    %edx,0x4(%esp)
082fec3c +0x10:  mov    %eax,(%esp)
082fec3f +0x13:  call   0830f73a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x131f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x131f
082fec44 +0x18:  sub    $0x4,%esp
082fec47 +0x1b:  jmp    082fecb1 <+0x85>
082fec49 +0x1d:  lea    -0x18(%ebp),%eax
082fec4c +0x20:  mov    %eax,(%esp)
082fec4f +0x23:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fec54 +0x28:  mov    0x4(%eax),%edx
082fec57 +0x2b:  mov    %edx,-0x30(%ebp)
082fec5a +0x2e:  mov    0x8(%eax),%edx
082fec5d +0x31:  mov    %edx,-0x2c(%ebp)
082fec60 +0x34:  mov    0xc(%eax),%edx
082fec63 +0x37:  mov    %edx,-0x28(%ebp)
082fec66 +0x3a:  mov    0x10(%eax),%edx
082fec69 +0x3d:  mov    %edx,-0x24(%ebp)
082fec6c +0x40:  mov    0x14(%eax),%edx
082fec6f +0x43:  mov    %edx,-0x20(%ebp)
082fec72 +0x46:  mov    0x18(%eax),%eax
082fec75 +0x49:  mov    %eax,-0x1c(%ebp)
082fec78 +0x4c:  lea    -0x30(%ebp),%eax
082fec7b +0x4f:  add    $0x4,%eax
082fec7e +0x52:  mov    %eax,0x8(%esp)
082fec82 +0x56:  lea    -0x30(%ebp),%eax
082fec85 +0x59:  mov    %eax,0x4(%esp)
082fec89 +0x5d:  lea    -0x10(%ebp),%eax
082fec8c +0x60:  mov    %eax,(%esp)
082fec8f +0x63:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
082fec94 +0x68:  lea    -0x10(%ebp),%eax
082fec97 +0x6b:  mov    %eax,0x4(%esp)
082fec9b +0x6f:  mov    0xc(%ebp),%eax
082fec9e +0x72:  mov    %eax,(%esp)
082feca1 +0x75:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
082feca6 +0x7a:  lea    -0x18(%ebp),%eax
082feca9 +0x7d:  mov    %eax,(%esp)
082fecac +0x80:  call   0830f7a8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x138d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x138d
082fecb1 +0x85:  mov    0x8(%ebp),%edx
082fecb4 +0x88:  lea    -0x14(%ebp),%eax
082fecb7 +0x8b:  mov    %edx,0x4(%esp)
082fecbb +0x8f:  mov    %eax,(%esp)
082fecbe +0x92:  call   0830f760 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1345>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1345
082fecc3 +0x97:  sub    $0x4,%esp
082fecc6 +0x9a:  lea    -0x14(%ebp),%eax
082fecc9 +0x9d:  mov    %eax,0x4(%esp)
082feccd +0xa1:  lea    -0x18(%ebp),%eax
082fecd0 +0xa4:  mov    %eax,(%esp)
082fecd3 +0xa7:  call   0830f786 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x136b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x136b
082fecd8 +0xac:  test   %al,%al
082fecda +0xae:  jne    082fec49 <+0x1d>
082fece0 +0xb4:  leave
082fece1 +0xb5:  ret
```

## 反编译 C

```c
// CRidable::GetObjectPos @ 0x82fec2c

/* CRidable::GetObjectPos(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
    */

void __thiscall CRidable::GetObjectPos(CRidable *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_1c [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_18 [4];
  pair<int,int> local_14 [16];
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c);
    local_34 = *(int *)(iVar2 + 4);
    local_30 = *(int *)(iVar2 + 8);
    local_2c = *(undefined4 *)(iVar2 + 0xc);
    local_28 = *(undefined4 *)(iVar2 + 0x10);
    local_24 = *(undefined4 *)(iVar2 + 0x14);
    local_20 = *(undefined4 *)(iVar2 + 0x18);
    std::pair<int,int>::pair<int&,int&>(local_14,&local_34,&local_30);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_14);
    std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c);
  }
  return;
}
```
