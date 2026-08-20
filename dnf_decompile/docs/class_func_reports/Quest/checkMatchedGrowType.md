# checkMatchedGrowType

`_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii`

`Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352afc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352afc  _ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii
#           Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const
# range [0x08352afc, 0x08352bed]
08352afc +0x00:  push   %ebp
08352afd +0x01:  mov    %esp,%ebp
08352aff +0x03:  sub    $0x28,%esp
08352b02 +0x06:  mov    0x8(%ebp),%eax
08352b05 +0x09:  lea    0x10(%eax),%edx
08352b08 +0x0c:  lea    -0xc(%ebp),%eax
08352b0b +0x0f:  mov    %edx,0x4(%esp)
08352b0f +0x13:  mov    %eax,(%esp)
08352b12 +0x16:  call   08390d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2083c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2083c
08352b17 +0x1b:  sub    $0x4,%esp
08352b1a +0x1e:  mov    0x8(%ebp),%eax
08352b1d +0x21:  lea    0x10(%eax),%edx
08352b20 +0x24:  lea    -0x10(%ebp),%eax
08352b23 +0x27:  mov    %edx,0x4(%esp)
08352b27 +0x2b:  mov    %eax,(%esp)
08352b2a +0x2e:  call   08390dc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20868>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20868
08352b2f +0x33:  sub    $0x4,%esp
08352b32 +0x36:  jmp    08352bcd <+0xd1>
08352b37 +0x3b:  lea    -0xc(%ebp),%eax
08352b3a +0x3e:  mov    %eax,(%esp)
08352b3d +0x41:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352b42 +0x46:  mov    (%eax),%eax
08352b44 +0x48:  mov    %eax,%edx
08352b46 +0x4a:  mov    0xc(%ebp),%eax
08352b49 +0x4d:  cmp    %eax,%edx
08352b4b +0x4f:  je     08352b5f <+0x63>
08352b4d +0x51:  lea    -0xc(%ebp),%eax
08352b50 +0x54:  mov    %eax,(%esp)
08352b53 +0x57:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352b58 +0x5c:  mov    (%eax),%eax
08352b5a +0x5e:  cmp    $0xb,%eax
08352b5d +0x61:  jne    08352bb2 <+0xb6>
08352b5f +0x63:  lea    -0xc(%ebp),%eax
08352b62 +0x66:  mov    %eax,(%esp)
08352b65 +0x69:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352b6a +0x6e:  mov    0x4(%eax),%eax
08352b6d +0x71:  cmp    0x10(%ebp),%eax
08352b70 +0x74:  je     08352b85 <+0x89>
08352b72 +0x76:  lea    -0xc(%ebp),%eax
08352b75 +0x79:  mov    %eax,(%esp)
08352b78 +0x7c:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352b7d +0x81:  mov    0x4(%eax),%eax
08352b80 +0x84:  cmp    $0xffffffff,%eax
08352b83 +0x87:  jne    08352bb2 <+0xb6>
08352b85 +0x89:  lea    -0xc(%ebp),%eax
08352b88 +0x8c:  mov    %eax,(%esp)
08352b8b +0x8f:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352b90 +0x94:  mov    0x8(%eax),%eax
08352b93 +0x97:  cmp    0x14(%ebp),%eax
08352b96 +0x9a:  je     08352bab <+0xaf>
08352b98 +0x9c:  lea    -0xc(%ebp),%eax
08352b9b +0x9f:  mov    %eax,(%esp)
08352b9e +0xa2:  call   08390e36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208d6
08352ba3 +0xa7:  mov    0x8(%eax),%eax
08352ba6 +0xaa:  cmp    $0xffffffff,%eax
08352ba9 +0xad:  jne    08352bb2 <+0xb6>
08352bab +0xaf:  mov    $0x1,%eax
08352bb0 +0xb4:  jmp    08352bb7 <+0xbb>
08352bb2 +0xb6:  mov    $0x0,%eax
08352bb7 +0xbb:  test   %al,%al
08352bb9 +0xbd:  je     08352bc2 <+0xc6>
08352bbb +0xbf:  mov    $0x1,%eax
08352bc0 +0xc4:  jmp    08352bec <+0xf0>
08352bc2 +0xc6:  lea    -0xc(%ebp),%eax
08352bc5 +0xc9:  mov    %eax,(%esp)
08352bc8 +0xcc:  call   08390e20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208c0
08352bcd +0xd1:  lea    -0x10(%ebp),%eax
08352bd0 +0xd4:  mov    %eax,0x4(%esp)
08352bd4 +0xd8:  lea    -0xc(%ebp),%eax
08352bd7 +0xdb:  mov    %eax,(%esp)
08352bda +0xde:  call   08390df4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20894>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20894
08352bdf +0xe3:  test   %al,%al
08352be1 +0xe5:  jne    08352b37 <+0x3b>
08352be7 +0xeb:  mov    $0x0,%eax
08352bec +0xf0:  leave
08352bed +0xf1:  ret
```

## 反编译 C

```c
// Quest::checkMatchedGrowType @ 0x8352afc

/* Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const */

undefined4 __thiscall
Quest::checkMatchedGrowType(undefined4 this,int param_2,int param_3,int param_4)

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
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if ((((*piVar2 == param_2) ||
         (piVar2 = (int *)__gnu_cxx::
                          __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                          ::operator->(local_10), *piVar2 == 0xb)) &&
        ((iVar3 = __gnu_cxx::
                  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                  ::operator->(local_10), *(int *)(iVar3 + 4) == param_3 ||
         (iVar3 = __gnu_cxx::
                  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                  ::operator->(local_10), *(int *)(iVar3 + 4) == -1)))) &&
       ((iVar3 = __gnu_cxx::
                 __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                 ::operator->(local_10), *(int *)(iVar3 + 8) == param_4 ||
        (iVar3 = __gnu_cxx::
                 __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                 ::operator->(local_10), *(int *)(iVar3 + 8) == -1)))) {
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
