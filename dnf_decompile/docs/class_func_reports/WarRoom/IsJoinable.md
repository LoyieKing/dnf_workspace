# IsJoinable

`_ZN7WarRoom10IsJoinableEP5CUser`

`WarRoom::IsJoinable(CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bacae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bacae  _ZN7WarRoom10IsJoinableEP5CUser
#           WarRoom::IsJoinable(CUser*)
# range [0x086bacae, 0x086bae99]
086bacae +0x000:  push   %ebp
086bacaf +0x001:  mov    %esp,%ebp
086bacb1 +0x003:  push   %ebx
086bacb2 +0x004:  sub    $0x24,%esp
086bacb5 +0x007:  mov    0x8(%ebp),%eax
086bacb8 +0x00a:  mov    %eax,(%esp)
086bacbb +0x00d:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bacc0 +0x012:  cmp    $0x4,%eax
086bacc3 +0x015:  je     086bacf5 <+0x47>
086bacc5 +0x017:  mov    0x8(%ebp),%eax
086bacc8 +0x01a:  mov    %eax,(%esp)
086baccb +0x01d:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bacd0 +0x022:  cmp    $0x3,%eax
086bacd3 +0x025:  je     086bacf5 <+0x47>
086bacd5 +0x027:  mov    0x8(%ebp),%eax
086bacd8 +0x02a:  mov    %eax,(%esp)
086bacdb +0x02d:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bace0 +0x032:  cmp    $0xffffffff,%eax
086bace3 +0x035:  je     086bacf5 <+0x47>
086bace5 +0x037:  mov    0x8(%ebp),%eax
086bace8 +0x03a:  mov    %eax,(%esp)
086baceb +0x03d:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bacf0 +0x042:  cmp    $0x2,%eax
086bacf3 +0x045:  jne    086bacfc <+0x4e>
086bacf5 +0x047:  mov    $0x1,%eax
086bacfa +0x04c:  jmp    086bad01 <+0x53>
086bacfc +0x04e:  mov    $0x0,%eax
086bad01 +0x053:  test   %al,%al
086bad03 +0x055:  je     086bad0f <+0x61>
086bad05 +0x057:  mov    $0x13,%eax
086bad0a +0x05c:  jmp    086bae94 <+0x1e6>
086bad0f +0x061:  mov    0xc(%ebp),%eax
086bad12 +0x064:  mov    %eax,(%esp)
086bad15 +0x067:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
086bad1a +0x06c:  test   %al,%al
086bad1c +0x06e:  je     086bad28 <+0x7a>
086bad1e +0x070:  mov    $0x15,%eax
086bad23 +0x075:  jmp    086bae94 <+0x1e6>
086bad28 +0x07a:  mov    0xc(%ebp),%eax
086bad2b +0x07d:  mov    %eax,(%esp)
086bad2e +0x080:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086bad33 +0x085:  mov    %eax,%ebx
086bad35 +0x087:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bad3a +0x08c:  mov    0x8(%ebp),%edx
086bad3d +0x08f:  movzbl (%edx),%edx
086bad40 +0x092:  movzbl %dl,%edx
086bad43 +0x095:  add    $0x221c,%edx
086bad49 +0x09b:  mov    0x4(%eax,%edx,4),%eax
086bad4d +0x09f:  cmp    %eax,%ebx
086bad4f +0x0a1:  setl   %al
086bad52 +0x0a4:  test   %al,%al
086bad54 +0x0a6:  je     086bad60 <+0xb2>
086bad56 +0x0a8:  mov    $0xa,%eax
086bad5b +0x0ad:  jmp    086bae94 <+0x1e6>
086bad60 +0x0b2:  mov    0xc(%ebp),%eax
086bad63 +0x0b5:  mov    %eax,(%esp)
086bad66 +0x0b8:  call   08656500 <_ZN5CUser12CheckFatigueEv>  ; CUser::CheckFatigue()
086bad6b +0x0bd:  xor    $0x1,%eax
086bad6e +0x0c0:  test   %al,%al
086bad70 +0x0c2:  je     086bad7c <+0xce>
086bad72 +0x0c4:  mov    $0x43,%eax
086bad77 +0x0c9:  jmp    086bae94 <+0x1e6>
086bad7c +0x0ce:  mov    0xc(%ebp),%eax
086bad7f +0x0d1:  mov    %eax,(%esp)
086bad82 +0x0d4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086bad87 +0x0d9:  mov    %eax,-0x10(%ebp)
086bad8a +0x0dc:  mov    0x8(%ebp),%eax
086bad8d +0x0df:  movzbl (%eax),%eax
086bad90 +0x0e2:  movzbl %al,%eax
086bad93 +0x0e5:  cmp    $0x6,%eax
086bad96 +0x0e8:  ja     086bae0f <+0x161>
086bad98 +0x0ea:  mov    &data#1096bf04(.rodata)(,%eax,4),%eax
086bad9f +0x0f1:  jmp    *%eax
086bada1 +0x0f3:  cmpl   $0x13,-0x10(%ebp)
086bada5 +0x0f7:  jle    086badad <+0xff>
086bada7 +0x0f9:  cmpl   $0x1d,-0x10(%ebp)
086badab +0x0fd:  jle    086bae16 <+0x168>
086badad +0x0ff:  mov    $0xe,%eax
086badb2 +0x104:  jmp    086bae94 <+0x1e6>
086badb7 +0x109:  cmpl   $0x1d,-0x10(%ebp)
086badbb +0x10d:  jle    086badc3 <+0x115>
086badbd +0x10f:  cmpl   $0x27,-0x10(%ebp)
086badc1 +0x113:  jle    086bae19 <+0x16b>
086badc3 +0x115:  mov    $0xe,%eax
086badc8 +0x11a:  jmp    086bae94 <+0x1e6>
086badcd +0x11f:  cmpl   $0x27,-0x10(%ebp)
086badd1 +0x123:  jle    086badd9 <+0x12b>
086badd3 +0x125:  cmpl   $0x31,-0x10(%ebp)
086badd7 +0x129:  jle    086bae1c <+0x16e>
086badd9 +0x12b:  mov    $0xe,%eax
086badde +0x130:  jmp    086bae94 <+0x1e6>
086bade3 +0x135:  cmpl   $0x31,-0x10(%ebp)
086bade7 +0x139:  jle    086badef <+0x141>
086bade9 +0x13b:  cmpl   $0x3b,-0x10(%ebp)
086baded +0x13f:  jle    086bae1f <+0x171>
086badef +0x141:  mov    $0xe,%eax
086badf4 +0x146:  jmp    086bae94 <+0x1e6>
086badf9 +0x14b:  cmpl   $0x3b,-0x10(%ebp)
086badfd +0x14f:  jle    086bae05 <+0x157>
086badff +0x151:  cmpl   $0x46,-0x10(%ebp)
086bae03 +0x155:  jle    086bae22 <+0x174>
086bae05 +0x157:  mov    $0xe,%eax
086bae0a +0x15c:  jmp    086bae94 <+0x1e6>
086bae0f +0x161:  mov    $0xe,%eax
086bae14 +0x166:  jmp    086bae94 <+0x1e6>
086bae16 +0x168:  nop
086bae17 +0x169:  jmp    086bae23 <+0x175>
086bae19 +0x16b:  nop
086bae1a +0x16c:  jmp    086bae23 <+0x175>
086bae1c +0x16e:  nop
086bae1d +0x16f:  jmp    086bae23 <+0x175>
086bae1f +0x171:  nop
086bae20 +0x172:  jmp    086bae23 <+0x175>
086bae22 +0x174:  nop
086bae23 +0x175:  mov    0x8(%ebp),%eax
086bae26 +0x178:  mov    %eax,(%esp)
086bae29 +0x17b:  call   086ba850 <_ZN7WarRoom13UpdateBanListEv>  ; WarRoom::UpdateBanList()
086bae2e +0x180:  mov    0xc(%ebp),%eax
086bae31 +0x183:  mov    %eax,0x4(%esp)
086bae35 +0x187:  mov    0x8(%ebp),%eax
086bae38 +0x18a:  mov    %eax,(%esp)
086bae3b +0x18d:  call   086ba99e <_ZN7WarRoom9IsBanUserEP5CUser>  ; WarRoom::IsBanUser(CUser*)
086bae40 +0x192:  test   %al,%al
086bae42 +0x194:  je     086bae4b <+0x19d>
086bae44 +0x196:  mov    $0x1e,%eax
086bae49 +0x19b:  jmp    086bae94 <+0x1e6>
086bae4b +0x19d:  movl   $0x0,-0xc(%ebp)
086bae52 +0x1a4:  jmp    086bae84 <+0x1d6>
086bae54 +0x1a6:  mov    -0xc(%ebp),%edx
086bae57 +0x1a9:  mov    0x8(%ebp),%eax
086bae5a +0x1ac:  add    $0x48,%edx
086bae5d +0x1af:  mov    0xc(%eax,%edx,4),%eax
086bae61 +0x1b3:  test   %eax,%eax
086bae63 +0x1b5:  jne    086bae80 <+0x1d2>
086bae65 +0x1b7:  mov    -0xc(%ebp),%edx
086bae68 +0x1ba:  mov    0x8(%ebp),%eax
086bae6b +0x1bd:  add    $0x50,%edx
086bae6e +0x1c0:  mov    0x8(%eax,%edx,4),%eax
086bae72 +0x1c4:  cmp    $0xff,%eax
086bae77 +0x1c9:  jne    086bae80 <+0x1d2>
086bae79 +0x1cb:  mov    $0x0,%eax
086bae7e +0x1d0:  jmp    086bae94 <+0x1e6>
086bae80 +0x1d2:  addl   $0x1,-0xc(%ebp)
086bae84 +0x1d6:  cmpl   $0x5,-0xc(%ebp)
086bae88 +0x1da:  setle  %al
086bae8b +0x1dd:  test   %al,%al
086bae8d +0x1df:  jne    086bae54 <+0x1a6>
086bae8f +0x1e1:  mov    $0x4,%eax
086bae94 +0x1e6:  add    $0x24,%esp
086bae97 +0x1e9:  pop    %ebx
086bae98 +0x1ea:  pop    %ebp
086bae99 +0x1eb:  ret
```

## 反编译 C

```c
// WarRoom::IsJoinable @ 0x86bacae

/* WarRoom::IsJoinable(CUser*) */

undefined4 __thiscall WarRoom::IsJoinable(WarRoom *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_10;
  
  iVar3 = GetState(this);
  if ((((iVar3 == 4) || (iVar3 = GetState(this), iVar3 == 3)) ||
      (iVar3 = GetState(this), iVar3 == -1)) || (iVar3 = GetState(this), iVar3 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = 0x13;
  }
  else {
    cVar2 = CUser::isCompetitionMercenary(param_1);
    if (cVar2 == '\0') {
      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      iVar5 = G_CDataManager();
      if (iVar3 < *(int *)(iVar5 + 4 + ((byte)*this + 0x221c) * 4)) {
        uVar4 = 10;
      }
      else {
        cVar2 = CUser::CheckFatigue(param_1);
        if (cVar2 == '\x01') {
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          switch(*this) {
          default:
            return 0xe;
          case (WarRoom)0x2:
            if ((iVar3 < 0x14) || (0x1d < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x3:
            if ((iVar3 < 0x1e) || (0x27 < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x4:
            if ((iVar3 < 0x28) || (0x31 < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x5:
            if ((iVar3 < 0x32) || (0x3b < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x6:
            if ((iVar3 < 0x3c) || (0x46 < iVar3)) {
              return 0xe;
            }
          }
          UpdateBanList(this);
          cVar2 = IsBanUser(this,param_1);
          if (cVar2 == '\0') {
            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
              if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) &&
                 (*(int *)(this + (local_10 + 0x50) * 4 + 8) == 0xff)) {
                return 0;
              }
            }
            uVar4 = 4;
          }
          else {
            uVar4 = 0x1e;
          }
        }
        else {
          uVar4 = 0x43;
        }
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  return uVar4;
}
```
