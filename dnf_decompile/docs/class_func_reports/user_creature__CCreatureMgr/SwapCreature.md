# SwapCreature

`_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii`

`user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339420  _ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii
#           user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)
# range [0x08339420, 0x083396c7]
08339420 +0x000:  push   %ebp
08339421 +0x001:  mov    %esp,%ebp
08339423 +0x003:  push   %esi
08339424 +0x004:  push   %ebx
08339425 +0x005:  sub    $0x50,%esp
08339428 +0x008:  movl   $0x0,-0x10(%ebp)
0833942f +0x00f:  movl   $0x0,-0xc(%ebp)
08339436 +0x016:  mov    0xc(%ebp),%eax
08339439 +0x019:  movzbl 0x1(%eax),%eax
0833943d +0x01d:  cmp    $0x5,%al
0833943f +0x01f:  je     08339450 <+0x30>
08339441 +0x021:  mov    0x18(%ebp),%eax
08339444 +0x024:  movzbl 0x1(%eax),%eax
08339448 +0x028:  cmp    $0x5,%al
0833944a +0x02a:  jne    083395e1 <+0x1c1>
08339450 +0x030:  mov    0xc(%ebp),%eax
08339453 +0x033:  mov    %eax,(%esp)
08339456 +0x036:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0833945b +0x03b:  mov    %eax,0x4(%esp)
0833945f +0x03f:  mov    0x8(%ebp),%eax
08339462 +0x042:  mov    %eax,(%esp)
08339465 +0x045:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833946a +0x04a:  mov    %eax,-0x10(%ebp)
0833946d +0x04d:  mov    0x18(%ebp),%eax
08339470 +0x050:  mov    %eax,(%esp)
08339473 +0x053:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08339478 +0x058:  mov    %eax,0x4(%esp)
0833947c +0x05c:  mov    0x8(%ebp),%eax
0833947f +0x05f:  mov    %eax,(%esp)
08339482 +0x062:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
08339487 +0x067:  mov    %eax,-0xc(%ebp)
0833948a +0x06a:  mov    0x10(%ebp),%eax
0833948d +0x06d:  mov    %eax,0x4(%esp)
08339491 +0x071:  mov    0x8(%ebp),%eax
08339494 +0x074:  mov    %eax,(%esp)
08339497 +0x077:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833949c +0x07c:  xor    $0x1,%eax
0833949f +0x07f:  test   %al,%al
083394a1 +0x081:  je     083394ff <+0xdf>
083394a3 +0x083:  mov    0x8(%ebp),%eax
083394a6 +0x086:  mov    0x1c(%eax),%eax
083394a9 +0x089:  mov    %eax,(%esp)
083394ac +0x08c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
083394b1 +0x091:  movzwl %ax,%ebx
083394b4 +0x094:  movl   $0x5,0xc(%esp)
083394bc +0x09c:  movl   $0x9a5,0x8(%esp)
083394c4 +0x0a4:  movl   $&_ZZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_iiE19__PRETTY_FUNCTION__,0x4(%esp)
083394cc +0x0ac:  lea    -0x30(%ebp),%eax
083394cf +0x0af:  mov    %eax,(%esp)
083394d2 +0x0b2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083394d7 +0x0b7:  mov    0x10(%ebp),%eax
083394da +0x0ba:  mov    %eax,0xc(%esp)
083394de +0x0be:  mov    %ebx,0x8(%esp)
083394e2 +0x0c2:  movl   $"IsCreatureEquipmentScope() uid(%d) slot_left(%d)\n",0x4(%esp)
083394ea +0x0ca:  lea    -0x30(%ebp),%eax
083394ed +0x0cd:  mov    %eax,(%esp)
083394f0 +0x0d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083394f5 +0x0d5:  mov    $0x0,%ebx
083394fa +0x0da:  jmp    083396bf <+0x29f>
083394ff +0x0df:  mov    0x1c(%ebp),%eax
08339502 +0x0e2:  mov    %eax,0x4(%esp)
08339506 +0x0e6:  mov    0x8(%ebp),%eax
08339509 +0x0e9:  mov    %eax,(%esp)
0833950c +0x0ec:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
08339511 +0x0f1:  xor    $0x1,%eax
08339514 +0x0f4:  test   %al,%al
08339516 +0x0f6:  je     08339574 <+0x154>
08339518 +0x0f8:  mov    0x8(%ebp),%eax
0833951b +0x0fb:  mov    0x1c(%eax),%eax
0833951e +0x0fe:  mov    %eax,(%esp)
08339521 +0x101:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08339526 +0x106:  movzwl %ax,%ebx
08339529 +0x109:  movl   $0x5,0xc(%esp)
08339531 +0x111:  movl   $0x9ab,0x8(%esp)
08339539 +0x119:  movl   $&_ZZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_iiE19__PRETTY_FUNCTION__,0x4(%esp)
08339541 +0x121:  lea    -0x20(%ebp),%eax
08339544 +0x124:  mov    %eax,(%esp)
08339547 +0x127:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833954c +0x12c:  mov    0x1c(%ebp),%eax
0833954f +0x12f:  mov    %eax,0xc(%esp)
08339553 +0x133:  mov    %ebx,0x8(%esp)
08339557 +0x137:  movl   $"IsCreatureEquipmentScope() uid(%d) slot_right(%d)\n",0x4(%esp)
0833955f +0x13f:  lea    -0x20(%ebp),%eax
08339562 +0x142:  mov    %eax,(%esp)
08339565 +0x145:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833956a +0x14a:  mov    $0x0,%ebx
0833956f +0x14f:  jmp    083396bf <+0x29f>
08339574 +0x154:  cmpl   $0x16,0x10(%ebp)
08339578 +0x158:  jne    083395aa <+0x18a>
0833957a +0x15a:  cmpl   $0x0,0x14(%ebp)
0833957e +0x15e:  jne    083395aa <+0x18a>
08339580 +0x160:  mov    -0xc(%ebp),%eax
08339583 +0x163:  mov    %eax,0x8(%esp)
08339587 +0x167:  mov    -0x10(%ebp),%eax
0833958a +0x16a:  mov    %eax,0x4(%esp)
0833958e +0x16e:  mov    0x8(%ebp),%eax
08339591 +0x171:  mov    %eax,(%esp)
08339594 +0x174:  call   083393a2 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_>  ; user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*, user_creature::CCreature*)
08339599 +0x179:  xor    $0x1,%eax
0833959c +0x17c:  test   %al,%al
0833959e +0x17e:  je     083395e0 <+0x1c0>
083395a0 +0x180:  mov    $0x0,%ebx
083395a5 +0x185:  jmp    083396bf <+0x29f>
083395aa +0x18a:  cmpl   $0x16,0x1c(%ebp)
083395ae +0x18e:  jne    083395e1 <+0x1c1>
083395b0 +0x190:  cmpl   $0x0,0x20(%ebp)
083395b4 +0x194:  jne    083395e1 <+0x1c1>
083395b6 +0x196:  mov    -0x10(%ebp),%eax
083395b9 +0x199:  mov    %eax,0x8(%esp)
083395bd +0x19d:  mov    -0xc(%ebp),%eax
083395c0 +0x1a0:  mov    %eax,0x4(%esp)
083395c4 +0x1a4:  mov    0x8(%ebp),%eax
083395c7 +0x1a7:  mov    %eax,(%esp)
083395ca +0x1aa:  call   083393a2 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_>  ; user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*, user_creature::CCreature*)
083395cf +0x1af:  xor    $0x1,%eax
083395d2 +0x1b2:  test   %al,%al
083395d4 +0x1b4:  je     083395e1 <+0x1c1>
083395d6 +0x1b6:  mov    $0x0,%ebx
083395db +0x1bb:  jmp    083396bf <+0x29f>
083395e0 +0x1c0:  nop
083395e1 +0x1c1:  cmpl   $0x0,0x20(%ebp)
083395e5 +0x1c5:  jne    083395ee <+0x1ce>
083395e7 +0x1c7:  addl   $0xd8,0x1c(%ebp)
083395ee +0x1ce:  cmpl   $0x0,0x14(%ebp)
083395f2 +0x1d2:  jne    083395fb <+0x1db>
083395f4 +0x1d4:  addl   $0xd8,0x10(%ebp)
083395fb +0x1db:  cmpl   $0x0,-0x10(%ebp)
083395ff +0x1df:  je     08339613 <+0x1f3>
08339601 +0x1e1:  mov    -0x10(%ebp),%eax
08339604 +0x1e4:  mov    0x1c(%ebp),%edx
08339607 +0x1e7:  mov    %edx,0x4(%esp)
0833960b +0x1eb:  mov    %eax,(%esp)
0833960e +0x1ee:  call   08337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>  ; user_creature::CCreatureItem::SetSlotNo(int)
08339613 +0x1f3:  cmpl   $0x0,-0xc(%ebp)
08339617 +0x1f7:  je     0833962b <+0x20b>
08339619 +0x1f9:  mov    -0xc(%ebp),%eax
0833961c +0x1fc:  mov    0x10(%ebp),%edx
0833961f +0x1ff:  mov    %edx,0x4(%esp)
08339623 +0x203:  mov    %eax,(%esp)
08339626 +0x206:  call   08337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>  ; user_creature::CCreatureItem::SetSlotNo(int)
0833962b +0x20b:  mov    0x8(%ebp),%eax
0833962e +0x20e:  mov    0x1c(%eax),%eax
08339631 +0x211:  mov    %eax,0x8(%esp)
08339635 +0x215:  movl   $0x8c,0x4(%esp)
0833963d +0x21d:  lea    -0x38(%ebp),%eax
08339640 +0x220:  mov    %eax,(%esp)
08339643 +0x223:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08339648 +0x228:  mov    0x8(%ebp),%eax
0833964b +0x22b:  mov    0x1c(%eax),%eax
0833964e +0x22e:  mov    0x1c(%ebp),%edx
08339651 +0x231:  mov    %edx,0x14(%esp)
08339655 +0x235:  mov    0x18(%ebp),%edx
08339658 +0x238:  mov    %edx,0x10(%esp)
0833965c +0x23c:  mov    0x10(%ebp),%edx
0833965f +0x23f:  mov    %edx,0xc(%esp)
08339663 +0x243:  mov    0xc(%ebp),%edx
08339666 +0x246:  mov    %edx,0x8(%esp)
0833966a +0x24a:  mov    %eax,0x4(%esp)
0833966e +0x24e:  lea    -0x38(%ebp),%eax
08339671 +0x251:  mov    %eax,(%esp)
08339674 +0x254:  call   0833fa0c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1ad9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1ad9
08339679 +0x259:  xor    $0x1,%eax
0833967c +0x25c:  test   %al,%al
0833967e +0x25e:  je     08339687 <+0x267>
08339680 +0x260:  mov    $0x0,%ebx
08339685 +0x265:  jmp    083396b4 <+0x294>
08339687 +0x267:  lea    -0x38(%ebp),%eax
0833968a +0x26a:  mov    %eax,(%esp)
0833968d +0x26d:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08339692 +0x272:  mov    $0x1,%ebx
08339697 +0x277:  jmp    083396b4 <+0x294>
08339699 +0x279:  mov    %edx,%ebx
0833969b +0x27b:  mov    %eax,%esi
0833969d +0x27d:  lea    -0x38(%ebp),%eax
083396a0 +0x280:  mov    %eax,(%esp)
083396a3 +0x283:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
083396a8 +0x288:  mov    %esi,%eax
083396aa +0x28a:  mov    %ebx,%edx
083396ac +0x28c:  mov    %eax,(%esp)
083396af +0x28f:  call   08ae3750 <_Unwind_Resume>
083396b4 +0x294:  lea    -0x38(%ebp),%eax
083396b7 +0x297:  mov    %eax,(%esp)
083396ba +0x29a:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
083396bf +0x29f:  mov    %ebx,%eax
083396c1 +0x2a1:  add    $0x50,%esp
083396c4 +0x2a4:  pop    %ebx
083396c5 +0x2a5:  pop    %esi
083396c6 +0x2a6:  pop    %ebp
083396c7 +0x2a7:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SwapCreature @ 0x8339420

/* user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::SwapCreature
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  uint uVar2;
  CDBMsgSender local_3c [8];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  CCreatureItem *local_14;
  CCreature *local_10;
  
  local_14 = (CCreatureItem *)0x0;
  local_10 = (CCreature *)0x0;
  if ((param_1[1] == (Inven_Item)0x5) || (param_4[1] == (Inven_Item)0x5)) {
    Inven_Item::get_add_info(param_1);
    local_14 = (CCreatureItem *)FindCreatureItem((int)this);
    Inven_Item::get_add_info(param_4);
    local_10 = (CCreature *)FindCreatureItem((int)this);
    cVar1 = IsCreatureEquipmentScope(this,param_2);
    if (cVar1 != '\x01') {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_34,
                         "bool user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)"
                         ,0x9a5,5);
      cMyTrace::operator()
                (local_34,"IsCreatureEquipmentScope() uid(%d) slot_left(%d)\n",uVar2 & 0xffff,
                 param_2);
      return false;
    }
    cVar1 = IsCreatureEquipmentScope(this,param_5);
    if (cVar1 != '\x01') {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_24,
                         "bool user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)"
                         ,0x9ab,5);
      cMyTrace::operator()
                (local_24,"IsCreatureEquipmentScope() uid(%d) slot_right(%d)\n",uVar2 & 0xffff,
                 param_5);
      return false;
    }
    if ((param_2 == 0x16) && (param_3 == 0)) {
      cVar1 = EquipCreatureItem(this,(CCreature *)local_14,local_10);
      if (cVar1 != '\x01') {
        return false;
      }
    }
    else if ((param_5 == 0x16) &&
            ((param_6 == 0 &&
             (cVar1 = EquipCreatureItem(this,local_10,(CCreature *)local_14), cVar1 != '\x01')))) {
      return false;
    }
  }
  if (param_6 == 0) {
    param_5 = param_5 + 0xd8;
  }
  if (param_3 == 0) {
    param_2 = param_2 + 0xd8;
  }
  if (local_14 != (CCreatureItem *)0x0) {
    CCreatureItem::SetSlotNo(local_14,param_5);
  }
  if (local_10 != (CCreature *)0x0) {
    CCreatureItem::SetSlotNo((CCreatureItem *)local_10,param_2);
  }
  CDBMsgSender::CDBMsgSender(local_3c,0x8c,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 08339674 to 08339691 has its CatchHandler @ 08339699 */
  cVar1 = CDBMsgSender::SwapCreatureItem
                    (local_3c,*(CUser **)(this + 0x1c),param_1,param_2,param_4,param_5);
  if (cVar1 == '\x01') {
    CDBMsgSender::Send(local_3c);
  }
  CDBMsgSender::~CDBMsgSender(local_3c);
  return cVar1 == '\x01';
}
```
