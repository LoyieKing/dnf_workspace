# ~CCreatureScript

`_ZN13user_creature15CCreatureScriptD1Ev`

`user_creature::CCreatureScript::~CCreatureScript()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScript` | `0x0833c848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c848  _ZN13user_creature15CCreatureScriptD1Ev
#           user_creature::CCreatureScript::~CCreatureScript()
# range [0x0833c848, 0x0833c8e7]
0833c848 +0x00:  push   %ebp
0833c849 +0x01:  mov    %esp,%ebp
0833c84b +0x03:  push   %esi
0833c84c +0x04:  push   %ebx
0833c84d +0x05:  sub    $0x10,%esp
0833c850 +0x08:  mov    0x8(%ebp),%eax
0833c853 +0x0b:  mov    0x20(%eax),%eax
0833c856 +0x0e:  test   %eax,%eax
0833c858 +0x10:  je     0833c87c <+0x34>
0833c85a +0x12:  mov    0x8(%ebp),%eax
0833c85d +0x15:  mov    0x20(%eax),%eax
0833c860 +0x18:  test   %eax,%eax
0833c862 +0x1a:  je     0833c872 <+0x2a>
0833c864 +0x1c:  mov    0x8(%ebp),%eax
0833c867 +0x1f:  mov    0x20(%eax),%eax
0833c86a +0x22:  mov    %eax,(%esp)
0833c86d +0x25:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0833c872 +0x2a:  mov    0x8(%ebp),%eax
0833c875 +0x2d:  movl   $0x0,0x20(%eax)
0833c87c +0x34:  mov    0x8(%ebp),%eax
0833c87f +0x37:  add    $0x68,%eax
0833c882 +0x3a:  mov    %eax,(%esp)
0833c885 +0x3d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833c88a +0x42:  jmp    0833c8a4 <+0x5c>
0833c88c +0x44:  mov    %edx,%ebx
0833c88e +0x46:  mov    %eax,%esi
0833c890 +0x48:  mov    0x8(%ebp),%eax
0833c893 +0x4b:  add    $0x34,%eax
0833c896 +0x4e:  mov    %eax,(%esp)
0833c899 +0x51:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0833c89e +0x56:  mov    %esi,%eax
0833c8a0 +0x58:  mov    %ebx,%edx
0833c8a2 +0x5a:  jmp    0833c8b4 <+0x6c>
0833c8a4 +0x5c:  mov    0x8(%ebp),%eax
0833c8a7 +0x5f:  add    $0x34,%eax
0833c8aa +0x62:  mov    %eax,(%esp)
0833c8ad +0x65:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0833c8b2 +0x6a:  jmp    0833c8d2 <+0x8a>
0833c8b4 +0x6c:  mov    %edx,%ebx
0833c8b6 +0x6e:  mov    %eax,%esi
0833c8b8 +0x70:  mov    0x8(%ebp),%eax
0833c8bb +0x73:  add    $0x8,%eax
0833c8be +0x76:  mov    %eax,(%esp)
0833c8c1 +0x79:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833c8c6 +0x7e:  mov    %esi,%eax
0833c8c8 +0x80:  mov    %ebx,%edx
0833c8ca +0x82:  mov    %eax,(%esp)
0833c8cd +0x85:  call   08ae3750 <_Unwind_Resume>
0833c8d2 +0x8a:  mov    0x8(%ebp),%eax
0833c8d5 +0x8d:  add    $0x8,%eax
0833c8d8 +0x90:  mov    %eax,(%esp)
0833c8db +0x93:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833c8e0 +0x98:  add    $0x10,%esp
0833c8e3 +0x9b:  pop    %ebx
0833c8e4 +0x9c:  pop    %esi
0833c8e5 +0x9d:  pop    %ebp
0833c8e6 +0x9e:  ret
0833c8e7 +0x9f:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScript::~CCreatureScript @ 0x833c848

/* user_creature::CCreatureScript::~CCreatureScript() */

void __thiscall user_creature::CCreatureScript::~CCreatureScript(CCreatureScript *this)

{
  if (*(int *)(this + 0x20) != 0) {
    if (*(int *)(this + 0x20) != 0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
                    /* try { // try from 0833c885 to 0833c889 has its CatchHandler @ 0833c88c */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
                    /* try { // try from 0833c8ad to 0833c8b1 has its CatchHandler @ 0833c8b4 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x34));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}
```
