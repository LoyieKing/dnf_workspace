# process_level_up_reward

`_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb`

`EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810bf56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810bf56  _ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb
#           EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool)
# range [0x0810bf56, 0x0810c0a5]
0810bf56 +0x000:  push   %ebp
0810bf57 +0x001:  mov    %esp,%ebp
0810bf59 +0x003:  push   %edi
0810bf5a +0x004:  push   %esi
0810bf5b +0x005:  push   %ebx
0810bf5c +0x006:  sub    $0x4c,%esp
0810bf5f +0x009:  mov    0x10(%ebp),%eax
0810bf62 +0x00c:  mov    %al,-0x2c(%ebp)
0810bf65 +0x00f:  cmpl   $0x0,0xc(%ebp)
0810bf69 +0x013:  je     0810c099 <+0x143>
0810bf6f +0x019:  movl   $0x194,0x4(%esp)
0810bf77 +0x021:  mov    0x8(%ebp),%eax
0810bf7a +0x024:  mov    %eax,(%esp)
0810bf7d +0x027:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810bf82 +0x02c:  xor    $0x1,%eax
0810bf85 +0x02f:  test   %al,%al
0810bf87 +0x031:  jne    0810c09c <+0x146>
0810bf8d +0x037:  movl   $0x194,0x4(%esp)
0810bf95 +0x03f:  mov    0x8(%ebp),%eax
0810bf98 +0x042:  mov    %eax,(%esp)
0810bf9b +0x045:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810bfa0 +0x04a:  mov    %eax,-0x1c(%ebp)
0810bfa3 +0x04d:  cmpl   $0x0,-0x1c(%ebp)
0810bfa7 +0x051:  je     0810c09d <+0x147>
0810bfad +0x057:  mov    -0x1c(%ebp),%eax
0810bfb0 +0x05a:  mov    %eax,(%esp)
0810bfb3 +0x05d:  call   0810e2f2 <_ZN13EventClassify14CLevelUpReward18is_recv_check_itemEv>  ; EventClassify::CLevelUpReward::is_recv_check_item()
0810bfb8 +0x062:  test   %al,%al
0810bfba +0x064:  je     0810c044 <+0xee>
0810bfc0 +0x06a:  movzbl -0x2c(%ebp),%edi
0810bfc4 +0x06e:  mov    0xc(%ebp),%eax
0810bfc7 +0x071:  mov    %eax,(%esp)
0810bfca +0x074:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0810bfcf +0x079:  movsbl %al,%esi
0810bfd2 +0x07c:  mov    0xc(%ebp),%eax
0810bfd5 +0x07f:  mov    %eax,(%esp)
0810bfd8 +0x082:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0810bfdd +0x087:  mov    %eax,%ebx
0810bfdf +0x089:  mov    0xc(%ebp),%eax
0810bfe2 +0x08c:  mov    %eax,(%esp)
0810bfe5 +0x08f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0810bfea +0x094:  mov    %edi,0x10(%esp)
0810bfee +0x098:  mov    %esi,0xc(%esp)
0810bff2 +0x09c:  mov    %ebx,0x8(%esp)
0810bff6 +0x0a0:  mov    %eax,0x4(%esp)
0810bffa +0x0a4:  mov    -0x1c(%ebp),%eax
0810bffd +0x0a7:  mov    %eax,(%esp)
0810c000 +0x0aa:  call   0810e192 <_ZN13EventClassify14CLevelUpReward16check_recv_levelEiiib>  ; EventClassify::CLevelUpReward::check_recv_level(int, int, int, bool)
0810c005 +0x0af:  test   %al,%al
0810c007 +0x0b1:  je     0810c09d <+0x147>
0810c00d +0x0b7:  mov    0xc(%ebp),%eax
0810c010 +0x0ba:  mov    %eax,(%esp)
0810c013 +0x0bd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0810c018 +0x0c2:  mov    %eax,%esi
0810c01a +0x0c4:  mov    0xc(%ebp),%eax
0810c01d +0x0c7:  mov    %eax,(%esp)
0810c020 +0x0ca:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810c025 +0x0cf:  mov    %eax,%ebx
0810c027 +0x0d1:  mov    0xc(%ebp),%eax
0810c02a +0x0d4:  mov    %eax,(%esp)
0810c02d +0x0d7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0810c032 +0x0dc:  mov    %esi,0x8(%esp)
0810c036 +0x0e0:  mov    %ebx,0x4(%esp)
0810c03a +0x0e4:  mov    %eax,(%esp)
0810c03d +0x0e7:  call   0844271a <_ZN22DB_SelectLevelUpReward11makeRequestEiji>  ; DB_SelectLevelUpReward::makeRequest(int, unsigned int, int)
0810c042 +0x0ec:  jmp    0810c09d <+0x147>
0810c044 +0x0ee:  mov    0xc(%ebp),%eax
0810c047 +0x0f1:  mov    %eax,(%esp)
0810c04a +0x0f4:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0810c04f +0x0f9:  movsbl %al,%esi
0810c052 +0x0fc:  mov    0xc(%ebp),%eax
0810c055 +0x0ff:  mov    %eax,(%esp)
0810c058 +0x102:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0810c05d +0x107:  mov    %eax,%ebx
0810c05f +0x109:  mov    0xc(%ebp),%eax
0810c062 +0x10c:  mov    %eax,(%esp)
0810c065 +0x10f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0810c06a +0x114:  mov    %esi,0xc(%esp)
0810c06e +0x118:  mov    %ebx,0x8(%esp)
0810c072 +0x11c:  mov    %eax,0x4(%esp)
0810c076 +0x120:  mov    -0x1c(%ebp),%eax
0810c079 +0x123:  mov    %eax,(%esp)
0810c07c +0x126:  call   0810e302 <_ZN13EventClassify14CLevelUpReward15set_reward_itemEiii>  ; EventClassify::CLevelUpReward::set_reward_item(int, int, int)
0810c081 +0x12b:  test   %al,%al
0810c083 +0x12d:  je     0810c09d <+0x147>
0810c085 +0x12f:  mov    0xc(%ebp),%eax
0810c088 +0x132:  mov    %eax,0x4(%esp)
0810c08c +0x136:  mov    -0x1c(%ebp),%eax
0810c08f +0x139:  mov    %eax,(%esp)
0810c092 +0x13c:  call   0810e4ea <_ZN13EventClassify14CLevelUpReward9do_actionEP5CUser>  ; EventClassify::CLevelUpReward::do_action(CUser*)
0810c097 +0x141:  jmp    0810c09d <+0x147>
0810c099 +0x143:  nop
0810c09a +0x144:  jmp    0810c09d <+0x147>
0810c09c +0x146:  nop
0810c09d +0x147:  add    $0x4c,%esp
0810c0a0 +0x14a:  pop    %ebx
0810c0a1 +0x14b:  pop    %esi
0810c0a2 +0x14c:  pop    %edi
0810c0a3 +0x14d:  pop    %ebp
0810c0a4 +0x14e:  ret
0810c0a5 +0x14f:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_level_up_reward @ 0x810bf56

/* EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool) */

void __thiscall
EventClassify::CEventScriptMng::process_level_up_reward
          (CEventScriptMng *this,CUser *param_1,bool param_2)

{
  char cVar1;
  CLevelUpReward *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x194), cVar1 == '\x01')) &&
     (this_00 = (CLevelUpReward *)get_event_entity((int)this), this_00 != (CLevelUpReward *)0x0)) {
    cVar1 = CLevelUpReward::is_recv_check_item(this_00);
    if (cVar1 == '\0') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      cVar1 = CLevelUpReward::set_reward_item(this_00,iVar3,iVar2,(int)cVar1);
      if (cVar1 != '\0') {
        CLevelUpReward::do_action(this_00,param_1);
      }
    }
    else {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      cVar1 = CLevelUpReward::check_recv_level(this_00,iVar3,iVar2,(int)cVar1,param_2);
      if (cVar1 != '\0') {
        iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        iVar3 = CUser::GetUID(param_1);
        DB_SelectLevelUpReward::makeRequest(iVar3,uVar4,iVar2);
      }
    }
  }
  return;
}
```
