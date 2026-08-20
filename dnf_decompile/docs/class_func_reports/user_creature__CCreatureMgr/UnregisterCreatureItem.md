# UnregisterCreatureItem

`_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi`

`user_creature::CCreatureMgr::UnregisterCreatureItem(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a854` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a854  _ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi
#           user_creature::CCreatureMgr::UnregisterCreatureItem(int)
# range [0x0833a854, 0x0833a941]
0833a854 +0x00:  push   %ebp
0833a855 +0x01:  mov    %esp,%ebp
0833a857 +0x03:  push   %esi
0833a858 +0x04:  push   %ebx
0833a859 +0x05:  sub    $0x30,%esp
0833a85c +0x08:  mov    0x8(%ebp),%edx
0833a85f +0x0b:  lea    -0x24(%ebp),%eax
0833a862 +0x0e:  lea    0xc(%ebp),%ecx
0833a865 +0x11:  mov    %ecx,0x8(%esp)
0833a869 +0x15:  mov    %edx,0x4(%esp)
0833a86d +0x19:  mov    %eax,(%esp)
0833a870 +0x1c:  call   08342984 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a51>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a51
0833a875 +0x21:  sub    $0x4,%esp
0833a878 +0x24:  mov    0x8(%ebp),%edx
0833a87b +0x27:  lea    -0x20(%ebp),%eax
0833a87e +0x2a:  mov    %edx,0x4(%esp)
0833a882 +0x2e:  mov    %eax,(%esp)
0833a885 +0x31:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833a88a +0x36:  sub    $0x4,%esp
0833a88d +0x39:  lea    -0x20(%ebp),%eax
0833a890 +0x3c:  mov    %eax,0x4(%esp)
0833a894 +0x40:  lea    -0x24(%ebp),%eax
0833a897 +0x43:  mov    %eax,(%esp)
0833a89a +0x46:  call   083429d6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aa3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aa3
0833a89f +0x4b:  test   %al,%al
0833a8a1 +0x4d:  je     0833a8fc <+0xa8>
0833a8a3 +0x4f:  mov    0xc(%ebp),%esi
0833a8a6 +0x52:  mov    0x8(%ebp),%eax
0833a8a9 +0x55:  mov    0x1c(%eax),%eax
0833a8ac +0x58:  mov    %eax,(%esp)
0833a8af +0x5b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833a8b4 +0x60:  movzwl %ax,%ebx
0833a8b7 +0x63:  movl   $0x5,0xc(%esp)
0833a8bf +0x6b:  movl   $0xbc1,0x8(%esp)
0833a8c7 +0x73:  movl   $&_ZZN13user_creature12CCreatureMgr22UnregisterCreatureItemEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833a8cf +0x7b:  lea    -0x1c(%ebp),%eax
0833a8d2 +0x7e:  mov    %eax,(%esp)
0833a8d5 +0x81:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833a8da +0x86:  mov    %esi,0xc(%esp)
0833a8de +0x8a:  mov    %ebx,0x8(%esp)
0833a8e2 +0x8e:  movl   $"UnregisterCreatureItem failed. uid(%d), key(%d)\n",0x4(%esp)
0833a8ea +0x96:  lea    -0x1c(%ebp),%eax
0833a8ed +0x99:  mov    %eax,(%esp)
0833a8f0 +0x9c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833a8f5 +0xa1:  mov    $0x0,%eax
0833a8fa +0xa6:  jmp    0833a938 <+0xe4>
0833a8fc +0xa8:  lea    -0x24(%ebp),%eax
0833a8ff +0xab:  mov    %eax,(%esp)
0833a902 +0xae:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833a907 +0xb3:  mov    0x4(%eax),%eax
0833a90a +0xb6:  mov    %eax,-0xc(%ebp)
0833a90d +0xb9:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
0833a912 +0xbe:  mov    -0xc(%ebp),%edx
0833a915 +0xc1:  mov    %edx,0x4(%esp)
0833a919 +0xc5:  mov    %eax,(%esp)
0833a91c +0xc8:  call   0833f618 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x16e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x16e5
0833a921 +0xcd:  mov    0x8(%ebp),%eax
0833a924 +0xd0:  mov    -0x24(%ebp),%edx
0833a927 +0xd3:  mov    %edx,0x4(%esp)
0833a92b +0xd7:  mov    %eax,(%esp)
0833a92e +0xda:  call   08342b1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4beb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4beb
0833a933 +0xdf:  mov    $0x1,%eax
0833a938 +0xe4:  lea    -0x8(%ebp),%esp
0833a93b +0xe7:  add    $0x0,%esp
0833a93e +0xea:  pop    %ebx
0833a93f +0xeb:  pop    %esi
0833a940 +0xec:  pop    %ebp
0833a941 +0xed:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::UnregisterCreatureItem @ 0x833a854

/* user_creature::CCreatureMgr::UnregisterCreatureItem(int) */

bool __thiscall user_creature::CCreatureMgr::UnregisterCreatureItem(CCreatureMgr *this,int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  CCreatureItemFactory *this_00;
  int local_28;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find(&local_28);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                     &local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       &local_28);
    local_10 = *(CCreatureItem **)(iVar3 + 4);
    this_00 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
    CCreatureItemFactory::FreeCreatureItem(this_00,local_10);
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::erase((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
             *)this,local_28);
  }
  else {
    uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_20,"bool user_creature::CCreatureMgr::UnregisterCreatureItem(int)",
                       0xbc1,5);
    cMyTrace::operator()
              (local_20,"UnregisterCreatureItem failed. uid(%d), key(%d)\n",uVar2 & 0xffff,param_1);
  }
  return cVar1 == '\0';
}
```
