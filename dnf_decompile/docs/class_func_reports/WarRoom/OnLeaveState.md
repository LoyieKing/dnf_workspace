# OnLeaveState

`_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE`

`WarRoom::OnLeaveState(WARROOM_STATE)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bcf14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bcf14  _ZN7WarRoom12OnLeaveStateE13WARROOM_STATE
#           WarRoom::OnLeaveState(WARROOM_STATE)
# range [0x086bcf14, 0x086bd093]
086bcf14 +0x000:  push   %ebp
086bcf15 +0x001:  mov    %esp,%ebp
086bcf17 +0x003:  push   %ebx
086bcf18 +0x004:  sub    $0x34,%esp
086bcf1b +0x007:  mov    0xc(%ebp),%eax
086bcf1e +0x00a:  test   %eax,%eax
086bcf20 +0x00c:  jne    086bcf2d <+0x19>
086bcf22 +0x00e:  mov    0x8(%ebp),%eax
086bcf25 +0x011:  mov    %eax,(%esp)
086bcf28 +0x014:  call   086c077e <_ZN7WarRoom17CurSpawnStepResetEv>  ; WarRoom::CurSpawnStepReset()
086bcf2d +0x019:  mov    0x8(%ebp),%eax
086bcf30 +0x01c:  mov    0x144(%eax),%eax
086bcf36 +0x022:  test   %eax,%eax
086bcf38 +0x024:  je     086bd08c <+0x178>
086bcf3e +0x02a:  cmp    $0x2,%eax
086bcf41 +0x02d:  jne    086bd08d <+0x179>
086bcf47 +0x033:  mov    0xc(%ebp),%eax
086bcf4a +0x036:  cmp    $0x3,%eax
086bcf4d +0x039:  jne    086bd08d <+0x179>
086bcf53 +0x03f:  movl   $0x0,-0x10(%ebp)
086bcf5a +0x046:  jmp    086bd07b <+0x167>
086bcf5f +0x04b:  mov    -0x10(%ebp),%edx
086bcf62 +0x04e:  mov    0x8(%ebp),%eax
086bcf65 +0x051:  add    $0x48,%edx
086bcf68 +0x054:  mov    0xc(%eax,%edx,4),%eax
086bcf6c +0x058:  test   %eax,%eax
086bcf6e +0x05a:  je     086bd076 <+0x162>
086bcf74 +0x060:  mov    -0x10(%ebp),%edx
086bcf77 +0x063:  mov    0x8(%ebp),%eax
086bcf7a +0x066:  add    $0x48,%edx
086bcf7d +0x069:  mov    0xc(%eax,%edx,4),%eax
086bcf81 +0x06d:  mov    %eax,(%esp)
086bcf84 +0x070:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086bcf89 +0x075:  mov    %eax,-0x24(%ebp)
086bcf8c +0x078:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bcf91 +0x07d:  mov    0x8(%ebp),%edx
086bcf94 +0x080:  movzbl (%edx),%edx
086bcf97 +0x083:  movzbl %dl,%edx
086bcf9a +0x086:  add    $0x221c,%edx
086bcfa0 +0x08c:  shl    $0x2,%edx
086bcfa3 +0x08f:  add    %edx,%eax
086bcfa5 +0x091:  lea    0x4(%eax),%edx
086bcfa8 +0x094:  lea    -0x24(%ebp),%eax
086bcfab +0x097:  mov    %eax,0x4(%esp)
086bcfaf +0x09b:  mov    %edx,(%esp)
086bcfb2 +0x09e:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
086bcfb7 +0x0a3:  mov    (%eax),%eax
086bcfb9 +0x0a5:  mov    %eax,-0xc(%ebp)
086bcfbc +0x0a8:  mov    -0x10(%ebp),%edx
086bcfbf +0x0ab:  mov    0x8(%ebp),%eax
086bcfc2 +0x0ae:  add    $0x48,%edx
086bcfc5 +0x0b1:  mov    0xc(%eax,%edx,4),%eax
086bcfc9 +0x0b5:  mov    %eax,(%esp)
086bcfcc +0x0b8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bcfd1 +0x0bd:  movl   $0x1,0xc(%esp)
086bcfd9 +0x0c5:  movl   $0xf,0x8(%esp)
086bcfe1 +0x0cd:  mov    -0xc(%ebp),%edx
086bcfe4 +0x0d0:  mov    %edx,0x4(%esp)
086bcfe8 +0x0d4:  mov    %eax,(%esp)
086bcfeb +0x0d7:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
086bcff0 +0x0dc:  mov    -0x10(%ebp),%edx
086bcff3 +0x0df:  mov    0x8(%ebp),%eax
086bcff6 +0x0e2:  add    $0x48,%edx
086bcff9 +0x0e5:  mov    0xc(%eax,%edx,4),%eax
086bcffd +0x0e9:  mov    %eax,(%esp)
086bd000 +0x0ec:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bd005 +0x0f1:  test   %eax,%eax
086bd007 +0x0f3:  setg   %al
086bd00a +0x0f6:  test   %al,%al
086bd00c +0x0f8:  je     086bd077 <+0x163>
086bd00e +0x0fa:  mov    -0x10(%ebp),%edx
086bd011 +0x0fd:  mov    0x8(%ebp),%eax
086bd014 +0x100:  add    $0x48,%edx
086bd017 +0x103:  mov    0xc(%eax,%edx,4),%eax
086bd01b +0x107:  mov    %eax,(%esp)
086bd01e +0x10a:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bd023 +0x10f:  mov    %eax,%ebx
086bd025 +0x111:  movl   $0x5,0xc(%esp)
086bd02d +0x119:  movl   $0x55b,0x8(%esp)
086bd035 +0x121:  movl   $&_ZZN7WarRoom12OnLeaveStateE13WARROOM_STATEE19__PRETTY_FUNCTION__,0x4(%esp)
086bd03d +0x129:  lea    -0x20(%ebp),%eax
086bd040 +0x12c:  mov    %eax,(%esp)
086bd043 +0x12f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bd048 +0x134:  mov    %ebx,0x8(%esp)
086bd04c +0x138:  movl   $"쟁역 FP누적됨 발생",0x4(%esp)
086bd054 +0x140:  lea    -0x20(%ebp),%eax
086bd057 +0x143:  mov    %eax,(%esp)
086bd05a +0x146:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bd05f +0x14b:  mov    -0x10(%ebp),%edx
086bd062 +0x14e:  mov    0x8(%ebp),%eax
086bd065 +0x151:  add    $0x48,%edx
086bd068 +0x154:  mov    0xc(%eax,%edx,4),%eax
086bd06c +0x158:  mov    %eax,(%esp)
086bd06f +0x15b:  call   0864592a <_ZN15CUserCharacInfo15InitFinishPointEv>  ; CUserCharacInfo::InitFinishPoint()
086bd074 +0x160:  jmp    086bd077 <+0x163>
086bd076 +0x162:  nop
086bd077 +0x163:  addl   $0x1,-0x10(%ebp)
086bd07b +0x167:  cmpl   $0x5,-0x10(%ebp)
086bd07f +0x16b:  setle  %al
086bd082 +0x16e:  test   %al,%al
086bd084 +0x170:  jne    086bcf5f <+0x4b>
086bd08a +0x176:  jmp    086bd08d <+0x179>
086bd08c +0x178:  nop
086bd08d +0x179:  add    $0x34,%esp
086bd090 +0x17c:  pop    %ebx
086bd091 +0x17d:  pop    %ebp
086bd092 +0x17e:  ret
086bd093 +0x17f:  nop
```

## 反编译 C

```c
// WarRoom::OnLeaveState @ 0x86bcf14

/* WarRoom::OnLeaveState(WARROOM_STATE) */

void __thiscall WarRoom::OnLeaveState(WarRoom *this,int param_2)

{
  int iVar1;
  int *piVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  int local_28;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (param_2 == 0) {
    CurSpawnStepReset(this);
  }
  if (((*(int *)(this + 0x144) != 0) && (*(int *)(this + 0x144) == 2)) && (param_2 == 3)) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        local_28 = CUserCharacInfo::getCurCharacMoney
                             (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        iVar1 = G_CDataManager();
        piVar2 = std::min<int>((int *)(iVar1 + ((byte)*this + 0x221c) * 4 + 4),&local_28);
        local_10 = *piVar2;
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        CInventory::use_money(pCVar3,local_10,0xf,1);
        iVar1 = CUserCharacInfo::GetFinishPointTotal
                          (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        if (0 < iVar1) {
          uVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
          cMyTrace::cMyTrace(local_24,"void WarRoom::OnLeaveState(WARROOM_STATE)",0x55b,5);
          cMyTrace::operator()(local_24,&DAT_08cf9547,uVar4);
          CUserCharacInfo::InitFinishPoint
                    (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        }
      }
    }
  }
  return;
}
```
