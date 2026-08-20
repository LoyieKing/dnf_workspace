# send_pvp_record

`_ZN5CUser15send_pvp_recordEv`

`CUser::send_pvp_record()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cd52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cd52  _ZN5CUser15send_pvp_recordEv
#           CUser::send_pvp_record()
# range [0x0865cd52, 0x0865cebf]
0865cd52 +0x000:  push   %ebp
0865cd53 +0x001:  mov    %esp,%ebp
0865cd55 +0x003:  push   %esi
0865cd56 +0x004:  push   %ebx
0865cd57 +0x005:  sub    $0x20,%esp
0865cd5a +0x008:  lea    -0x14(%ebp),%eax
0865cd5d +0x00b:  mov    %eax,(%esp)
0865cd60 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865cd65 +0x013:  movl   $0x30,0x8(%esp)
0865cd6d +0x01b:  movl   $0x0,0x4(%esp)
0865cd75 +0x023:  lea    -0x14(%ebp),%eax
0865cd78 +0x026:  mov    %eax,(%esp)
0865cd7b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865cd80 +0x02e:  mov    0x8(%ebp),%eax
0865cd83 +0x031:  mov    %eax,(%esp)
0865cd86 +0x034:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865cd8b +0x039:  mov    (%eax),%eax
0865cd8d +0x03b:  mov    %eax,0x4(%esp)
0865cd91 +0x03f:  lea    -0x14(%ebp),%eax
0865cd94 +0x042:  mov    %eax,(%esp)
0865cd97 +0x045:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865cd9c +0x04a:  mov    0x8(%ebp),%eax
0865cd9f +0x04d:  mov    %eax,(%esp)
0865cda2 +0x050:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865cda7 +0x055:  mov    0x4(%eax),%eax
0865cdaa +0x058:  mov    %eax,0x4(%esp)
0865cdae +0x05c:  lea    -0x14(%ebp),%eax
0865cdb1 +0x05f:  mov    %eax,(%esp)
0865cdb4 +0x062:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865cdb9 +0x067:  mov    0x8(%ebp),%eax
0865cdbc +0x06a:  mov    %eax,(%esp)
0865cdbf +0x06d:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865cdc4 +0x072:  mov    0x8(%eax),%eax
0865cdc7 +0x075:  mov    %eax,0x4(%esp)
0865cdcb +0x079:  lea    -0x14(%ebp),%eax
0865cdce +0x07c:  mov    %eax,(%esp)
0865cdd1 +0x07f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865cdd6 +0x084:  mov    0x8(%ebp),%eax
0865cdd9 +0x087:  mov    %eax,(%esp)
0865cddc +0x08a:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865cde1 +0x08f:  mov    0x14(%eax),%edx
0865cde4 +0x092:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0865cde9 +0x097:  mov    %edx,0x4(%esp)
0865cded +0x09b:  mov    %eax,(%esp)
0865cdf0 +0x09e:  call   085d4880 <_ZNK11RefPvpGrade19GetPvpCurrRankPointEi>  ; RefPvpGrade::GetPvpCurrRankPoint(int) const
0865cdf5 +0x0a3:  mov    %eax,0x4(%esp)
0865cdf9 +0x0a7:  lea    -0x14(%ebp),%eax
0865cdfc +0x0aa:  mov    %eax,(%esp)
0865cdff +0x0ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ce04 +0x0b2:  mov    0x8(%ebp),%eax
0865ce07 +0x0b5:  mov    %eax,(%esp)
0865ce0a +0x0b8:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865ce0f +0x0bd:  mov    0x14(%eax),%edx
0865ce12 +0x0c0:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0865ce17 +0x0c5:  mov    %edx,0x4(%esp)
0865ce1b +0x0c9:  mov    %eax,(%esp)
0865ce1e +0x0cc:  call   085d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>  ; RefPvpGrade::GetPvpNextRankPoint(int) const
0865ce23 +0x0d1:  mov    %eax,0x4(%esp)
0865ce27 +0x0d5:  lea    -0x14(%ebp),%eax
0865ce2a +0x0d8:  mov    %eax,(%esp)
0865ce2d +0x0db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865ce32 +0x0e0:  mov    0x8(%ebp),%eax
0865ce35 +0x0e3:  mov    %eax,(%esp)
0865ce38 +0x0e6:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865ce3d +0x0eb:  mov    0x14(%eax),%eax
0865ce40 +0x0ee:  mov    %eax,0x4(%esp)
0865ce44 +0x0f2:  lea    -0x14(%ebp),%eax
0865ce47 +0x0f5:  mov    %eax,(%esp)
0865ce4a +0x0f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ce4f +0x0fd:  mov    0x8(%ebp),%eax
0865ce52 +0x100:  mov    %eax,(%esp)
0865ce55 +0x103:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865ce5a +0x108:  mov    0x5c(%eax),%eax
0865ce5d +0x10b:  mov    %eax,0x4(%esp)
0865ce61 +0x10f:  lea    -0x14(%ebp),%eax
0865ce64 +0x112:  mov    %eax,(%esp)
0865ce67 +0x115:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ce6c +0x11a:  movl   $0x1,0x4(%esp)
0865ce74 +0x122:  lea    -0x14(%ebp),%eax
0865ce77 +0x125:  mov    %eax,(%esp)
0865ce7a +0x128:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865ce7f +0x12d:  lea    -0x14(%ebp),%eax
0865ce82 +0x130:  mov    %eax,0x4(%esp)
0865ce86 +0x134:  mov    0x8(%ebp),%eax
0865ce89 +0x137:  mov    %eax,(%esp)
0865ce8c +0x13a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865ce91 +0x13f:  jmp    0865ceae <+0x15c>
0865ce93 +0x141:  mov    %edx,%ebx
0865ce95 +0x143:  mov    %eax,%esi
0865ce97 +0x145:  lea    -0x14(%ebp),%eax
0865ce9a +0x148:  mov    %eax,(%esp)
0865ce9d +0x14b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865cea2 +0x150:  mov    %esi,%eax
0865cea4 +0x152:  mov    %ebx,%edx
0865cea6 +0x154:  mov    %eax,(%esp)
0865cea9 +0x157:  call   08ae3750 <_Unwind_Resume>
0865ceae +0x15c:  lea    -0x14(%ebp),%eax
0865ceb1 +0x15f:  mov    %eax,(%esp)
0865ceb4 +0x162:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865ceb9 +0x167:  add    $0x20,%esp
0865cebc +0x16a:  pop    %ebx
0865cebd +0x16b:  pop    %esi
0865cebe +0x16c:  pop    %ebp
0865cebf +0x16d:  ret
```

## 反编译 C

```c
// CUser::send_pvp_record @ 0x865cd52

/* CUser::send_pvp_record() */

void __thiscall CUser::send_pvp_record(CUser *this)

{
  int *piVar1;
  int iVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0865cd7b to 0865ce90 has its CatchHandler @ 0865ce93 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x30);
  piVar1 = (int *)CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*piVar1);
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(iVar2 + 4));
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(iVar2 + 8));
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  iVar2 = RefPvpGrade::GetPvpCurrRankPoint(GlobalData::s_ref_pvp_grade,*(int *)(iVar2 + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar2);
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  iVar2 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,*(int *)(iVar2 + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar2);
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,*(int *)(iVar2 + 0x14));
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,*(int *)(iVar2 + 0x5c));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
