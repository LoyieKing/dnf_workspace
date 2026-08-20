# checkMaxCreatureLevel

`_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib`

`user_creature::CCreatureMgr::checkMaxCreatureLevel(int, bool) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833baee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833baee  _ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib
#           user_creature::CCreatureMgr::checkMaxCreatureLevel(int, bool) const
# range [0x0833baee, 0x0833bbb1]
0833baee +0x00:  push   %ebp
0833baef +0x01:  mov    %esp,%ebp
0833baf1 +0x03:  sub    $0x38,%esp
0833baf4 +0x06:  mov    0x10(%ebp),%eax
0833baf7 +0x09:  mov    %al,-0x1c(%ebp)
0833bafa +0x0c:  mov    0x8(%ebp),%edx
0833bafd +0x0f:  lea    -0x18(%ebp),%eax
0833bb00 +0x12:  mov    %edx,0x4(%esp)
0833bb04 +0x16:  mov    %eax,(%esp)
0833bb07 +0x19:  call   083426e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47b1
0833bb0c +0x1e:  sub    $0x4,%esp
0833bb0f +0x21:  jmp    0833bb7c <+0x8e>
0833bb11 +0x23:  lea    -0x18(%ebp),%eax
0833bb14 +0x26:  mov    %eax,(%esp)
0833bb17 +0x29:  call   08342782 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x484f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x484f
0833bb1c +0x2e:  mov    0x4(%eax),%eax
0833bb1f +0x31:  mov    %eax,-0xc(%ebp)
0833bb22 +0x34:  cmpl   $0x0,-0xc(%ebp)
0833bb26 +0x38:  je     0833bb5f <+0x71>
0833bb28 +0x3a:  mov    -0xc(%ebp),%eax
0833bb2b +0x3d:  mov    %eax,(%esp)
0833bb2e +0x40:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833bb33 +0x45:  cmp    0xc(%ebp),%eax
0833bb36 +0x48:  sete   %al
0833bb39 +0x4b:  test   %al,%al
0833bb3b +0x4d:  je     0833bb5f <+0x71>
0833bb3d +0x4f:  mov    -0xc(%ebp),%eax
0833bb40 +0x52:  mov    %eax,(%esp)
0833bb43 +0x55:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
0833bb48 +0x5a:  cmp    -0x1c(%ebp),%al
0833bb4b +0x5d:  sete   %al
0833bb4e +0x60:  test   %al,%al
0833bb50 +0x62:  je     0833bb5f <+0x71>
0833bb52 +0x64:  mov    -0xc(%ebp),%eax
0833bb55 +0x67:  mov    %eax,(%esp)
0833bb58 +0x6a:  call   0833756e <_ZN13user_creature9CCreature10isMaxLevelEv>  ; user_creature::CCreature::isMaxLevel()
0833bb5d +0x6f:  jmp    0833bbb0 <+0xc2>
0833bb5f +0x71:  lea    -0x10(%ebp),%eax
0833bb62 +0x74:  movl   $0x0,0x8(%esp)
0833bb6a +0x7c:  lea    -0x18(%ebp),%edx
0833bb6d +0x7f:  mov    %edx,0x4(%esp)
0833bb71 +0x83:  mov    %eax,(%esp)
0833bb74 +0x86:  call   08342744 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4811>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4811
0833bb79 +0x8b:  sub    $0x4,%esp
0833bb7c +0x8e:  mov    0x8(%ebp),%edx
0833bb7f +0x91:  lea    -0x14(%ebp),%eax
0833bb82 +0x94:  mov    %edx,0x4(%esp)
0833bb86 +0x98:  mov    %eax,(%esp)
0833bb89 +0x9b:  call   0834270a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47d7
0833bb8e +0xa0:  sub    $0x4,%esp
0833bb91 +0xa3:  lea    -0x14(%ebp),%eax
0833bb94 +0xa6:  mov    %eax,0x4(%esp)
0833bb98 +0xaa:  lea    -0x18(%ebp),%eax
0833bb9b +0xad:  mov    %eax,(%esp)
0833bb9e +0xb0:  call   08342730 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47fd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47fd
0833bba3 +0xb5:  test   %al,%al
0833bba5 +0xb7:  jne    0833bb11 <+0x23>
0833bbab +0xbd:  mov    $0x0,%eax
0833bbb0 +0xc2:  leave
0833bbb1 +0xc3:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::checkMaxCreatureLevel @ 0x833baee

/* user_creature::CCreatureMgr::checkMaxCreatureLevel(int, bool) const */

undefined4 __thiscall
user_creature::CCreatureMgr::checkMaxCreatureLevel(CCreatureMgr *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreature *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_1c);
    local_10 = *(CCreature **)(iVar2 + 4);
    if (((local_10 != (CCreature *)0x0) &&
        (iVar2 = CCreatureItem::GetItemId((CCreatureItem *)local_10), iVar2 == param_1)) &&
       (cVar1 = CCreature::IsGrowCreature(local_10), (bool)cVar1 == param_2)) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_1c);
  }
  uVar3 = CCreature::isMaxLevel(local_10);
  return uVar3;
}
```
