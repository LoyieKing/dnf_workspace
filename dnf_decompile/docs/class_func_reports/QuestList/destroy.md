# destroy

`_ZN9QuestList7destroyEv`

`QuestList::destroy()`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08353c86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353c86  _ZN9QuestList7destroyEv
#           QuestList::destroy()
# range [0x08353c86, 0x08353d97]
08353c86 +0x000:  push   %ebp
08353c87 +0x001:  mov    %esp,%ebp
08353c89 +0x003:  push   %ebx
08353c8a +0x004:  sub    $0x34,%esp
08353c8d +0x007:  mov    0x8(%ebp),%edx
08353c90 +0x00a:  lea    -0x14(%ebp),%eax
08353c93 +0x00d:  mov    %edx,0x4(%esp)
08353c97 +0x011:  mov    %eax,(%esp)
08353c9a +0x014:  call   083911ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20c4c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20c4c
08353c9f +0x019:  sub    $0x4,%esp
08353ca2 +0x01c:  mov    0x8(%ebp),%edx
08353ca5 +0x01f:  lea    -0x1c(%ebp),%eax
08353ca8 +0x022:  mov    %edx,0x4(%esp)
08353cac +0x026:  mov    %eax,(%esp)
08353caf +0x029:  call   083911d2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20c72>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20c72
08353cb4 +0x02e:  sub    $0x4,%esp
08353cb7 +0x031:  jmp    08353cec <+0x66>
08353cb9 +0x033:  lea    -0x14(%ebp),%eax
08353cbc +0x036:  mov    %eax,(%esp)
08353cbf +0x039:  call   083912a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d44>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d44
08353cc4 +0x03e:  mov    0x4(%eax),%eax
08353cc7 +0x041:  mov    %eax,-0xc(%ebp)
08353cca +0x044:  mov    -0xc(%ebp),%ebx
08353ccd +0x047:  test   %ebx,%ebx
08353ccf +0x049:  je     08353ce1 <+0x5b>
08353cd1 +0x04b:  mov    %ebx,(%esp)
08353cd4 +0x04e:  call   0837a6e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa180>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa180
08353cd9 +0x053:  mov    %ebx,(%esp)
08353cdc +0x056:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08353ce1 +0x05b:  lea    -0x14(%ebp),%eax
08353ce4 +0x05e:  mov    %eax,(%esp)
08353ce7 +0x061:  call   0839120c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20cac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20cac
08353cec +0x066:  lea    -0x1c(%ebp),%eax
08353cef +0x069:  mov    %eax,0x4(%esp)
08353cf3 +0x06d:  lea    -0x14(%ebp),%eax
08353cf6 +0x070:  mov    %eax,(%esp)
08353cf9 +0x073:  call   083911f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20c98
08353cfe +0x078:  test   %al,%al
08353d00 +0x07a:  jne    08353cb9 <+0x33>
08353d02 +0x07c:  mov    0x8(%ebp),%eax
08353d05 +0x07f:  mov    %eax,(%esp)
08353d08 +0x082:  call   083912b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d52
08353d0d +0x087:  mov    0x8(%ebp),%eax
08353d10 +0x08a:  add    $0x14,%eax
08353d13 +0x08d:  mov    %eax,(%esp)
08353d16 +0x090:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d1b +0x095:  mov    0x8(%ebp),%eax
08353d1e +0x098:  add    $0x2c,%eax
08353d21 +0x09b:  mov    %eax,(%esp)
08353d24 +0x09e:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d29 +0x0a3:  mov    0x8(%ebp),%eax
08353d2c +0x0a6:  add    $0x44,%eax
08353d2f +0x0a9:  mov    %eax,(%esp)
08353d32 +0x0ac:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d37 +0x0b1:  mov    0x8(%ebp),%eax
08353d3a +0x0b4:  add    $0xbc,%eax
08353d3f +0x0b9:  mov    %eax,(%esp)
08353d42 +0x0bc:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d47 +0x0c1:  mov    0x8(%ebp),%eax
08353d4a +0x0c4:  add    $0x5c,%eax
08353d4d +0x0c7:  mov    %eax,(%esp)
08353d50 +0x0ca:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d55 +0x0cf:  mov    0x8(%ebp),%eax
08353d58 +0x0d2:  add    $0x74,%eax
08353d5b +0x0d5:  mov    %eax,(%esp)
08353d5e +0x0d8:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d63 +0x0dd:  mov    0x8(%ebp),%eax
08353d66 +0x0e0:  add    $0x8c,%eax
08353d6b +0x0e5:  mov    %eax,(%esp)
08353d6e +0x0e8:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d73 +0x0ed:  mov    0x8(%ebp),%eax
08353d76 +0x0f0:  add    $0xe0,%eax
08353d7b +0x0f5:  mov    %eax,(%esp)
08353d7e +0x0f8:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
08353d83 +0x0fd:  mov    0x8(%ebp),%eax
08353d86 +0x100:  add    $0xa4,%eax
08353d8b +0x105:  mov    %eax,(%esp)
08353d8e +0x108:  call   08387e4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178ee
08353d93 +0x10d:  mov    -0x4(%ebp),%ebx
08353d96 +0x110:  leave
08353d97 +0x111:  ret
```

## 反编译 C

```c
// QuestList::destroy @ 0x8353c86

/* QuestList::destroy() */

void __thiscall QuestList::destroy(QuestList *this)

{
  Quest *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_20 [8];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_18 [8];
  Quest *local_10;
  
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  begin(local_18);
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  end(local_20);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                          *)local_18,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                         *)local_18);
    this_00 = *(Quest **)(iVar2 + 4);
    local_10 = this_00;
    if (this_00 != (Quest *)0x0) {
      Quest::~Quest(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                  *)local_18);
  }
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  clear((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)this)
  ;
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0xe0));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
  return;
}
```
