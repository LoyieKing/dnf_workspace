# checkDungeonDifficulty

`_ZN6CParty22checkDungeonDifficultyEcPK8CDungeon`

`CParty::checkDungeonDifficulty(char, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be932` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be932  _ZN6CParty22checkDungeonDifficultyEcPK8CDungeon
#           CParty::checkDungeonDifficulty(char, CDungeon const*)
# range [0x085be932, 0x085be9c7]
085be932 +0x00:  push   %ebp
085be933 +0x01:  mov    %esp,%ebp
085be935 +0x03:  sub    $0x28,%esp
085be938 +0x06:  mov    0xc(%ebp),%eax
085be93b +0x09:  mov    %al,-0xc(%ebp)
085be93e +0x0c:  cmpl   $0x0,0x10(%ebp)
085be942 +0x10:  jne    085be94b <+0x19>
085be944 +0x12:  mov    $0x0,%eax
085be949 +0x17:  jmp    085be9c6 <+0x94>
085be94b +0x19:  cmpb   $0x0,-0xc(%ebp)
085be94f +0x1d:  jne    085be958 <+0x26>
085be951 +0x1f:  mov    $0x0,%eax
085be956 +0x24:  jmp    085be9c6 <+0x94>
085be958 +0x26:  mov    0x8(%ebp),%eax
085be95b +0x29:  mov    0x74(%eax),%eax
085be95e +0x2c:  mov    %eax,(%esp)
085be961 +0x2f:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
085be966 +0x34:  test   %al,%al
085be968 +0x36:  je     085be971 <+0x3f>
085be96a +0x38:  mov    $0x0,%eax
085be96f +0x3d:  jmp    085be9c6 <+0x94>
085be971 +0x3f:  mov    0x10(%ebp),%eax
085be974 +0x42:  mov    %eax,(%esp)
085be977 +0x45:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085be97c +0x4a:  test   %al,%al
085be97e +0x4c:  je     085be987 <+0x55>
085be980 +0x4e:  mov    $0x0,%eax
085be985 +0x53:  jmp    085be9c6 <+0x94>
085be987 +0x55:  mov    0x8(%ebp),%eax
085be98a +0x58:  mov    %eax,(%esp)
085be98d +0x5b:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085be992 +0x60:  mov    %eax,(%esp)
085be995 +0x63:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085be99a +0x68:  cmp    $0x1,%eax
085be99d +0x6b:  sete   %al
085be9a0 +0x6e:  test   %al,%al
085be9a2 +0x70:  je     085be9ab <+0x79>
085be9a4 +0x72:  mov    $0x0,%eax
085be9a9 +0x77:  jmp    085be9c6 <+0x94>
085be9ab +0x79:  mov    0x10(%ebp),%eax
085be9ae +0x7c:  mov    %eax,(%esp)
085be9b1 +0x7f:  call   0836525a <_ZNK8CDungeon13isRiskDungeonEv>  ; CDungeon::isRiskDungeon() const
085be9b6 +0x84:  test   %al,%al
085be9b8 +0x86:  je     085be9c1 <+0x8f>
085be9ba +0x88:  mov    $0x0,%eax
085be9bf +0x8d:  jmp    085be9c6 <+0x94>
085be9c1 +0x8f:  mov    $0x1,%eax
085be9c6 +0x94:  leave
085be9c7 +0x95:  ret
```

## 反编译 C

```c
// CParty::checkDungeonDifficulty @ 0x85be932

/* CParty::checkDungeonDifficulty(char, CDungeon const*) */

undefined4 __thiscall CParty::checkDungeonDifficulty(CParty *this,char param_1,CDungeon *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CUser *this_00;
  int iVar3;
  
  if (param_2 == (CDungeon *)0x0) {
    uVar2 = 0;
  }
  else if (param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = CUser::IsGameMasterMode(*(CUser **)(this + 0x74));
    if (cVar1 == '\0') {
      cVar1 = CDungeon::isTournamentDungeon(param_2);
      if (cVar1 == '\0') {
        this_00 = (CUser *)getManager(this);
        iVar3 = CUser::getMoveSpace(this_00);
        if (iVar3 == 1) {
          uVar2 = 0;
        }
        else {
          cVar1 = CDungeon::isRiskDungeon(param_2);
          if (cVar1 == '\0') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
