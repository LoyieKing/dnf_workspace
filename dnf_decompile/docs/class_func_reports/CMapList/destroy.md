# destroy

`_ZN8CMapList7destroyEv`

`CMapList::destroy()`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834f08c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f08c  _ZN8CMapList7destroyEv
#           CMapList::destroy()
# range [0x0834f08c, 0x0834f18d]
0834f08c +0x000:  push   %ebp
0834f08d +0x001:  mov    %esp,%ebp
0834f08f +0x003:  push   %ebx
0834f090 +0x004:  sub    $0x34,%esp
0834f093 +0x007:  mov    0x8(%ebp),%edx
0834f096 +0x00a:  lea    -0x18(%ebp),%eax
0834f099 +0x00d:  mov    %edx,0x4(%esp)
0834f09d +0x011:  mov    %eax,(%esp)
0834f0a0 +0x014:  call   0838bafa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b59a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b59a
0834f0a5 +0x019:  sub    $0x4,%esp
0834f0a8 +0x01c:  mov    0x8(%ebp),%edx
0834f0ab +0x01f:  lea    -0x20(%ebp),%eax
0834f0ae +0x022:  mov    %edx,0x4(%esp)
0834f0b2 +0x026:  mov    %eax,(%esp)
0834f0b5 +0x029:  call   0838bb20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b5c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b5c0
0834f0ba +0x02e:  sub    $0x4,%esp
0834f0bd +0x031:  jmp    0834f0f2 <+0x66>
0834f0bf +0x033:  lea    -0x18(%ebp),%eax
0834f0c2 +0x036:  mov    %eax,(%esp)
0834f0c5 +0x039:  call   0838bbf2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b692>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b692
0834f0ca +0x03e:  mov    0x4(%eax),%eax
0834f0cd +0x041:  mov    %eax,-0x10(%ebp)
0834f0d0 +0x044:  mov    -0x10(%ebp),%ebx
0834f0d3 +0x047:  test   %ebx,%ebx
0834f0d5 +0x049:  je     0834f0e7 <+0x5b>
0834f0d7 +0x04b:  mov    %ebx,(%esp)
0834f0da +0x04e:  call   0834def6 <_ZN4CMapD1Ev>  ; CMap::~CMap()
0834f0df +0x053:  mov    %ebx,(%esp)
0834f0e2 +0x056:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834f0e7 +0x05b:  lea    -0x18(%ebp),%eax
0834f0ea +0x05e:  mov    %eax,(%esp)
0834f0ed +0x061:  call   0838bb5a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b5fa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b5fa
0834f0f2 +0x066:  lea    -0x20(%ebp),%eax
0834f0f5 +0x069:  mov    %eax,0x4(%esp)
0834f0f9 +0x06d:  lea    -0x18(%ebp),%eax
0834f0fc +0x070:  mov    %eax,(%esp)
0834f0ff +0x073:  call   0838bb46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b5e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b5e6
0834f104 +0x078:  test   %al,%al
0834f106 +0x07a:  jne    0834f0bf <+0x33>
0834f108 +0x07c:  mov    0x8(%ebp),%eax
0834f10b +0x07f:  mov    %eax,(%esp)
0834f10e +0x082:  call   0838bc00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6a0
0834f113 +0x087:  movl   $0x0,-0xc(%ebp)
0834f11a +0x08e:  jmp    0834f17e <+0xf2>
0834f11c +0x090:  mov    -0xc(%ebp),%edx
0834f11f +0x093:  mov    %edx,%eax
0834f121 +0x095:  shl    $0x2,%eax
0834f124 +0x098:  add    %edx,%eax
0834f126 +0x09a:  shl    $0x2,%eax
0834f129 +0x09d:  add    $0x10,%eax
0834f12c +0x0a0:  add    0x8(%ebp),%eax
0834f12f +0x0a3:  add    $0x4,%eax
0834f132 +0x0a6:  mov    %eax,(%esp)
0834f135 +0x0a9:  call   0838bc00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6a0
0834f13a +0x0ae:  mov    -0xc(%ebp),%edx
0834f13d +0x0b1:  mov    %edx,%eax
0834f13f +0x0b3:  shl    $0x2,%eax
0834f142 +0x0b6:  add    %edx,%eax
0834f144 +0x0b8:  shl    $0x2,%eax
0834f147 +0x0bb:  add    $0x150,%eax
0834f14c +0x0c0:  add    0x8(%ebp),%eax
0834f14f +0x0c3:  add    $0x4,%eax
0834f152 +0x0c6:  mov    %eax,(%esp)
0834f155 +0x0c9:  call   0838bc00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6a0
0834f15a +0x0ce:  mov    -0xc(%ebp),%edx
0834f15d +0x0d1:  mov    %edx,%eax
0834f15f +0x0d3:  shl    $0x2,%eax
0834f162 +0x0d6:  add    %edx,%eax
0834f164 +0x0d8:  shl    $0x2,%eax
0834f167 +0x0db:  add    $0x290,%eax
0834f16c +0x0e0:  add    0x8(%ebp),%eax
0834f16f +0x0e3:  add    $0x4,%eax
0834f172 +0x0e6:  mov    %eax,(%esp)
0834f175 +0x0e9:  call   0838bc00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6a0
0834f17a +0x0ee:  addl   $0x1,-0xc(%ebp)
0834f17e +0x0f2:  cmpl   $0xe,-0xc(%ebp)
0834f182 +0x0f6:  setle  %al
0834f185 +0x0f9:  test   %al,%al
0834f187 +0x0fb:  jne    0834f11c <+0x90>
0834f189 +0x0fd:  mov    -0x4(%ebp),%ebx
0834f18c +0x100:  leave
0834f18d +0x101:  ret
```

## 反编译 C

```c
// CMapList::destroy @ 0x834f08c

/* CMapList::destroy() */

void __thiscall CMapList::destroy(CMapList *this)

{
  CMap *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_24 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_1c [8];
  CMap *local_14;
  int local_10;
  
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  begin(local_1c);
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
            (local_24);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                          *)local_1c,(_Hashtable_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                         *)local_1c);
    this_00 = *(CMap **)(iVar2 + 4);
    local_14 = this_00;
    if (this_00 != (CMap *)0x0) {
      CMap::~CMap(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  *)local_1c);
  }
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this);
  for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x14));
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x154));
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x294));
  }
  return;
}
```
