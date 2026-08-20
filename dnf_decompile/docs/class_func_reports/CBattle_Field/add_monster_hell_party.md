# add_monster_hell_party

`_ZN13CBattle_Field22add_monster_hell_partyER11map_monsterRbRiS3_`

`CBattle_Field::add_monster_hell_party(map_monster&, bool&, int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08301b8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08301b8c  _ZN13CBattle_Field22add_monster_hell_partyER11map_monsterRbRiS3_
#           CBattle_Field::add_monster_hell_party(map_monster&, bool&, int&, int&)
# range [0x08301b8c, 0x08301bf5]
08301b8c +0x00:  push   %ebp
08301b8d +0x01:  mov    %esp,%ebp
08301b8f +0x03:  push   %ebx
08301b90 +0x04:  sub    $0x34,%esp
08301b93 +0x07:  mov    0x8(%ebp),%eax
08301b96 +0x0a:  movzbl 0x1b8(%eax),%eax
08301b9d +0x11:  test   %al,%al
08301b9f +0x13:  je     08301bf0 <+0x64>
08301ba1 +0x15:  mov    0x8(%ebp),%eax
08301ba4 +0x18:  mov    %eax,(%esp)
08301ba7 +0x1b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08301bac +0x20:  mov    0x4(%eax),%ebx
08301baf +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08301bb4 +0x28:  mov    %ebx,0x4(%esp)
08301bb8 +0x2c:  mov    %eax,(%esp)
08301bbb +0x2f:  call   0836379a <_ZN12CDataManager28get_hellparty_groupOrder_mapEi>  ; CDataManager::get_hellparty_groupOrder_map(int)
08301bc0 +0x34:  mov    %eax,-0xc(%ebp)
08301bc3 +0x37:  cmpl   $0x0,-0xc(%ebp)
08301bc7 +0x3b:  je     08301bf0 <+0x64>
08301bc9 +0x3d:  mov    -0xc(%ebp),%eax
08301bcc +0x40:  mov    %eax,0x10(%esp)
08301bd0 +0x44:  mov    0x18(%ebp),%eax
08301bd3 +0x47:  mov    %eax,0xc(%esp)
08301bd7 +0x4b:  mov    0x14(%ebp),%eax
08301bda +0x4e:  mov    %eax,0x8(%esp)
08301bde +0x52:  mov    0xc(%ebp),%eax
08301be1 +0x55:  mov    %eax,0x4(%esp)
08301be5 +0x59:  mov    0x8(%ebp),%eax
08301be8 +0x5c:  mov    %eax,(%esp)
08301beb +0x5f:  call   083071ba <_ZN13CBattle_Field22add_hell_party_monsterER11map_monsterRiS2_PSt3mapIt21STHellPartyGroupOrderSt4lessItESaISt4pairIKtS4_EEE>  ; CBattle_Field::add_hell_party_monster(map_monster&, int&, int&, std::map<unsigned short, STHellPartyGroupOrder, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, STHellPartyGroupOrder> > >*)
08301bf0 +0x64:  add    $0x34,%esp
08301bf3 +0x67:  pop    %ebx
08301bf4 +0x68:  pop    %ebp
08301bf5 +0x69:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_hell_party @ 0x8301b8c

/* CBattle_Field::add_monster_hell_party(map_monster&, bool&, int&, int&) */

void __thiscall
CBattle_Field::add_monster_hell_party
          (CBattle_Field *this,map_monster *param_1,bool *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if (this[0x1b8] != (CBattle_Field)0x0) {
    GetCurrentMapInfo(this);
    iVar1 = G_CDataManager();
    iVar1 = CDataManager::get_hellparty_groupOrder_map(iVar1);
    if (iVar1 != 0) {
      add_hell_party_monster((map_monster *)this,(int *)param_1,param_3,(map *)param_4);
    }
  }
  return;
}
```
