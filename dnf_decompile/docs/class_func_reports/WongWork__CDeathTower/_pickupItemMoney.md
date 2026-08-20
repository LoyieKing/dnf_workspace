# _pickupItemMoney

`_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_`

`WongWork::CDeathTower::_pickupItemMoney(CUser*, int, map_item const&, int*, int*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08466b02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08466b02  _ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_
#           WongWork::CDeathTower::_pickupItemMoney(CUser*, int, map_item const&, int*, int*)
# range [0x08466b02, 0x08466cfd]
08466b02 +0x000:  push   %ebp
08466b03 +0x001:  mov    %esp,%ebp
08466b05 +0x003:  push   %ebx
08466b06 +0x004:  sub    $0x54,%esp
08466b09 +0x007:  mov    0x14(%ebp),%eax
08466b0c +0x00a:  add    $0x10,%eax
08466b0f +0x00d:  mov    %eax,(%esp)
08466b12 +0x010:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08466b17 +0x015:  mov    %eax,-0x2c(%ebp)
08466b1a +0x018:  mov    -0x2c(%ebp),%eax
08466b1d +0x01b:  mov    %eax,%edx
08466b1f +0x01d:  sar    $0x1f,%edx
08466b22 +0x020:  idivl  0x10(%ebp)
08466b25 +0x023:  mov    %eax,-0x28(%ebp)
08466b28 +0x026:  mov    -0x2c(%ebp),%eax
08466b2b +0x029:  mov    %eax,%edx
08466b2d +0x02b:  sar    $0x1f,%edx
08466b30 +0x02e:  idivl  0x10(%ebp)
08466b33 +0x031:  mov    %edx,-0x24(%ebp)
08466b36 +0x034:  mov    -0x24(%ebp),%eax
08466b39 +0x037:  mov    -0x28(%ebp),%edx
08466b3c +0x03a:  lea    (%edx,%eax,1),%eax
08466b3f +0x03d:  mov    %eax,-0x20(%ebp)
08466b42 +0x040:  mov    -0x28(%ebp),%eax
08466b45 +0x043:  mov    %eax,-0x1c(%ebp)
08466b48 +0x046:  movl   $0x0,-0x18(%ebp)
08466b4f +0x04d:  jmp    08466ce9 <+0x1e7>
08466b54 +0x052:  movl   $0x0,-0x14(%ebp)
08466b5b +0x059:  mov    0x8(%ebp),%eax
08466b5e +0x05c:  mov    (%eax),%eax
08466b60 +0x05e:  mov    -0x18(%ebp),%edx
08466b63 +0x061:  mov    %edx,0x4(%esp)
08466b67 +0x065:  mov    %eax,(%esp)
08466b6a +0x068:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08466b6f +0x06d:  mov    %eax,-0x14(%ebp)
08466b72 +0x070:  cmpl   $0x0,-0x14(%ebp)
08466b76 +0x074:  je     08466b93 <+0x91>
08466b78 +0x076:  mov    0x8(%ebp),%eax
08466b7b +0x079:  mov    (%eax),%eax
08466b7d +0x07b:  mov    -0x18(%ebp),%edx
08466b80 +0x07e:  mov    %edx,0x4(%esp)
08466b84 +0x082:  mov    %eax,(%esp)
08466b87 +0x085:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08466b8c +0x08a:  xor    $0x1,%eax
08466b8f +0x08d:  test   %al,%al
08466b91 +0x08f:  je     08466b9a <+0x98>
08466b93 +0x091:  mov    $0x1,%eax
08466b98 +0x096:  jmp    08466b9f <+0x9d>
08466b9a +0x098:  mov    $0x0,%eax
08466b9f +0x09d:  test   %al,%al
08466ba1 +0x09f:  jne    08466ce4 <+0x1e2>
08466ba7 +0x0a5:  mov    -0x14(%ebp),%eax
08466baa +0x0a8:  cmp    0xc(%ebp),%eax
08466bad +0x0ab:  jne    08466bb4 <+0xb2>
08466baf +0x0ad:  mov    -0x20(%ebp),%eax
08466bb2 +0x0b0:  jmp    08466bb7 <+0xb5>
08466bb4 +0x0b2:  mov    -0x1c(%ebp),%eax
08466bb7 +0x0b5:  mov    %eax,-0x10(%ebp)
08466bba +0x0b8:  mov    -0x10(%ebp),%eax
08466bbd +0x0bb:  mov    %eax,-0xc(%ebp)
08466bc0 +0x0be:  mov    0x14(%ebp),%eax
08466bc3 +0x0c1:  movzbl (%eax),%eax
08466bc6 +0x0c4:  test   %al,%al
08466bc8 +0x0c6:  je     08466c01 <+0xff>
08466bca +0x0c8:  mov    -0x18(%ebp),%eax
08466bcd +0x0cb:  shl    $0x2,%eax
08466bd0 +0x0ce:  mov    %eax,%ebx
08466bd2 +0x0d0:  add    0x1c(%ebp),%ebx
08466bd5 +0x0d3:  mov    -0x14(%ebp),%eax
08466bd8 +0x0d6:  mov    %eax,(%esp)
08466bdb +0x0d9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08466be0 +0x0de:  mov    %eax,(%esp)
08466be3 +0x0e1:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
08466be8 +0x0e6:  mov    -0x10(%ebp),%edx
08466beb +0x0e9:  mov    %edx,0x4(%esp)
08466bef +0x0ed:  mov    %eax,(%esp)
08466bf2 +0x0f0:  call   0833c31a <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi>  ; user_creature::CCreatureMgr::GetExtraGold(int) const
08466bf7 +0x0f5:  mov    %eax,(%ebx)
08466bf9 +0x0f7:  mov    -0xc(%ebp),%eax
08466bfc +0x0fa:  add    %eax,%eax
08466bfe +0x0fc:  mov    %eax,-0xc(%ebp)
08466c01 +0x0ff:  mov    -0x18(%ebp),%eax
08466c04 +0x102:  shl    $0x2,%eax
08466c07 +0x105:  mov    %eax,%ebx
08466c09 +0x107:  add    0x18(%ebp),%ebx
08466c0c +0x10a:  mov    -0x14(%ebp),%eax
08466c0f +0x10d:  mov    %eax,(%esp)
08466c12 +0x110:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08466c17 +0x115:  movl   $0x0,0x10(%esp)
08466c1f +0x11d:  movl   $0x1,0xc(%esp)
08466c27 +0x125:  movl   $0x4,0x8(%esp)
08466c2f +0x12d:  mov    -0xc(%ebp),%edx
08466c32 +0x130:  mov    %edx,0x4(%esp)
08466c36 +0x134:  mov    %eax,(%esp)
08466c39 +0x137:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08466c3e +0x13c:  mov    %eax,(%ebx)
08466c40 +0x13e:  mov    0x14(%ebp),%eax
08466c43 +0x141:  movzbl (%eax),%eax
08466c46 +0x144:  test   %al,%al
08466c48 +0x146:  je     08466c5c <+0x15a>
08466c4a +0x148:  mov    -0xc(%ebp),%eax
08466c4d +0x14b:  mov    %eax,0x4(%esp)
08466c51 +0x14f:  mov    -0x14(%ebp),%eax
08466c54 +0x152:  mov    %eax,(%esp)
08466c57 +0x155:  call   0864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>  ; CUser::saveTaxMoneyForUpperMember(int)
08466c5c +0x15a:  mov    -0x18(%ebp),%eax
08466c5f +0x15d:  shl    $0x2,%eax
08466c62 +0x160:  add    0x18(%ebp),%eax
08466c65 +0x163:  mov    (%eax),%eax
08466c67 +0x165:  cmp    -0xc(%ebp),%eax
08466c6a +0x168:  jge    08466cb5 <+0x1b3>
08466c6c +0x16a:  mov    -0x18(%ebp),%eax
08466c6f +0x16d:  shl    $0x2,%eax
08466c72 +0x170:  add    0x18(%ebp),%eax
08466c75 +0x173:  mov    (%eax),%eax
08466c77 +0x175:  test   %eax,%eax
08466c79 +0x177:  jns    08466c8a <+0x188>
08466c7b +0x179:  mov    -0x18(%ebp),%eax
08466c7e +0x17c:  shl    $0x2,%eax
08466c81 +0x17f:  add    0x18(%ebp),%eax
08466c84 +0x182:  movl   $0x0,(%eax)
08466c8a +0x188:  mov    -0x18(%ebp),%eax
08466c8d +0x18b:  shl    $0x2,%eax
08466c90 +0x18e:  add    0x18(%ebp),%eax
08466c93 +0x191:  mov    (%eax),%eax
08466c95 +0x193:  mov    %eax,%edx
08466c97 +0x195:  mov    -0xc(%ebp),%eax
08466c9a +0x198:  mov    %edx,0xc(%esp)
08466c9e +0x19c:  mov    %eax,0x8(%esp)
08466ca2 +0x1a0:  movl   $0x0,0x4(%esp)
08466caa +0x1a8:  mov    -0x14(%ebp),%eax
08466cad +0x1ab:  mov    %eax,(%esp)
08466cb0 +0x1ae:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
08466cb5 +0x1b3:  mov    -0x18(%ebp),%eax
08466cb8 +0x1b6:  shl    $0x2,%eax
08466cbb +0x1b9:  add    0x18(%ebp),%eax
08466cbe +0x1bc:  mov    (%eax),%eax
08466cc0 +0x1be:  mov    %eax,%ebx
08466cc2 +0x1c0:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08466cc7 +0x1c5:  mov    %ebx,0xc(%esp)
08466ccb +0x1c9:  mov    -0x14(%ebp),%edx
08466cce +0x1cc:  mov    %edx,0x8(%esp)
08466cd2 +0x1d0:  movl   $0x1,0x4(%esp)
08466cda +0x1d8:  mov    %eax,(%esp)
08466cdd +0x1db:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08466ce2 +0x1e0:  jmp    08466ce5 <+0x1e3>
08466ce4 +0x1e2:  nop
08466ce5 +0x1e3:  addl   $0x1,-0x18(%ebp)
08466ce9 +0x1e7:  cmpl   $0x3,-0x18(%ebp)
08466ced +0x1eb:  setle  %al
08466cf0 +0x1ee:  test   %al,%al
08466cf2 +0x1f0:  jne    08466b54 <+0x52>
08466cf8 +0x1f6:  add    $0x54,%esp
08466cfb +0x1f9:  pop    %ebx
08466cfc +0x1fa:  pop    %ebp
08466cfd +0x1fb:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_pickupItemMoney @ 0x8466b02

/* WongWork::CDeathTower::_pickupItemMoney(CUser*, int, map_item const&, int*, int*) */

void __thiscall
WongWork::CDeathTower::_pickupItemMoney
          (CDeathTower *this,CUser *param_1,int param_2,map_item *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *this_00;
  CInventory *pCVar4;
  CCreatureMgr *this_01;
  int iVar5;
  CValueStatistic *pCVar6;
  int local_1c;
  int local_10;
  
  iVar3 = Inven_Item::get_add_info((Inven_Item *)(param_3 + 0x10));
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_1c);
    if ((this_00 == (CUser *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)this,local_1c), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_10 = iVar3 / param_2;
      if (this_00 == param_1) {
        local_10 = iVar3 / param_2 + iVar3 % param_2;
      }
      if (*param_3 != (map_item)0x0) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this_00);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar4);
        iVar5 = user_creature::CCreatureMgr::GetExtraGold(this_01,local_10);
        param_5[local_1c] = iVar5;
        local_10 = local_10 * 2;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
      iVar5 = CInventory::gain_money(pCVar4,local_10,4,1,0);
      param_4[local_1c] = iVar5;
      if (*param_3 != (map_item)0x0) {
        CUser::saveTaxMoneyForUpperMember(this_00,local_10);
      }
      if (param_4[local_1c] < local_10) {
        if (param_4[local_1c] < 0) {
          param_4[local_1c] = 0;
        }
        CUser::SendMoneyFullReason(this_00,0,local_10,param_4[local_1c]);
      }
      iVar5 = param_4[local_1c];
      pCVar6 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar6,1,this_00,iVar5);
    }
  }
  return;
}
```
