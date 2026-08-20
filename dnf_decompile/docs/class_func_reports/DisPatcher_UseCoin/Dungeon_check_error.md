# Dungeon_check_error

`_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseCoin::Dungeon_check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081ca63a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca63a  _ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseCoin::Dungeon_check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ca63a, 0x081ca75b]
081ca63a +0x000:  push   %ebp
081ca63b +0x001:  mov    %esp,%ebp
081ca63d +0x003:  sub    $0x38,%esp
081ca640 +0x006:  mov    0x10(%ebp),%eax
081ca643 +0x009:  mov    %eax,-0x1c(%ebp)
081ca646 +0x00c:  mov    0xc(%ebp),%eax
081ca649 +0x00f:  mov    %eax,(%esp)
081ca64c +0x012:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca651 +0x017:  mov    %eax,-0x18(%ebp)
081ca654 +0x01a:  cmpl   $0x0,-0x18(%ebp)
081ca658 +0x01e:  jne    081ca664 <+0x2a>
081ca65a +0x020:  mov    $0xffffffff,%eax
081ca65f +0x025:  jmp    081ca75a <+0x120>
081ca664 +0x02a:  mov    0xc(%ebp),%eax
081ca667 +0x02d:  mov    %eax,(%esp)
081ca66a +0x030:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca66f +0x035:  mov    %eax,-0x14(%ebp)
081ca672 +0x038:  cmpl   $0x0,-0x14(%ebp)
081ca676 +0x03c:  je     081ca700 <+0xc6>
081ca67c +0x042:  mov    -0x14(%ebp),%eax
081ca67f +0x045:  mov    0xcac(%eax),%eax
081ca685 +0x04b:  mov    %eax,-0xc(%ebp)
081ca688 +0x04e:  cmpl   $0x0,-0xc(%ebp)
081ca68c +0x052:  je     081ca700 <+0xc6>
081ca68e +0x054:  mov    -0xc(%ebp),%eax
081ca691 +0x057:  movzbl 0x89f(%eax),%eax
081ca698 +0x05e:  test   %al,%al
081ca69a +0x060:  jle    081ca6b8 <+0x7e>
081ca69c +0x062:  mov    -0x14(%ebp),%eax
081ca69f +0x065:  add    $0xb24,%eax
081ca6a4 +0x06a:  mov    %eax,(%esp)
081ca6a7 +0x06d:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
081ca6ac +0x072:  cmp    $0x2,%eax
081ca6af +0x075:  jle    081ca6b8 <+0x7e>
081ca6b1 +0x077:  mov    $0x1,%eax
081ca6b6 +0x07c:  jmp    081ca6bd <+0x83>
081ca6b8 +0x07e:  mov    $0x0,%eax
081ca6bd +0x083:  test   %al,%al
081ca6bf +0x085:  je     081ca6cb <+0x91>
081ca6c1 +0x087:  mov    $0x13,%eax
081ca6c6 +0x08c:  jmp    081ca75a <+0x120>
081ca6cb +0x091:  mov    -0xc(%ebp),%eax
081ca6ce +0x094:  mov    %eax,(%esp)
081ca6d1 +0x097:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
081ca6d6 +0x09c:  test   %al,%al
081ca6d8 +0x09e:  je     081ca6f0 <+0xb6>
081ca6da +0x0a0:  mov    -0x14(%ebp),%eax
081ca6dd +0x0a3:  mov    %eax,(%esp)
081ca6e0 +0x0a6:  call   085bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>  ; CParty::GetTournamentDungeonClearState()
081ca6e5 +0x0ab:  test   %al,%al
081ca6e7 +0x0ad:  jle    081ca6f0 <+0xb6>
081ca6e9 +0x0af:  mov    $0x1,%eax
081ca6ee +0x0b4:  jmp    081ca6f5 <+0xbb>
081ca6f0 +0x0b6:  mov    $0x0,%eax
081ca6f5 +0x0bb:  test   %al,%al
081ca6f7 +0x0bd:  je     081ca700 <+0xc6>
081ca6f9 +0x0bf:  mov    $0x13,%eax
081ca6fe +0x0c4:  jmp    081ca75a <+0x120>
081ca700 +0x0c6:  mov    -0x18(%ebp),%eax
081ca703 +0x0c9:  mov    %eax,0x8(%esp)
081ca707 +0x0cd:  mov    0xc(%ebp),%eax
081ca70a +0x0d0:  mov    %eax,0x4(%esp)
081ca70e +0x0d4:  mov    0x8(%ebp),%eax
081ca711 +0x0d7:  mov    %eax,(%esp)
081ca714 +0x0da:  call   081cab3a <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty>  ; DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*)
081ca719 +0x0df:  mov    %eax,-0x10(%ebp)
081ca71c +0x0e2:  cmpl   $0x0,-0x10(%ebp)
081ca720 +0x0e6:  je     081ca727 <+0xed>
081ca722 +0x0e8:  mov    -0x10(%ebp),%eax
081ca725 +0x0eb:  jmp    081ca75a <+0x120>
081ca727 +0x0ed:  mov    -0x1c(%ebp),%eax
081ca72a +0x0f0:  movzwl 0xd(%eax),%eax
081ca72e +0x0f4:  movzwl %ax,%eax
081ca731 +0x0f7:  mov    %eax,0x8(%esp)
081ca735 +0x0fb:  mov    0xc(%ebp),%eax
081ca738 +0x0fe:  mov    %eax,0x4(%esp)
081ca73c +0x102:  mov    -0x18(%ebp),%eax
081ca73f +0x105:  mov    %eax,(%esp)
081ca742 +0x108:  call   085b27c8 <_ZN6CParty10ReviveUserEP5CUsert>  ; CParty::ReviveUser(CUser*, unsigned short)
081ca747 +0x10d:  mov    %eax,-0x10(%ebp)
081ca74a +0x110:  cmpl   $0x0,-0x10(%ebp)
081ca74e +0x114:  jle    081ca755 <+0x11b>
081ca750 +0x116:  mov    -0x10(%ebp),%eax
081ca753 +0x119:  jmp    081ca75a <+0x120>
081ca755 +0x11b:  mov    $0x0,%eax
081ca75a +0x120:  leave
081ca75b +0x121:  ret
```

## 反编译 C

```c
// DisPatcher_UseCoin::Dungeon_check_error @ 0x81ca63a

/* DisPatcher_UseCoin::Dungeon_check_error(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_UseCoin::Dungeon_check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  CDungeon *this;
  bool bVar1;
  char cVar2;
  CParty *this_00;
  CParty *this_01;
  int iVar3;
  
  this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
  if (this_00 == (CParty *)0x0) {
    return -1;
  }
  this_01 = (CParty *)CUser::GetParty((CUser *)param_2);
  if ((this_01 != (CParty *)0x0) &&
     (this = *(CDungeon **)(this_01 + 0xcac), this != (CDungeon *)0x0)) {
    if (((char)this[0x89f] < '\x01') ||
       (iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this_01 + 0xb24)), iVar3 < 3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x13;
    }
    cVar2 = CDungeon::isTournamentDungeon(this);
    if ((cVar2 == '\0') || (cVar2 = CParty::GetTournamentDungeonClearState(this_01), cVar2 < '\x01')
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x13;
    }
  }
  iVar3 = usedCoinDungeonCheck((DisPatcher_UseCoin *)param_1,(CUser *)param_2,this_00);
  if ((iVar3 == 0) &&
     (iVar3 = CParty::ReviveUser(this_00,(CUser *)param_2,*(ushort *)(param_3 + 0xd)), iVar3 < 1)) {
    iVar3 = 0;
  }
  return iVar3;
}
```
