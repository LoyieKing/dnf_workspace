# ChangeSlotNo

`_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii`

`user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833aedc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833aedc  _ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii
#           user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)
# range [0x0833aedc, 0x0833b09b]
0833aedc +0x000:  push   %ebp
0833aedd +0x001:  mov    %esp,%ebp
0833aedf +0x003:  push   %edi
0833aee0 +0x004:  push   %esi
0833aee1 +0x005:  push   %ebx
0833aee2 +0x006:  sub    $0x5c,%esp
0833aee5 +0x009:  mov    0x10(%ebp),%eax
0833aee8 +0x00c:  mov    %eax,0x4(%esp)
0833aeec +0x010:  mov    0x8(%ebp),%eax
0833aeef +0x013:  mov    %eax,(%esp)
0833aef2 +0x016:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833aef7 +0x01b:  xor    $0x1,%eax
0833aefa +0x01e:  test   %al,%al
0833aefc +0x020:  je     0833af08 <+0x2c>
0833aefe +0x022:  mov    $0x1,%ebx
0833af03 +0x027:  jmp    0833b091 <+0x1b5>
0833af08 +0x02c:  mov    0xc(%ebp),%eax
0833af0b +0x02f:  movzbl 0x1(%eax),%eax
0833af0f +0x033:  cmp    $0x5,%al
0833af11 +0x035:  je     0833af1d <+0x41>
0833af13 +0x037:  mov    $0x1,%ebx
0833af18 +0x03c:  jmp    0833b091 <+0x1b5>
0833af1d +0x041:  mov    0xc(%ebp),%eax
0833af20 +0x044:  mov    0x7(%eax),%eax
0833af23 +0x047:  mov    %eax,0x4(%esp)
0833af27 +0x04b:  mov    0x8(%ebp),%eax
0833af2a +0x04e:  mov    %eax,(%esp)
0833af2d +0x051:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833af32 +0x056:  mov    %eax,-0x1c(%ebp)
0833af35 +0x059:  cmpl   $0x0,-0x1c(%ebp)
0833af39 +0x05d:  jne    0833af45 <+0x69>
0833af3b +0x05f:  mov    $0x0,%ebx
0833af40 +0x064:  jmp    0833b091 <+0x1b5>
0833af45 +0x069:  mov    0x10(%ebp),%eax
0833af48 +0x06c:  mov    %eax,0x4(%esp)
0833af4c +0x070:  mov    -0x1c(%ebp),%eax
0833af4f +0x073:  mov    %eax,(%esp)
0833af52 +0x076:  call   08337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>  ; user_creature::CCreatureItem::SetSlotNo(int)
0833af57 +0x07b:  mov    0x8(%ebp),%eax
0833af5a +0x07e:  mov    0x1c(%eax),%eax
0833af5d +0x081:  mov    %eax,0x8(%esp)
0833af61 +0x085:  movl   $0x8a,0x4(%esp)
0833af69 +0x08d:  lea    -0x34(%ebp),%eax
0833af6c +0x090:  mov    %eax,(%esp)
0833af6f +0x093:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833af74 +0x098:  mov    0x8(%ebp),%eax
0833af77 +0x09b:  mov    0x1c(%eax),%eax
0833af7a +0x09e:  mov    %eax,(%esp)
0833af7d +0x0a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833af82 +0x0a6:  mov    0x14(%ebp),%edx
0833af85 +0x0a9:  mov    %edx,0x10(%esp)
0833af89 +0x0ad:  mov    0x10(%ebp),%edx
0833af8c +0x0b0:  mov    %edx,0xc(%esp)
0833af90 +0x0b4:  mov    %eax,0x8(%esp)
0833af94 +0x0b8:  mov    0xc(%ebp),%eax
0833af97 +0x0bb:  mov    %eax,0x4(%esp)
0833af9b +0x0bf:  lea    -0x34(%ebp),%eax
0833af9e +0x0c2:  mov    %eax,(%esp)
0833afa1 +0x0c5:  call   083400a4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2171>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2171
0833afa6 +0x0ca:  xor    $0x1,%eax
0833afa9 +0x0cd:  test   %al,%al
0833afab +0x0cf:  je     0833b002 <+0x126>
0833afad +0x0d1:  mov    0x8(%ebp),%eax
0833afb0 +0x0d4:  mov    0x1c(%eax),%eax
0833afb3 +0x0d7:  mov    %eax,(%esp)
0833afb6 +0x0da:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833afbb +0x0df:  movzwl %ax,%ebx
0833afbe +0x0e2:  movl   $0x5,0xc(%esp)
0833afc6 +0x0ea:  movl   $0xc44,0x8(%esp)
0833afce +0x0f2:  movl   $&_ZZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_ItemiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833afd6 +0x0fa:  lea    -0x2c(%ebp),%eax
0833afd9 +0x0fd:  mov    %eax,(%esp)
0833afdc +0x100:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833afe1 +0x105:  mov    %ebx,0x8(%esp)
0833afe5 +0x109:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833afed +0x111:  lea    -0x2c(%ebp),%eax
0833aff0 +0x114:  mov    %eax,(%esp)
0833aff3 +0x117:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833aff8 +0x11c:  mov    $0x0,%ebx
0833affd +0x121:  jmp    0833b086 <+0x1aa>
0833b002 +0x126:  lea    -0x34(%ebp),%eax
0833b005 +0x129:  mov    %eax,(%esp)
0833b008 +0x12c:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833b00d +0x131:  mov    0x14(%ebp),%eax
0833b010 +0x134:  mov    %eax,-0x3c(%ebp)
0833b013 +0x137:  mov    0xc(%ebp),%eax
0833b016 +0x13a:  movzbl 0x1(%eax),%eax
0833b01a +0x13e:  movzbl %al,%edi
0833b01d +0x141:  mov    0xc(%ebp),%eax
0833b020 +0x144:  mov    0x7(%eax),%esi
0833b023 +0x147:  mov    0xc(%ebp),%eax
0833b026 +0x14a:  mov    0x2(%eax),%eax
0833b029 +0x14d:  mov    %eax,%ebx
0833b02b +0x14f:  mov    0x8(%ebp),%eax
0833b02e +0x152:  mov    0x1c(%eax),%eax
0833b031 +0x155:  mov    %eax,(%esp)
0833b034 +0x158:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0833b039 +0x15d:  mov    -0x3c(%ebp),%edx
0833b03c +0x160:  mov    %edx,0x18(%esp)
0833b040 +0x164:  mov    %edi,0x14(%esp)
0833b044 +0x168:  movl   $0x1,0x10(%esp)
0833b04c +0x170:  mov    %esi,0xc(%esp)
0833b050 +0x174:  mov    %ebx,0x8(%esp)
0833b054 +0x178:  movl   $0x3,0x4(%esp)
0833b05c +0x180:  mov    %eax,(%esp)
0833b05f +0x183:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0833b064 +0x188:  mov    $0x1,%ebx
0833b069 +0x18d:  jmp    0833b086 <+0x1aa>
0833b06b +0x18f:  mov    %edx,%ebx
0833b06d +0x191:  mov    %eax,%esi
0833b06f +0x193:  lea    -0x34(%ebp),%eax
0833b072 +0x196:  mov    %eax,(%esp)
0833b075 +0x199:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b07a +0x19e:  mov    %esi,%eax
0833b07c +0x1a0:  mov    %ebx,%edx
0833b07e +0x1a2:  mov    %eax,(%esp)
0833b081 +0x1a5:  call   08ae3750 <_Unwind_Resume>
0833b086 +0x1aa:  lea    -0x34(%ebp),%eax
0833b089 +0x1ad:  mov    %eax,(%esp)
0833b08c +0x1b0:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b091 +0x1b5:  mov    %ebx,%eax
0833b093 +0x1b7:  add    $0x5c,%esp
0833b096 +0x1ba:  pop    %ebx
0833b097 +0x1bb:  pop    %esi
0833b098 +0x1bc:  pop    %edi
0833b099 +0x1bd:  pop    %ebp
0833b09a +0x1be:  ret
0833b09b +0x1bf:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::ChangeSlotNo @ 0x833aedc

/* user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::ChangeSlotNo
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  bool bVar8;
  CDBMsgSender local_38 [8];
  cMyTrace local_30 [16];
  CCreatureItem *local_20;
  
  cVar4 = IsCreatureEquipmentScope(this,param_2);
  if (cVar4 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      local_20 = (CCreatureItem *)FindCreatureItem((int)this);
      if (local_20 == (CCreatureItem *)0x0) {
        bVar8 = false;
      }
      else {
        CCreatureItem::SetSlotNo(local_20,param_2);
        CDBMsgSender::CDBMsgSender(local_38,0x8a,*(undefined4 *)(this + 0x1c));
        iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
                    /* try { // try from 0833afa1 to 0833b063 has its CatchHandler @ 0833b06b */
        cVar4 = CDBMsgSender::ChangeSlotNo(local_38,param_1,iVar5,param_2,param_3);
        bVar8 = cVar4 == '\x01';
        if (bVar8) {
          CDBMsgSender::Send(local_38);
          IVar1 = param_1[1];
          uVar2 = *(undefined4 *)(param_1 + 7);
          uVar3 = *(undefined4 *)(param_1 + 2);
          pCVar7 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
          CInventory::WriteCreatureLog(pCVar7,3,uVar3,uVar2,1,IVar1,param_3);
        }
        else {
          uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
          cMyTrace::cMyTrace(local_30,
                             "bool user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)"
                             ,0xc44,5);
          cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
        }
        CDBMsgSender::~CDBMsgSender(local_38);
      }
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}
```
