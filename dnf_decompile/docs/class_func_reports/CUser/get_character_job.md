# get_character_job

`_ZNK5CUser17get_character_jobEj`

`CUser::get_character_job(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864e024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e024  _ZNK5CUser17get_character_jobEj
#           CUser::get_character_job(unsigned int) const
# range [0x0864e024, 0x0864e0b5]
0864e024 +0x00:  push   %ebp
0864e025 +0x01:  mov    %esp,%ebp
0864e027 +0x03:  sub    $0x28,%esp
0864e02a +0x06:  mov    0x8(%ebp),%eax
0864e02d +0x09:  lea    0x796e8(%eax),%edx
0864e033 +0x0f:  lea    -0xc(%ebp),%eax
0864e036 +0x12:  mov    %edx,0x4(%esp)
0864e03a +0x16:  mov    %eax,(%esp)
0864e03d +0x19:  call   084f0f64 <_GLOBAL__I__Z7getUserj+0x7f16>  ; global constructors keyed to getUser(unsigned int)+0x7f16
0864e042 +0x1e:  sub    $0x4,%esp
0864e045 +0x21:  mov    0x8(%ebp),%eax
0864e048 +0x24:  lea    0x796e8(%eax),%edx
0864e04e +0x2a:  lea    -0x10(%ebp),%eax
0864e051 +0x2d:  mov    %edx,0x4(%esp)
0864e055 +0x31:  mov    %eax,(%esp)
0864e058 +0x34:  call   084f0f90 <_GLOBAL__I__Z7getUserj+0x7f42>  ; global constructors keyed to getUser(unsigned int)+0x7f42
0864e05d +0x39:  sub    $0x4,%esp
0864e060 +0x3c:  jmp    0864e098 <+0x74>
0864e062 +0x3e:  lea    -0xc(%ebp),%eax
0864e065 +0x41:  mov    %eax,(%esp)
0864e068 +0x44:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
0864e06d +0x49:  mov    (%eax),%eax
0864e06f +0x4b:  cmp    0xc(%ebp),%eax
0864e072 +0x4e:  sete   %al
0864e075 +0x51:  test   %al,%al
0864e077 +0x53:  je     0864e08d <+0x69>
0864e079 +0x55:  lea    -0xc(%ebp),%eax
0864e07c +0x58:  mov    %eax,(%esp)
0864e07f +0x5b:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
0864e084 +0x60:  movzbl 0x26(%eax),%eax
0864e088 +0x64:  movsbl %al,%eax
0864e08b +0x67:  jmp    0864e0b3 <+0x8f>
0864e08d +0x69:  lea    -0xc(%ebp),%eax
0864e090 +0x6c:  mov    %eax,(%esp)
0864e093 +0x6f:  call   082793ae <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x92>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x92
0864e098 +0x74:  lea    -0x10(%ebp),%eax
0864e09b +0x77:  mov    %eax,0x4(%esp)
0864e09f +0x7b:  lea    -0xc(%ebp),%eax
0864e0a2 +0x7e:  mov    %eax,(%esp)
0864e0a5 +0x81:  call   08279382 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x66>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x66
0864e0aa +0x86:  test   %al,%al
0864e0ac +0x88:  jne    0864e062 <+0x3e>
0864e0ae +0x8a:  mov    $0xffffffff,%eax
0864e0b3 +0x8f:  leave
0864e0b4 +0x90:  ret
0864e0b5 +0x91:  nop
```

## 反编译 C

```c
// CUser::get_character_job @ 0x864e024

/* CUser::get_character_job(unsigned int) const */

int __thiscall CUser::get_character_job(CUser *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_10 [12];
  
  std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
  std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return -1;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                     ::operator->(local_10);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    operator++(local_10);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
          ::operator->(local_10);
  return (int)*(char *)(iVar3 + 0x26);
}
```
