# ~QuestList

`_ZN9QuestListD1Ev`

`QuestList::~QuestList()`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08353aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353aa0  _ZN9QuestListD1Ev
#           QuestList::~QuestList()
# range [0x08353aa0, 0x08353c85]
08353aa0 +0x000:  push   %ebp
08353aa1 +0x001:  mov    %esp,%ebp
08353aa3 +0x003:  push   %esi
08353aa4 +0x004:  push   %ebx
08353aa5 +0x005:  sub    $0x10,%esp
08353aa8 +0x008:  mov    0x8(%ebp),%eax
08353aab +0x00b:  mov    %eax,(%esp)
08353aae +0x00e:  call   08353c86 <_ZN9QuestList7destroyEv>  ; QuestList::destroy()
08353ab3 +0x013:  jmp    08353acf <+0x2f>
08353ab5 +0x015:  mov    %edx,%ebx
08353ab7 +0x017:  mov    %eax,%esi
08353ab9 +0x019:  mov    0x8(%ebp),%eax
08353abc +0x01c:  add    $0xe0,%eax
08353ac1 +0x021:  mov    %eax,(%esp)
08353ac4 +0x024:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08353ac9 +0x029:  mov    %esi,%eax
08353acb +0x02b:  mov    %ebx,%edx
08353acd +0x02d:  jmp    08353ae1 <+0x41>
08353acf +0x02f:  mov    0x8(%ebp),%eax
08353ad2 +0x032:  add    $0xe0,%eax
08353ad7 +0x037:  mov    %eax,(%esp)
08353ada +0x03a:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08353adf +0x03f:  jmp    08353afb <+0x5b>
08353ae1 +0x041:  mov    %edx,%ebx
08353ae3 +0x043:  mov    %eax,%esi
08353ae5 +0x045:  mov    0x8(%ebp),%eax
08353ae8 +0x048:  add    $0xd4,%eax
08353aed +0x04d:  mov    %eax,(%esp)
08353af0 +0x050:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08353af5 +0x055:  mov    %esi,%eax
08353af7 +0x057:  mov    %ebx,%edx
08353af9 +0x059:  jmp    08353b0d <+0x6d>
08353afb +0x05b:  mov    0x8(%ebp),%eax
08353afe +0x05e:  add    $0xd4,%eax
08353b03 +0x063:  mov    %eax,(%esp)
08353b06 +0x066:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08353b0b +0x06b:  jmp    08353b27 <+0x87>
08353b0d +0x06d:  mov    %edx,%ebx
08353b0f +0x06f:  mov    %eax,%esi
08353b11 +0x071:  mov    0x8(%ebp),%eax
08353b14 +0x074:  add    $0xbc,%eax
08353b19 +0x079:  mov    %eax,(%esp)
08353b1c +0x07c:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b21 +0x081:  mov    %esi,%eax
08353b23 +0x083:  mov    %ebx,%edx
08353b25 +0x085:  jmp    08353b39 <+0x99>
08353b27 +0x087:  mov    0x8(%ebp),%eax
08353b2a +0x08a:  add    $0xbc,%eax
08353b2f +0x08f:  mov    %eax,(%esp)
08353b32 +0x092:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b37 +0x097:  jmp    08353b53 <+0xb3>
08353b39 +0x099:  mov    %edx,%ebx
08353b3b +0x09b:  mov    %eax,%esi
08353b3d +0x09d:  mov    0x8(%ebp),%eax
08353b40 +0x0a0:  add    $0xa4,%eax
08353b45 +0x0a5:  mov    %eax,(%esp)
08353b48 +0x0a8:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b4d +0x0ad:  mov    %esi,%eax
08353b4f +0x0af:  mov    %ebx,%edx
08353b51 +0x0b1:  jmp    08353b65 <+0xc5>
08353b53 +0x0b3:  mov    0x8(%ebp),%eax
08353b56 +0x0b6:  add    $0xa4,%eax
08353b5b +0x0bb:  mov    %eax,(%esp)
08353b5e +0x0be:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b63 +0x0c3:  jmp    08353b7f <+0xdf>
08353b65 +0x0c5:  mov    %edx,%ebx
08353b67 +0x0c7:  mov    %eax,%esi
08353b69 +0x0c9:  mov    0x8(%ebp),%eax
08353b6c +0x0cc:  add    $0x8c,%eax
08353b71 +0x0d1:  mov    %eax,(%esp)
08353b74 +0x0d4:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b79 +0x0d9:  mov    %esi,%eax
08353b7b +0x0db:  mov    %ebx,%edx
08353b7d +0x0dd:  jmp    08353b91 <+0xf1>
08353b7f +0x0df:  mov    0x8(%ebp),%eax
08353b82 +0x0e2:  add    $0x8c,%eax
08353b87 +0x0e7:  mov    %eax,(%esp)
08353b8a +0x0ea:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353b8f +0x0ef:  jmp    08353ba9 <+0x109>
08353b91 +0x0f1:  mov    %edx,%ebx
08353b93 +0x0f3:  mov    %eax,%esi
08353b95 +0x0f5:  mov    0x8(%ebp),%eax
08353b98 +0x0f8:  add    $0x74,%eax
08353b9b +0x0fb:  mov    %eax,(%esp)
08353b9e +0x0fe:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353ba3 +0x103:  mov    %esi,%eax
08353ba5 +0x105:  mov    %ebx,%edx
08353ba7 +0x107:  jmp    08353bb9 <+0x119>
08353ba9 +0x109:  mov    0x8(%ebp),%eax
08353bac +0x10c:  add    $0x74,%eax
08353baf +0x10f:  mov    %eax,(%esp)
08353bb2 +0x112:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353bb7 +0x117:  jmp    08353bd1 <+0x131>
08353bb9 +0x119:  mov    %edx,%ebx
08353bbb +0x11b:  mov    %eax,%esi
08353bbd +0x11d:  mov    0x8(%ebp),%eax
08353bc0 +0x120:  add    $0x5c,%eax
08353bc3 +0x123:  mov    %eax,(%esp)
08353bc6 +0x126:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353bcb +0x12b:  mov    %esi,%eax
08353bcd +0x12d:  mov    %ebx,%edx
08353bcf +0x12f:  jmp    08353be1 <+0x141>
08353bd1 +0x131:  mov    0x8(%ebp),%eax
08353bd4 +0x134:  add    $0x5c,%eax
08353bd7 +0x137:  mov    %eax,(%esp)
08353bda +0x13a:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353bdf +0x13f:  jmp    08353bf9 <+0x159>
08353be1 +0x141:  mov    %edx,%ebx
08353be3 +0x143:  mov    %eax,%esi
08353be5 +0x145:  mov    0x8(%ebp),%eax
08353be8 +0x148:  add    $0x44,%eax
08353beb +0x14b:  mov    %eax,(%esp)
08353bee +0x14e:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353bf3 +0x153:  mov    %esi,%eax
08353bf5 +0x155:  mov    %ebx,%edx
08353bf7 +0x157:  jmp    08353c09 <+0x169>
08353bf9 +0x159:  mov    0x8(%ebp),%eax
08353bfc +0x15c:  add    $0x44,%eax
08353bff +0x15f:  mov    %eax,(%esp)
08353c02 +0x162:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353c07 +0x167:  jmp    08353c21 <+0x181>
08353c09 +0x169:  mov    %edx,%ebx
08353c0b +0x16b:  mov    %eax,%esi
08353c0d +0x16d:  mov    0x8(%ebp),%eax
08353c10 +0x170:  add    $0x2c,%eax
08353c13 +0x173:  mov    %eax,(%esp)
08353c16 +0x176:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353c1b +0x17b:  mov    %esi,%eax
08353c1d +0x17d:  mov    %ebx,%edx
08353c1f +0x17f:  jmp    08353c31 <+0x191>
08353c21 +0x181:  mov    0x8(%ebp),%eax
08353c24 +0x184:  add    $0x2c,%eax
08353c27 +0x187:  mov    %eax,(%esp)
08353c2a +0x18a:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353c2f +0x18f:  jmp    08353c49 <+0x1a9>
08353c31 +0x191:  mov    %edx,%ebx
08353c33 +0x193:  mov    %eax,%esi
08353c35 +0x195:  mov    0x8(%ebp),%eax
08353c38 +0x198:  add    $0x14,%eax
08353c3b +0x19b:  mov    %eax,(%esp)
08353c3e +0x19e:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353c43 +0x1a3:  mov    %esi,%eax
08353c45 +0x1a5:  mov    %ebx,%edx
08353c47 +0x1a7:  jmp    08353c59 <+0x1b9>
08353c49 +0x1a9:  mov    0x8(%ebp),%eax
08353c4c +0x1ac:  add    $0x14,%eax
08353c4f +0x1af:  mov    %eax,(%esp)
08353c52 +0x1b2:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353c57 +0x1b7:  jmp    08353c74 <+0x1d4>
08353c59 +0x1b9:  mov    %edx,%ebx
08353c5b +0x1bb:  mov    %eax,%esi
08353c5d +0x1bd:  mov    0x8(%ebp),%eax
08353c60 +0x1c0:  mov    %eax,(%esp)
08353c63 +0x1c3:  call   0837a6cc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa16c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa16c
08353c68 +0x1c8:  mov    %esi,%eax
08353c6a +0x1ca:  mov    %ebx,%edx
08353c6c +0x1cc:  mov    %eax,(%esp)
08353c6f +0x1cf:  call   08ae3750 <_Unwind_Resume>
08353c74 +0x1d4:  mov    0x8(%ebp),%eax
08353c77 +0x1d7:  mov    %eax,(%esp)
08353c7a +0x1da:  call   0837a6cc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa16c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa16c
08353c7f +0x1df:  add    $0x10,%esp
08353c82 +0x1e2:  pop    %ebx
08353c83 +0x1e3:  pop    %esi
08353c84 +0x1e4:  pop    %ebp
08353c85 +0x1e5:  ret
```

## 反编译 C

```c
// QuestList::~QuestList @ 0x8353aa0

/* QuestList::~QuestList() */

void __thiscall QuestList::~QuestList(QuestList *this)

{
                    /* try { // try from 08353aae to 08353ab2 has its CatchHandler @ 08353ab5 */
  destroy(this);
                    /* try { // try from 08353ada to 08353ade has its CatchHandler @ 08353ae1 */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0xe0));
                    /* try { // try from 08353b06 to 08353b0a has its CatchHandler @ 08353b0d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xd4));
                    /* try { // try from 08353b32 to 08353b36 has its CatchHandler @ 08353b39 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
                    /* try { // try from 08353b5e to 08353b62 has its CatchHandler @ 08353b65 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
                    /* try { // try from 08353b8a to 08353b8e has its CatchHandler @ 08353b91 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
                    /* try { // try from 08353bb2 to 08353bb6 has its CatchHandler @ 08353bb9 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
                    /* try { // try from 08353bda to 08353bde has its CatchHandler @ 08353be1 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
                    /* try { // try from 08353c02 to 08353c06 has its CatchHandler @ 08353c09 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
                    /* try { // try from 08353c2a to 08353c2e has its CatchHandler @ 08353c31 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
                    /* try { // try from 08353c52 to 08353c56 has its CatchHandler @ 08353c59 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  ~hash_map((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)
            this);
  return;
}
```
