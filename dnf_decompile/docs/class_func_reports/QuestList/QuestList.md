# QuestList

`_ZN9QuestListC1Ev`

`QuestList::QuestList()`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x083538f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083538f0  _ZN9QuestListC1Ev
#           QuestList::QuestList()
# range [0x083538f0, 0x08353a9f]
083538f0 +0x000:  push   %ebp
083538f1 +0x001:  mov    %esp,%ebp
083538f3 +0x003:  push   %esi
083538f4 +0x004:  push   %ebx
083538f5 +0x005:  sub    $0x10,%esp
083538f8 +0x008:  mov    0x8(%ebp),%eax
083538fb +0x00b:  mov    %eax,(%esp)
083538fe +0x00e:  call   083910d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b78
08353903 +0x013:  mov    0x8(%ebp),%eax
08353906 +0x016:  add    $0x14,%eax
08353909 +0x019:  mov    %eax,(%esp)
0835390c +0x01c:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
08353911 +0x021:  mov    0x8(%ebp),%eax
08353914 +0x024:  add    $0x2c,%eax
08353917 +0x027:  mov    %eax,(%esp)
0835391a +0x02a:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
0835391f +0x02f:  mov    0x8(%ebp),%eax
08353922 +0x032:  add    $0x44,%eax
08353925 +0x035:  mov    %eax,(%esp)
08353928 +0x038:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
0835392d +0x03d:  mov    0x8(%ebp),%eax
08353930 +0x040:  add    $0x5c,%eax
08353933 +0x043:  mov    %eax,(%esp)
08353936 +0x046:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
0835393b +0x04b:  mov    0x8(%ebp),%eax
0835393e +0x04e:  add    $0x74,%eax
08353941 +0x051:  mov    %eax,(%esp)
08353944 +0x054:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
08353949 +0x059:  mov    0x8(%ebp),%eax
0835394c +0x05c:  add    $0x8c,%eax
08353951 +0x061:  mov    %eax,(%esp)
08353954 +0x064:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
08353959 +0x069:  mov    0x8(%ebp),%eax
0835395c +0x06c:  add    $0xa4,%eax
08353961 +0x071:  mov    %eax,(%esp)
08353964 +0x074:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
08353969 +0x079:  mov    0x8(%ebp),%eax
0835396c +0x07c:  add    $0xbc,%eax
08353971 +0x081:  mov    %eax,(%esp)
08353974 +0x084:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
08353979 +0x089:  mov    0x8(%ebp),%eax
0835397c +0x08c:  add    $0xd4,%eax
08353981 +0x091:  mov    %eax,(%esp)
08353984 +0x094:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08353989 +0x099:  mov    0x8(%ebp),%eax
0835398c +0x09c:  add    $0xe0,%eax
08353991 +0x0a1:  mov    %eax,(%esp)
08353994 +0x0a4:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
08353999 +0x0a9:  jmp    08353a99 <+0x1a9>
0835399e +0x0ae:  mov    %edx,%ebx
083539a0 +0x0b0:  mov    %eax,%esi
083539a2 +0x0b2:  mov    0x8(%ebp),%eax
083539a5 +0x0b5:  add    $0xd4,%eax
083539aa +0x0ba:  mov    %eax,(%esp)
083539ad +0x0bd:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
083539b2 +0x0c2:  mov    %esi,%eax
083539b4 +0x0c4:  mov    %ebx,%edx
083539b6 +0x0c6:  jmp    083539b8 <+0xc8>
083539b8 +0x0c8:  mov    %edx,%ebx
083539ba +0x0ca:  mov    %eax,%esi
083539bc +0x0cc:  mov    0x8(%ebp),%eax
083539bf +0x0cf:  add    $0xbc,%eax
083539c4 +0x0d4:  mov    %eax,(%esp)
083539c7 +0x0d7:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
083539cc +0x0dc:  mov    %esi,%eax
083539ce +0x0de:  mov    %ebx,%edx
083539d0 +0x0e0:  jmp    083539d2 <+0xe2>
083539d2 +0x0e2:  mov    %edx,%ebx
083539d4 +0x0e4:  mov    %eax,%esi
083539d6 +0x0e6:  mov    0x8(%ebp),%eax
083539d9 +0x0e9:  add    $0xa4,%eax
083539de +0x0ee:  mov    %eax,(%esp)
083539e1 +0x0f1:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
083539e6 +0x0f6:  mov    %esi,%eax
083539e8 +0x0f8:  mov    %ebx,%edx
083539ea +0x0fa:  jmp    083539ec <+0xfc>
083539ec +0x0fc:  mov    %edx,%ebx
083539ee +0x0fe:  mov    %eax,%esi
083539f0 +0x100:  mov    0x8(%ebp),%eax
083539f3 +0x103:  add    $0x8c,%eax
083539f8 +0x108:  mov    %eax,(%esp)
083539fb +0x10b:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a00 +0x110:  mov    %esi,%eax
08353a02 +0x112:  mov    %ebx,%edx
08353a04 +0x114:  jmp    08353a06 <+0x116>
08353a06 +0x116:  mov    %edx,%ebx
08353a08 +0x118:  mov    %eax,%esi
08353a0a +0x11a:  mov    0x8(%ebp),%eax
08353a0d +0x11d:  add    $0x74,%eax
08353a10 +0x120:  mov    %eax,(%esp)
08353a13 +0x123:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a18 +0x128:  mov    %esi,%eax
08353a1a +0x12a:  mov    %ebx,%edx
08353a1c +0x12c:  jmp    08353a1e <+0x12e>
08353a1e +0x12e:  mov    %edx,%ebx
08353a20 +0x130:  mov    %eax,%esi
08353a22 +0x132:  mov    0x8(%ebp),%eax
08353a25 +0x135:  add    $0x5c,%eax
08353a28 +0x138:  mov    %eax,(%esp)
08353a2b +0x13b:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a30 +0x140:  mov    %esi,%eax
08353a32 +0x142:  mov    %ebx,%edx
08353a34 +0x144:  jmp    08353a36 <+0x146>
08353a36 +0x146:  mov    %edx,%ebx
08353a38 +0x148:  mov    %eax,%esi
08353a3a +0x14a:  mov    0x8(%ebp),%eax
08353a3d +0x14d:  add    $0x44,%eax
08353a40 +0x150:  mov    %eax,(%esp)
08353a43 +0x153:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a48 +0x158:  mov    %esi,%eax
08353a4a +0x15a:  mov    %ebx,%edx
08353a4c +0x15c:  jmp    08353a4e <+0x15e>
08353a4e +0x15e:  mov    %edx,%ebx
08353a50 +0x160:  mov    %eax,%esi
08353a52 +0x162:  mov    0x8(%ebp),%eax
08353a55 +0x165:  add    $0x2c,%eax
08353a58 +0x168:  mov    %eax,(%esp)
08353a5b +0x16b:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a60 +0x170:  mov    %esi,%eax
08353a62 +0x172:  mov    %ebx,%edx
08353a64 +0x174:  jmp    08353a66 <+0x176>
08353a66 +0x176:  mov    %edx,%ebx
08353a68 +0x178:  mov    %eax,%esi
08353a6a +0x17a:  mov    0x8(%ebp),%eax
08353a6d +0x17d:  add    $0x14,%eax
08353a70 +0x180:  mov    %eax,(%esp)
08353a73 +0x183:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
08353a78 +0x188:  mov    %esi,%eax
08353a7a +0x18a:  mov    %ebx,%edx
08353a7c +0x18c:  jmp    08353a7e <+0x18e>
08353a7e +0x18e:  mov    %edx,%ebx
08353a80 +0x190:  mov    %eax,%esi
08353a82 +0x192:  mov    0x8(%ebp),%eax
08353a85 +0x195:  mov    %eax,(%esp)
08353a88 +0x198:  call   0837a6cc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa16c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa16c
08353a8d +0x19d:  mov    %esi,%eax
08353a8f +0x19f:  mov    %ebx,%edx
08353a91 +0x1a1:  mov    %eax,(%esp)
08353a94 +0x1a4:  call   08ae3750 <_Unwind_Resume>
08353a99 +0x1a9:  add    $0x10,%esp
08353a9c +0x1ac:  pop    %ebx
08353a9d +0x1ad:  pop    %esi
08353a9e +0x1ae:  pop    %ebp
08353a9f +0x1af:  ret
```

## 反编译 C

```c
// QuestList::QuestList @ 0x83538f0

/* QuestList::QuestList() */

void __thiscall QuestList::QuestList(QuestList *this)

{
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  hash_map((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)
           this);
                    /* try { // try from 0835390c to 08353910 has its CatchHandler @ 08353a7e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
                    /* try { // try from 0835391a to 0835391e has its CatchHandler @ 08353a66 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
                    /* try { // try from 08353928 to 0835392c has its CatchHandler @ 08353a4e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
                    /* try { // try from 08353936 to 0835393a has its CatchHandler @ 08353a36 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
                    /* try { // try from 08353944 to 08353948 has its CatchHandler @ 08353a1e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
                    /* try { // try from 08353954 to 08353958 has its CatchHandler @ 08353a06 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
                    /* try { // try from 08353964 to 08353968 has its CatchHandler @ 083539ec */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
                    /* try { // try from 08353974 to 08353978 has its CatchHandler @ 083539d2 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
                    /* try { // try from 08353984 to 08353988 has its CatchHandler @ 083539b8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xd4));
                    /* try { // try from 08353994 to 08353998 has its CatchHandler @ 0835399e */
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0xe0));
  return;
}
```
