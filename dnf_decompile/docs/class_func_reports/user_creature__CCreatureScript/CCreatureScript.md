# CCreatureScript

`_ZN13user_creature15CCreatureScriptC1Ev`

`user_creature::CCreatureScript::CCreatureScript()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScript` | `0x0833c77e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c77e  _ZN13user_creature15CCreatureScriptC1Ev
#           user_creature::CCreatureScript::CCreatureScript()
# range [0x0833c77e, 0x0833c847]
0833c77e +0x00:  push   %ebp
0833c77f +0x01:  mov    %esp,%ebp
0833c781 +0x03:  push   %esi
0833c782 +0x04:  push   %ebx
0833c783 +0x05:  sub    $0x10,%esp
0833c786 +0x08:  mov    0x8(%ebp),%eax
0833c789 +0x0b:  add    $0x8,%eax
0833c78c +0x0e:  mov    %eax,(%esp)
0833c78f +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0833c794 +0x16:  mov    0x8(%ebp),%eax
0833c797 +0x19:  movl   $0x0,0x24(%eax)
0833c79e +0x20:  mov    0x8(%ebp),%eax
0833c7a1 +0x23:  movl   $0x0,0x28(%eax)
0833c7a8 +0x2a:  mov    0x8(%ebp),%eax
0833c7ab +0x2d:  movb   $0x0,0x2c(%eax)
0833c7af +0x31:  mov    0x8(%ebp),%eax
0833c7b2 +0x34:  add    $0x34,%eax
0833c7b5 +0x37:  mov    %eax,(%esp)
0833c7b8 +0x3a:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0833c7bd +0x3f:  mov    0x8(%ebp),%eax
0833c7c0 +0x42:  add    $0x68,%eax
0833c7c3 +0x45:  mov    %eax,(%esp)
0833c7c6 +0x48:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0833c7cb +0x4d:  mov    0x8(%ebp),%eax
0833c7ce +0x50:  add    $0x8,%eax
0833c7d1 +0x53:  mov    %eax,(%esp)
0833c7d4 +0x56:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0833c7d9 +0x5b:  mov    0x8(%ebp),%eax
0833c7dc +0x5e:  movl   $0x0,0x20(%eax)
0833c7e3 +0x65:  mov    0x8(%ebp),%eax
0833c7e6 +0x68:  add    $0x68,%eax
0833c7e9 +0x6b:  mov    %eax,(%esp)
0833c7ec +0x6e:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0833c7f1 +0x73:  jmp    0833c841 <+0xc3>
0833c7f3 +0x75:  mov    %edx,%ebx
0833c7f5 +0x77:  mov    %eax,%esi
0833c7f7 +0x79:  mov    0x8(%ebp),%eax
0833c7fa +0x7c:  add    $0x68,%eax
0833c7fd +0x7f:  mov    %eax,(%esp)
0833c800 +0x82:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833c805 +0x87:  mov    %esi,%eax
0833c807 +0x89:  mov    %ebx,%edx
0833c809 +0x8b:  jmp    0833c80b <+0x8d>
0833c80b +0x8d:  mov    %edx,%ebx
0833c80d +0x8f:  mov    %eax,%esi
0833c80f +0x91:  mov    0x8(%ebp),%eax
0833c812 +0x94:  add    $0x34,%eax
0833c815 +0x97:  mov    %eax,(%esp)
0833c818 +0x9a:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0833c81d +0x9f:  mov    %esi,%eax
0833c81f +0xa1:  mov    %ebx,%edx
0833c821 +0xa3:  jmp    0833c823 <+0xa5>
0833c823 +0xa5:  mov    %edx,%ebx
0833c825 +0xa7:  mov    %eax,%esi
0833c827 +0xa9:  mov    0x8(%ebp),%eax
0833c82a +0xac:  add    $0x8,%eax
0833c82d +0xaf:  mov    %eax,(%esp)
0833c830 +0xb2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833c835 +0xb7:  mov    %esi,%eax
0833c837 +0xb9:  mov    %ebx,%edx
0833c839 +0xbb:  mov    %eax,(%esp)
0833c83c +0xbe:  call   08ae3750 <_Unwind_Resume>
0833c841 +0xc3:  add    $0x10,%esp
0833c844 +0xc6:  pop    %ebx
0833c845 +0xc7:  pop    %esi
0833c846 +0xc8:  pop    %ebp
0833c847 +0xc9:  ret
```

## 反编译 C

```c
// user_creature::CCreatureScript::CCreatureScript @ 0x833c77e

/* user_creature::CCreatureScript::CCreatureScript() */

void __thiscall user_creature::CCreatureScript::CCreatureScript(CCreatureScript *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (CCreatureScript)0x0;
                    /* try { // try from 0833c7b8 to 0833c7bc has its CatchHandler @ 0833c823 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x34));
                    /* try { // try from 0833c7c6 to 0833c7ca has its CatchHandler @ 0833c80b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x68));
                    /* try { // try from 0833c7d4 to 0833c7f0 has its CatchHandler @ 0833c7f3 */
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x68));
  return;
}
```
