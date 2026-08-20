# IsExistedCreatureItem

`_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi`

`user_creature::CCreatureMgr::IsExistedCreatureItem(int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a942  _ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi
#           user_creature::CCreatureMgr::IsExistedCreatureItem(int) const
# range [0x0833a942, 0x0833aa31]
0833a942 +0x00:  push   %ebp
0833a943 +0x01:  mov    %esp,%ebp
0833a945 +0x03:  sub    $0x38,%esp
0833a948 +0x06:  mov    0x8(%ebp),%edx
0833a94b +0x09:  lea    -0x28(%ebp),%eax
0833a94e +0x0c:  mov    %edx,0x4(%esp)
0833a952 +0x10:  mov    %eax,(%esp)
0833a955 +0x13:  call   083426e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47b1
0833a95a +0x18:  sub    $0x4,%esp
0833a95d +0x1b:  jmp    0833a9fb <+0xb9>
0833a962 +0x20:  lea    -0x28(%ebp),%eax
0833a965 +0x23:  mov    %eax,(%esp)
0833a968 +0x26:  call   08342782 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x484f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x484f
0833a96d +0x2b:  mov    0x4(%eax),%eax
0833a970 +0x2e:  mov    %eax,-0xc(%ebp)
0833a973 +0x31:  cmpl   $0x0,-0xc(%ebp)
0833a977 +0x35:  je     0833a998 <+0x56>
0833a979 +0x37:  mov    -0xc(%ebp),%eax
0833a97c +0x3a:  mov    %eax,(%esp)
0833a97f +0x3d:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833a984 +0x42:  cmp    0xc(%ebp),%eax
0833a987 +0x45:  sete   %al
0833a98a +0x48:  test   %al,%al
0833a98c +0x4a:  je     0833a9de <+0x9c>
0833a98e +0x4c:  mov    $0x1,%eax
0833a993 +0x51:  jmp    0833aa2f <+0xed>
0833a998 +0x56:  movl   $0x5,0xc(%esp)
0833a9a0 +0x5e:  movl   $0xbda,0x8(%esp)
0833a9a8 +0x66:  movl   $&_ZZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833a9b0 +0x6e:  lea    -0x20(%ebp),%eax
0833a9b3 +0x71:  mov    %eax,(%esp)
0833a9b6 +0x74:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833a9bb +0x79:  movl   $0xbda,0xc(%esp)
0833a9c3 +0x81:  movl   $&_ZZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
0833a9cb +0x89:  movl   $"[%s][%d]",0x4(%esp)
0833a9d3 +0x91:  lea    -0x20(%ebp),%eax
0833a9d6 +0x94:  mov    %eax,(%esp)
0833a9d9 +0x97:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833a9de +0x9c:  lea    -0x10(%ebp),%eax
0833a9e1 +0x9f:  movl   $0x0,0x8(%esp)
0833a9e9 +0xa7:  lea    -0x28(%ebp),%edx
0833a9ec +0xaa:  mov    %edx,0x4(%esp)
0833a9f0 +0xae:  mov    %eax,(%esp)
0833a9f3 +0xb1:  call   08342744 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4811>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4811
0833a9f8 +0xb6:  sub    $0x4,%esp
0833a9fb +0xb9:  mov    0x8(%ebp),%edx
0833a9fe +0xbc:  lea    -0x24(%ebp),%eax
0833aa01 +0xbf:  mov    %edx,0x4(%esp)
0833aa05 +0xc3:  mov    %eax,(%esp)
0833aa08 +0xc6:  call   0834270a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47d7
0833aa0d +0xcb:  sub    $0x4,%esp
0833aa10 +0xce:  lea    -0x24(%ebp),%eax
0833aa13 +0xd1:  mov    %eax,0x4(%esp)
0833aa17 +0xd5:  lea    -0x28(%ebp),%eax
0833aa1a +0xd8:  mov    %eax,(%esp)
0833aa1d +0xdb:  call   08342730 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47fd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47fd
0833aa22 +0xe0:  test   %al,%al
0833aa24 +0xe2:  jne    0833a962 <+0x20>
0833aa2a +0xe8:  mov    $0x0,%eax
0833aa2f +0xed:  leave
0833aa30 +0xee:  ret
0833aa31 +0xef:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsExistedCreatureItem @ 0x833a942

/* user_creature::CCreatureMgr::IsExistedCreatureItem(int) const */

undefined4 __thiscall
user_creature::CCreatureMgr::IsExistedCreatureItem(CCreatureMgr *this,int param_1)

{
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_2c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_28 [4];
  cMyTrace local_24 [16];
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_2c);
  do {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_28);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_2c,(_Rb_tree_const_iterator *)local_28);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_2c);
    local_10 = *(CCreatureItem **)(iVar2 + 4);
    if (local_10 == (CCreatureItem *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "bool user_creature::CCreatureMgr::IsExistedCreatureItem(int) const",0xbda,
                         5);
      cMyTrace::operator()
                (local_24,"[%s][%d]",
                 "bool user_creature::CCreatureMgr::IsExistedCreatureItem(int) const",0xbda);
    }
    else {
      iVar2 = CCreatureItem::GetSlotNo(local_10);
      if (iVar2 == param_1) {
        return 1;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_2c);
  } while( true );
}
```
