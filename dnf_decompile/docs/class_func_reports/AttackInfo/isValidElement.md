# isValidElement

`_ZN10AttackInfo14isValidElementE12ENUM_ELEMENT`

`AttackInfo::isValidElement(ENUM_ELEMENT)`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x088907fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088907fe  _ZN10AttackInfo14isValidElementE12ENUM_ELEMENT
#           AttackInfo::isValidElement(ENUM_ELEMENT)
# range [0x088907fe, 0x088908b7]
088907fe +0x00:  push   %ebp
088907ff +0x01:  mov    %esp,%ebp
08890801 +0x03:  sub    $0x228,%esp
08890807 +0x09:  lea    -0x214(%ebp),%eax
0889080d +0x0f:  mov    %eax,(%esp)
08890810 +0x12:  call   08890936 <_ZN10AttackInfo13getAttackTypeERSs+0x70>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70
08890815 +0x17:  mov    0x8(%ebp),%eax
08890818 +0x1a:  lea    0xa4(%eax),%edx
0889081e +0x20:  lea    -0x18(%ebp),%eax
08890821 +0x23:  mov    %edx,0x4(%esp)
08890825 +0x27:  mov    %eax,(%esp)
08890828 +0x2a:  call   08342d40 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e0d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e0d
0889082d +0x2f:  sub    $0x4,%esp
08890830 +0x32:  jmp    08890870 <+0x72>
08890832 +0x34:  lea    -0x18(%ebp),%eax
08890835 +0x37:  mov    %eax,(%esp)
08890838 +0x3a:  call   08342dbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e8b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e8b
0889083d +0x3f:  mov    (%eax),%eax
0889083f +0x41:  mov    %eax,-0xc(%ebp)
08890842 +0x44:  cmpl   $0x4,-0xc(%ebp)
08890846 +0x48:  je     08890853 <+0x55>
08890848 +0x4a:  mov    -0xc(%ebp),%eax
0889084b +0x4d:  movb   $0x1,-0x20a(%ebp,%eax,1)
08890853 +0x55:  lea    -0x10(%ebp),%eax
08890856 +0x58:  movl   $0x0,0x8(%esp)
0889085e +0x60:  lea    -0x18(%ebp),%edx
08890861 +0x63:  mov    %edx,0x4(%esp)
08890865 +0x67:  mov    %eax,(%esp)
08890868 +0x6a:  call   08890e6a <_ZN10AttackInfo13getAttackTypeERSs+0x5a4>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5a4
0889086d +0x6f:  sub    $0x4,%esp
08890870 +0x72:  mov    0x8(%ebp),%eax
08890873 +0x75:  lea    0xa4(%eax),%edx
08890879 +0x7b:  lea    -0x14(%ebp),%eax
0889087c +0x7e:  mov    %edx,0x4(%esp)
08890880 +0x82:  mov    %eax,(%esp)
08890883 +0x85:  call   08342d66 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e33>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e33
08890888 +0x8a:  sub    $0x4,%esp
0889088b +0x8d:  lea    -0x14(%ebp),%eax
0889088e +0x90:  mov    %eax,0x4(%esp)
08890892 +0x94:  lea    -0x18(%ebp),%eax
08890895 +0x97:  mov    %eax,(%esp)
08890898 +0x9a:  call   08342d8c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e59>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e59
0889089d +0x9f:  test   %al,%al
0889089f +0xa1:  jne    08890832 <+0x34>
088908a1 +0xa3:  mov    0xc(%ebp),%eax
088908a4 +0xa6:  mov    %eax,0x4(%esp)
088908a8 +0xaa:  lea    -0x214(%ebp),%eax
088908ae +0xb0:  mov    %eax,(%esp)
088908b1 +0xb3:  call   0809576e <_Z24isValidAttackInfoElementP23STComputeDamageVariablei>  ; isValidAttackInfoElement(STComputeDamageVariable*, int)
088908b6 +0xb8:  leave
088908b7 +0xb9:  ret
```

## 反编译 C

```c
// AttackInfo::isValidElement @ 0x88907fe

/* AttackInfo::isValidElement(ENUM_ELEMENT) */

void __thiscall AttackInfo::isValidElement(undefined4 this,int param_2)

{
  char cVar1;
  int *piVar2;
  STComputeDamageVariable local_218 [10];
  undefined1 auStack_20e [498];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_1c [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_18 [4];
  _Rb_tree_const_iterator<ENUM_ELEMENT> local_14 [4];
  int local_10;
  
  STComputeDamageVariable::STComputeDamageVariable(local_218);
  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::begin(local_1c);
  while( true ) {
    std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator!=
                      ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_1c,
                       (_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator*
                              ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_1c);
    local_10 = *piVar2;
    if (local_10 != 4) {
      auStack_20e[local_10] = 1;
    }
    std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator++(local_14,(int)local_1c);
  }
  isValidAttackInfoElement(local_218,param_2);
  return;
}
```
