# process

`_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Write_On_The_GuildBoard::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Write_On_The_GuildBoard` | `0x081d31ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d31ee  _ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Write_On_The_GuildBoard::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d31ee, 0x081d331f]
081d31ee +0x000:  push   %ebp
081d31ef +0x001:  mov    %esp,%ebp
081d31f1 +0x003:  push   %edi
081d31f2 +0x004:  push   %esi
081d31f3 +0x005:  push   %ebx
081d31f4 +0x006:  sub    $0x4c,%esp
081d31f7 +0x009:  mov    0x14(%ebp),%eax
081d31fa +0x00c:  mov    %eax,-0x20(%ebp)
081d31fd +0x00f:  mov    0x10(%ebp),%eax
081d3200 +0x012:  mov    %eax,-0x1c(%ebp)
081d3203 +0x015:  mov    -0x1c(%ebp),%eax
081d3206 +0x018:  add    $0xd,%eax
081d3209 +0x01b:  movzbl (%eax),%eax
081d320c +0x01e:  test   %al,%al
081d320e +0x020:  jne    081d3224 <+0x36>
081d3210 +0x022:  mov    -0x20(%ebp),%eax
081d3213 +0x025:  movl   $0x1,0x4(%eax)
081d321a +0x02c:  mov    $0x0,%eax
081d321f +0x031:  jmp    081d3318 <+0x12a>
081d3224 +0x036:  mov    -0x1c(%ebp),%eax
081d3227 +0x039:  lea    0xd(%eax),%ebx
081d322a +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d322f +0x041:  mov    %ebx,0x4(%esp)
081d3233 +0x045:  mov    %eax,(%esp)
081d3236 +0x048:  call   08363472 <_ZN12CDataManager16hasPreventStringEPKc>  ; CDataManager::hasPreventString(char const*)
081d323b +0x04d:  test   %al,%al
081d323d +0x04f:  jne    081d325a <+0x6c>
081d323f +0x051:  mov    -0x1c(%ebp),%eax
081d3242 +0x054:  lea    0xd(%eax),%ebx
081d3245 +0x057:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d324a +0x05c:  mov    %ebx,0x4(%esp)
081d324e +0x060:  mov    %eax,(%esp)
081d3251 +0x063:  call   08362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>  ; CDataManager::hasSpecialCharacterExceptSpace(char const*)
081d3256 +0x068:  test   %al,%al
081d3258 +0x06a:  je     081d3261 <+0x73>
081d325a +0x06c:  mov    $0x1,%eax
081d325f +0x071:  jmp    081d3266 <+0x78>
081d3261 +0x073:  mov    $0x0,%eax
081d3266 +0x078:  test   %al,%al
081d3268 +0x07a:  je     081d327e <+0x90>
081d326a +0x07c:  mov    -0x20(%ebp),%eax
081d326d +0x07f:  movl   $0x1,0x4(%eax)
081d3274 +0x086:  mov    $0x0,%eax
081d3279 +0x08b:  jmp    081d3318 <+0x12a>
081d327e +0x090:  mov    0xc(%ebp),%eax
081d3281 +0x093:  mov    %eax,(%esp)
081d3284 +0x096:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d3289 +0x09b:  mov    %eax,-0x34(%ebp)
081d328c +0x09e:  mov    0xc(%ebp),%eax
081d328f +0x0a1:  mov    %eax,(%esp)
081d3292 +0x0a4:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
081d3297 +0x0a9:  movsbl %al,%eax
081d329a +0x0ac:  mov    %eax,-0x30(%ebp)
081d329d +0x0af:  mov    0xc(%ebp),%eax
081d32a0 +0x0b2:  mov    %eax,(%esp)
081d32a3 +0x0b5:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081d32a8 +0x0ba:  mov    %eax,%edi
081d32aa +0x0bc:  mov    0xc(%ebp),%eax
081d32ad +0x0bf:  mov    %eax,(%esp)
081d32b0 +0x0c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d32b5 +0x0c7:  mov    %eax,%esi
081d32b7 +0x0c9:  mov    0xc(%ebp),%eax
081d32ba +0x0cc:  mov    %eax,(%esp)
081d32bd +0x0cf:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d32c2 +0x0d4:  mov    %eax,%ebx
081d32c4 +0x0d6:  mov    -0x1c(%ebp),%eax
081d32c7 +0x0d9:  add    $0xd,%eax
081d32ca +0x0dc:  mov    %eax,-0x2c(%ebp)
081d32cd +0x0df:  mov    0xc(%ebp),%eax
081d32d0 +0x0e2:  mov    %eax,(%esp)
081d32d3 +0x0e5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d32d8 +0x0ea:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d32de +0x0f0:  mov    %eax,0x4(%esp)
081d32e2 +0x0f4:  mov    %edx,(%esp)
081d32e5 +0x0f7:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d32ea +0x0fc:  mov    -0x34(%ebp),%edx
081d32ed +0x0ff:  mov    %edx,0x18(%esp)
081d32f1 +0x103:  mov    -0x30(%ebp),%edx
081d32f4 +0x106:  mov    %edx,0x14(%esp)
081d32f8 +0x10a:  mov    %edi,0x10(%esp)
081d32fc +0x10e:  mov    %esi,0xc(%esp)
081d3300 +0x112:  mov    %ebx,0x8(%esp)
081d3304 +0x116:  mov    -0x2c(%ebp),%edx
081d3307 +0x119:  mov    %edx,0x4(%esp)
081d330b +0x11d:  mov    %eax,(%esp)
081d330e +0x120:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
081d3313 +0x125:  mov    $0x0,%eax
081d3318 +0x12a:  add    $0x4c,%esp
081d331b +0x12d:  pop    %ebx
081d331c +0x12e:  pop    %esi
081d331d +0x12f:  pop    %edi
081d331e +0x130:  pop    %ebp
081d331f +0x131:  ret
```

## 反编译 C

```c
// Dispatcher_Write_On_The_GuildBoard::process @ 0x81d31ee

/* Dispatcher_Write_On_The_GuildBoard::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Write_On_The_GuildBoard::process
          (Dispatcher_Write_On_The_GuildBoard *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  CGuildServerProxy *this_00;
  
  if (param_2[0xd] == (MSG_BASE)0x0) {
    *(undefined4 *)(param_3 + 4) = 1;
    return 0;
  }
  pCVar3 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar3,(char *)(param_2 + 0xd));
  if (cVar2 == '\0') {
    pCVar3 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar3,(char *)(param_2 + 0xd));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081d3266;
    }
  }
  bVar1 = true;
LAB_081d3266:
  if (bVar1) {
    *(undefined4 *)(param_3 + 4) = 1;
  }
  else {
    uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar8);
    CGuildServerProxy::SendGuildBoardWrite
              (this_00,(char *)(param_2 + 0xd),uVar7,uVar6,iVar5,cVar2,uVar4);
  }
  return 0;
}
```
