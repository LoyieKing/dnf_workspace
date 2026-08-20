# IsSaveCreatureItem

`_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv`

`user_creature::CCreatureMgr::IsSaveCreatureItem()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833ba30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833ba30  _ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv
#           user_creature::CCreatureMgr::IsSaveCreatureItem()
# range [0x0833ba30, 0x0833baed]
0833ba30 +0x00:  push   %ebp
0833ba31 +0x01:  mov    %esp,%ebp
0833ba33 +0x03:  sub    $0x28,%esp
0833ba36 +0x06:  mov    0x8(%ebp),%eax
0833ba39 +0x09:  mov    %eax,(%esp)
0833ba3c +0x0c:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833ba41 +0x11:  test   %eax,%eax
0833ba43 +0x13:  sete   %al
0833ba46 +0x16:  test   %al,%al
0833ba48 +0x18:  je     0833ba54 <+0x24>
0833ba4a +0x1a:  mov    $0x0,%eax
0833ba4f +0x1f:  jmp    0833baec <+0xbc>
0833ba54 +0x24:  mov    0x8(%ebp),%edx
0833ba57 +0x27:  lea    -0x18(%ebp),%eax
0833ba5a +0x2a:  mov    %edx,0x4(%esp)
0833ba5e +0x2e:  mov    %eax,(%esp)
0833ba61 +0x31:  call   083429f8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ac5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ac5
0833ba66 +0x36:  sub    $0x4,%esp
0833ba69 +0x39:  jmp    0833babc <+0x8c>
0833ba6b +0x3b:  lea    -0x18(%ebp),%eax
0833ba6e +0x3e:  mov    %eax,(%esp)
0833ba71 +0x41:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833ba76 +0x46:  mov    0x4(%eax),%eax
0833ba79 +0x49:  mov    %eax,-0xc(%ebp)
0833ba7c +0x4c:  cmpl   $0x0,-0xc(%ebp)
0833ba80 +0x50:  je     0833ba9f <+0x6f>
0833ba82 +0x52:  mov    -0xc(%ebp),%eax
0833ba85 +0x55:  mov    (%eax),%eax
0833ba87 +0x57:  add    $0x4,%eax
0833ba8a +0x5a:  mov    (%eax),%edx
0833ba8c +0x5c:  mov    -0xc(%ebp),%eax
0833ba8f +0x5f:  mov    %eax,(%esp)
0833ba92 +0x62:  call   *%edx
0833ba94 +0x64:  test   %al,%al
0833ba96 +0x66:  je     0833ba9f <+0x6f>
0833ba98 +0x68:  mov    $0x1,%eax
0833ba9d +0x6d:  jmp    0833baec <+0xbc>
0833ba9f +0x6f:  lea    -0x10(%ebp),%eax
0833baa2 +0x72:  movl   $0x0,0x8(%esp)
0833baaa +0x7a:  lea    -0x18(%ebp),%edx
0833baad +0x7d:  mov    %edx,0x4(%esp)
0833bab1 +0x81:  mov    %eax,(%esp)
0833bab4 +0x84:  call   08342a32 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aff>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aff
0833bab9 +0x89:  sub    $0x4,%esp
0833babc +0x8c:  mov    0x8(%ebp),%edx
0833babf +0x8f:  lea    -0x14(%ebp),%eax
0833bac2 +0x92:  mov    %edx,0x4(%esp)
0833bac6 +0x96:  mov    %eax,(%esp)
0833bac9 +0x99:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833bace +0x9e:  sub    $0x4,%esp
0833bad1 +0xa1:  lea    -0x14(%ebp),%eax
0833bad4 +0xa4:  mov    %eax,0x4(%esp)
0833bad8 +0xa8:  lea    -0x18(%ebp),%eax
0833badb +0xab:  mov    %eax,(%esp)
0833bade +0xae:  call   08342a1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aeb
0833bae3 +0xb3:  test   %al,%al
0833bae5 +0xb5:  jne    0833ba6b <+0x3b>
0833bae7 +0xb7:  mov    $0x0,%eax
0833baec +0xbc:  leave
0833baed +0xbd:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsSaveCreatureItem @ 0x833ba30

/* user_creature::CCreatureMgr::IsSaveCreatureItem() */

undefined4 __thiscall user_creature::CCreatureMgr::IsSaveCreatureItem(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  int *local_10;
  
  iVar2 = std::
          map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_1c);
      local_10 = *(int **)(iVar2 + 4);
      if ((local_10 != (int *)0x0) &&
         (cVar1 = (**(code **)(*local_10 + 4))(local_10), cVar1 != '\0')) {
        return 1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return 0;
}
```
