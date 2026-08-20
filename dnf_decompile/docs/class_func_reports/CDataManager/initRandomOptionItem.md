# initRandomOptionItem

`_ZN12CDataManager20initRandomOptionItemEv`

`CDataManager::initRandomOptionItem()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083580aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083580aa  _ZN12CDataManager20initRandomOptionItemEv
#           CDataManager::initRandomOptionItem()
# range [0x083580aa, 0x08358207]
083580aa +0x000:  push   %ebp
083580ab +0x001:  mov    %esp,%ebp
083580ad +0x003:  sub    $0x48,%esp
083580b0 +0x006:  movl   $0x0,-0x2c(%ebp)
083580b7 +0x00d:  mov    0x8(%ebp),%eax
083580ba +0x010:  lea    0x4e70(%eax),%edx
083580c0 +0x016:  lea    -0x30(%ebp),%eax
083580c3 +0x019:  mov    %edx,0x4(%esp)
083580c7 +0x01d:  mov    %eax,(%esp)
083580ca +0x020:  call   08392ca4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22744>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22744
083580cf +0x025:  sub    $0x4,%esp
083580d2 +0x028:  jmp    083581cc <+0x122>
083580d7 +0x02d:  movl   $0x0,-0x2c(%ebp)
083580de +0x034:  lea    -0x30(%ebp),%eax
083580e1 +0x037:  mov    %eax,(%esp)
083580e4 +0x03a:  call   08392d22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227c2
083580e9 +0x03f:  lea    0x4(%eax),%edx
083580ec +0x042:  lea    -0x34(%ebp),%eax
083580ef +0x045:  mov    %edx,0x4(%esp)
083580f3 +0x049:  mov    %eax,(%esp)
083580f6 +0x04c:  call   08392d30 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227d0
083580fb +0x051:  sub    $0x4,%esp
083580fe +0x054:  jmp    08358187 <+0xdd>
08358103 +0x059:  lea    -0x34(%ebp),%eax
08358106 +0x05c:  mov    %eax,(%esp)
08358109 +0x05f:  call   08392dae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2284e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2284e
0835810e +0x064:  lea    0x4(%eax),%ecx
08358111 +0x067:  lea    -0x10(%ebp),%eax
08358114 +0x06a:  lea    -0x2c(%ebp),%edx
08358117 +0x06d:  mov    %edx,0x8(%esp)
0835811b +0x071:  mov    %ecx,0x4(%esp)
0835811f +0x075:  mov    %eax,(%esp)
08358122 +0x078:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
08358127 +0x07d:  sub    $0x4,%esp
0835812a +0x080:  lea    -0x10(%ebp),%eax
0835812d +0x083:  mov    %eax,0x4(%esp)
08358131 +0x087:  lea    -0x18(%ebp),%eax
08358134 +0x08a:  mov    %eax,(%esp)
08358137 +0x08d:  call   08392dbc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2285c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2285c
0835813c +0x092:  mov    0x8(%ebp),%eax
0835813f +0x095:  lea    0x4e88(%eax),%ecx
08358145 +0x09b:  lea    -0x20(%ebp),%eax
08358148 +0x09e:  lea    -0x18(%ebp),%edx
0835814b +0x0a1:  mov    %edx,0x8(%esp)
0835814f +0x0a5:  mov    %ecx,0x4(%esp)
08358153 +0x0a9:  mov    %eax,(%esp)
08358156 +0x0ac:  call   08392dec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2288c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2288c
0835815b +0x0b1:  sub    $0x4,%esp
0835815e +0x0b4:  movzbl -0x1c(%ebp),%eax
08358162 +0x0b8:  xor    $0x1,%eax
08358165 +0x0bb:  test   %al,%al
08358167 +0x0bd:  je     08358173 <+0xc9>
08358169 +0x0bf:  mov    $0x0,%eax
0835816e +0x0c4:  jmp    08358206 <+0x15c>
08358173 +0x0c9:  lea    -0x34(%ebp),%eax
08358176 +0x0cc:  mov    %eax,(%esp)
08358179 +0x0cf:  call   08392d90 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22830>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22830
0835817e +0x0d4:  mov    -0x2c(%ebp),%eax
08358181 +0x0d7:  add    $0x1,%eax
08358184 +0x0da:  mov    %eax,-0x2c(%ebp)
08358187 +0x0dd:  lea    -0x30(%ebp),%eax
0835818a +0x0e0:  mov    %eax,(%esp)
0835818d +0x0e3:  call   08392d22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227c2
08358192 +0x0e8:  lea    0x4(%eax),%edx
08358195 +0x0eb:  lea    -0x24(%ebp),%eax
08358198 +0x0ee:  mov    %edx,0x4(%esp)
0835819c +0x0f2:  mov    %eax,(%esp)
0835819f +0x0f5:  call   08392d56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227f6
083581a4 +0x0fa:  sub    $0x4,%esp
083581a7 +0x0fd:  lea    -0x24(%ebp),%eax
083581aa +0x100:  mov    %eax,0x4(%esp)
083581ae +0x104:  lea    -0x34(%ebp),%eax
083581b1 +0x107:  mov    %eax,(%esp)
083581b4 +0x10a:  call   08392d7c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2281c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2281c
083581b9 +0x10f:  test   %al,%al
083581bb +0x111:  jne    08358103 <+0x59>
083581c1 +0x117:  lea    -0x30(%ebp),%eax
083581c4 +0x11a:  mov    %eax,(%esp)
083581c7 +0x11d:  call   08392d04 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227a4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227a4
083581cc +0x122:  mov    0x8(%ebp),%eax
083581cf +0x125:  lea    0x4e70(%eax),%edx
083581d5 +0x12b:  lea    -0x28(%ebp),%eax
083581d8 +0x12e:  mov    %edx,0x4(%esp)
083581dc +0x132:  mov    %eax,(%esp)
083581df +0x135:  call   08392cca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2276a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2276a
083581e4 +0x13a:  sub    $0x4,%esp
083581e7 +0x13d:  lea    -0x28(%ebp),%eax
083581ea +0x140:  mov    %eax,0x4(%esp)
083581ee +0x144:  lea    -0x30(%ebp),%eax
083581f1 +0x147:  mov    %eax,(%esp)
083581f4 +0x14a:  call   08392cf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22790>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22790
083581f9 +0x14f:  test   %al,%al
083581fb +0x151:  jne    083580d7 <+0x2d>
08358201 +0x157:  mov    $0x1,%eax
08358206 +0x15c:  leave
08358207 +0x15d:  ret
```

## 反编译 C

```c
// CDataManager::initRandomOptionItem @ 0x83580aa

/* CDataManager::initRandomOptionItem() */

undefined4 CDataManager::initRandomOptionItem(void)

{
  char cVar1;
  int iVar2;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_38 [4];
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_34 [4];
  int local_30;
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_2c [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_28 [4];
  pair local_24 [4];
  char local_20;
  pair<unsigned_long_const,int> local_1c [8];
  ulong local_14 [4];
  
  local_30 = 0;
  std::
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  ::begin(local_34);
  do {
    std::
    map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                          *)local_34,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      return 1;
    }
    local_30 = 0;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                  *)local_34);
    std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
    begin(local_38);
    while( true ) {
      std::
      _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                    *)local_34);
      std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
      ::end(local_28);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,BaseItemValue>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,BaseItemValue>> *)local_38,
                         (_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,BaseItemValue>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
      std::make_pair<unsigned_long&,int&>(local_14,(int *)(iVar2 + 4));
      std::pair<unsigned_long_const,int>::pair<unsigned_long,int>(local_1c,(pair *)local_14);
      std::
      map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
      ::insert(local_24);
      if (local_20 != '\x01') {
        return 0;
      }
      std::_Rb_tree_iterator<std::pair<int_const,BaseItemValue>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
      local_30 = local_30 + 1;
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                  *)local_34);
  } while( true );
}
```
