# SetRidableObjectState

`_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState`

`CRidable::SetRidableObjectState(int, eRidableObjectState)`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082feb5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082feb5e  _ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState
#           CRidable::SetRidableObjectState(int, eRidableObjectState)
# range [0x082feb5e, 0x082fec2b]
082feb5e +0x00:  push   %ebp
082feb5f +0x01:  mov    %esp,%ebp
082feb61 +0x03:  sub    $0x28,%esp
082feb64 +0x06:  mov    0x8(%ebp),%edx
082feb67 +0x09:  lea    -0x10(%ebp),%eax
082feb6a +0x0c:  lea    0xc(%ebp),%ecx
082feb6d +0x0f:  mov    %ecx,0x8(%esp)
082feb71 +0x13:  mov    %edx,0x4(%esp)
082feb75 +0x17:  mov    %eax,(%esp)
082feb78 +0x1a:  call   0830f7c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x13ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x13ab
082feb7d +0x1f:  sub    $0x4,%esp
082feb80 +0x22:  mov    0x8(%ebp),%edx
082feb83 +0x25:  lea    -0xc(%ebp),%eax
082feb86 +0x28:  mov    %edx,0x4(%esp)
082feb8a +0x2c:  mov    %eax,(%esp)
082feb8d +0x2f:  call   0830f760 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1345>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1345
082feb92 +0x34:  sub    $0x4,%esp
082feb95 +0x37:  lea    -0xc(%ebp),%eax
082feb98 +0x3a:  mov    %eax,0x4(%esp)
082feb9c +0x3e:  lea    -0x10(%ebp),%eax
082feb9f +0x41:  mov    %eax,(%esp)
082feba2 +0x44:  call   0830f786 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x136b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x136b
082feba7 +0x49:  test   %al,%al
082feba9 +0x4b:  je     082fec25 <+0xc7>
082febab +0x4d:  lea    -0x10(%ebp),%eax
082febae +0x50:  mov    %eax,(%esp)
082febb1 +0x53:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082febb6 +0x58:  mov    0x1c(%eax),%eax
082febb9 +0x5b:  test   %eax,%eax
082febbb +0x5d:  je     082febf6 <+0x98>
082febbd +0x5f:  lea    -0x10(%ebp),%eax
082febc0 +0x62:  mov    %eax,(%esp)
082febc3 +0x65:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082febc8 +0x6a:  mov    0x1c(%eax),%eax
082febcb +0x6d:  cmp    $0x4,%eax
082febce +0x70:  je     082febf6 <+0x98>
082febd0 +0x72:  lea    -0x10(%ebp),%eax
082febd3 +0x75:  mov    %eax,(%esp)
082febd6 +0x78:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082febdb +0x7d:  mov    0x1c(%eax),%eax
082febde +0x80:  cmp    $0x3,%eax
082febe1 +0x83:  je     082febf6 <+0x98>
082febe3 +0x85:  lea    -0x10(%ebp),%eax
082febe6 +0x88:  mov    %eax,(%esp)
082febe9 +0x8b:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082febee +0x90:  mov    0x1c(%eax),%eax
082febf1 +0x93:  cmp    $0x4,%eax
082febf4 +0x96:  jle    082febfd <+0x9f>
082febf6 +0x98:  mov    $0x1,%eax
082febfb +0x9d:  jmp    082fec02 <+0xa4>
082febfd +0x9f:  mov    $0x0,%eax
082fec02 +0xa4:  test   %al,%al
082fec04 +0xa6:  je     082fec0d <+0xaf>
082fec06 +0xa8:  mov    $0x0,%eax
082fec0b +0xad:  jmp    082fec2a <+0xcc>
082fec0d +0xaf:  lea    -0x10(%ebp),%eax
082fec10 +0xb2:  mov    %eax,(%esp)
082fec13 +0xb5:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fec18 +0xba:  mov    0x10(%ebp),%edx
082fec1b +0xbd:  mov    %edx,0x1c(%eax)
082fec1e +0xc0:  mov    $0x1,%eax
082fec23 +0xc5:  jmp    082fec2a <+0xcc>
082fec25 +0xc7:  mov    $0x0,%eax
082fec2a +0xcc:  leave
082fec2b +0xcd:  ret
```

## 反编译 C

```c
// CRidable::SetRidableObjectState @ 0x82feb5e

/* CRidable::SetRidableObjectState(int, eRidableObjectState) */

bool __thiscall
CRidable::SetRidableObjectState(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> local_14 [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_10 [12];
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::find((int *)local_14);
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 == '\0') {
    return false;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->(local_14);
  if ((((*(int *)(iVar3 + 0x1c) == 0) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          (local_14), *(int *)(iVar3 + 0x1c) == 4)) ||
      (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                         (local_14), *(int *)(iVar3 + 0x1c) == 3)) ||
     (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        (local_14), 4 < *(int *)(iVar3 + 0x1c))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->(local_14);
    *(undefined4 *)(iVar3 + 0x1c) = param_3;
  }
  return !bVar1;
}
```
