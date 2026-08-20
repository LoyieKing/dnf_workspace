# _onStartDeathTower

`_ZN8WongWork11CDeathTower18_onStartDeathTowerEv`

`WongWork::CDeathTower::_onStartDeathTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467b50  _ZN8WongWork11CDeathTower18_onStartDeathTowerEv
#           WongWork::CDeathTower::_onStartDeathTower()
# range [0x08467b50, 0x08467cab]
08467b50 +0x000:  push   %ebp
08467b51 +0x001:  mov    %esp,%ebp
08467b53 +0x003:  push   %edi
08467b54 +0x004:  push   %ebx
08467b55 +0x005:  sub    $0x130,%esp
08467b5b +0x00b:  lea    -0x110(%ebp),%ebx
08467b61 +0x011:  mov    $0x0,%eax
08467b66 +0x016:  mov    $0x40,%edx
08467b6b +0x01b:  mov    %ebx,%edi
08467b6d +0x01d:  mov    %edx,%ecx
08467b6f +0x01f:  rep stos %eax,%es:(%edi)
08467b71 +0x021:  mov    0x8(%ebp),%eax
08467b74 +0x024:  mov    (%eax),%eax
08467b76 +0x026:  lea    -0x110(%ebp),%edx
08467b7c +0x02c:  mov    %edx,0x4(%esp)
08467b80 +0x030:  mov    %eax,(%esp)
08467b83 +0x033:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
08467b88 +0x038:  movl   $0x0,-0x10(%ebp)
08467b8f +0x03f:  jmp    08467c93 <+0x143>
08467b94 +0x044:  movl   $0x0,-0xc(%ebp)
08467b9b +0x04b:  mov    0x8(%ebp),%eax
08467b9e +0x04e:  mov    (%eax),%eax
08467ba0 +0x050:  mov    -0x10(%ebp),%edx
08467ba3 +0x053:  mov    %edx,0x4(%esp)
08467ba7 +0x057:  mov    %eax,(%esp)
08467baa +0x05a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08467baf +0x05f:  mov    %eax,-0xc(%ebp)
08467bb2 +0x062:  cmpl   $0x0,-0xc(%ebp)
08467bb6 +0x066:  je     08467bd3 <+0x83>
08467bb8 +0x068:  mov    0x8(%ebp),%eax
08467bbb +0x06b:  mov    (%eax),%eax
08467bbd +0x06d:  mov    -0x10(%ebp),%edx
08467bc0 +0x070:  mov    %edx,0x4(%esp)
08467bc4 +0x074:  mov    %eax,(%esp)
08467bc7 +0x077:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08467bcc +0x07c:  xor    $0x1,%eax
08467bcf +0x07f:  test   %al,%al
08467bd1 +0x081:  je     08467bda <+0x8a>
08467bd3 +0x083:  mov    $0x1,%eax
08467bd8 +0x088:  jmp    08467bdf <+0x8f>
08467bda +0x08a:  mov    $0x0,%eax
08467bdf +0x08f:  test   %al,%al
08467be1 +0x091:  jne    08467c8e <+0x13e>
08467be7 +0x097:  mov    0x8(%ebp),%eax
08467bea +0x09a:  mov    (%eax),%eax
08467bec +0x09c:  mov    0xcd8(%eax),%eax
08467bf2 +0x0a2:  mov    %eax,%ebx
08467bf4 +0x0a4:  mov    0x8(%ebp),%eax
08467bf7 +0x0a7:  add    $0xc,%eax
08467bfa +0x0aa:  mov    %eax,(%esp)
08467bfd +0x0ad:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467c02 +0x0b2:  mov    %eax,(%esp)
08467c05 +0x0b5:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
08467c0a +0x0ba:  mov    -0xc(%ebp),%edx
08467c0d +0x0bd:  lea    0x79700(%edx),%ecx
08467c13 +0x0c3:  mov    %ebx,0x10(%esp)
08467c17 +0x0c7:  lea    -0x110(%ebp),%edx
08467c1d +0x0cd:  mov    %edx,0xc(%esp)
08467c21 +0x0d1:  movl   $0x0,0x8(%esp)
08467c29 +0x0d9:  mov    %eax,0x4(%esp)
08467c2d +0x0dd:  mov    %ecx,(%esp)
08467c30 +0x0e0:  call   086849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>  ; cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)
08467c35 +0x0e5:  mov    -0xc(%ebp),%eax
08467c38 +0x0e8:  mov    %eax,(%esp)
08467c3b +0x0eb:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08467c40 +0x0f0:  add    $0x75d8,%eax
08467c45 +0x0f5:  mov    %eax,(%esp)
08467c48 +0x0f8:  call   0814aa16 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7b5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7b5
08467c4d +0x0fd:  mov    0x8(%ebp),%eax
08467c50 +0x100:  add    $0xc,%eax
08467c53 +0x103:  mov    %eax,(%esp)
08467c56 +0x106:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467c5b +0x10b:  mov    %eax,(%esp)
08467c5e +0x10e:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467c63 +0x113:  mov    %eax,%ebx
08467c65 +0x115:  mov    -0xc(%ebp),%eax
08467c68 +0x118:  mov    %eax,(%esp)
08467c6b +0x11b:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08467c70 +0x120:  movl   $0xffffffff,0xc(%esp)
08467c78 +0x128:  mov    %ebx,0x8(%esp)
08467c7c +0x12c:  movl   $0x0,0x4(%esp)
08467c84 +0x134:  mov    %eax,(%esp)
08467c87 +0x137:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
08467c8c +0x13c:  jmp    08467c8f <+0x13f>
08467c8e +0x13e:  nop
08467c8f +0x13f:  addl   $0x1,-0x10(%ebp)
08467c93 +0x143:  cmpl   $0x3,-0x10(%ebp)
08467c97 +0x147:  setle  %al
08467c9a +0x14a:  test   %al,%al
08467c9c +0x14c:  jne    08467b94 <+0x44>
08467ca2 +0x152:  add    $0x130,%esp
08467ca8 +0x158:  pop    %ebx
08467ca9 +0x159:  pop    %edi
08467caa +0x15a:  pop    %ebp
08467cab +0x15b:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_onStartDeathTower @ 0x8467b50

/* WongWork::CDeathTower::_onStartDeathTower() */

void __thiscall WongWork::CDeathTower::_onStartDeathTower(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  CDungeon *pCVar3;
  char *pcVar4;
  undefined4 uVar5;
  UserQuest *pUVar6;
  int iVar7;
  char local_114 [256];
  int local_14;
  CUser *local_10;
  
  pcVar4 = local_114;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  CParty::getMemberNames(*(CParty **)this,local_114);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    local_10 = (CUser *)0x0;
    local_10 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (local_10 == (CUser *)0x0) {
LAB_08467bd3:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467bd3;
      bVar1 = false;
    }
    if (!bVar1) {
      iVar7 = *(int *)(*(int *)this + 0xcd8);
      pCVar3 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      pcVar4 = (char *)CDungeon::GetDungeonName(pCVar3);
      cUserHistoryLog::EnterDungeon
                ((cUserHistoryLog *)(local_10 + 0x79700),pcVar4,0,local_114,iVar7);
      iVar7 = CUser::getCurCharacQuestW(local_10);
      _Quest_Authen_Data::reset((_Quest_Authen_Data *)(iVar7 + 0x75d8));
      pCVar3 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      uVar5 = CDungeon::get_index(pCVar3);
      pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(local_10);
      UserQuest::set_authen_data(pUVar6,0,uVar5,0xffffffff);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
