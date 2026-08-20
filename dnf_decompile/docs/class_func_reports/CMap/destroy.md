# destroy

`_ZN4CMap7destroyEv`

`CMap::destroy()`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834e13e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834e13e  _ZN4CMap7destroyEv
#           CMap::destroy()
# range [0x0834e13e, 0x0834e189]
0834e13e +0x00:  push   %ebp
0834e13f +0x01:  mov    %esp,%ebp
0834e141 +0x03:  sub    $0x18,%esp
0834e144 +0x06:  mov    0x8(%ebp),%eax
0834e147 +0x09:  add    $0xc,%eax
0834e14a +0x0c:  mov    %eax,(%esp)
0834e14d +0x0f:  call   0831379a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x537f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x537f
0834e152 +0x14:  mov    0x8(%ebp),%eax
0834e155 +0x17:  add    $0x1c,%eax
0834e158 +0x1a:  mov    %eax,(%esp)
0834e15b +0x1d:  call   0838a9a6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a446>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a446
0834e160 +0x22:  mov    0x8(%ebp),%eax
0834e163 +0x25:  movl   $0x0,(%eax)
0834e169 +0x2b:  mov    0x8(%ebp),%eax
0834e16c +0x2e:  add    $0x24,%eax
0834e16f +0x31:  mov    %eax,(%esp)
0834e172 +0x34:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0834e177 +0x39:  mov    0x8(%ebp),%eax
0834e17a +0x3c:  add    $0x9c,%eax
0834e17f +0x41:  mov    %eax,(%esp)
0834e182 +0x44:  call   08382aa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12542>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12542
0834e187 +0x49:  leave
0834e188 +0x4a:  ret
0834e189 +0x4b:  nop
```

## 反编译 C

```c
// CMap::destroy @ 0x834e13e

/* CMap::destroy() */

void __thiscall CMap::destroy(CMap *this)

{
  std::list<_mapMonster,std::allocator<_mapMonster>>::clear
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
  std::list<_mapItem,std::allocator<_mapItem>>::clear
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
  *(undefined4 *)this = 0;
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0x24));
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::clear
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
  return;
}
```
