# isSameAccountCharacter

`_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc`

`Secu_AccountHacking::isSameAccountCharacter(char const*)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08279182` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279182  _ZN19Secu_AccountHacking22isSameAccountCharacterEPKc
#           Secu_AccountHacking::isSameAccountCharacter(char const*)
# range [0x08279182, 0x08279257]
08279182 +0x00:  push   %ebp
08279183 +0x01:  mov    %esp,%ebp
08279185 +0x03:  sub    $0x28,%esp
08279188 +0x06:  cmpl   $0x0,0xc(%ebp)
0827918c +0x0a:  jne    08279198 <+0x16>
0827918e +0x0c:  mov    $0x0,%eax
08279193 +0x11:  jmp    08279255 <+0xd3>
08279198 +0x16:  mov    0x8(%ebp),%eax
0827919b +0x19:  mov    0x10(%eax),%eax
0827919e +0x1c:  lea    0x796e8(%eax),%edx
082791a4 +0x22:  lea    -0x10(%ebp),%eax
082791a7 +0x25:  mov    %edx,0x4(%esp)
082791ab +0x29:  mov    %eax,(%esp)
082791ae +0x2c:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
082791b3 +0x31:  sub    $0x4,%esp
082791b6 +0x34:  lea    -0x10(%ebp),%eax
082791b9 +0x37:  mov    %eax,0x4(%esp)
082791bd +0x3b:  lea    -0x14(%ebp),%eax
082791c0 +0x3e:  mov    %eax,(%esp)
082791c3 +0x41:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
082791c8 +0x46:  mov    0x8(%ebp),%eax
082791cb +0x49:  mov    0x10(%eax),%eax
082791ce +0x4c:  lea    0x796e8(%eax),%edx
082791d4 +0x52:  lea    -0xc(%ebp),%eax
082791d7 +0x55:  mov    %edx,0x4(%esp)
082791db +0x59:  mov    %eax,(%esp)
082791de +0x5c:  call   0827935c <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x40>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x40
082791e3 +0x61:  sub    $0x4,%esp
082791e6 +0x64:  lea    -0xc(%ebp),%eax
082791e9 +0x67:  mov    %eax,0x4(%esp)
082791ed +0x6b:  lea    -0x18(%ebp),%eax
082791f0 +0x6e:  mov    %eax,(%esp)
082791f3 +0x71:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
082791f8 +0x76:  jmp    0827923a <+0xb8>
082791fa +0x78:  lea    -0x14(%ebp),%eax
082791fd +0x7b:  mov    %eax,(%esp)
08279200 +0x7e:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08279205 +0x83:  add    $0x4,%eax
08279208 +0x86:  movl   $0x1e,0x8(%esp)
08279210 +0x8e:  mov    0xc(%ebp),%edx
08279213 +0x91:  mov    %edx,0x4(%esp)
08279217 +0x95:  mov    %eax,(%esp)
0827921a +0x98:  call   0807e8c0 <_init+0x11b8>
0827921f +0x9d:  test   %eax,%eax
08279221 +0x9f:  sete   %al
08279224 +0xa2:  test   %al,%al
08279226 +0xa4:  je     0827922f <+0xad>
08279228 +0xa6:  mov    $0x1,%eax
0827922d +0xab:  jmp    08279255 <+0xd3>
0827922f +0xad:  lea    -0x14(%ebp),%eax
08279232 +0xb0:  mov    %eax,(%esp)
08279235 +0xb3:  call   082793ae <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x92>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x92
0827923a +0xb8:  lea    -0x18(%ebp),%eax
0827923d +0xbb:  mov    %eax,0x4(%esp)
08279241 +0xbf:  lea    -0x14(%ebp),%eax
08279244 +0xc2:  mov    %eax,(%esp)
08279247 +0xc5:  call   08279382 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x66>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x66
0827924c +0xca:  test   %al,%al
0827924e +0xcc:  jne    082791fa <+0x78>
08279250 +0xce:  mov    $0x0,%eax
08279255 +0xd3:  leave
08279256 +0xd4:  ret
08279257 +0xd5:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::isSameAccountCharacter @ 0x8279182

/* Secu_AccountHacking::isSameAccountCharacter(char const*) */

undefined4 __thiscall
Secu_AccountHacking::isSameAccountCharacter(Secu_AccountHacking *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_1c [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  if (param_1 != (char *)0x0) {
    std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_18,local_14);
    std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_1c,local_10);
    while (bVar1 = __gnu_cxx::operator!=(local_18,local_1c), bVar1) {
      iVar2 = __gnu_cxx::
              __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_18);
      iVar2 = strncmp((char *)(iVar2 + 4),param_1,0x1e);
      if (iVar2 == 0) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
      ::operator++(local_18);
    }
  }
  return 0;
}
```
