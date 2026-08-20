# FindCreatureItem

`_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi`

`user_creature::CCreatureMgr::FindCreatureItem(int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339292` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339292  _ZNK13user_creature12CCreatureMgr16FindCreatureItemEi
#           user_creature::CCreatureMgr::FindCreatureItem(int) const
# range [0x08339292, 0x083392f5]
08339292 +0x00:  push   %ebp
08339293 +0x01:  mov    %esp,%ebp
08339295 +0x03:  sub    $0x28,%esp
08339298 +0x06:  mov    0x8(%ebp),%edx
0833929b +0x09:  lea    -0x10(%ebp),%eax
0833929e +0x0c:  lea    0xc(%ebp),%ecx
083392a1 +0x0f:  mov    %ecx,0x8(%esp)
083392a5 +0x13:  mov    %edx,0x4(%esp)
083392a9 +0x17:  mov    %eax,(%esp)
083392ac +0x1a:  call   0834280a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x48d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x48d7
083392b1 +0x1f:  sub    $0x4,%esp
083392b4 +0x22:  mov    0x8(%ebp),%edx
083392b7 +0x25:  lea    -0xc(%ebp),%eax
083392ba +0x28:  mov    %edx,0x4(%esp)
083392be +0x2c:  mov    %eax,(%esp)
083392c1 +0x2f:  call   0834270a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47d7
083392c6 +0x34:  sub    $0x4,%esp
083392c9 +0x37:  lea    -0xc(%ebp),%eax
083392cc +0x3a:  mov    %eax,0x4(%esp)
083392d0 +0x3e:  lea    -0x10(%ebp),%eax
083392d3 +0x41:  mov    %eax,(%esp)
083392d6 +0x44:  call   08342730 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47fd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47fd
083392db +0x49:  test   %al,%al
083392dd +0x4b:  je     083392ef <+0x5d>
083392df +0x4d:  lea    -0x10(%ebp),%eax
083392e2 +0x50:  mov    %eax,(%esp)
083392e5 +0x53:  call   08342782 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x484f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x484f
083392ea +0x58:  mov    0x4(%eax),%eax
083392ed +0x5b:  jmp    083392f4 <+0x62>
083392ef +0x5d:  mov    $0x0,%eax
083392f4 +0x62:  leave
083392f5 +0x63:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::FindCreatureItem @ 0x8339292

/* user_creature::CCreatureMgr::FindCreatureItem(int) const */

undefined4 user_creature::CCreatureMgr::FindCreatureItem(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_10 [12];
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find((int *)local_14);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
