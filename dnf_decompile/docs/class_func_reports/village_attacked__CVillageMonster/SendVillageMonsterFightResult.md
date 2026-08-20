# SendVillageMonsterFightResult

`_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb`

`village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b330a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b330a  _ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb
#           village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool)
# range [0x086b330a, 0x086b349f]
086b330a +0x000:  push   %ebp
086b330b +0x001:  mov    %esp,%ebp
086b330d +0x003:  push   %esi
086b330e +0x004:  push   %ebx
086b330f +0x005:  sub    $0x70,%esp
086b3312 +0x008:  mov    0x10(%ebp),%eax
086b3315 +0x00b:  mov    %al,-0x5c(%ebp)
086b3318 +0x00e:  cmpl   $0x0,0xc(%ebp)
086b331c +0x012:  je     086b3497 <+0x18d>
086b3322 +0x018:  mov    0xc(%ebp),%eax
086b3325 +0x01b:  mov    %eax,(%esp)
086b3328 +0x01e:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086b332d +0x023:  mov    %eax,-0x14(%ebp)
086b3330 +0x026:  cmpl   $0x0,-0x14(%ebp)
086b3334 +0x02a:  je     086b3498 <+0x18e>
086b333a +0x030:  lea    -0x4b(%ebp),%eax
086b333d +0x033:  mov    %eax,(%esp)
086b3340 +0x036:  call   086b4b84 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0xae>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0xae
086b3345 +0x03b:  movl   $0x0,-0x10(%ebp)
086b334c +0x042:  jmp    086b33be <+0xb4>
086b334e +0x044:  mov    -0x10(%ebp),%eax
086b3351 +0x047:  mov    %eax,0x4(%esp)
086b3355 +0x04b:  mov    -0x14(%ebp),%eax
086b3358 +0x04e:  mov    %eax,(%esp)
086b335b +0x051:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086b3360 +0x056:  mov    %eax,-0xc(%ebp)
086b3363 +0x059:  cmpl   $0x0,-0xc(%ebp)
086b3367 +0x05d:  je     086b33ba <+0xb0>
086b3369 +0x05f:  mov    -0x10(%ebp),%ebx
086b336c +0x062:  mov    -0xc(%ebp),%eax
086b336f +0x065:  mov    %eax,(%esp)
086b3372 +0x068:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086b3377 +0x06d:  mov    %eax,-0x41(%ebp,%ebx,4)
086b337b +0x071:  mov    -0x10(%ebp),%ebx
086b337e +0x074:  movl   $0xffffffff,0x4(%esp)
086b3386 +0x07c:  mov    -0xc(%ebp),%eax
086b3389 +0x07f:  mov    %eax,(%esp)
086b338c +0x082:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086b3391 +0x087:  lea    0x4(%ebx),%edx
086b3394 +0x08a:  mov    %eax,-0x41(%ebp,%edx,4)
086b3398 +0x08e:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
086b339d +0x093:  mov    %eax,(%esp)
086b33a0 +0x096:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
086b33a5 +0x09b:  test   %al,%al
086b33a7 +0x09d:  je     086b33ba <+0xb0>
086b33a9 +0x09f:  cmpb   $0x0,-0x5c(%ebp)
086b33ad +0x0a3:  je     086b33ba <+0xb0>
086b33af +0x0a5:  mov    -0xc(%ebp),%eax
086b33b2 +0x0a8:  mov    %eax,(%esp)
086b33b5 +0x0ab:  call   086b4be6 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x110>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x110
086b33ba +0x0b0:  addl   $0x1,-0x10(%ebp)
086b33be +0x0b4:  cmpl   $0x3,-0x10(%ebp)
086b33c2 +0x0b8:  setle  %al
086b33c5 +0x0bb:  test   %al,%al
086b33c7 +0x0bd:  jne    086b334e <+0x44>
086b33c9 +0x0bf:  movzbl -0x5c(%ebp),%eax
086b33cd +0x0c3:  mov    %al,-0x21(%ebp)
086b33d0 +0x0c6:  lea    -0x4b(%ebp),%ebx
086b33d3 +0x0c9:  mov    0xc(%ebp),%eax
086b33d6 +0x0cc:  mov    %eax,(%esp)
086b33d9 +0x0cf:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086b33de +0x0d4:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086b33e4 +0x0da:  mov    %eax,0x4(%esp)
086b33e8 +0x0de:  mov    %edx,(%esp)
086b33eb +0x0e1:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086b33f0 +0x0e6:  movl   $0x2b,0x8(%esp)
086b33f8 +0x0ee:  mov    %ebx,0x4(%esp)
086b33fc +0x0f2:  mov    %eax,(%esp)
086b33ff +0x0f5:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
086b3404 +0x0fa:  lea    -0x20(%ebp),%eax
086b3407 +0x0fd:  mov    %eax,(%esp)
086b340a +0x100:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b340f +0x105:  lea    -0x20(%ebp),%eax
086b3412 +0x108:  mov    %eax,(%esp)
086b3415 +0x10b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b341a +0x110:  movl   $0xf9,0x8(%esp)
086b3422 +0x118:  movl   $0x0,0x4(%esp)
086b342a +0x120:  lea    -0x20(%ebp),%eax
086b342d +0x123:  mov    %eax,(%esp)
086b3430 +0x126:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b3435 +0x12b:  movzbl -0x5c(%ebp),%eax
086b3439 +0x12f:  mov    %eax,0x4(%esp)
086b343d +0x133:  lea    -0x20(%ebp),%eax
086b3440 +0x136:  mov    %eax,(%esp)
086b3443 +0x139:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b3448 +0x13e:  movl   $0x1,0x4(%esp)
086b3450 +0x146:  lea    -0x20(%ebp),%eax
086b3453 +0x149:  mov    %eax,(%esp)
086b3456 +0x14c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b345b +0x151:  lea    -0x20(%ebp),%eax
086b345e +0x154:  mov    %eax,0x4(%esp)
086b3462 +0x158:  mov    -0x14(%ebp),%eax
086b3465 +0x15b:  mov    %eax,(%esp)
086b3468 +0x15e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
086b346d +0x163:  jmp    086b348a <+0x180>
086b346f +0x165:  mov    %edx,%ebx
086b3471 +0x167:  mov    %eax,%esi
086b3473 +0x169:  lea    -0x20(%ebp),%eax
086b3476 +0x16c:  mov    %eax,(%esp)
086b3479 +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b347e +0x174:  mov    %esi,%eax
086b3480 +0x176:  mov    %ebx,%edx
086b3482 +0x178:  mov    %eax,(%esp)
086b3485 +0x17b:  call   08ae3750 <_Unwind_Resume>
086b348a +0x180:  lea    -0x20(%ebp),%eax
086b348d +0x183:  mov    %eax,(%esp)
086b3490 +0x186:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3495 +0x18b:  jmp    086b3498 <+0x18e>
086b3497 +0x18d:  nop
086b3498 +0x18e:  add    $0x70,%esp
086b349b +0x191:  pop    %ebx
086b349c +0x192:  pop    %esi
086b349d +0x193:  pop    %ebp
086b349e +0x194:  ret
086b349f +0x195:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::SendVillageMonsterFightResult @ 0x86b330a

/* village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool) */

void __thiscall
village_attacked::CVillageMonster::SendVillageMonsterFightResult
          (CVillageMonster *this,CUser *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CMonitorServerProxy *this_00;
  Packet_VillageMonsterFightResult local_4f [10];
  undefined4 auStack_45 [8];
  undefined1 local_25;
  PacketGuard local_24 [12];
  CParty *local_18;
  int local_14;
  CUser *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 != (CParty *)0x0) {
      Packet_VillageMonsterFightResult::Packet_VillageMonsterFightResult(local_4f);
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = (CUser *)CParty::get_user(local_18,local_14);
        iVar1 = local_14;
        if (local_10 != (CUser *)0x0) {
          uVar3 = CUser::GetUID(local_10);
          auStack_45[iVar1] = uVar3;
          iVar1 = local_14;
          uVar3 = CUser::get_charac_no(local_10,-1);
          auStack_45[iVar1 + 4] = uVar3;
          cVar2 = CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
          if ((cVar2 != '\0') && (param_2)) {
            CUserCharacInfo::IncVillageAttackCount((CUserCharacInfo *)local_10);
          }
        }
      }
      local_25 = param_2;
      uVar3 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar3);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_4f,0x2b);
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086b3415 to 086b346c has its CatchHandler @ 086b346f */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xf9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CParty::send_to_party(local_18,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
  }
  return;
}
```
