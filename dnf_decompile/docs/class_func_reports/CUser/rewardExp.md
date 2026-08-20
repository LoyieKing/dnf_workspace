# rewardExp

`_ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb`

`CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b20c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b20c  _ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb
#           CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool)
# range [0x0868b20c, 0x0868b47f]
0868b20c +0x000:  push   %ebp
0868b20d +0x001:  mov    %esp,%ebp
0868b20f +0x003:  push   %esi
0868b210 +0x004:  push   %ebx
0868b211 +0x005:  sub    $0x50,%esp
0868b214 +0x008:  mov    0x24(%ebp),%eax
0868b217 +0x00b:  mov    %al,-0x2c(%ebp)
0868b21a +0x00e:  lea    -0x1c(%ebp),%eax
0868b21d +0x011:  mov    %eax,(%esp)
0868b220 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868b225 +0x019:  mov    0x8(%ebp),%eax
0868b228 +0x01c:  mov    %eax,(%esp)
0868b22b +0x01f:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0868b230 +0x024:  mov    %eax,%ebx
0868b232 +0x026:  mov    0x8(%ebp),%eax
0868b235 +0x029:  mov    %eax,(%esp)
0868b238 +0x02c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0868b23d +0x031:  mov    %ebx,0x4(%esp)
0868b241 +0x035:  mov    %eax,(%esp)
0868b244 +0x038:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0868b249 +0x03d:  mov    0x18(%ebp),%edx
0868b24c +0x040:  mov    %eax,(%edx)
0868b24e +0x042:  mov    0xc(%ebp),%edx
0868b251 +0x045:  mov    0x8(%ebp),%eax
0868b254 +0x048:  movl   $0x0,0x8(%esp)
0868b25c +0x050:  mov    %edx,0x4(%esp)
0868b260 +0x054:  mov    %eax,(%esp)
0868b263 +0x057:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
0868b268 +0x05c:  movzbl -0x2c(%ebp),%eax
0868b26c +0x060:  mov    %eax,0x18(%esp)
0868b270 +0x064:  movl   $0x0,0x14(%esp)
0868b278 +0x06c:  mov    0x20(%ebp),%eax
0868b27b +0x06f:  mov    %eax,0x10(%esp)
0868b27f +0x073:  mov    0x14(%ebp),%eax
0868b282 +0x076:  mov    %eax,0xc(%esp)
0868b286 +0x07a:  mov    0x10(%ebp),%eax
0868b289 +0x07d:  mov    %eax,0x8(%esp)
0868b28d +0x081:  mov    0xc(%ebp),%eax
0868b290 +0x084:  mov    %eax,0x4(%esp)
0868b294 +0x088:  mov    0x8(%ebp),%eax
0868b297 +0x08b:  mov    %eax,(%esp)
0868b29a +0x08e:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
0868b29f +0x093:  mov    %al,-0xd(%ebp)
0868b2a2 +0x096:  mov    0x8(%ebp),%eax
0868b2a5 +0x099:  mov    %eax,(%esp)
0868b2a8 +0x09c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0868b2ad +0x0a1:  mov    %eax,%ebx
0868b2af +0x0a3:  mov    0x8(%ebp),%eax
0868b2b2 +0x0a6:  mov    %eax,(%esp)
0868b2b5 +0x0a9:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0868b2ba +0x0ae:  mov    %ebx,0x4(%esp)
0868b2be +0x0b2:  mov    %eax,(%esp)
0868b2c1 +0x0b5:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0868b2c6 +0x0ba:  mov    0x1c(%ebp),%edx
0868b2c9 +0x0bd:  mov    %eax,(%edx)
0868b2cb +0x0bf:  cmpb   $0x0,-0xd(%ebp)
0868b2cf +0x0c3:  je     0868b46d <+0x261>
0868b2d5 +0x0c9:  mov    0x8(%ebp),%eax
0868b2d8 +0x0cc:  mov    0x8cfc4(%eax),%eax
0868b2de +0x0d2:  cmp    $0x3,%eax
0868b2e1 +0x0d5:  jne    0868b380 <+0x174>
0868b2e7 +0x0db:  lea    -0x1c(%ebp),%eax
0868b2ea +0x0de:  mov    %eax,(%esp)
0868b2ed +0x0e1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0868b2f2 +0x0e6:  movl   $0x2,0x8(%esp)
0868b2fa +0x0ee:  movl   $0x0,0x4(%esp)
0868b302 +0x0f6:  lea    -0x1c(%ebp),%eax
0868b305 +0x0f9:  mov    %eax,(%esp)
0868b308 +0x0fc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868b30d +0x101:  movl   $0x0,0x4(%esp)
0868b315 +0x109:  lea    -0x1c(%ebp),%eax
0868b318 +0x10c:  mov    %eax,(%esp)
0868b31b +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868b320 +0x114:  movl   $0x1,0x4(%esp)
0868b328 +0x11c:  lea    -0x1c(%ebp),%eax
0868b32b +0x11f:  mov    %eax,(%esp)
0868b32e +0x122:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868b333 +0x127:  lea    -0x1c(%ebp),%eax
0868b336 +0x12a:  movl   $0x0,0x8(%esp)
0868b33e +0x132:  mov    %eax,0x4(%esp)
0868b342 +0x136:  mov    0x8(%ebp),%eax
0868b345 +0x139:  mov    %eax,(%esp)
0868b348 +0x13c:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0868b34d +0x141:  movl   $0x1,0x4(%esp)
0868b355 +0x149:  lea    -0x1c(%ebp),%eax
0868b358 +0x14c:  mov    %eax,(%esp)
0868b35b +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868b360 +0x154:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868b365 +0x159:  mov    0x8(%ebp),%edx
0868b368 +0x15c:  mov    %edx,0x8(%esp)
0868b36c +0x160:  lea    -0x1c(%ebp),%edx
0868b36f +0x163:  mov    %edx,0x4(%esp)
0868b373 +0x167:  mov    %eax,(%esp)
0868b376 +0x16a:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0868b37b +0x16f:  jmp    0868b43f <+0x233>
0868b380 +0x174:  mov    0x8(%ebp),%eax
0868b383 +0x177:  mov    0x8cfc4(%eax),%eax
0868b389 +0x17d:  cmp    $0x5,%eax
0868b38c +0x180:  je     0868b3a0 <+0x194>
0868b38e +0x182:  mov    0x8(%ebp),%eax
0868b391 +0x185:  mov    0x8cfc4(%eax),%eax
0868b397 +0x18b:  cmp    $0x8,%eax
0868b39a +0x18e:  jne    0868b43f <+0x233>
0868b3a0 +0x194:  lea    -0x1c(%ebp),%eax
0868b3a3 +0x197:  mov    %eax,(%esp)
0868b3a6 +0x19a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0868b3ab +0x19f:  movl   $0x2,0x8(%esp)
0868b3b3 +0x1a7:  movl   $0x0,0x4(%esp)
0868b3bb +0x1af:  lea    -0x1c(%ebp),%eax
0868b3be +0x1b2:  mov    %eax,(%esp)
0868b3c1 +0x1b5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868b3c6 +0x1ba:  movl   $0x1,0x4(%esp)
0868b3ce +0x1c2:  lea    -0x1c(%ebp),%eax
0868b3d1 +0x1c5:  mov    %eax,(%esp)
0868b3d4 +0x1c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868b3d9 +0x1cd:  movl   $0x1,0x4(%esp)
0868b3e1 +0x1d5:  lea    -0x1c(%ebp),%eax
0868b3e4 +0x1d8:  mov    %eax,(%esp)
0868b3e7 +0x1db:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868b3ec +0x1e0:  lea    -0x1c(%ebp),%eax
0868b3ef +0x1e3:  movl   $0x1,0x8(%esp)
0868b3f7 +0x1eb:  mov    %eax,0x4(%esp)
0868b3fb +0x1ef:  mov    0x8(%ebp),%eax
0868b3fe +0x1f2:  mov    %eax,(%esp)
0868b401 +0x1f5:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0868b406 +0x1fa:  movl   $0x1,0x4(%esp)
0868b40e +0x202:  lea    -0x1c(%ebp),%eax
0868b411 +0x205:  mov    %eax,(%esp)
0868b414 +0x208:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868b419 +0x20d:  mov    0x8(%ebp),%eax
0868b41c +0x210:  mov    %eax,(%esp)
0868b41f +0x213:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868b424 +0x218:  mov    %eax,-0xc(%ebp)
0868b427 +0x21b:  cmpl   $0x0,-0xc(%ebp)
0868b42b +0x21f:  je     0868b43f <+0x233>
0868b42d +0x221:  lea    -0x1c(%ebp),%eax
0868b430 +0x224:  mov    %eax,0x4(%esp)
0868b434 +0x228:  mov    -0xc(%ebp),%eax
0868b437 +0x22b:  mov    %eax,(%esp)
0868b43a +0x22e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0868b43f +0x233:  cmpb   $0x0,-0x2c(%ebp)
0868b443 +0x237:  je     0868b46d <+0x261>
0868b445 +0x239:  mov    0x8(%ebp),%eax
0868b448 +0x23c:  mov    %eax,(%esp)
0868b44b +0x23f:  call   0868d780 <_ZN5CUser33decide_growth_power_reward_systemEv>  ; CUser::decide_growth_power_reward_system()
0868b450 +0x244:  jmp    0868b46d <+0x261>
0868b452 +0x246:  mov    %edx,%ebx
0868b454 +0x248:  mov    %eax,%esi
0868b456 +0x24a:  lea    -0x1c(%ebp),%eax
0868b459 +0x24d:  mov    %eax,(%esp)
0868b45c +0x250:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868b461 +0x255:  mov    %esi,%eax
0868b463 +0x257:  mov    %ebx,%edx
0868b465 +0x259:  mov    %eax,(%esp)
0868b468 +0x25c:  call   08ae3750 <_Unwind_Resume>
0868b46d +0x261:  lea    -0x1c(%ebp),%eax
0868b470 +0x264:  mov    %eax,(%esp)
0868b473 +0x267:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868b478 +0x26c:  add    $0x50,%esp
0868b47b +0x26f:  pop    %ebx
0868b47c +0x270:  pop    %esi
0868b47d +0x271:  pop    %ebp
0868b47e +0x272:  ret
0868b47f +0x273:  nop
```

## 反编译 C

```c
// CUser::rewardExp @ 0x868b20c

/* CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool) */

void __thiscall
CUser::rewardExp(CUser *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                undefined4 *param_4,undefined4 *param_5,undefined4 param_7,char param_8)

{
  undefined4 uVar1;
  SkillSlot *pSVar2;
  GameWorld *this_00;
  PacketGuard local_20 [15];
  char local_11;
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_20);
  uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
  pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
                    /* try { // try from 0868b244 to 0868b44f has its CatchHandler @ 0868b452 */
  uVar1 = SkillSlot::get_remain_sp_at_index(pSVar2,uVar1);
  *param_4 = uVar1;
  CUserCharacInfo::calcHelpAbuseRatio((uint)this,SUB41(param_1,0));
  local_11 = gain_exp_sp(this,param_1,param_2,param_3,param_7,0,param_8);
  uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
  pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  uVar1 = SkillSlot::get_remain_sp_at_index(pSVar2,uVar1);
  *param_5 = uVar1;
  if (local_11 != '\0') {
    if (*(int *)(this + 0x8cfc4) == 3) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      make_basic_info(this,(char *)local_20,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_20,this);
    }
    else if ((*(int *)(this + 0x8cfc4) == 5) || (*(int *)(this + 0x8cfc4) == 8)) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      make_basic_info(this,(char *)local_20,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      local_10 = (CParty *)GetParty(this);
      if (local_10 != (CParty *)0x0) {
        CParty::send_to_party(local_10,local_20);
      }
    }
    if (param_8 != '\0') {
      decide_growth_power_reward_system(this);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
