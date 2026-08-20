# GetItemEvolutionCreatureId

`_ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi`

`user_creature::CCreatureScript::GetItemEvolutionCreatureId(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScript` | `0x0833cad8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833cad8  _ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi
#           user_creature::CCreatureScript::GetItemEvolutionCreatureId(int)
# range [0x0833cad8, 0x0833cb37]
0833cad8 +0x00:  push   %ebp
0833cad9 +0x01:  mov    %esp,%ebp
0833cadb +0x03:  sub    $0x28,%esp
0833cade +0x06:  mov    0x8(%ebp),%eax
0833cae1 +0x09:  lea    0x34(%eax),%ecx
0833cae4 +0x0c:  lea    -0x10(%ebp),%eax
0833cae7 +0x0f:  lea    0xc(%ebp),%edx
0833caea +0x12:  mov    %edx,0x8(%esp)
0833caee +0x16:  mov    %ecx,0x4(%esp)
0833caf2 +0x1a:  mov    %eax,(%esp)
0833caf5 +0x1d:  call   080da574 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x711>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x711
0833cafa +0x22:  sub    $0x4,%esp
0833cafd +0x25:  mov    0x8(%ebp),%eax
0833cb00 +0x28:  lea    0x34(%eax),%edx
0833cb03 +0x2b:  lea    -0xc(%ebp),%eax
0833cb06 +0x2e:  mov    %edx,0x4(%esp)
0833cb0a +0x32:  mov    %eax,(%esp)
0833cb0d +0x35:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
0833cb12 +0x3a:  sub    $0x4,%esp
0833cb15 +0x3d:  lea    -0x10(%ebp),%eax
0833cb18 +0x40:  mov    %eax,0x4(%esp)
0833cb1c +0x44:  lea    -0xc(%ebp),%eax
0833cb1f +0x47:  mov    %eax,(%esp)
0833cb22 +0x4a:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
0833cb27 +0x4f:  test   %al,%al
0833cb29 +0x51:  je     0833cb30 <+0x58>
0833cb2b +0x53:  mov    0xc(%ebp),%eax
0833cb2e +0x56:  jmp    0833cb35 <+0x5d>
0833cb30 +0x58:  mov    $0x0,%eax
0833cb35 +0x5d:  leave
0833cb36 +0x5e:  ret
0833cb37 +0x5f:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScript::GetItemEvolutionCreatureId @ 0x833cad8

/* user_creature::CCreatureScript::GetItemEvolutionCreatureId(int) */

int __thiscall
user_creature::CCreatureScript::GetItemEvolutionCreatureId(CCreatureScript *this,int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                    ((_Rb_tree_const_iterator<int> *)local_10,local_14);
  if (cVar1 == '\0') {
    param_1 = 0;
  }
  return param_1;
}
```
