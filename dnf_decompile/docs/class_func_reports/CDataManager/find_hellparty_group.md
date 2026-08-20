# find_hellparty_group

`_ZN12CDataManager20find_hellparty_groupEi`

`CDataManager::find_hellparty_group(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363716  _ZN12CDataManager20find_hellparty_groupEi
#           CDataManager::find_hellparty_group(int)
# range [0x08363716, 0x0836378b]
08363716 +0x00:  push   %ebp
08363717 +0x01:  mov    %esp,%ebp
08363719 +0x03:  sub    $0x28,%esp
0836371c +0x06:  mov    0xc(%ebp),%eax
0836371f +0x09:  mov    %ax,-0xe(%ebp)
08363723 +0x0d:  call   089097c4 <_Z26Get_instance_stHellParty_tv>  ; Get_instance_stHellParty_t()
08363728 +0x12:  lea    0x54(%eax),%ecx
0836372b +0x15:  lea    -0x14(%ebp),%eax
0836372e +0x18:  lea    -0xe(%ebp),%edx
08363731 +0x1b:  mov    %edx,0x8(%esp)
08363735 +0x1f:  mov    %ecx,0x4(%esp)
08363739 +0x23:  mov    %eax,(%esp)
0836373c +0x26:  call   08394ef6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24996>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24996
08363741 +0x2b:  sub    $0x4,%esp
08363744 +0x2e:  call   089097c4 <_Z26Get_instance_stHellParty_tv>  ; Get_instance_stHellParty_t()
08363749 +0x33:  lea    0x54(%eax),%edx
0836374c +0x36:  lea    -0xc(%ebp),%eax
0836374f +0x39:  mov    %edx,0x4(%esp)
08363753 +0x3d:  mov    %eax,(%esp)
08363756 +0x40:  call   08394f22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x249c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x249c2
0836375b +0x45:  sub    $0x4,%esp
0836375e +0x48:  lea    -0xc(%ebp),%eax
08363761 +0x4b:  mov    %eax,0x4(%esp)
08363765 +0x4f:  lea    -0x14(%ebp),%eax
08363768 +0x52:  mov    %eax,(%esp)
0836376b +0x55:  call   08394f48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x249e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x249e8
08363770 +0x5a:  test   %al,%al
08363772 +0x5c:  je     08363784 <+0x6e>
08363774 +0x5e:  lea    -0x14(%ebp),%eax
08363777 +0x61:  mov    %eax,(%esp)
0836377a +0x64:  call   08394f5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x249fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x249fc
0836377f +0x69:  add    $0x4,%eax
08363782 +0x6c:  jmp    08363789 <+0x73>
08363784 +0x6e:  mov    $0x0,%eax
08363789 +0x73:  leave
0836378a +0x74:  ret
0836378b +0x75:  nop
```

## 反编译 C

```c
// CDataManager::find_hellparty_group @ 0x8363716

/* CDataManager::find_hellparty_group(int) */

int __thiscall CDataManager::find_hellparty_group(CDataManager *this,int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>> local_18 [6];
  undefined2 local_12;
  map<unsigned_short,stHellPartyMonsterGroupList,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>>>
  local_10 [12];
  
  local_12 = (undefined2)param_1;
  Get_instance_stHellParty_t();
  std::
  map<unsigned_short,stHellPartyMonsterGroupList,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>>>
  ::find((ushort *)local_18);
  Get_instance_stHellParty_t();
  std::
  map<unsigned_short,stHellPartyMonsterGroupList,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stHellPartyMonsterGroupList>>::
            operator->(local_18);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
