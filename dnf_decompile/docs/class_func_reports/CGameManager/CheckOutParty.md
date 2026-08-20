# CheckOutParty

`_ZN12CGameManager13CheckOutPartyEP5CUserb`

`CGameManager::CheckOutParty(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08297c76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08297c76  _ZN12CGameManager13CheckOutPartyEP5CUserb
#           CGameManager::CheckOutParty(CUser*, bool)
# range [0x08297c76, 0x08297df7]
08297c76 +0x000:  push   %ebp
08297c77 +0x001:  mov    %esp,%ebp
08297c79 +0x003:  sub    $0x38,%esp
08297c7c +0x006:  mov    0x10(%ebp),%eax
08297c7f +0x009:  mov    %al,-0x1c(%ebp)
08297c82 +0x00c:  mov    0xc(%ebp),%eax
08297c85 +0x00f:  mov    %eax,(%esp)
08297c88 +0x012:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
08297c8d +0x017:  xor    $0x1,%eax
08297c90 +0x01a:  test   %al,%al
08297c92 +0x01c:  jne    08297df1 <+0x17b>
08297c98 +0x022:  mov    0xc(%ebp),%eax
08297c9b +0x025:  mov    %eax,(%esp)
08297c9e +0x028:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
08297ca3 +0x02d:  cwtl
08297ca4 +0x02e:  mov    %eax,0x4(%esp)
08297ca8 +0x032:  mov    0x8(%ebp),%eax
08297cab +0x035:  mov    %eax,(%esp)
08297cae +0x038:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08297cb3 +0x03d:  mov    %eax,-0x18(%ebp)
08297cb6 +0x040:  cmpl   $0x0,-0x18(%ebp)
08297cba +0x044:  je     08297df4 <+0x17e>
08297cc0 +0x04a:  movb   $0x0,-0x11(%ebp)
08297cc4 +0x04e:  mov    -0x18(%ebp),%eax
08297cc7 +0x051:  mov    0xcac(%eax),%eax
08297ccd +0x057:  mov    %eax,-0x10(%ebp)
08297cd0 +0x05a:  cmpl   $0x0,-0x10(%ebp)
08297cd4 +0x05e:  je     08297cfb <+0x85>
08297cd6 +0x060:  mov    -0x10(%ebp),%eax
08297cd9 +0x063:  movzbl 0x89f(%eax),%eax
08297ce0 +0x06a:  test   %al,%al
08297ce2 +0x06c:  jle    08297ce8 <+0x72>
08297ce4 +0x06e:  movb   $0x1,-0x11(%ebp)
08297ce8 +0x072:  mov    -0x10(%ebp),%eax
08297ceb +0x075:  mov    %eax,(%esp)
08297cee +0x078:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
08297cf3 +0x07d:  test   %al,%al
08297cf5 +0x07f:  je     08297cfb <+0x85>
08297cf7 +0x081:  movb   $0x1,-0x11(%ebp)
08297cfb +0x085:  cmpl   $0x0,-0x10(%ebp)
08297cff +0x089:  je     08297d41 <+0xcb>
08297d01 +0x08b:  mov    -0x10(%ebp),%eax
08297d04 +0x08e:  mov    %eax,(%esp)
08297d07 +0x091:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
08297d0c +0x096:  test   %al,%al
08297d0e +0x098:  jg     08297d2d <+0xb7>
08297d10 +0x09a:  mov    -0x10(%ebp),%eax
08297d13 +0x09d:  movzbl 0x89c(%eax),%eax
08297d1a +0x0a4:  test   %al,%al
08297d1c +0x0a6:  jne    08297d2d <+0xb7>
08297d1e +0x0a8:  mov    -0x10(%ebp),%eax
08297d21 +0x0ab:  mov    %eax,(%esp)
08297d24 +0x0ae:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
08297d29 +0x0b3:  test   %al,%al
08297d2b +0x0b5:  je     08297d34 <+0xbe>
08297d2d +0x0b7:  mov    $0x1,%eax
08297d32 +0x0bc:  jmp    08297d39 <+0xc3>
08297d34 +0x0be:  mov    $0x0,%eax
08297d39 +0x0c3:  test   %al,%al
08297d3b +0x0c5:  je     08297d41 <+0xcb>
08297d3d +0x0c7:  movb   $0x1,-0x11(%ebp)
08297d41 +0x0cb:  mov    -0x18(%ebp),%eax
08297d44 +0x0ce:  add    $0xc7c,%eax
08297d49 +0x0d3:  movl   $&_ZZN12CGameManager13CheckOutPartyEP5CUserbE19__PRETTY_FUNCTION__,0x4(%esp)
08297d51 +0x0db:  mov    %eax,(%esp)
08297d54 +0x0de:  call   082fed32 <_ZN19CDungeonClearTracer5TraceEPKc>  ; CDungeonClearTracer::Trace(char const*)
08297d59 +0x0e3:  mov    -0x18(%ebp),%eax
08297d5c +0x0e6:  mov    0xcd8(%eax),%eax
08297d62 +0x0ec:  cmp    $0x1,%eax
08297d65 +0x0ef:  je     08297dd5 <+0x15f>
08297d67 +0x0f1:  mov    -0x18(%ebp),%eax
08297d6a +0x0f4:  mov    %eax,(%esp)
08297d6d +0x0f7:  call   0822d83a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ee4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ee4
08297d72 +0x0fc:  cmp    $0x2,%al
08297d74 +0x0fe:  sete   %al
08297d77 +0x101:  test   %al,%al
08297d79 +0x103:  je     08297dd5 <+0x15f>
08297d7b +0x105:  movb   $0x0,-0xa(%ebp)
08297d7f +0x109:  cmpl   $0x0,-0x10(%ebp)
08297d83 +0x10d:  je     08297d97 <+0x121>
08297d85 +0x10f:  mov    -0x10(%ebp),%eax
08297d88 +0x112:  movzbl 0x85c(%eax),%eax
08297d8f +0x119:  test   %al,%al
08297d91 +0x11b:  je     08297d97 <+0x121>
08297d93 +0x11d:  movb   $0x1,-0xa(%ebp)
08297d97 +0x121:  movb   $0x0,-0x9(%ebp)
08297d9b +0x125:  cmpl   $0x0,-0x10(%ebp)
08297d9f +0x129:  je     08297db3 <+0x13d>
08297da1 +0x12b:  mov    -0x10(%ebp),%eax
08297da4 +0x12e:  movzbl 0x87a(%eax),%eax
08297dab +0x135:  test   %al,%al
08297dad +0x137:  je     08297db3 <+0x13d>
08297daf +0x139:  movb   $0x1,-0x9(%ebp)
08297db3 +0x13d:  movzbl -0x11(%ebp),%eax
08297db7 +0x141:  xor    $0x1,%eax
08297dba +0x144:  test   %al,%al
08297dbc +0x146:  je     08297dd5 <+0x15f>
08297dbe +0x148:  cmpb   $0x0,-0xa(%ebp)
08297dc2 +0x14c:  je     08297dd5 <+0x15f>
08297dc4 +0x14e:  cmpb   $0x0,-0x9(%ebp)
08297dc8 +0x152:  je     08297dd5 <+0x15f>
08297dca +0x154:  mov    0xc(%ebp),%eax
08297dcd +0x157:  mov    %eax,(%esp)
08297dd0 +0x15a:  call   086786be <_ZN5CUser14giveup_panaltyEv>  ; CUser::giveup_panalty()
08297dd5 +0x15f:  movl   $0x2,0x8(%esp)
08297ddd +0x167:  mov    0xc(%ebp),%eax
08297de0 +0x16a:  mov    %eax,0x4(%esp)
08297de4 +0x16e:  mov    -0x18(%ebp),%eax
08297de7 +0x171:  mov    %eax,(%esp)
08297dea +0x174:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
08297def +0x179:  jmp    08297df5 <+0x17f>
08297df1 +0x17b:  nop
08297df2 +0x17c:  jmp    08297df5 <+0x17f>
08297df4 +0x17e:  nop
08297df5 +0x17f:  leave
08297df6 +0x180:  ret
08297df7 +0x181:  nop
```

## 反编译 C

```c
// CGameManager::CheckOutParty @ 0x8297c76

/* CGameManager::CheckOutParty(CUser*, bool) */

void CGameManager::CheckOutParty(CUser *param_1,bool param_2)

{
  CDungeon *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  CParty *this_00;
  undefined3 in_stack_00000009;
  
  cVar4 = CUser::CheckInParty(_param_2);
  if (cVar4 == '\x01') {
    CUser::GetPartyIndex(_param_2);
    this_00 = (CParty *)GetParty((int)param_1);
    if (this_00 != (CParty *)0x0) {
      bVar1 = false;
      this = *(CDungeon **)(this_00 + 0xcac);
      if (this != (CDungeon *)0x0) {
        bVar1 = '\0' < (char)this[0x89f];
        cVar4 = CDungeon::isTowerOfDespairDungeon(this);
        if (cVar4 != '\0') {
          bVar1 = true;
        }
      }
      if (this != (CDungeon *)0x0) {
        cVar4 = CDungeon::get_dimension_possible(this);
        if (((cVar4 < '\x01') && (this[0x89c] == (CDungeon)0x0)) &&
           (cVar4 = CDungeon::isTournamentDungeon(this), cVar4 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          bVar1 = true;
        }
      }
      CDungeonClearTracer::Trace
                ((CDungeonClearTracer *)(this_00 + 0xc7c),
                 "void CGameManager::CheckOutParty(CUser*, bool)");
      if ((*(int *)(this_00 + 0xcd8) != 1) && (cVar4 = CParty::get_state(this_00), cVar4 == '\x02'))
      {
        bVar2 = false;
        if ((this != (CDungeon *)0x0) && (this[0x85c] != (CDungeon)0x0)) {
          bVar2 = true;
        }
        bVar3 = false;
        if ((this != (CDungeon *)0x0) && (this[0x87a] != (CDungeon)0x0)) {
          bVar3 = true;
        }
        if (((!bVar1) && (bVar2)) && (bVar3)) {
          CUser::giveup_panalty(_param_2);
        }
      }
      CParty::leave_user(this_00,_param_2,2);
    }
  }
  return;
}
```
