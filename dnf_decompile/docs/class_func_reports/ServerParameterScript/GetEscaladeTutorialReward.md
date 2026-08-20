# GetEscaladeTutorialReward

`_ZN21ServerParameterScript25GetEscaladeTutorialRewardEj`

`ServerParameterScript::GetEscaladeTutorialReward(unsigned int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c5f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c5f2  _ZN21ServerParameterScript25GetEscaladeTutorialRewardEj
#           ServerParameterScript::GetEscaladeTutorialReward(unsigned int)
# range [0x08a8c5f2, 0x08a8c667]
08a8c5f2 +0x00:  push   %ebp
08a8c5f3 +0x01:  mov    %esp,%ebp
08a8c5f5 +0x03:  sub    $0x28,%esp
08a8c5f8 +0x06:  mov    0xc(%ebp),%eax
08a8c5fb +0x09:  mov    %eax,-0x10(%ebp)
08a8c5fe +0x0c:  mov    0x8(%ebp),%eax
08a8c601 +0x0f:  lea    0x88(%eax),%ecx
08a8c607 +0x15:  lea    -0x14(%ebp),%eax
08a8c60a +0x18:  lea    -0x10(%ebp),%edx
08a8c60d +0x1b:  mov    %edx,0x8(%esp)
08a8c611 +0x1f:  mov    %ecx,0x4(%esp)
08a8c615 +0x23:  mov    %eax,(%esp)
08a8c618 +0x26:  call   0838fe08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8a8
08a8c61d +0x2b:  sub    $0x4,%esp
08a8c620 +0x2e:  mov    0x8(%ebp),%eax
08a8c623 +0x31:  lea    0x88(%eax),%edx
08a8c629 +0x37:  lea    -0xc(%ebp),%eax
08a8c62c +0x3a:  mov    %edx,0x4(%esp)
08a8c630 +0x3e:  mov    %eax,(%esp)
08a8c633 +0x41:  call   0838fe34 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8d4
08a8c638 +0x46:  sub    $0x4,%esp
08a8c63b +0x49:  lea    -0xc(%ebp),%eax
08a8c63e +0x4c:  mov    %eax,0x4(%esp)
08a8c642 +0x50:  lea    -0x14(%ebp),%eax
08a8c645 +0x53:  mov    %eax,(%esp)
08a8c648 +0x56:  call   0838fef4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f994>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f994
08a8c64d +0x5b:  test   %al,%al
08a8c64f +0x5d:  je     08a8c661 <+0x6f>
08a8c651 +0x5f:  lea    -0x14(%ebp),%eax
08a8c654 +0x62:  mov    %eax,(%esp)
08a8c657 +0x65:  call   0838fed2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f972>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f972
08a8c65c +0x6a:  add    $0x4,%eax
08a8c65f +0x6d:  jmp    08a8c666 <+0x74>
08a8c661 +0x6f:  mov    $0x0,%eax
08a8c666 +0x74:  leave
08a8c667 +0x75:  ret
```

## 反编译 C

```c
// ServerParameterScript::GetEscaladeTutorialReward @ 0x8a8c5f2

/* ServerParameterScript::GetEscaladeTutorialReward(unsigned int) */

int __thiscall
ServerParameterScript::GetEscaladeTutorialReward(ServerParameterScript *this,uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_10 [12];
  
  local_14 = param_1;
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            ::operator->(local_18);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
