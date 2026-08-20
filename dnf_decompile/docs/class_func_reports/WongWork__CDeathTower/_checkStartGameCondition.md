# _checkStartGameCondition

`_ZN8WongWork11CDeathTower24_checkStartGameConditionERh`

`WongWork::CDeathTower::_checkStartGameCondition(unsigned char&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08463890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08463890  _ZN8WongWork11CDeathTower24_checkStartGameConditionERh
#           WongWork::CDeathTower::_checkStartGameCondition(unsigned char&)
# range [0x08463890, 0x0846398d]
08463890 +0x00:  push   %ebp
08463891 +0x01:  mov    %esp,%ebp
08463893 +0x03:  push   %esi
08463894 +0x04:  push   %ebx
08463895 +0x05:  sub    $0x130,%esp
0846389b +0x0b:  lea    -0x10c(%ebp),%eax
084638a1 +0x11:  mov    %eax,%ebx
084638a3 +0x13:  mov    $0x3,%esi
084638a8 +0x18:  jmp    084638b8 <+0x28>
084638aa +0x1a:  mov    %ebx,(%esp)
084638ad +0x1d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084638b2 +0x22:  add    $0x3d,%ebx
084638b5 +0x25:  sub    $0x1,%esi
084638b8 +0x28:  cmp    $0xffffffff,%esi
084638bb +0x2b:  setne  %al
084638be +0x2e:  test   %al,%al
084638c0 +0x30:  jne    084638aa <+0x1a>
084638c2 +0x32:  movl   $0xf4,0x8(%esp)
084638ca +0x3a:  movl   $0x0,0x4(%esp)
084638d2 +0x42:  lea    -0x10c(%ebp),%eax
084638d8 +0x48:  mov    %eax,(%esp)
084638db +0x4b:  call   0807dcc0 <_init+0x5b8>
084638e0 +0x50:  movl   $0x10,0x8(%esp)
084638e8 +0x58:  movl   $0x0,0x4(%esp)
084638f0 +0x60:  lea    -0x18(%ebp),%eax
084638f3 +0x63:  mov    %eax,(%esp)
084638f6 +0x66:  call   0807dcc0 <_init+0x5b8>
084638fb +0x6b:  mov    0x8(%ebp),%eax
084638fe +0x6e:  add    $0xc,%eax
08463901 +0x71:  mov    %eax,(%esp)
08463904 +0x74:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08463909 +0x79:  mov    0x8(%ebp),%edx
0846390c +0x7c:  mov    (%edx),%edx
0846390e +0x7e:  lea    -0x18(%ebp),%ecx
08463911 +0x81:  mov    %ecx,0x10(%esp)
08463915 +0x85:  lea    -0x10c(%ebp),%ecx
0846391b +0x8b:  mov    %ecx,0xc(%esp)
0846391f +0x8f:  mov    0xc(%ebp),%ecx
08463922 +0x92:  mov    %ecx,0x8(%esp)
08463926 +0x96:  mov    %eax,0x4(%esp)
0846392a +0x9a:  mov    %edx,(%esp)
0846392d +0x9d:  call   0859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
08463932 +0xa2:  xor    $0x1,%eax
08463935 +0xa5:  test   %al,%al
08463937 +0xa7:  je     08463940 <+0xb0>
08463939 +0xa9:  mov    $0x11,%eax
0846393e +0xae:  jmp    08463983 <+0xf3>
08463940 +0xb0:  mov    0x8(%ebp),%eax
08463943 +0xb3:  add    $0xc,%eax
08463946 +0xb6:  mov    %eax,(%esp)
08463949 +0xb9:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846394e +0xbe:  mov    0x8(%ebp),%edx
08463951 +0xc1:  mov    (%edx),%edx
08463953 +0xc3:  lea    -0x18(%ebp),%ecx
08463956 +0xc6:  mov    %ecx,0xc(%esp)
0846395a +0xca:  lea    -0x10c(%ebp),%ecx
08463960 +0xd0:  mov    %ecx,0x8(%esp)
08463964 +0xd4:  mov    %eax,0x4(%esp)
08463968 +0xd8:  mov    %edx,(%esp)
0846396b +0xdb:  call   0859eac2 <_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi>  ; CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*)
08463970 +0xe0:  xor    $0x1,%eax
08463973 +0xe3:  test   %al,%al
08463975 +0xe5:  je     0846397e <+0xee>
08463977 +0xe7:  mov    $0x1,%eax
0846397c +0xec:  jmp    08463983 <+0xf3>
0846397e +0xee:  mov    $0x0,%eax
08463983 +0xf3:  add    $0x130,%esp
08463989 +0xf9:  pop    %ebx
0846398a +0xfa:  pop    %esi
0846398b +0xfb:  pop    %ebp
0846398c +0xfc:  ret
0846398d +0xfd:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_checkStartGameCondition @ 0x8463890

/* WongWork::CDeathTower::_checkStartGameCondition(unsigned char&) */

undefined4 __thiscall
WongWork::CDeathTower::_checkStartGameCondition(CDeathTower *this,uchar *param_1)

{
  char cVar1;
  CDungeon *pCVar2;
  undefined4 uVar3;
  Inven_Item *this_00;
  int iVar4;
  Inven_Item local_110 [244];
  int local_1c [4];
  
  this_00 = local_110;
  for (iVar4 = 3; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  memset(local_110,0,0xf4);
  memset(local_1c,0,0x10);
  pCVar2 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  cVar1 = CParty::CheckEnterAncientDungeon(*(CParty **)this,pCVar2,param_1,local_110,local_1c);
  if (cVar1 == '\x01') {
    pCVar2 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    cVar1 = CParty::UseAncientDungeonItems(*(CParty **)this,pCVar2,local_110,local_1c);
    if (cVar1 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}
```
