# check_quest_type_condition

`_ZN9UserQuest26check_quest_type_conditionEP5Quest`

`UserQuest::check_quest_type_condition(Quest*)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ace46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ace46  _ZN9UserQuest26check_quest_type_conditionEP5Quest
#           UserQuest::check_quest_type_condition(Quest*)
# range [0x086ace46, 0x086acf89]
086ace46 +0x000:  push   %ebp
086ace47 +0x001:  mov    %esp,%ebp
086ace49 +0x003:  push   %ebx
086ace4a +0x004:  sub    $0x14,%esp
086ace4d +0x007:  mov    0xc(%ebp),%eax
086ace50 +0x00a:  mov    0x7c(%eax),%eax
086ace53 +0x00d:  cmp    $0x19,%eax
086ace56 +0x010:  ja     086acf71 <+0x12b>
086ace5c +0x016:  mov    &data#9ca16c98(.rodata)(,%eax,4),%eax
086ace63 +0x01d:  jmp    *%eax
086ace65 +0x01f:  mov    $0x1,%eax
086ace6a +0x024:  jmp    086acf83 <+0x13d>
086ace6f +0x029:  mov    0xc(%ebp),%eax
086ace72 +0x02c:  add    $0x84,%eax
086ace77 +0x031:  movl   $0x0,0x4(%esp)
086ace7f +0x039:  mov    %eax,(%esp)
086ace82 +0x03c:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086ace87 +0x041:  mov    (%eax),%ebx
086ace89 +0x043:  mov    0x8(%ebp),%eax
086ace8c +0x046:  mov    (%eax),%eax
086ace8e +0x048:  mov    %eax,(%esp)
086ace91 +0x04b:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
086ace96 +0x050:  mov    0x14(%eax),%eax
086ace99 +0x053:  cmp    %eax,%ebx
086ace9b +0x055:  setle  %al
086ace9e +0x058:  test   %al,%al
086acea0 +0x05a:  je     086aceac <+0x66>
086acea2 +0x05c:  mov    $0x1,%eax
086acea7 +0x061:  jmp    086acf83 <+0x13d>
086aceac +0x066:  mov    $0x0,%eax
086aceb1 +0x06b:  jmp    086acf83 <+0x13d>
086aceb6 +0x070:  mov    0xc(%ebp),%eax
086aceb9 +0x073:  add    $0x84,%eax
086acebe +0x078:  movl   $0x0,0x4(%esp)
086acec6 +0x080:  mov    %eax,(%esp)
086acec9 +0x083:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acece +0x088:  mov    (%eax),%edx
086aced0 +0x08a:  mov    0x8(%ebp),%eax
086aced3 +0x08d:  movzwl 0x75dc(%eax),%eax
086aceda +0x094:  cwtl
086acedb +0x095:  cmp    %eax,%edx
086acedd +0x097:  sete   %al
086acee0 +0x09a:  test   %al,%al
086acee2 +0x09c:  je     086aceee <+0xa8>
086acee4 +0x09e:  mov    $0x1,%eax
086acee9 +0x0a3:  jmp    086acf83 <+0x13d>
086aceee +0x0a8:  mov    $0x0,%eax
086acef3 +0x0ad:  jmp    086acf83 <+0x13d>
086acef8 +0x0b2:  mov    0xc(%ebp),%eax
086acefb +0x0b5:  add    $0x84,%eax
086acf00 +0x0ba:  movl   $0x0,0x4(%esp)
086acf08 +0x0c2:  mov    %eax,(%esp)
086acf0b +0x0c5:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acf10 +0x0ca:  mov    (%eax),%ebx
086acf12 +0x0cc:  mov    0x8(%ebp),%eax
086acf15 +0x0cf:  mov    (%eax),%eax
086acf17 +0x0d1:  mov    %eax,(%esp)
086acf1a +0x0d4:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
086acf1f +0x0d9:  cwtl
086acf20 +0x0da:  cmp    %eax,%ebx
086acf22 +0x0dc:  setle  %al
086acf25 +0x0df:  test   %al,%al
086acf27 +0x0e1:  je     086acf30 <+0xea>
086acf29 +0x0e3:  mov    $0x1,%eax
086acf2e +0x0e8:  jmp    086acf83 <+0x13d>
086acf30 +0x0ea:  mov    $0x0,%eax
086acf35 +0x0ef:  jmp    086acf83 <+0x13d>
086acf37 +0x0f1:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086acf3c +0x0f6:  mov    %eax,(%esp)
086acf3f +0x0f9:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
086acf44 +0x0fe:  mov    %eax,%ebx
086acf46 +0x100:  mov    0x8(%ebp),%eax
086acf49 +0x103:  mov    (%eax),%eax
086acf4b +0x105:  mov    %eax,(%esp)
086acf4e +0x108:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
086acf53 +0x10d:  cmp    %al,%bl
086acf55 +0x10f:  sete   %al
086acf58 +0x112:  test   %al,%al
086acf5a +0x114:  je     086acf63 <+0x11d>
086acf5c +0x116:  mov    $0x1,%eax
086acf61 +0x11b:  jmp    086acf83 <+0x13d>
086acf63 +0x11d:  mov    $0x0,%eax
086acf68 +0x122:  jmp    086acf83 <+0x13d>
086acf6a +0x124:  mov    $0x1,%eax
086acf6f +0x129:  jmp    086acf83 <+0x13d>
086acf71 +0x12b:  mov    0xc(%ebp),%eax
086acf74 +0x12e:  mov    %eax,0x4(%esp)
086acf78 +0x132:  mov    0x8(%ebp),%eax
086acf7b +0x135:  mov    %eax,(%esp)
086acf7e +0x138:  call   086acb52 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest>  ; UserQuest::check_quest_subtype_condition(Quest*)
086acf83 +0x13d:  add    $0x14,%esp
086acf86 +0x140:  pop    %ebx
086acf87 +0x141:  pop    %ebp
086acf88 +0x142:  ret
086acf89 +0x143:  nop
```

## 反编译 C

```c
// UserQuest::check_quest_type_condition @ 0x86ace46

/* UserQuest::check_quest_type_condition(Quest*) */

undefined4 __thiscall UserQuest::check_quest_type_condition(UserQuest *this,Quest *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 0xf:
  case 0x19:
    uVar7 = 1;
    break;
  case 3:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    if (*piVar6 == (int)*(short *)(this + 0x75dc)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    break;
  case 5:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar6;
    iVar5 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)this);
    if (*(int *)(iVar5 + 0x14) < iVar1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    break;
  case 7:
    cVar2 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    cVar3 = CUser::getPowerSide(*(CUser **)this);
    if (cVar2 == cVar3) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    break;
  case 8:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar6;
    sVar4 = CUserCharacInfo::GetUserPowerWarPoint(*(CUserCharacInfo **)this);
    if (sVar4 < iVar1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    break;
  default:
    uVar7 = check_quest_subtype_condition(this,param_1);
    break;
  case 0x10:
  case 0x13:
    uVar7 = 1;
  }
  return uVar7;
}
```
