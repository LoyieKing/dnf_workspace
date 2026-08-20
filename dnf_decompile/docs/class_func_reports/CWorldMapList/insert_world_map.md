# insert_world_map

`_ZN13CWorldMapList16insert_world_mapEP9CWorldMap`

`CWorldMapList::insert_world_map(CWorldMap*)`

| 类 | 地址 |
|---|---|
| `CWorldMapList` | `0x08364694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364694  _ZN13CWorldMapList16insert_world_mapEP9CWorldMap
#           CWorldMapList::insert_world_map(CWorldMap*)
# range [0x08364694, 0x083647a1]
08364694 +0x000:  push   %ebp
08364695 +0x001:  mov    %esp,%ebp
08364697 +0x003:  sub    $0x68,%esp
0836469a +0x006:  lea    -0x30(%ebp),%eax
0836469d +0x009:  mov    %eax,(%esp)
083646a0 +0x00c:  call   083876ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1718a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1718a
083646a5 +0x011:  mov    0xc(%ebp),%eax
083646a8 +0x014:  mov    %eax,(%esp)
083646ab +0x017:  call   083746ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe678>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe678
083646b0 +0x01c:  mov    %eax,-0x2c(%ebp)
083646b3 +0x01f:  mov    0x8(%ebp),%edx
083646b6 +0x022:  lea    -0x3c(%ebp),%eax
083646b9 +0x025:  lea    -0x2c(%ebp),%ecx
083646bc +0x028:  mov    %ecx,0x8(%esp)
083646c0 +0x02c:  mov    %edx,0x4(%esp)
083646c4 +0x030:  mov    %eax,(%esp)
083646c7 +0x033:  call   08395302 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24da2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24da2
083646cc +0x038:  sub    $0x4,%esp
083646cf +0x03b:  mov    -0x3c(%ebp),%eax
083646d2 +0x03e:  mov    %eax,-0x30(%ebp)
083646d5 +0x041:  mov    0x8(%ebp),%edx
083646d8 +0x044:  lea    -0x28(%ebp),%eax
083646db +0x047:  mov    %edx,0x4(%esp)
083646df +0x04b:  mov    %eax,(%esp)
083646e2 +0x04e:  call   083876f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17198>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17198
083646e7 +0x053:  sub    $0x4,%esp
083646ea +0x056:  lea    -0x28(%ebp),%eax
083646ed +0x059:  mov    %eax,0x4(%esp)
083646f1 +0x05d:  lea    -0x30(%ebp),%eax
083646f4 +0x060:  mov    %eax,(%esp)
083646f7 +0x063:  call   0839532e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24dce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24dce
083646fc +0x068:  test   %al,%al
083646fe +0x06a:  je     0836475f <+0xcb>
08364700 +0x06c:  mov    0xc(%ebp),%eax
08364703 +0x06f:  mov    %eax,(%esp)
08364706 +0x072:  call   083746ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe678>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe678
0836470b +0x077:  mov    %eax,-0xc(%ebp)
0836470e +0x07a:  lea    -0x14(%ebp),%eax
08364711 +0x07d:  lea    0xc(%ebp),%edx
08364714 +0x080:  mov    %edx,0x8(%esp)
08364718 +0x084:  lea    -0xc(%ebp),%edx
0836471b +0x087:  mov    %edx,0x4(%esp)
0836471f +0x08b:  mov    %eax,(%esp)
08364722 +0x08e:  call   08395342 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24de2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24de2
08364727 +0x093:  sub    $0x4,%esp
0836472a +0x096:  lea    -0x14(%ebp),%eax
0836472d +0x099:  mov    %eax,0x4(%esp)
08364731 +0x09d:  lea    -0x1c(%ebp),%eax
08364734 +0x0a0:  mov    %eax,(%esp)
08364737 +0x0a3:  call   08395388 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24e28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24e28
0836473c +0x0a8:  mov    0x8(%ebp),%edx
0836473f +0x0ab:  lea    -0x24(%ebp),%eax
08364742 +0x0ae:  lea    -0x1c(%ebp),%ecx
08364745 +0x0b1:  mov    %ecx,0x8(%esp)
08364749 +0x0b5:  mov    %edx,0x4(%esp)
0836474d +0x0b9:  mov    %eax,(%esp)
08364750 +0x0bc:  call   083953b8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24e58>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24e58
08364755 +0x0c1:  sub    $0x4,%esp
08364758 +0x0c4:  mov    $0x1,%eax
0836475d +0x0c9:  jmp    0836479f <+0x10b>
0836475f +0x0cb:  mov    0xc(%ebp),%eax
08364762 +0x0ce:  mov    %eax,(%esp)
08364765 +0x0d1:  call   083746ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe678>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe678
0836476a +0x0d6:  mov    %eax,0x14(%esp)
0836476e +0x0da:  movl   $"Already registed world map index detected : %d",0x10(%esp)
08364776 +0x0e2:  movl   $0x2be9,0xc(%esp)
0836477e +0x0ea:  movl   $&_ZZN13CWorldMapList16insert_world_mapEP9CWorldMapE19__PRETTY_FUNCTION__,0x8(%esp)
08364786 +0x0f2:  movl   $"data_manager.cpp",0x4(%esp)
0836478e +0x0fa:  movl   $0x1,(%esp)
08364795 +0x101:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0836479a +0x106:  mov    $0x0,%eax
0836479f +0x10b:  leave
083647a0 +0x10c:  ret
083647a1 +0x10d:  nop
```

## 反编译 C

```c
// CWorldMapList::insert_world_map @ 0x8364694

/* CWorldMapList::insert_world_map(CWorldMap*) */

bool __thiscall CWorldMapList::insert_world_map(CWorldMapList *this,CWorldMap *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_40 [3];
  int local_34;
  undefined4 local_30;
  map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,CWorldMap*> local_20 [8];
  int local_18 [2];
  CWorldMap *local_10 [3];
  
  std::_Rb_tree_iterator<std::pair<int_const,CWorldMap*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CWorldMap*>> *)&local_34);
  local_30 = CWorldMap::get_index(param_1);
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::find
            (local_40);
  local_34 = local_40[0];
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::end
            (local_2c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWorldMap*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,CWorldMap*>> *)&local_34,
                     (_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    uVar2 = CWorldMap::get_index(param_1);
    LogManager::logFormat
              (1,"data_manager.cpp","bool CWorldMapList::insert_world_map(CWorldMap*)",0x2be9,
               "Already registed world map index detected : %d",uVar2);
  }
  else {
    local_10[0] = (CWorldMap *)CWorldMap::get_index(param_1);
    std::make_pair<int,CWorldMap*&>(local_18,local_10);
    std::pair<int_const,CWorldMap*>::pair<int,CWorldMap*>(local_20,(pair *)local_18);
    std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::insert
              (local_28);
  }
  return cVar1 != '\0';
}
```
