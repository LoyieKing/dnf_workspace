# checkPossibleJob

`_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB`

`Quest::checkPossibleJob(ENUM_CHARACTERJOB) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352a5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352a5c  _ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB
#           Quest::checkPossibleJob(ENUM_CHARACTERJOB) const
# range [0x08352a5c, 0x08352afb]
08352a5c +0x00:  push   %ebp
08352a5d +0x01:  mov    %esp,%ebp
08352a5f +0x03:  sub    $0x28,%esp
08352a62 +0x06:  mov    0x8(%ebp),%eax
08352a65 +0x09:  lea    0x10(%eax),%edx
08352a68 +0x0c:  lea    -0xc(%ebp),%eax
08352a6b +0x0f:  mov    %edx,0x4(%esp)
08352a6f +0x13:  mov    %eax,(%esp)
08352a72 +0x16:  call   08390d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2083c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2083c
08352a77 +0x1b:  sub    $0x4,%esp
08352a7a +0x1e:  mov    0x8(%ebp),%eax
08352a7d +0x21:  lea    0x10(%eax),%edx
08352a80 +0x24:  lea    -0x10(%ebp),%eax
08352a83 +0x27:  mov    %edx,0x4(%esp)
08352a87 +0x2b:  mov    %eax,(%esp)
08352a8a +0x2e:  call   08390dc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20868>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20868
08352a8f +0x33:  sub    $0x4,%esp
08352a92 +0x36:  jmp    08352ade <+0x82>
08352a94 +0x38:  lea    -0xc(%ebp),%eax
08352a97 +0x3b:  mov    %eax,(%esp)
08352a9a +0x3e:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352a9f +0x43:  mov    (%eax),%eax
08352aa1 +0x45:  mov    %eax,%edx
08352aa3 +0x47:  mov    0xc(%ebp),%eax
08352aa6 +0x4a:  cmp    %eax,%edx
08352aa8 +0x4c:  je     08352abc <+0x60>
08352aaa +0x4e:  lea    -0xc(%ebp),%eax
08352aad +0x51:  mov    %eax,(%esp)
08352ab0 +0x54:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352ab5 +0x59:  mov    (%eax),%eax
08352ab7 +0x5b:  cmp    $0xb,%eax
08352aba +0x5e:  jne    08352ac3 <+0x67>
08352abc +0x60:  mov    $0x1,%eax
08352ac1 +0x65:  jmp    08352ac8 <+0x6c>
08352ac3 +0x67:  mov    $0x0,%eax
08352ac8 +0x6c:  test   %al,%al
08352aca +0x6e:  je     08352ad3 <+0x77>
08352acc +0x70:  mov    $0x1,%eax
08352ad1 +0x75:  jmp    08352af9 <+0x9d>
08352ad3 +0x77:  lea    -0xc(%ebp),%eax
08352ad6 +0x7a:  mov    %eax,(%esp)
08352ad9 +0x7d:  call   08390e20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208c0
08352ade +0x82:  lea    -0x10(%ebp),%eax
08352ae1 +0x85:  mov    %eax,0x4(%esp)
08352ae5 +0x89:  lea    -0xc(%ebp),%eax
08352ae8 +0x8c:  mov    %eax,(%esp)
08352aeb +0x8f:  call   08390df4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20894>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20894
08352af0 +0x94:  test   %al,%al
08352af2 +0x96:  jne    08352a94 <+0x38>
08352af4 +0x98:  mov    $0x0,%eax
08352af9 +0x9d:  leave
08352afa +0x9e:  ret
08352afb +0x9f:  nop
```

## 反编译 C

```c
// Quest::checkPossibleJob @ 0x8352a5c

/* Quest::checkPossibleJob(ENUM_CHARACTERJOB) const */

undefined4 __thiscall Quest::checkPossibleJob(undefined4 this,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
  local_10 [12];
  
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::begin();
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if ((*piVar2 == param_2) ||
       (piVar2 = (int *)__gnu_cxx::
                        __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                        ::operator->(local_10), *piVar2 == 0xb)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
    ::operator++(local_10);
  }
  return 1;
}
```
