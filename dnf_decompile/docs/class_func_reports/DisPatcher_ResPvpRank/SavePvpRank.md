# SavePvpRank

`_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK`

`DisPatcher_ResPvpRank::SavePvpRank(CUser*, MSG_RES_PVP_RANK&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ResPvpRank` | `0x081f05ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f05ea  _ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK
#           DisPatcher_ResPvpRank::SavePvpRank(CUser*, MSG_RES_PVP_RANK&)
# range [0x081f05ea, 0x081f088d]
081f05ea +0x000:  push   %ebp
081f05eb +0x001:  mov    %esp,%ebp
081f05ed +0x003:  push   %ebx
081f05ee +0x004:  sub    $0x64,%esp
081f05f1 +0x007:  movl   $0x0,-0x1c(%ebp)
081f05f8 +0x00e:  movl   $0x0,-0x18(%ebp)
081f05ff +0x015:  mov    0x10(%ebp),%eax
081f0602 +0x018:  mov    0x89(%eax),%eax
081f0608 +0x01e:  mov    %eax,-0x1c(%ebp)
081f060b +0x021:  mov    0x10(%ebp),%eax
081f060e +0x024:  mov    0x8d(%eax),%ecx
081f0614 +0x02a:  mov    $0x10624dd3,%edx
081f0619 +0x02f:  mov    %ecx,%eax
081f061b +0x031:  imul   %edx
081f061d +0x033:  sar    $0x6,%edx
081f0620 +0x036:  mov    %ecx,%eax
081f0622 +0x038:  sar    $0x1f,%eax
081f0625 +0x03b:  mov    %edx,%ecx
081f0627 +0x03d:  sub    %eax,%ecx
081f0629 +0x03f:  mov    %ecx,%eax
081f062b +0x041:  mov    %eax,-0x18(%ebp)
081f062e +0x044:  cmpl   $0x2710,-0x1c(%ebp)
081f0635 +0x04b:  jbe    081f06bf <+0xd5>
081f063b +0x051:  movl   $0x0,-0x10(%ebp)
081f0642 +0x058:  movl   $0x0,-0xc(%ebp)
081f0649 +0x05f:  mov    -0x1c(%ebp),%eax
081f064c +0x062:  mov    %eax,-0x3c(%ebp)
081f064f +0x065:  mov    $0xd1b71759,%edx
081f0654 +0x06a:  mov    -0x3c(%ebp),%eax
081f0657 +0x06d:  mul    %edx
081f0659 +0x06f:  mov    %edx,%eax
081f065b +0x071:  shr    $0xd,%eax
081f065e +0x074:  mov    %eax,-0x10(%ebp)
081f0661 +0x077:  mov    -0x1c(%ebp),%ecx
081f0664 +0x07a:  mov    $0xd1b71759,%edx
081f0669 +0x07f:  mov    %ecx,%eax
081f066b +0x081:  mul    %edx
081f066d +0x083:  mov    %edx,%eax
081f066f +0x085:  shr    $0xd,%eax
081f0672 +0x088:  imul   $0x2710,%eax,%eax
081f0678 +0x08e:  mov    %ecx,%edx
081f067a +0x090:  sub    %eax,%edx
081f067c +0x092:  mov    %edx,%eax
081f067e +0x094:  mov    %eax,-0xc(%ebp)
081f0681 +0x097:  mov    -0x10(%ebp),%ebx
081f0684 +0x09a:  mov    0xc(%ebp),%eax
081f0687 +0x09d:  mov    %eax,(%esp)
081f068a +0x0a0:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f068f +0x0a5:  mov    -0x18(%ebp),%edx
081f0692 +0x0a8:  mov    %edx,0x14(%esp)
081f0696 +0x0ac:  mov    %ebx,0x10(%esp)
081f069a +0x0b0:  movl   $0x1,0xc(%esp)
081f06a2 +0x0b8:  movl   $0x76,0x8(%esp)
081f06aa +0x0c0:  mov    0xc(%ebp),%edx
081f06ad +0x0c3:  mov    %edx,0x4(%esp)
081f06b1 +0x0c7:  mov    %eax,(%esp)
081f06b4 +0x0ca:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f06b9 +0x0cf:  mov    -0xc(%ebp),%eax
081f06bc +0x0d2:  mov    %eax,-0x1c(%ebp)
081f06bf +0x0d5:  mov    0xc(%ebp),%eax
081f06c2 +0x0d8:  mov    %eax,(%esp)
081f06c5 +0x0db:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081f06ca +0x0e0:  cmp    $0x3,%eax
081f06cd +0x0e3:  je     081f06ee <+0x104>
081f06cf +0x0e5:  mov    0xc(%ebp),%eax
081f06d2 +0x0e8:  mov    %eax,(%esp)
081f06d5 +0x0eb:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081f06da +0x0f0:  cmp    $0x4,%eax
081f06dd +0x0f3:  jne    081f06f5 <+0x10b>
081f06df +0x0f5:  mov    0xc(%ebp),%eax
081f06e2 +0x0f8:  mov    %eax,(%esp)
081f06e5 +0x0fb:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081f06ea +0x100:  cmp    $0x2,%al
081f06ec +0x102:  jne    081f06f5 <+0x10b>
081f06ee +0x104:  mov    $0x1,%eax
081f06f3 +0x109:  jmp    081f06fa <+0x110>
081f06f5 +0x10b:  mov    $0x0,%eax
081f06fa +0x110:  test   %al,%al
081f06fc +0x112:  je     081f0738 <+0x14e>
081f06fe +0x114:  mov    -0x1c(%ebp),%eax
081f0701 +0x117:  mov    $0x0,%edx
081f0706 +0x11c:  mov    %eax,-0x30(%ebp)
081f0709 +0x11f:  mov    %edx,-0x2c(%ebp)
081f070c +0x122:  fildll -0x30(%ebp)
081f070f +0x125:  fldl   &data#78e7013f(.rodata)
081f0715 +0x12b:  fmulp  %st,%st(1)
081f0717 +0x12d:  fnstcw -0x32(%ebp)
081f071a +0x130:  movzwl -0x32(%ebp),%eax
081f071e +0x134:  mov    $0xc,%ah
081f0720 +0x136:  mov    %ax,-0x34(%ebp)
081f0724 +0x13a:  fldcw  -0x34(%ebp)
081f0727 +0x13d:  fistpll -0x30(%ebp)
081f072a +0x140:  fldcw  -0x32(%ebp)
081f072d +0x143:  mov    -0x30(%ebp),%eax
081f0730 +0x146:  mov    -0x2c(%ebp),%edx
081f0733 +0x149:  mov    %eax,-0x1c(%ebp)
081f0736 +0x14c:  jmp    081f0770 <+0x186>
081f0738 +0x14e:  mov    -0x1c(%ebp),%eax
081f073b +0x151:  mov    $0x0,%edx
081f0740 +0x156:  mov    %eax,-0x30(%ebp)
081f0743 +0x159:  mov    %edx,-0x2c(%ebp)
081f0746 +0x15c:  fildll -0x30(%ebp)
081f0749 +0x15f:  fldl   &data#7055a9cf(.rodata)
081f074f +0x165:  fmulp  %st,%st(1)
081f0751 +0x167:  fnstcw -0x32(%ebp)
081f0754 +0x16a:  movzwl -0x32(%ebp),%eax
081f0758 +0x16e:  mov    $0xc,%ah
081f075a +0x170:  mov    %ax,-0x34(%ebp)
081f075e +0x174:  fldcw  -0x34(%ebp)
081f0761 +0x177:  fistpll -0x30(%ebp)
081f0764 +0x17a:  fldcw  -0x32(%ebp)
081f0767 +0x17d:  mov    -0x30(%ebp),%eax
081f076a +0x180:  mov    -0x2c(%ebp),%edx
081f076d +0x183:  mov    %eax,-0x1c(%ebp)
081f0770 +0x186:  mov    -0x1c(%ebp),%eax
081f0773 +0x189:  cmp    -0x18(%ebp),%eax
081f0776 +0x18c:  jbe    081f07b0 <+0x1c6>
081f0778 +0x18e:  mov    0xc(%ebp),%eax
081f077b +0x191:  mov    %eax,(%esp)
081f077e +0x194:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f0783 +0x199:  mov    -0x18(%ebp),%edx
081f0786 +0x19c:  mov    %edx,0x14(%esp)
081f078a +0x1a0:  mov    -0x1c(%ebp),%edx
081f078d +0x1a3:  mov    %edx,0x10(%esp)
081f0791 +0x1a7:  movl   $0x1,0xc(%esp)
081f0799 +0x1af:  movl   $0x73,0x8(%esp)
081f07a1 +0x1b7:  mov    0xc(%ebp),%edx
081f07a4 +0x1ba:  mov    %edx,0x4(%esp)
081f07a8 +0x1be:  mov    %eax,(%esp)
081f07ab +0x1c1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f07b0 +0x1c6:  mov    0x10(%ebp),%eax
081f07b3 +0x1c9:  add    $0xd,%eax
081f07b6 +0x1cc:  mov    %eax,0x4(%esp)
081f07ba +0x1d0:  mov    0xc(%ebp),%eax
081f07bd +0x1d3:  mov    %eax,(%esp)
081f07c0 +0x1d6:  call   0865cf84 <_ZN5CUser15update_pvp_rankERK13PvpResultType>  ; CUser::update_pvp_rank(PvpResultType const&)
081f07c5 +0x1db:  mov    %al,-0x1d(%ebp)
081f07c8 +0x1de:  movzbl -0x1d(%ebp),%eax
081f07cc +0x1e2:  xor    $0x1,%eax
081f07cf +0x1e5:  test   %al,%al
081f07d1 +0x1e7:  je     081f07dd <+0x1f3>
081f07d3 +0x1e9:  mov    $0x0,%eax
081f07d8 +0x1ee:  jmp    081f0887 <+0x29d>
081f07dd +0x1f3:  mov    0xc(%ebp),%eax
081f07e0 +0x1f6:  mov    %eax,(%esp)
081f07e3 +0x1f9:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081f07e8 +0x1fe:  mov    %eax,-0x14(%ebp)
081f07eb +0x201:  cmpl   $0x0,-0x14(%ebp)
081f07ef +0x205:  jne    081f07fb <+0x211>
081f07f1 +0x207:  mov    $0x0,%eax
081f07f6 +0x20c:  jmp    081f0887 <+0x29d>
081f07fb +0x211:  mov    0x10(%ebp),%eax
081f07fe +0x214:  lea    0xd(%eax),%ebx
081f0801 +0x217:  mov    0xc(%ebp),%eax
081f0804 +0x21a:  mov    %eax,0x4(%esp)
081f0808 +0x21e:  mov    -0x14(%ebp),%eax
081f080b +0x221:  mov    %eax,(%esp)
081f080e +0x224:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
081f0813 +0x229:  mov    %ebx,0x8(%esp)
081f0817 +0x22d:  mov    %eax,0x4(%esp)
081f081b +0x231:  mov    -0x14(%ebp),%eax
081f081e +0x234:  mov    %eax,(%esp)
081f0821 +0x237:  call   085dc034 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType>  ; PvP_Room::SetPVPResult(int, PvpResultType const&)
081f0826 +0x23c:  mov    0xc(%ebp),%eax
081f0829 +0x23f:  mov    %eax,0x4(%esp)
081f082d +0x243:  mov    -0x14(%ebp),%eax
081f0830 +0x246:  mov    %eax,(%esp)
081f0833 +0x249:  call   085dbf82 <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser>  ; PvP_Room::set_recv_pvp_rank_flag(CUser*)
081f0838 +0x24e:  xor    $0x1,%eax
081f083b +0x251:  test   %al,%al
081f083d +0x253:  je     081f0846 <+0x25c>
081f083f +0x255:  mov    $0x0,%eax
081f0844 +0x25a:  jmp    081f0887 <+0x29d>
081f0846 +0x25c:  mov    -0x14(%ebp),%eax
081f0849 +0x25f:  mov    %eax,(%esp)
081f084c +0x262:  call   085dc4ba <_ZNK8PvP_Room17recv_pvp_rank_allEv>  ; PvP_Room::recv_pvp_rank_all() const
081f0851 +0x267:  test   %al,%al
081f0853 +0x269:  je     081f0862 <+0x278>
081f0855 +0x26b:  mov    -0x14(%ebp),%eax
081f0858 +0x26e:  mov    %eax,(%esp)
081f085b +0x271:  call   085dc476 <_ZN8PvP_Room12send_pvp_endEv>  ; PvP_Room::send_pvp_end()
081f0860 +0x276:  jmp    081f0882 <+0x298>
081f0862 +0x278:  mov    -0x14(%ebp),%eax
081f0865 +0x27b:  mov    %eax,(%esp)
081f0868 +0x27e:  call   085dc2cc <_ZN8PvP_Room23get_recv_pvp_rank_countEv>  ; PvP_Room::get_recv_pvp_rank_count()
081f086d +0x283:  cmp    $0x1,%eax
081f0870 +0x286:  sete   %al
081f0873 +0x289:  test   %al,%al
081f0875 +0x28b:  je     081f0882 <+0x298>
081f0877 +0x28d:  mov    -0x14(%ebp),%eax
081f087a +0x290:  mov    %eax,(%esp)
081f087d +0x293:  call   085dc340 <_ZN8PvP_Room26insert_timer_recv_pvp_rankEv>  ; PvP_Room::insert_timer_recv_pvp_rank()
081f0882 +0x298:  mov    $0x1,%eax
081f0887 +0x29d:  add    $0x64,%esp
081f088a +0x2a0:  pop    %ebx
081f088b +0x2a1:  pop    %ebp
081f088c +0x2a2:  ret
081f088d +0x2a3:  nop
```

## 反编译 C

```c
// DisPatcher_ResPvpRank::SavePvpRank @ 0x81f05ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_ResPvpRank::SavePvpRank(CUser*, MSG_RES_PVP_RANK&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::SavePvpRank
          (DisPatcher_ResPvpRank *this,CUser *param_1,MSG_RES_PVP_RANK *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  undefined4 uVar7;
  PvP_Room *this_00;
  ulonglong local_34;
  uint local_20;
  
  local_20 = *(uint *)(param_2 + 0x89);
  uVar2 = *(int *)(param_2 + 0x8d) / 1000;
  if (10000 < local_20) {
    uVar4 = local_20 / 10000;
    local_20 = local_20 % 10000;
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x76,1,uVar4,uVar2);
  }
  iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar6 == 3) {
LAB_081f06ee:
    bVar1 = true;
  }
  else {
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 == 4) {
      cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      if (cVar3 == '\x02') goto LAB_081f06ee;
    }
    bVar1 = false;
  }
  if (bVar1) {
    local_34 = (ulonglong)local_20;
    local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
    local_20 = (uint)local_34;
  }
  else {
    local_34 = (ulonglong)local_20;
    local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
    local_20 = (uint)local_34;
  }
  if (uVar2 < local_20) {
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x73,1,local_20,uVar2);
  }
  cVar3 = CUser::update_pvp_rank(param_1,(PvpResultType *)(param_2 + 0xd));
  if (cVar3 == '\x01') {
    this_00 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (this_00 == (PvP_Room *)0x0) {
      uVar7 = 0;
    }
    else {
      iVar6 = PvP_Room::get_user_seat(this_00,param_1);
      PvP_Room::SetPVPResult(this_00,iVar6,(PvpResultType *)(param_2 + 0xd));
      cVar3 = PvP_Room::set_recv_pvp_rank_flag(this_00,param_1);
      if (cVar3 == '\x01') {
        cVar3 = PvP_Room::recv_pvp_rank_all(this_00);
        if (cVar3 == '\0') {
          iVar6 = PvP_Room::get_recv_pvp_rank_count(this_00);
          if (iVar6 == 1) {
            PvP_Room::insert_timer_recv_pvp_rank(this_00);
          }
        }
        else {
          PvP_Room::send_pvp_end(this_00);
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
