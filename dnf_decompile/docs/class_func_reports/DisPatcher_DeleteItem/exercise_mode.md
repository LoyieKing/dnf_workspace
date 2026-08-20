# exercise_mode

`_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DeleteItem::exercise_mode(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c1ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1ad6  _ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DeleteItem::exercise_mode(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c1ad6, 0x081c1cf5]
081c1ad6 +0x000:  push   %ebp
081c1ad7 +0x001:  mov    %esp,%ebp
081c1ad9 +0x003:  push   %ebx
081c1ada +0x004:  sub    $0x34,%esp
081c1add +0x007:  mov    0x10(%ebp),%eax
081c1ae0 +0x00a:  mov    %eax,-0x28(%ebp)
081c1ae3 +0x00d:  mov    0x14(%ebp),%eax
081c1ae6 +0x010:  mov    %eax,-0x24(%ebp)
081c1ae9 +0x013:  mov    0xc(%ebp),%eax
081c1aec +0x016:  mov    %eax,(%esp)
081c1aef +0x019:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081c1af4 +0x01e:  movswl %ax,%ebx
081c1af7 +0x021:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c1afc +0x026:  mov    %ebx,0x4(%esp)
081c1b00 +0x02a:  mov    %eax,(%esp)
081c1b03 +0x02d:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081c1b08 +0x032:  mov    %eax,-0x20(%ebp)
081c1b0b +0x035:  cmpl   $0x0,-0x20(%ebp)
081c1b0f +0x039:  je     081c1cea <+0x214>
081c1b15 +0x03f:  movl   $0x0,-0x1c(%ebp)
081c1b1c +0x046:  mov    0xc(%ebp),%eax
081c1b1f +0x049:  mov    %eax,(%esp)
081c1b22 +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c1b27 +0x051:  cmp    $0xa,%eax
081c1b2a +0x054:  sete   %al
081c1b2d +0x057:  test   %al,%al
081c1b2f +0x059:  je     081c1b3f <+0x69>
081c1b31 +0x05b:  mov    0xc(%ebp),%eax
081c1b34 +0x05e:  mov    %eax,(%esp)
081c1b37 +0x061:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081c1b3c +0x066:  mov    %eax,-0x1c(%ebp)
081c1b3f +0x069:  movb   $0x0,-0x15(%ebp)
081c1b43 +0x06d:  cmpl   $0x0,-0x1c(%ebp)
081c1b47 +0x071:  je     081c1c27 <+0x151>
081c1b4d +0x077:  mov    -0x1c(%ebp),%eax
081c1b50 +0x07a:  mov    %eax,(%esp)
081c1b53 +0x07d:  call   08234612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cbc
081c1b58 +0x082:  mov    %eax,(%esp)
081c1b5b +0x085:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
081c1b60 +0x08a:  mov    %eax,(%esp)
081c1b63 +0x08d:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
081c1b68 +0x092:  xor    $0x1,%eax
081c1b6b +0x095:  test   %al,%al
081c1b6d +0x097:  je     081c1b73 <+0x9d>
081c1b6f +0x099:  movb   $0x1,-0x15(%ebp)
081c1b73 +0x09d:  mov    -0x1c(%ebp),%eax
081c1b76 +0x0a0:  mov    %eax,(%esp)
081c1b79 +0x0a3:  call   08234612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cbc
081c1b7e +0x0a8:  mov    %eax,(%esp)
081c1b81 +0x0ab:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
081c1b86 +0x0b0:  mov    %eax,(%esp)
081c1b89 +0x0b3:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
081c1b8e +0x0b8:  test   %al,%al
081c1b90 +0x0ba:  je     081c1c27 <+0x151>
081c1b96 +0x0c0:  movl   $0x0,-0x14(%ebp)
081c1b9d +0x0c7:  jmp    081c1c0f <+0x139>
081c1b9f +0x0c9:  mov    -0x14(%ebp),%edx
081c1ba2 +0x0cc:  mov    -0x28(%ebp),%eax
081c1ba5 +0x0cf:  add    $0x64,%edx
081c1ba8 +0x0d2:  mov    0xf(%eax,%edx,4),%eax
081c1bac +0x0d6:  mov    %eax,%ebx
081c1bae +0x0d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c1bb3 +0x0dd:  mov    %ebx,0x4(%esp)
081c1bb7 +0x0e1:  mov    %eax,(%esp)
081c1bba +0x0e4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c1bbf +0x0e9:  mov    %eax,-0x10(%ebp)
081c1bc2 +0x0ec:  cmpl   $0x0,-0x10(%ebp)
081c1bc6 +0x0f0:  je     081c1be1 <+0x10b>
081c1bc8 +0x0f2:  mov    -0x10(%ebp),%eax
081c1bcb +0x0f5:  mov    %eax,(%esp)
081c1bce +0x0f8:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081c1bd3 +0x0fd:  cmp    $0x1973,%eax
081c1bd8 +0x102:  jne    081c1be1 <+0x10b>
081c1bda +0x104:  mov    $0x1,%eax
081c1bdf +0x109:  jmp    081c1be6 <+0x110>
081c1be1 +0x10b:  mov    $0x0,%eax
081c1be6 +0x110:  test   %al,%al
081c1be8 +0x112:  je     081c1c0b <+0x135>
081c1bea +0x114:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081c1bf1 +0x11b:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081c1bf6 +0x120:  mov    -0x1c(%ebp),%edx
081c1bf9 +0x123:  add    $0xb58,%edx
081c1bff +0x129:  mov    %eax,0x4(%esp)
081c1c03 +0x12d:  mov    %edx,(%esp)
081c1c06 +0x130:  call   0823464c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cf6
081c1c0b +0x135:  addl   $0x1,-0x14(%ebp)
081c1c0f +0x139:  mov    -0x28(%ebp),%eax
081c1c12 +0x13c:  movzbl 0xe(%eax),%eax
081c1c16 +0x140:  movsbl %al,%eax
081c1c19 +0x143:  cmp    -0x14(%ebp),%eax
081c1c1c +0x146:  setg   %al
081c1c1f +0x149:  test   %al,%al
081c1c21 +0x14b:  jne    081c1b9f <+0xc9>
081c1c27 +0x151:  mov    -0x20(%ebp),%eax
081c1c2a +0x154:  mov    0xcd8(%eax),%eax
081c1c30 +0x15a:  cmp    $0x1,%eax
081c1c33 +0x15d:  jne    081c1c52 <+0x17c>
081c1c35 +0x15f:  mov    0xc(%ebp),%eax
081c1c38 +0x162:  mov    %eax,(%esp)
081c1c3b +0x165:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c1c40 +0x16a:  cmp    $0x5,%eax
081c1c43 +0x16d:  je     081c1c4b <+0x175>
081c1c45 +0x16f:  cmpb   $0x0,-0x15(%ebp)
081c1c49 +0x173:  je     081c1c52 <+0x17c>
081c1c4b +0x175:  mov    $0x1,%eax
081c1c50 +0x17a:  jmp    081c1c57 <+0x181>
081c1c52 +0x17c:  mov    $0x0,%eax
081c1c57 +0x181:  test   %al,%al
081c1c59 +0x183:  je     081c1cea <+0x214>
081c1c5f +0x189:  mov    -0x24(%ebp),%eax
081c1c62 +0x18c:  movb   $0x0,0x9(%eax)
081c1c66 +0x190:  mov    -0x28(%ebp),%eax
081c1c69 +0x193:  movzbl 0xd(%eax),%edx
081c1c6d +0x197:  mov    -0x24(%ebp),%eax
081c1c70 +0x19a:  mov    %dl,0x8(%eax)
081c1c73 +0x19d:  movl   $0x0,-0xc(%ebp)
081c1c7a +0x1a4:  jmp    081c1ccf <+0x1f9>
081c1c7c +0x1a6:  mov    -0xc(%ebp),%ecx
081c1c7f +0x1a9:  mov    -0xc(%ebp),%edx
081c1c82 +0x1ac:  mov    -0x28(%ebp),%eax
081c1c85 +0x1af:  add    $0x68,%edx
081c1c88 +0x1b2:  movzwl 0x7(%eax,%edx,2),%edx
081c1c8d +0x1b7:  mov    -0x24(%ebp),%eax
081c1c90 +0x1ba:  add    $0x68,%ecx
081c1c93 +0x1bd:  mov    %dx,0x2(%eax,%ecx,2)
081c1c98 +0x1c2:  mov    -0xc(%ebp),%ecx
081c1c9b +0x1c5:  mov    -0xc(%ebp),%edx
081c1c9e +0x1c8:  mov    -0x28(%ebp),%eax
081c1ca1 +0x1cb:  add    $0xc8,%edx
081c1ca7 +0x1d1:  mov    0xf(%eax,%edx,4),%edx
081c1cab +0x1d5:  mov    -0x24(%ebp),%eax
081c1cae +0x1d8:  add    $0x64,%ecx
081c1cb1 +0x1db:  mov    %edx,0xc(%eax,%ecx,4)
081c1cb5 +0x1df:  mov    -0xc(%ebp),%edx
081c1cb8 +0x1e2:  mov    -0xc(%ebp),%ecx
081c1cbb +0x1e5:  mov    -0x28(%ebp),%eax
081c1cbe +0x1e8:  movzwl 0xf(%eax,%ecx,2),%ecx
081c1cc3 +0x1ed:  mov    -0x24(%ebp),%eax
081c1cc6 +0x1f0:  mov    %cx,0xa(%eax,%edx,2)
081c1ccb +0x1f5:  addl   $0x1,-0xc(%ebp)
081c1ccf +0x1f9:  mov    -0x28(%ebp),%eax
081c1cd2 +0x1fc:  movzbl 0xe(%eax),%eax
081c1cd6 +0x200:  movsbl %al,%eax
081c1cd9 +0x203:  cmp    -0xc(%ebp),%eax
081c1cdc +0x206:  setg   %al
081c1cdf +0x209:  test   %al,%al
081c1ce1 +0x20b:  jne    081c1c7c <+0x1a6>
081c1ce3 +0x20d:  mov    $0x1,%eax
081c1ce8 +0x212:  jmp    081c1cef <+0x219>
081c1cea +0x214:  mov    $0x0,%eax
081c1cef +0x219:  add    $0x34,%esp
081c1cf2 +0x21c:  pop    %ebx
081c1cf3 +0x21d:  pop    %ebp
081c1cf4 +0x21e:  ret
081c1cf5 +0x21f:  nop
```

## 反编译 C

```c
// DisPatcher_DeleteItem::exercise_mode @ 0x81c1ad6

/* DisPatcher_DeleteItem::exercise_mode(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteItem::exercise_mode
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CDungeonMgr *pCVar5;
  CDungeon *pCVar6;
  CDataManager *this_00;
  CItem *this_01;
  uint uVar7;
  bool bVar8;
  CDeathTower *local_20;
  int local_18;
  int local_10;
  
  CUser::GetPartyIndex(param_1);
  iVar3 = G_CGameManager();
  iVar3 = CGameManager::GetParty(iVar3);
  if (iVar3 != 0) {
    local_20 = (CDeathTower *)0x0;
    iVar4 = CUser::get_state(param_1);
    if (iVar4 == 10) {
      local_20 = (CDeathTower *)CUser::getDeathTower(param_1);
    }
    bVar8 = false;
    if (local_20 != (CDeathTower *)0x0) {
      pCVar5 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_20);
      pCVar6 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar5);
      cVar2 = CDungeon::limitOfStackableItemInTower(pCVar6);
      bVar8 = cVar2 != '\x01';
      pCVar5 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_20);
      pCVar6 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar5);
      cVar2 = CDungeon::limitOfStackableItemInTower(pCVar6);
      if (cVar2 != '\0') {
        for (local_18 = 0; local_18 < (char)param_2[0xe]; local_18 = local_18 + 1) {
          iVar4 = *(int *)(param_2 + (local_18 + 100) * 4 + 0xf);
          this_00 = (CDataManager *)G_CDataManager();
          this_01 = (CItem *)CDataManager::find_item(this_00,iVar4);
          if ((this_01 == (CItem *)0x0) || (iVar4 = CItem::get_index(this_01), iVar4 != 0x1973)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar7 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
            WongWork::CDeathTower::stMapMonsterKillChecker_t::setUseSkillMaterial
                      ((stMapMonsterKillChecker_t *)(local_20 + 0xb58),uVar7);
          }
        }
      }
    }
    if ((*(int *)(iVar3 + 0xcd8) == 1) &&
       ((iVar3 = CUser::get_state(param_1), iVar3 == 5 || (bVar8)))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      param_3[9] = (ParamBase)0x0;
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
        *(undefined2 *)(param_3 + (local_10 + 0x68) * 2 + 2) =
             *(undefined2 *)(param_2 + (local_10 + 0x68) * 2 + 7);
        *(undefined4 *)(param_3 + (local_10 + 100) * 4 + 0xc) =
             *(undefined4 *)(param_2 + (local_10 + 200) * 4 + 0xf);
        *(undefined2 *)(param_3 + local_10 * 2 + 10) = *(undefined2 *)(param_2 + local_10 * 2 + 0xf)
        ;
      }
      return 1;
    }
  }
  return 0;
}
```
