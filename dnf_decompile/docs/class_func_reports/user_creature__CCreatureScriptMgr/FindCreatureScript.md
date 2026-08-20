# FindCreatureScript

`_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi`

`user_creature::CCreatureScriptMgr::FindCreatureScript(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScriptMgr` | `0x0833d49a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d49a  _ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi
#           user_creature::CCreatureScriptMgr::FindCreatureScript(int)
# range [0x0833d49a, 0x0833d549]
0833d49a +0x00:  push   %ebp
0833d49b +0x01:  mov    %esp,%ebp
0833d49d +0x03:  sub    $0x38,%esp
0833d4a0 +0x06:  mov    0x8(%ebp),%eax
0833d4a3 +0x09:  lea    0x18(%eax),%ecx
0833d4a6 +0x0c:  lea    -0x20(%ebp),%eax
0833d4a9 +0x0f:  lea    0xc(%ebp),%edx
0833d4ac +0x12:  mov    %edx,0x8(%esp)
0833d4b0 +0x16:  mov    %ecx,0x4(%esp)
0833d4b4 +0x1a:  mov    %eax,(%esp)
0833d4b7 +0x1d:  call   08342dcc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e99
0833d4bc +0x22:  sub    $0x4,%esp
0833d4bf +0x25:  mov    0x8(%ebp),%eax
0833d4c2 +0x28:  lea    0x18(%eax),%edx
0833d4c5 +0x2b:  lea    -0x1c(%ebp),%eax
0833d4c8 +0x2e:  mov    %edx,0x4(%esp)
0833d4cc +0x32:  mov    %eax,(%esp)
0833d4cf +0x35:  call   08342df8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ec5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ec5
0833d4d4 +0x3a:  sub    $0x4,%esp
0833d4d7 +0x3d:  lea    -0x1c(%ebp),%eax
0833d4da +0x40:  mov    %eax,0x4(%esp)
0833d4de +0x44:  lea    -0x20(%ebp),%eax
0833d4e1 +0x47:  mov    %eax,(%esp)
0833d4e4 +0x4a:  call   08342f66 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5033>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5033
0833d4e9 +0x4f:  test   %al,%al
0833d4eb +0x51:  je     0833d53a <+0xa0>
0833d4ed +0x53:  movl   $0x5,0xc(%esp)
0833d4f5 +0x5b:  movl   $0xfe8,0x8(%esp)
0833d4fd +0x63:  movl   $&_ZZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833d505 +0x6b:  lea    -0x18(%ebp),%eax
0833d508 +0x6e:  mov    %eax,(%esp)
0833d50b +0x71:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833d510 +0x76:  movl   $0xfe8,0xc(%esp)
0833d518 +0x7e:  movl   $&_ZZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEiE19__PRETTY_FUNCTION__,0x8(%esp)
0833d520 +0x86:  movl   $"[%s][%d]",0x4(%esp)
0833d528 +0x8e:  lea    -0x18(%ebp),%eax
0833d52b +0x91:  mov    %eax,(%esp)
0833d52e +0x94:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833d533 +0x99:  mov    $0x0,%eax
0833d538 +0x9e:  jmp    0833d548 <+0xae>
0833d53a +0xa0:  lea    -0x20(%ebp),%eax
0833d53d +0xa3:  mov    %eax,(%esp)
0833d540 +0xa6:  call   08342f44 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5011>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5011
0833d545 +0xab:  mov    0x4(%eax),%eax
0833d548 +0xae:  leave
0833d549 +0xaf:  ret
```

## 反编译 C

```c
// user_creature::CCreatureScriptMgr::FindCreatureScript @ 0x833d49a

/* user_creature::CCreatureScriptMgr::FindCreatureScript(int) */

undefined4 user_creature::CCreatureScriptMgr::FindCreatureScript(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_24 [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_20 [4];
  cMyTrace local_1c [24];
  
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::find((int *)local_24);
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator->
                      (local_24);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "user_creature::CCreatureScript* user_creature::CCreatureScriptMgr::FindCreatureScript(int)"
                       ,0xfe8,5);
    cMyTrace::operator()
              (local_1c,"[%s][%d]",
               "user_creature::CCreatureScript* user_creature::CCreatureScriptMgr::FindCreatureScript(int)"
               ,0xfe8);
    uVar2 = 0;
  }
  return uVar2;
}
```
