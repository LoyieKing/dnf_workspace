# getDungeonTypeKind

`_ZN6CParty18getDungeonTypeKindEPK8CDungeon`

`CParty::getDungeonTypeKind(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bdd2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bdd2a  _ZN6CParty18getDungeonTypeKindEPK8CDungeon
#           CParty::getDungeonTypeKind(CDungeon const*)
# range [0x085bdd2a, 0x085bddfb]
085bdd2a +0x00:  push   %ebp
085bdd2b +0x01:  mov    %esp,%ebp
085bdd2d +0x03:  sub    $0x18,%esp
085bdd30 +0x06:  cmpl   $0x0,0xc(%ebp)
085bdd34 +0x0a:  jne    085bdd40 <+0x16>
085bdd36 +0x0c:  mov    $0x8,%eax
085bdd3b +0x11:  jmp    085bddf9 <+0xcf>
085bdd40 +0x16:  mov    0xc(%ebp),%eax
085bdd43 +0x19:  movzbl 0x89c(%eax),%eax
085bdd4a +0x20:  test   %al,%al
085bdd4c +0x22:  je     085bdd58 <+0x2e>
085bdd4e +0x24:  mov    $0x1,%eax
085bdd53 +0x29:  jmp    085bddf9 <+0xcf>
085bdd58 +0x2e:  mov    0xc(%ebp),%eax
085bdd5b +0x31:  mov    %eax,(%esp)
085bdd5e +0x34:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085bdd63 +0x39:  test   %al,%al
085bdd65 +0x3b:  setg   %al
085bdd68 +0x3e:  test   %al,%al
085bdd6a +0x40:  je     085bdd76 <+0x4c>
085bdd6c +0x42:  mov    $0x2,%eax
085bdd71 +0x47:  jmp    085bddf9 <+0xcf>
085bdd76 +0x4c:  mov    0xc(%ebp),%eax
085bdd79 +0x4f:  mov    %eax,(%esp)
085bdd7c +0x52:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
085bdd81 +0x57:  cmp    $0x1,%eax
085bdd84 +0x5a:  sete   %al
085bdd87 +0x5d:  test   %al,%al
085bdd89 +0x5f:  je     085bdd92 <+0x68>
085bdd8b +0x61:  mov    $0x3,%eax
085bdd90 +0x66:  jmp    085bddf9 <+0xcf>
085bdd92 +0x68:  mov    0xc(%ebp),%eax
085bdd95 +0x6b:  mov    %eax,(%esp)
085bdd98 +0x6e:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
085bdd9d +0x73:  cmp    $0x1,%al
085bdd9f +0x75:  sete   %al
085bdda2 +0x78:  test   %al,%al
085bdda4 +0x7a:  je     085bddad <+0x83>
085bdda6 +0x7c:  mov    $0x4,%eax
085bddab +0x81:  jmp    085bddf9 <+0xcf>
085bddad +0x83:  mov    0xc(%ebp),%eax
085bddb0 +0x86:  mov    %eax,(%esp)
085bddb3 +0x89:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
085bddb8 +0x8e:  cmp    $0x2,%al
085bddba +0x90:  sete   %al
085bddbd +0x93:  test   %al,%al
085bddbf +0x95:  je     085bddc8 <+0x9e>
085bddc1 +0x97:  mov    $0x5,%eax
085bddc6 +0x9c:  jmp    085bddf9 <+0xcf>
085bddc8 +0x9e:  mov    0xc(%ebp),%eax
085bddcb +0xa1:  mov    %eax,(%esp)
085bddce +0xa4:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085bddd3 +0xa9:  test   %al,%al
085bddd5 +0xab:  je     085bddde <+0xb4>
085bddd7 +0xad:  mov    $0x6,%eax
085bdddc +0xb2:  jmp    085bddf9 <+0xcf>
085bddde +0xb4:  mov    0xc(%ebp),%eax
085bdde1 +0xb7:  mov    %eax,(%esp)
085bdde4 +0xba:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085bdde9 +0xbf:  test   %al,%al
085bddeb +0xc1:  je     085bddf4 <+0xca>
085bdded +0xc3:  mov    $0x7,%eax
085bddf2 +0xc8:  jmp    085bddf9 <+0xcf>
085bddf4 +0xca:  mov    $0x0,%eax
085bddf9 +0xcf:  leave
085bddfa +0xd0:  ret
085bddfb +0xd1:  nop
```

## 反编译 C

```c
// CParty::getDungeonTypeKind @ 0x85bdd2a

/* CParty::getDungeonTypeKind(CDungeon const*) */

undefined4 __thiscall CParty::getDungeonTypeKind(CParty *this,CDungeon *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (CDungeon *)0x0) {
    uVar2 = 8;
  }
  else if (param_1[0x89c] == (CDungeon)0x0) {
    cVar1 = CDungeon::get_dimension_possible(param_1);
    if (cVar1 < '\x01') {
      iVar3 = CDungeon::getDungeonKind(param_1);
      if (iVar3 == 1) {
        uVar2 = 3;
      }
      else {
        cVar1 = CDungeon::get_blood_dungeon_type(param_1);
        if (cVar1 == '\x01') {
          uVar2 = 4;
        }
        else {
          cVar1 = CDungeon::get_blood_dungeon_type(param_1);
          if (cVar1 == '\x02') {
            uVar2 = 5;
          }
          else {
            cVar1 = CDungeon::isTowerOfDespairDungeon(param_1);
            if (cVar1 == '\0') {
              cVar1 = CDungeon::isTournamentDungeon(param_1);
              if (cVar1 == '\0') {
                uVar2 = 0;
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 6;
            }
          }
        }
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
