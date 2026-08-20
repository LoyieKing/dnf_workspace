# stSelectQuestParam

`_ZN18stSelectQuestParamC1EP5CUser`

`stSelectQuestParam::stSelectQuestParam(CUser*)`

| 类 | 地址 |
|---|---|
| `stSelectQuestParam` | `0x083480b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083480b4  _ZN18stSelectQuestParamC1EP5CUser
#           stSelectQuestParam::stSelectQuestParam(CUser*)
# range [0x083480b4, 0x0834816f]
083480b4 +0x00:  push   %ebp
083480b5 +0x01:  mov    %esp,%ebp
083480b7 +0x03:  sub    $0x18,%esp
083480ba +0x06:  mov    0xc(%ebp),%eax
083480bd +0x09:  mov    %eax,(%esp)
083480c0 +0x0c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
083480c5 +0x11:  mov    0x8(%ebp),%edx
083480c8 +0x14:  mov    %eax,0x4(%edx)
083480cb +0x17:  mov    0xc(%ebp),%eax
083480ce +0x1a:  mov    %eax,(%esp)
083480d1 +0x1d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
083480d6 +0x22:  movsbl %al,%edx
083480d9 +0x25:  mov    0x8(%ebp),%eax
083480dc +0x28:  mov    %edx,0x8(%eax)
083480df +0x2b:  mov    0xc(%ebp),%eax
083480e2 +0x2e:  mov    %eax,(%esp)
083480e5 +0x31:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
083480ea +0x36:  movsbl %al,%edx
083480ed +0x39:  mov    0x8(%ebp),%eax
083480f0 +0x3c:  mov    %edx,0xc(%eax)
083480f3 +0x3f:  mov    0xc(%ebp),%eax
083480f6 +0x42:  mov    %eax,(%esp)
083480f9 +0x45:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
083480fe +0x4a:  mov    0x8(%ebp),%edx
08348101 +0x4d:  mov    %eax,(%edx)
08348103 +0x4f:  mov    0xc(%ebp),%eax
08348106 +0x52:  mov    %eax,(%esp)
08348109 +0x55:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0834810e +0x5a:  mov    0x8(%ebp),%edx
08348111 +0x5d:  mov    %eax,0x10(%edx)
08348114 +0x60:  mov    0xc(%ebp),%eax
08348117 +0x63:  mov    %eax,(%esp)
0834811a +0x66:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0834811f +0x6b:  mov    0x8(%ebp),%edx
08348122 +0x6e:  mov    %al,0x14(%edx)
08348125 +0x71:  mov    0xc(%ebp),%eax
08348128 +0x74:  mov    %eax,(%esp)
0834812b +0x77:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08348130 +0x7c:  mov    0x8(%ebp),%edx
08348133 +0x7f:  mov    %eax,0x1c(%edx)
08348136 +0x82:  mov    0xc(%ebp),%eax
08348139 +0x85:  mov    %eax,(%esp)
0834813c +0x88:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08348141 +0x8d:  mov    %eax,0x4(%esp)
08348145 +0x91:  mov    0xc(%ebp),%eax
08348148 +0x94:  mov    %eax,(%esp)
0834814b +0x97:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08348150 +0x9c:  mov    0x8(%ebp),%edx
08348153 +0x9f:  mov    %eax,0x20(%edx)
08348156 +0xa2:  mov    0xc(%ebp),%eax
08348159 +0xa5:  mov    %eax,(%esp)
0834815c +0xa8:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08348161 +0xad:  mov    0x75f0(%eax),%edx
08348167 +0xb3:  mov    0x8(%ebp),%eax
0834816a +0xb6:  mov    %edx,0x24(%eax)
0834816d +0xb9:  leave
0834816e +0xba:  ret
0834816f +0xbb:  nop
```

## 反编译 C

```c
// stSelectQuestParam::stSelectQuestParam @ 0x83480b4

/* stSelectQuestParam::stSelectQuestParam(CUser*) */

void __thiscall stSelectQuestParam::stSelectQuestParam(stSelectQuestParam *this,CUser *param_1)

{
  char cVar1;
  stSelectQuestParam sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 4) = uVar3;
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  *(int *)(this + 8) = (int)cVar1;
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  *(int *)(this + 0xc) = (int)cVar1;
  uVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  *(undefined4 *)this = uVar3;
  uVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 0x10) = uVar3;
  sVar2 = (stSelectQuestParam)CUser::getPowerSide(param_1);
  this[0x14] = sVar2;
  uVar3 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 0x1c) = uVar3;
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  uVar3 = CUser::GetCurExpertJobLevel(param_1,iVar4);
  *(undefined4 *)(this + 0x20) = uVar3;
  iVar4 = CUser::getCurCharacQuestR(param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(iVar4 + 0x75f0);
  return;
}
```
