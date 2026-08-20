# execute

`_ZN11game_master17DungeonDifficulty7executeEv`

`game_master::DungeonDifficulty::execute()`

| 类 | 地址 |
|---|---|
| `game_master::DungeonDifficulty` | `0x084b2152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b2152  _ZN11game_master17DungeonDifficulty7executeEv
#           game_master::DungeonDifficulty::execute()
# range [0x084b2152, 0x084b22c9]
084b2152 +0x000:  push   %ebp
084b2153 +0x001:  mov    %esp,%ebp
084b2155 +0x003:  push   %esi
084b2156 +0x004:  push   %ebx
084b2157 +0x005:  sub    $0x40,%esp
084b215a +0x008:  mov    0x8(%ebp),%eax
084b215d +0x00b:  mov    %eax,(%esp)
084b2160 +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b2165 +0x013:  mov    %eax,-0x14(%ebp)
084b2168 +0x016:  cmpl   $0x0,-0x14(%ebp)
084b216c +0x01a:  je     084b22b8 <+0x166>
084b2172 +0x020:  mov    0x8(%ebp),%eax
084b2175 +0x023:  movzbl 0x8(%eax),%eax
084b2179 +0x027:  test   %al,%al
084b217b +0x029:  je     084b22bb <+0x169>
084b2181 +0x02f:  mov    0x8(%ebp),%eax
084b2184 +0x032:  movzbl 0x8(%eax),%eax
084b2188 +0x036:  cmp    $0x3,%al
084b218a +0x038:  ja     084b22be <+0x16c>
084b2190 +0x03e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b2195 +0x043:  mov    %eax,(%esp)
084b2198 +0x046:  call   08365434 <_ZN12CDataManager19getDungeonIndexListEv>  ; CDataManager::getDungeonIndexList()
084b219d +0x04b:  mov    %eax,-0x10(%ebp)
084b21a0 +0x04e:  lea    -0x24(%ebp),%eax
084b21a3 +0x051:  mov    -0x10(%ebp),%edx
084b21a6 +0x054:  mov    %edx,0x4(%esp)
084b21aa +0x058:  mov    %eax,(%esp)
084b21ad +0x05b:  call   0838a922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3c2
084b21b2 +0x060:  sub    $0x4,%esp
084b21b5 +0x063:  lea    -0x2c(%ebp),%eax
084b21b8 +0x066:  mov    -0x10(%ebp),%edx
084b21bb +0x069:  mov    %edx,0x4(%esp)
084b21bf +0x06d:  mov    %eax,(%esp)
084b21c2 +0x070:  call   0838a8d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a374>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a374
084b21c7 +0x075:  sub    $0x4,%esp
084b21ca +0x078:  jmp    084b229c <+0x14a>
084b21cf +0x07d:  lea    -0x24(%ebp),%eax
084b21d2 +0x080:  mov    %eax,(%esp)
084b21d5 +0x083:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
084b21da +0x088:  mov    0x4(%eax),%eax
084b21dd +0x08b:  mov    %eax,-0xc(%ebp)
084b21e0 +0x08e:  cmpl   $0x0,-0xc(%ebp)
084b21e4 +0x092:  je     084b227b <+0x129>
084b21ea +0x098:  mov    -0xc(%ebp),%eax
084b21ed +0x09b:  mov    %eax,(%esp)
084b21f0 +0x09e:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
084b21f5 +0x0a3:  cmp    $0x1,%al
084b21f7 +0x0a5:  je     084b2236 <+0xe4>
084b21f9 +0x0a7:  mov    -0xc(%ebp),%eax
084b21fc +0x0aa:  mov    %eax,(%esp)
084b21ff +0x0ad:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
084b2204 +0x0b2:  cmp    $0x2,%al
084b2206 +0x0b4:  je     084b2236 <+0xe4>
084b2208 +0x0b6:  mov    -0xc(%ebp),%eax
084b220b +0x0b9:  mov    %eax,(%esp)
084b220e +0x0bc:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
084b2213 +0x0c1:  test   %al,%al
084b2215 +0x0c3:  jne    084b2236 <+0xe4>
084b2217 +0x0c5:  mov    -0xc(%ebp),%eax
084b221a +0x0c8:  mov    %eax,(%esp)
084b221d +0x0cb:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
084b2222 +0x0d0:  test   %al,%al
084b2224 +0x0d2:  jne    084b2236 <+0xe4>
084b2226 +0x0d4:  mov    -0xc(%ebp),%eax
084b2229 +0x0d7:  mov    %eax,(%esp)
084b222c +0x0da:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
084b2231 +0x0df:  cmp    $0x1,%eax
084b2234 +0x0e2:  jne    084b223d <+0xeb>
084b2236 +0x0e4:  mov    $0x1,%eax
084b223b +0x0e9:  jmp    084b2242 <+0xf0>
084b223d +0x0eb:  mov    $0x0,%eax
084b2242 +0x0f0:  test   %al,%al
084b2244 +0x0f2:  jne    084b227e <+0x12c>
084b2246 +0x0f4:  mov    0x8(%ebp),%eax
084b2249 +0x0f7:  movzbl 0x8(%eax),%eax
084b224d +0x0fb:  movsbl %al,%esi
084b2250 +0x0fe:  mov    -0xc(%ebp),%eax
084b2253 +0x101:  mov    %eax,(%esp)
084b2256 +0x104:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
084b225b +0x109:  movswl %ax,%ebx
084b225e +0x10c:  mov    -0x14(%ebp),%eax
084b2261 +0x10f:  mov    %eax,(%esp)
084b2264 +0x112:  call   084b42cc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x37f>  ; global constructors keyed to game_master::CMacro::Reset()+0x37f
084b2269 +0x117:  mov    %esi,0x8(%esp)
084b226d +0x11b:  mov    %ebx,0x4(%esp)
084b2271 +0x11f:  mov    %eax,(%esp)
084b2274 +0x122:  call   08374f24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeef0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeef0
084b2279 +0x127:  jmp    084b227f <+0x12d>
084b227b +0x129:  nop
084b227c +0x12a:  jmp    084b227f <+0x12d>
084b227e +0x12c:  nop
084b227f +0x12d:  lea    -0x1c(%ebp),%eax
084b2282 +0x130:  movl   $0x0,0x8(%esp)
084b228a +0x138:  lea    -0x24(%ebp),%edx
084b228d +0x13b:  mov    %edx,0x4(%esp)
084b2291 +0x13f:  mov    %eax,(%esp)
084b2294 +0x142:  call   0838a95c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3fc
084b2299 +0x147:  sub    $0x4,%esp
084b229c +0x14a:  lea    -0x2c(%ebp),%eax
084b229f +0x14d:  mov    %eax,0x4(%esp)
084b22a3 +0x151:  lea    -0x24(%ebp),%eax
084b22a6 +0x154:  mov    %eax,(%esp)
084b22a9 +0x157:  call   0838a948 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3e8
084b22ae +0x15c:  test   %al,%al
084b22b0 +0x15e:  jne    084b21cf <+0x7d>
084b22b6 +0x164:  jmp    084b22bf <+0x16d>
084b22b8 +0x166:  nop
084b22b9 +0x167:  jmp    084b22bf <+0x16d>
084b22bb +0x169:  nop
084b22bc +0x16a:  jmp    084b22bf <+0x16d>
084b22be +0x16c:  nop
084b22bf +0x16d:  lea    -0x8(%ebp),%esp
084b22c2 +0x170:  add    $0x0,%esp
084b22c5 +0x173:  pop    %ebx
084b22c6 +0x174:  pop    %esi
084b22c7 +0x175:  pop    %ebp
084b22c8 +0x176:  ret
084b22c9 +0x177:  nop
```

## 反编译 C

```c
// game_master::DungeonDifficulty::execute @ 0x84b2152

/* game_master::DungeonDifficulty::execute() */

void __thiscall game_master::DungeonDifficulty::execute(DungeonDifficulty *this)

{
  DungeonDifficulty DVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  CDataManager *this_00;
  int iVar5;
  CDungeonClear *this_01;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_30 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_28 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  CUserCharacInfo *local_18;
  undefined4 local_14;
  CDungeon *local_10;
  
  local_18 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (((local_18 != (CUserCharacInfo *)0x0) && (this[8] != (DungeonDifficulty)0x0)) &&
     ((byte)this[8] < 4)) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::getDungeonIndexList(this_00);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
              (local_28);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              (local_30);
    while (cVar3 = __gnu_cxx::
                   _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                   ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                                 *)local_28,(_Hashtable_const_iterator *)local_30), cVar3 != '\0') {
      iVar5 = __gnu_cxx::
              _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_28);
      local_10 = *(CDungeon **)(iVar5 + 4);
      if (local_10 != (CDungeon *)0x0) {
        cVar3 = CDungeon::get_blood_dungeon_type(local_10);
        if (((cVar3 == '\x01') ||
            (cVar3 = CDungeon::get_blood_dungeon_type(local_10), cVar3 == '\x02')) ||
           ((cVar3 = CDungeon::isTowerOfDespairDungeon(local_10), cVar3 != '\0' ||
            ((cVar3 = CDungeon::isTournamentDungeon(local_10), cVar3 != '\0' ||
             (iVar5 = CDungeon::getDungeonKind(local_10), iVar5 == 1)))))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          DVar1 = this[8];
          sVar4 = CDungeon::get_index(local_10);
          this_01 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW(local_18);
          WongWork::CDungeonClear::addClearedDungeon(this_01,sVar4,(char)DVar1);
        }
      }
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
      ::operator++(local_20,(int)local_28);
    }
  }
  return;
}
```
