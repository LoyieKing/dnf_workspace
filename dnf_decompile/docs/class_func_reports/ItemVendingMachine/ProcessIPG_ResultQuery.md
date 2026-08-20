# ProcessIPG_ResultQuery

`_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream`

`ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081784d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081784d4  _ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream
#           ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x081784d4, 0x0817866b]
081784d4 +0x000:  push   %ebp
081784d5 +0x001:  mov    %esp,%ebp
081784d7 +0x003:  push   %esi
081784d8 +0x004:  push   %ebx
081784d9 +0x005:  sub    $0x40,%esp
081784dc +0x008:  cmpl   $0x0,0xc(%ebp)
081784e0 +0x00c:  je     08178664 <+0x190>
081784e6 +0x012:  lea    -0x20(%ebp),%eax
081784e9 +0x015:  mov    %eax,(%esp)
081784ec +0x018:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081784f1 +0x01d:  mov    0x14(%ebp),%eax
081784f4 +0x020:  add    $0xb1,%eax
081784f9 +0x025:  mov    %eax,(%esp)
081784fc +0x028:  call   0807e6f0 <_init+0xfe8>
08178501 +0x02d:  mov    %eax,-0x14(%ebp)
08178504 +0x030:  cmpl   $0x0,-0x14(%ebp)
08178508 +0x034:  je     08178564 <+0x90>
0817850a +0x036:  movl   $0x1,0x4(%esp)
08178512 +0x03e:  mov    0xc(%ebp),%eax
08178515 +0x041:  mov    %eax,(%esp)
08178518 +0x044:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
0817851d +0x049:  mov    0xc(%ebp),%eax
08178520 +0x04c:  mov    %eax,(%esp)
08178523 +0x04f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08178528 +0x054:  mov    -0x14(%ebp),%edx
0817852b +0x057:  mov    %edx,0x18(%esp)
0817852f +0x05b:  mov    %eax,0x14(%esp)
08178533 +0x05f:  movl   $"IPG_QUERY %d %d",0x10(%esp)
0817853b +0x067:  movl   $0x4dd,0xc(%esp)
08178543 +0x06f:  movl   $&_ZZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0817854b +0x077:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08178553 +0x07f:  movl   $0x1,(%esp)
0817855a +0x086:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817855f +0x08b:  jmp    08178657 <+0x183>
08178564 +0x090:  mov    0x14(%ebp),%eax
08178567 +0x093:  add    $0x99,%eax
0817856c +0x098:  mov    %eax,(%esp)
0817856f +0x09b:  call   0807e6f0 <_init+0xfe8>
08178574 +0x0a0:  mov    %eax,%ebx
08178576 +0x0a2:  mov    0x14(%ebp),%eax
08178579 +0x0a5:  add    $0xa5,%eax
0817857e +0x0aa:  mov    %eax,(%esp)
08178581 +0x0ad:  call   0807e6f0 <_init+0xfe8>
08178586 +0x0b2:  add    %eax,%ebx
08178588 +0x0b4:  mov    0x14(%ebp),%eax
0817858b +0x0b7:  add    $0x81,%eax
08178590 +0x0bc:  mov    %eax,(%esp)
08178593 +0x0bf:  call   0807e6f0 <_init+0xfe8>
08178598 +0x0c4:  add    %eax,%ebx
0817859a +0x0c6:  mov    0x14(%ebp),%eax
0817859d +0x0c9:  add    $0x75,%eax
081785a0 +0x0cc:  mov    %eax,(%esp)
081785a3 +0x0cf:  call   0807e6f0 <_init+0xfe8>
081785a8 +0x0d4:  add    %eax,%ebx
081785aa +0x0d6:  mov    0x14(%ebp),%eax
081785ad +0x0d9:  add    $0x8d,%eax
081785b2 +0x0de:  mov    %eax,(%esp)
081785b5 +0x0e1:  call   0807e6f0 <_init+0xfe8>
081785ba +0x0e6:  add    %eax,%ebx
081785bc +0x0e8:  mov    0x14(%ebp),%eax
081785bf +0x0eb:  add    $0x69,%eax
081785c2 +0x0ee:  mov    %eax,(%esp)
081785c5 +0x0f1:  call   0807e6f0 <_init+0xfe8>
081785ca +0x0f6:  lea    (%ebx,%eax,1),%eax
081785cd +0x0f9:  mov    %eax,-0x10(%ebp)
081785d0 +0x0fc:  mov    -0x10(%ebp),%eax
081785d3 +0x0ff:  mov    %eax,0x4(%esp)
081785d7 +0x103:  mov    0xc(%ebp),%eax
081785da +0x106:  mov    %eax,(%esp)
081785dd +0x109:  call   0817a1b4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x232>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x232
081785e2 +0x10e:  mov    0x14(%ebp),%eax
081785e5 +0x111:  add    $0xb5,%eax
081785ea +0x116:  mov    %eax,(%esp)
081785ed +0x119:  call   0807e6f0 <_init+0xfe8>
081785f2 +0x11e:  mov    %eax,-0xc(%ebp)
081785f5 +0x121:  mov    -0xc(%ebp),%eax
081785f8 +0x124:  mov    %eax,0x4(%esp)
081785fc +0x128:  mov    0xc(%ebp),%eax
081785ff +0x12b:  mov    %eax,(%esp)
08178602 +0x12e:  call   08692b04 <_ZN5CUser12SetCeraPointEj>  ; CUser::SetCeraPoint(unsigned int)
08178607 +0x133:  mov    -0x10(%ebp),%eax
0817860a +0x136:  mov    0xc(%ebp),%edx
0817860d +0x139:  add    $0x79700,%edx
08178613 +0x13f:  mov    %eax,0x8(%esp)
08178617 +0x143:  movl   $0x0,0x4(%esp)
0817861f +0x14b:  mov    %edx,(%esp)
08178622 +0x14e:  call   0868593c <_ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj>  ; cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int)
08178627 +0x153:  movl   $0x0,0x4(%esp)
0817862f +0x15b:  mov    0xc(%ebp),%eax
08178632 +0x15e:  mov    %eax,(%esp)
08178635 +0x161:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
0817863a +0x166:  jmp    08178657 <+0x183>
0817863c +0x168:  mov    %edx,%ebx
0817863e +0x16a:  mov    %eax,%esi
08178640 +0x16c:  lea    -0x20(%ebp),%eax
08178643 +0x16f:  mov    %eax,(%esp)
08178646 +0x172:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0817864b +0x177:  mov    %esi,%eax
0817864d +0x179:  mov    %ebx,%edx
0817864f +0x17b:  mov    %eax,(%esp)
08178652 +0x17e:  call   08ae3750 <_Unwind_Resume>
08178657 +0x183:  lea    -0x20(%ebp),%eax
0817865a +0x186:  mov    %eax,(%esp)
0817865d +0x189:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08178662 +0x18e:  jmp    08178665 <+0x191>
08178664 +0x190:  nop
08178665 +0x191:  add    $0x40,%esp
08178668 +0x194:  pop    %ebx
08178669 +0x195:  pop    %esi
0817866a +0x196:  pop    %ebp
0817866b +0x197:  ret
```

## 反编译 C

```c
// ItemVendingMachine::ProcessIPG_ResultQuery @ 0x81784d4

/* ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void ItemVendingMachine::ProcessIPG_ResultQuery
               (CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  uint local_10;
  
  if (param_2 != (SIPGData *)0x0) {
    PacketGuard::PacketGuard(local_24);
    local_18 = atoi((char *)(param_4 + 0xb1));
    if (local_18 == 0) {
      iVar2 = atoi((char *)(param_4 + 0x99));
      iVar3 = atoi((char *)(param_4 + 0xa5));
      iVar4 = atoi((char *)(param_4 + 0x81));
      iVar5 = atoi((char *)(param_4 + 0x75));
      iVar6 = atoi((char *)(param_4 + 0x8d));
      iVar7 = atoi((char *)(param_4 + 0x69));
      local_14 = iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
      CUser::SetCera((CUser *)param_2,local_14);
      local_10 = atoi((char *)(param_4 + 0xb5));
      CUser::SetCeraPoint((CUser *)param_2,local_10);
      cUserHistoryLog::CeraPoint((cUserHistoryLog *)(param_2 + 0x79700),0,local_14);
      CUser::SendCashData((CUser *)param_2,false);
    }
    else {
                    /* try { // try from 08178518 to 08178639 has its CatchHandler @ 0817863c */
      CUser::SendCashData((CUser *)param_2,true);
      uVar1 = CUser::get_acc_id((CUser *)param_2);
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "void ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                 ,0x4dd,"IPG_QUERY %d %d",uVar1,local_18);
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}
```
