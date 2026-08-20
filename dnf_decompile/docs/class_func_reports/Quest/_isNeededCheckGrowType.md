# _isNeededCheckGrowType

`_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB`

`Quest::_isNeededCheckGrowType(ENUM_CHARACTERJOB) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352c10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352c10  _ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB
#           Quest::_isNeededCheckGrowType(ENUM_CHARACTERJOB) const
# range [0x08352c10, 0x08352cc1]
08352c10 +0x00:  push   %ebp
08352c11 +0x01:  mov    %esp,%ebp
08352c13 +0x03:  sub    $0x28,%esp
08352c16 +0x06:  mov    0x8(%ebp),%eax
08352c19 +0x09:  lea    0x10(%eax),%edx
08352c1c +0x0c:  lea    -0xc(%ebp),%eax
08352c1f +0x0f:  mov    %edx,0x4(%esp)
08352c23 +0x13:  mov    %eax,(%esp)
08352c26 +0x16:  call   08390d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2083c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2083c
08352c2b +0x1b:  sub    $0x4,%esp
08352c2e +0x1e:  mov    0x8(%ebp),%eax
08352c31 +0x21:  lea    0x10(%eax),%edx
08352c34 +0x24:  lea    -0x10(%ebp),%eax
08352c37 +0x27:  mov    %edx,0x4(%esp)
08352c3b +0x2b:  mov    %eax,(%esp)
08352c3e +0x2e:  call   08390dc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20868>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20868
08352c43 +0x33:  sub    $0x4,%esp
08352c46 +0x36:  jmp    08352ca5 <+0x95>
08352c48 +0x38:  lea    -0xc(%ebp),%eax
08352c4b +0x3b:  mov    %eax,(%esp)
08352c4e +0x3e:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352c53 +0x43:  mov    (%eax),%eax
08352c55 +0x45:  mov    %eax,%edx
08352c57 +0x47:  mov    0xc(%ebp),%eax
08352c5a +0x4a:  cmp    %eax,%edx
08352c5c +0x4c:  je     08352c70 <+0x60>
08352c5e +0x4e:  lea    -0xc(%ebp),%eax
08352c61 +0x51:  mov    %eax,(%esp)
08352c64 +0x54:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352c69 +0x59:  mov    (%eax),%eax
08352c6b +0x5b:  cmp    $0xb,%eax
08352c6e +0x5e:  jne    08352c8a <+0x7a>
08352c70 +0x60:  lea    -0xc(%ebp),%eax
08352c73 +0x63:  mov    %eax,(%esp)
08352c76 +0x66:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352c7b +0x6b:  mov    0x4(%eax),%eax
08352c7e +0x6e:  cmp    $0xffffffff,%eax
08352c81 +0x71:  jne    08352c8a <+0x7a>
08352c83 +0x73:  mov    $0x1,%eax
08352c88 +0x78:  jmp    08352c8f <+0x7f>
08352c8a +0x7a:  mov    $0x0,%eax
08352c8f +0x7f:  test   %al,%al
08352c91 +0x81:  je     08352c9a <+0x8a>
08352c93 +0x83:  mov    $0x0,%eax
08352c98 +0x88:  jmp    08352cc0 <+0xb0>
08352c9a +0x8a:  lea    -0xc(%ebp),%eax
08352c9d +0x8d:  mov    %eax,(%esp)
08352ca0 +0x90:  call   08390e20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208c0
08352ca5 +0x95:  lea    -0x10(%ebp),%eax
08352ca8 +0x98:  mov    %eax,0x4(%esp)
08352cac +0x9c:  lea    -0xc(%ebp),%eax
08352caf +0x9f:  mov    %eax,(%esp)
08352cb2 +0xa2:  call   08390df4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20894>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20894
08352cb7 +0xa7:  test   %al,%al
08352cb9 +0xa9:  jne    08352c48 <+0x38>
08352cbb +0xab:  mov    $0x1,%eax
08352cc0 +0xb0:  leave
08352cc1 +0xb1:  ret
```

## 反编译 C

```c
// Quest::_isNeededCheckGrowType @ 0x8352c10

/* Quest::_isNeededCheckGrowType(ENUM_CHARACTERJOB) const */

undefined4 __thiscall Quest::_isNeededCheckGrowType(undefined4 this,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
  local_10 [12];
  
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::begin();
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if (((*piVar2 == param_2) ||
        (piVar2 = (int *)__gnu_cxx::
                         __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                         ::operator->(local_10), *piVar2 == 0xb)) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                ::operator->(local_10), *(int *)(iVar3 + 4) == -1)) {
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
  return 0;
}
```
