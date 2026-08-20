# get_hellparty_groupOrder_map

`_ZN12CDataManager28get_hellparty_groupOrder_mapEi`

`CDataManager::get_hellparty_groupOrder_map(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836379a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836379a  _ZN12CDataManager28get_hellparty_groupOrder_mapEi
#           CDataManager::get_hellparty_groupOrder_map(int)
# range [0x0836379a, 0x08363817]
0836379a +0x00:  push   %ebp
0836379b +0x01:  mov    %esp,%ebp
0836379d +0x03:  sub    $0x38,%esp
083637a0 +0x06:  call   089e813f <_Z32Get_instance_groupOrder_map_poolv>  ; Get_instance_groupOrder_map_pool()
083637a5 +0x0b:  mov    %eax,-0xc(%ebp)
083637a8 +0x0e:  lea    -0x14(%ebp),%eax
083637ab +0x11:  mov    %eax,(%esp)
083637ae +0x14:  call   08394f6a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a0a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a0a
083637b3 +0x19:  lea    -0x1c(%ebp),%eax
083637b6 +0x1c:  lea    0xc(%ebp),%edx
083637b9 +0x1f:  mov    %edx,0x8(%esp)
083637bd +0x23:  mov    -0xc(%ebp),%edx
083637c0 +0x26:  mov    %edx,0x4(%esp)
083637c4 +0x2a:  mov    %eax,(%esp)
083637c7 +0x2d:  call   08394f78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a18>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a18
083637cc +0x32:  sub    $0x4,%esp
083637cf +0x35:  mov    -0x1c(%ebp),%eax
083637d2 +0x38:  mov    %eax,-0x14(%ebp)
083637d5 +0x3b:  lea    -0x10(%ebp),%eax
083637d8 +0x3e:  mov    -0xc(%ebp),%edx
083637db +0x41:  mov    %edx,0x4(%esp)
083637df +0x45:  mov    %eax,(%esp)
083637e2 +0x48:  call   08394fa4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a44>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a44
083637e7 +0x4d:  sub    $0x4,%esp
083637ea +0x50:  lea    -0x10(%ebp),%eax
083637ed +0x53:  mov    %eax,0x4(%esp)
083637f1 +0x57:  lea    -0x14(%ebp),%eax
083637f4 +0x5a:  mov    %eax,(%esp)
083637f7 +0x5d:  call   08394fca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a6a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a6a
083637fc +0x62:  test   %al,%al
083637fe +0x64:  je     08363810 <+0x76>
08363800 +0x66:  lea    -0x14(%ebp),%eax
08363803 +0x69:  mov    %eax,(%esp)
08363806 +0x6c:  call   08394fde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a7e
0836380b +0x71:  add    $0x4,%eax
0836380e +0x74:  jmp    08363815 <+0x7b>
08363810 +0x76:  mov    $0x0,%eax
08363815 +0x7b:  leave
08363816 +0x7c:  ret
08363817 +0x7d:  nop
```

## 反编译 C

```c
// CDataManager::get_hellparty_groupOrder_map @ 0x836379a

/* CDataManager::get_hellparty_groupOrder_map(int) */

int CDataManager::get_hellparty_groupOrder_map(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [2];
  int local_18;
  map<int,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>>
  local_14 [4];
  undefined4 local_10;
  
  local_10 = Get_instance_groupOrder_map_pool();
  std::
  _Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
  ::_Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
                       *)&local_18);
  std::
  map<int,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>>
  ::find(local_20);
  local_18 = local_20[0];
  std::
  map<int,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
                        *)&local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>>>
                          *)&local_18);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
