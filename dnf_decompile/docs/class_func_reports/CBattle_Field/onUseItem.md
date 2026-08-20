# onUseItem

`_ZN13CBattle_Field9onUseItemEP5CUserRK10Inven_Item`

`CBattle_Field::onUseItem(CUser*, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830dbde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830dbde  _ZN13CBattle_Field9onUseItemEP5CUserRK10Inven_Item
#           CBattle_Field::onUseItem(CUser*, Inven_Item const&)
# range [0x0830dbde, 0x0830dc73]
0830dbde +0x00:  push   %ebp
0830dbdf +0x01:  mov    %esp,%ebp
0830dbe1 +0x03:  sub    $0x28,%esp
0830dbe4 +0x06:  mov    0x8(%ebp),%eax
0830dbe7 +0x09:  mov    %eax,(%esp)
0830dbea +0x0c:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830dbef +0x11:  mov    %eax,-0xc(%ebp)
0830dbf2 +0x14:  mov    0x10(%ebp),%eax
0830dbf5 +0x17:  mov    0x2(%eax),%eax
0830dbf8 +0x1a:  cmp    $0xbdd,%eax
0830dbfd +0x1f:  jne    0830dc3b <+0x5d>
0830dbff +0x21:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830dc06 +0x28:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830dc0b +0x2d:  mov    -0xc(%ebp),%edx
0830dc0e +0x30:  add    $0x4c,%edx
0830dc11 +0x33:  mov    %eax,0x4(%esp)
0830dc15 +0x37:  mov    %edx,(%esp)
0830dc18 +0x3a:  call   0830e72c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x311>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x311
0830dc1d +0x3f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830dc24 +0x46:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830dc29 +0x4b:  mov    -0xc(%ebp),%edx
0830dc2c +0x4e:  add    $0x64,%edx
0830dc2f +0x51:  mov    %eax,0x4(%esp)
0830dc33 +0x55:  mov    %edx,(%esp)
0830dc36 +0x58:  call   0830e72c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x311>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x311
0830dc3b +0x5d:  mov    0x10(%ebp),%eax
0830dc3e +0x60:  movzbl 0x1(%eax),%eax
0830dc42 +0x64:  cmp    $0x2,%al
0830dc44 +0x66:  jne    0830dc5d <+0x7f>
0830dc46 +0x68:  mov    -0xc(%ebp),%eax
0830dc49 +0x6b:  mov    0x84(%eax),%eax
0830dc4f +0x71:  lea    0x1(%eax),%edx
0830dc52 +0x74:  mov    -0xc(%ebp),%eax
0830dc55 +0x77:  mov    %edx,0x84(%eax)
0830dc5b +0x7d:  jmp    0830dc72 <+0x94>
0830dc5d +0x7f:  mov    -0xc(%ebp),%eax
0830dc60 +0x82:  mov    0x88(%eax),%eax
0830dc66 +0x88:  lea    0x1(%eax),%edx
0830dc69 +0x8b:  mov    -0xc(%ebp),%eax
0830dc6c +0x8e:  mov    %edx,0x88(%eax)
0830dc72 +0x94:  leave
0830dc73 +0x95:  ret
```

## 反编译 C

```c
// CBattle_Field::onUseItem @ 0x830dbde

/* CBattle_Field::onUseItem(CUser*, Inven_Item const&) */

void __thiscall CBattle_Field::onUseItem(CBattle_Field *this,CUser *param_1,Inven_Item *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetCurrentMapInfo(this);
  if (*(int *)(param_2 + 2) == 0xbdd) {
    uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    stMapMonsterKillChecker_t::setUseSkillMaterial
              ((stMapMonsterKillChecker_t *)(iVar1 + 0x4c),uVar2);
    uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    stMapMonsterKillChecker_t::setUseSkillMaterial((stMapMonsterKillChecker_t *)(iVar1 + 100),uVar2)
    ;
  }
  if (param_2[1] == (Inven_Item)0x2) {
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + 1;
  }
  else {
    *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + 1;
  }
  return;
}
```
