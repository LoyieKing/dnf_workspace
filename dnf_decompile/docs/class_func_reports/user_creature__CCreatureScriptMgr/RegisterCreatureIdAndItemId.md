# RegisterCreatureIdAndItemId

`_ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii`

`user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScriptMgr` | `0x0833d54a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d54a  _ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii
#           user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)
# range [0x0833d54a, 0x0833d635]
0833d54a +0x00:  push   %ebp
0833d54b +0x01:  mov    %esp,%ebp
0833d54d +0x03:  sub    $0x48,%esp
0833d550 +0x06:  mov    0x8(%ebp),%edx
0833d553 +0x09:  lea    -0x38(%ebp),%eax
0833d556 +0x0c:  lea    0xc(%ebp),%ecx
0833d559 +0x0f:  mov    %ecx,0x8(%esp)
0833d55d +0x13:  mov    %edx,0x4(%esp)
0833d561 +0x17:  mov    %eax,(%esp)
0833d564 +0x1a:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0833d569 +0x1f:  sub    $0x4,%esp
0833d56c +0x22:  mov    0x8(%ebp),%edx
0833d56f +0x25:  lea    -0x34(%ebp),%eax
0833d572 +0x28:  mov    %edx,0x4(%esp)
0833d576 +0x2c:  mov    %eax,(%esp)
0833d579 +0x2f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0833d57e +0x34:  sub    $0x4,%esp
0833d581 +0x37:  lea    -0x34(%ebp),%eax
0833d584 +0x3a:  mov    %eax,0x4(%esp)
0833d588 +0x3e:  lea    -0x38(%ebp),%eax
0833d58b +0x41:  mov    %eax,(%esp)
0833d58e +0x44:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0833d593 +0x49:  test   %al,%al
0833d595 +0x4b:  je     0833d5e4 <+0x9a>
0833d597 +0x4d:  movl   $0x5,0xc(%esp)
0833d59f +0x55:  movl   $0xfff,0x8(%esp)
0833d5a7 +0x5d:  movl   $&_ZZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833d5af +0x65:  lea    -0x30(%ebp),%eax
0833d5b2 +0x68:  mov    %eax,(%esp)
0833d5b5 +0x6b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833d5ba +0x70:  movl   $0xfff,0xc(%esp)
0833d5c2 +0x78:  movl   $&_ZZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEiiE19__PRETTY_FUNCTION__,0x8(%esp)
0833d5ca +0x80:  movl   $"[%s][%d]",0x4(%esp)
0833d5d2 +0x88:  lea    -0x30(%ebp),%eax
0833d5d5 +0x8b:  mov    %eax,(%esp)
0833d5d8 +0x8e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833d5dd +0x93:  mov    $0x0,%eax
0833d5e2 +0x98:  jmp    0833d633 <+0xe9>
0833d5e4 +0x9a:  lea    -0x10(%ebp),%eax
0833d5e7 +0x9d:  lea    0x10(%ebp),%edx
0833d5ea +0xa0:  mov    %edx,0x8(%esp)
0833d5ee +0xa4:  lea    0xc(%ebp),%edx
0833d5f1 +0xa7:  mov    %edx,0x4(%esp)
0833d5f5 +0xab:  mov    %eax,(%esp)
0833d5f8 +0xae:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
0833d5fd +0xb3:  sub    $0x4,%esp
0833d600 +0xb6:  lea    -0x10(%ebp),%eax
0833d603 +0xb9:  mov    %eax,0x4(%esp)
0833d607 +0xbd:  lea    -0x18(%ebp),%eax
0833d60a +0xc0:  mov    %eax,(%esp)
0833d60d +0xc3:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0833d612 +0xc8:  mov    0x8(%ebp),%edx
0833d615 +0xcb:  lea    -0x20(%ebp),%eax
0833d618 +0xce:  lea    -0x18(%ebp),%ecx
0833d61b +0xd1:  mov    %ecx,0x8(%esp)
0833d61f +0xd5:  mov    %edx,0x4(%esp)
0833d623 +0xd9:  mov    %eax,(%esp)
0833d626 +0xdc:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0833d62b +0xe1:  sub    $0x4,%esp
0833d62e +0xe4:  mov    $0x1,%eax
0833d633 +0xe9:  leave
0833d634 +0xea:  ret
0833d635 +0xeb:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId @ 0x833d54a

/* user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int) */

bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int param_1,int param_2)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  cMyTrace local_34 [16];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  else {
    cMyTrace::cMyTrace(local_34,
                       "bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)"
                       ,0xfff,5);
    cMyTrace::operator()
              (local_34,"[%s][%d]",
               "bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)",0xfff
              );
  }
  return cVar1 == '\0';
}
```
