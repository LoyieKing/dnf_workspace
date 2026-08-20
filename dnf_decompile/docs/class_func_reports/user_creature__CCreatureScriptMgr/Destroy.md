# Destroy

`_ZN13user_creature18CCreatureScriptMgr7DestroyEv`

`user_creature::CCreatureScriptMgr::Destroy()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScriptMgr` | `0x0833d3bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d3bc  _ZN13user_creature18CCreatureScriptMgr7DestroyEv
#           user_creature::CCreatureScriptMgr::Destroy()
# range [0x0833d3bc, 0x0833d499]
0833d3bc +0x00:  push   %ebp
0833d3bd +0x01:  mov    %esp,%ebp
0833d3bf +0x03:  push   %ebx
0833d3c0 +0x04:  sub    $0x24,%esp
0833d3c3 +0x07:  mov    0x8(%ebp),%eax
0833d3c6 +0x0a:  add    $0x18,%eax
0833d3c9 +0x0d:  mov    %eax,(%esp)
0833d3cc +0x10:  call   08342ecc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4f99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4f99
0833d3d1 +0x15:  test   %eax,%eax
0833d3d3 +0x17:  sete   %al
0833d3d6 +0x1a:  test   %al,%al
0833d3d8 +0x1c:  jne    0833d493 <+0xd7>
0833d3de +0x22:  mov    0x8(%ebp),%eax
0833d3e1 +0x25:  lea    0x18(%eax),%edx
0833d3e4 +0x28:  lea    -0x18(%ebp),%eax
0833d3e7 +0x2b:  mov    %edx,0x4(%esp)
0833d3eb +0x2f:  mov    %eax,(%esp)
0833d3ee +0x32:  call   08342ee0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4fad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4fad
0833d3f3 +0x37:  sub    $0x4,%esp
0833d3f6 +0x3a:  jmp    0833d451 <+0x95>
0833d3f8 +0x3c:  movl   $0x0,-0xc(%ebp)
0833d3ff +0x43:  lea    -0x18(%ebp),%eax
0833d402 +0x46:  mov    %eax,(%esp)
0833d405 +0x49:  call   08342f44 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5011>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5011
0833d40a +0x4e:  mov    0x4(%eax),%eax
0833d40d +0x51:  mov    %eax,-0xc(%ebp)
0833d410 +0x54:  cmpl   $0x0,-0xc(%ebp)
0833d414 +0x58:  je     0833d434 <+0x78>
0833d416 +0x5a:  mov    -0xc(%ebp),%ebx
0833d419 +0x5d:  test   %ebx,%ebx
0833d41b +0x5f:  je     0833d42d <+0x71>
0833d41d +0x61:  mov    %ebx,(%esp)
0833d420 +0x64:  call   0833c848 <_ZN13user_creature15CCreatureScriptD1Ev>  ; user_creature::CCreatureScript::~CCreatureScript()
0833d425 +0x69:  mov    %ebx,(%esp)
0833d428 +0x6c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0833d42d +0x71:  movl   $0x0,-0xc(%ebp)
0833d434 +0x78:  lea    -0x10(%ebp),%eax
0833d437 +0x7b:  movl   $0x0,0x8(%esp)
0833d43f +0x83:  lea    -0x18(%ebp),%edx
0833d442 +0x86:  mov    %edx,0x4(%esp)
0833d446 +0x8a:  mov    %eax,(%esp)
0833d449 +0x8d:  call   08342f06 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4fd3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4fd3
0833d44e +0x92:  sub    $0x4,%esp
0833d451 +0x95:  mov    0x8(%ebp),%eax
0833d454 +0x98:  lea    0x18(%eax),%edx
0833d457 +0x9b:  lea    -0x14(%ebp),%eax
0833d45a +0x9e:  mov    %edx,0x4(%esp)
0833d45e +0xa2:  mov    %eax,(%esp)
0833d461 +0xa5:  call   08342df8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ec5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ec5
0833d466 +0xaa:  sub    $0x4,%esp
0833d469 +0xad:  lea    -0x14(%ebp),%eax
0833d46c +0xb0:  mov    %eax,0x4(%esp)
0833d470 +0xb4:  lea    -0x18(%ebp),%eax
0833d473 +0xb7:  mov    %eax,(%esp)
0833d476 +0xba:  call   08342e1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4eeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4eeb
0833d47b +0xbf:  test   %al,%al
0833d47d +0xc1:  jne    0833d3f8 <+0x3c>
0833d483 +0xc7:  mov    0x8(%ebp),%eax
0833d486 +0xca:  add    $0x18,%eax
0833d489 +0xcd:  mov    %eax,(%esp)
0833d48c +0xd0:  call   08342f52 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x501f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x501f
0833d491 +0xd5:  jmp    0833d494 <+0xd8>
0833d493 +0xd7:  nop
0833d494 +0xd8:  mov    -0x4(%ebp),%ebx
0833d497 +0xdb:  leave
0833d498 +0xdc:  ret
0833d499 +0xdd:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScriptMgr::Destroy @ 0x833d3bc

/* user_creature::CCreatureScriptMgr::Destroy() */

void __thiscall user_creature::CCreatureScriptMgr::Destroy(CCreatureScriptMgr *this)

{
  CCreatureScript *this_00;
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_1c [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_14 [4];
  CCreatureScript *local_10;
  
  iVar2 = std::
          map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
          ::size((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
                  *)(this + 0x18));
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> *)
                         local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      local_10 = (CCreatureScript *)0x0;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> *)
                         local_1c);
      this_00 = *(CCreatureScript **)(iVar2 + 4);
      local_10 = this_00;
      if (this_00 != (CCreatureScript *)0x0) {
        if (this_00 != (CCreatureScript *)0x0) {
          CCreatureScript::~CCreatureScript(this_00);
          operator_delete(this_00);
        }
        local_10 = (CCreatureScript *)0x0;
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator++
                (local_14,(int)local_1c);
    }
    std::
    map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
    ::clear((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
             *)(this + 0x18));
  }
  return;
}
```
