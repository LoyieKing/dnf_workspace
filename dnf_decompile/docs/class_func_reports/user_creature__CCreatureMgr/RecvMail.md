# RecvMail

`_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii`

`user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833ab9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833ab9a  _ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii
#           user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int)
# range [0x0833ab9a, 0x0833ad33]
0833ab9a +0x000:  push   %ebp
0833ab9b +0x001:  mov    %esp,%ebp
0833ab9d +0x003:  push   %edi
0833ab9e +0x004:  push   %esi
0833ab9f +0x005:  push   %ebx
0833aba0 +0x006:  sub    $0x5c,%esp
0833aba3 +0x009:  mov    0x10(%ebp),%eax
0833aba6 +0x00c:  mov    %eax,0x4(%esp)
0833abaa +0x010:  mov    0x8(%ebp),%eax
0833abad +0x013:  mov    %eax,(%esp)
0833abb0 +0x016:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833abb5 +0x01b:  xor    $0x1,%eax
0833abb8 +0x01e:  test   %al,%al
0833abba +0x020:  je     0833abc6 <+0x2c>
0833abbc +0x022:  mov    $0x1,%ebx
0833abc1 +0x027:  jmp    0833ad2a <+0x190>
0833abc6 +0x02c:  mov    0xc(%ebp),%eax
0833abc9 +0x02f:  movzbl 0x1(%eax),%eax
0833abcd +0x033:  cmp    $0x5,%al
0833abcf +0x035:  je     0833abdb <+0x41>
0833abd1 +0x037:  mov    $0x1,%ebx
0833abd6 +0x03c:  jmp    0833ad2a <+0x190>
0833abdb +0x041:  mov    0x8(%ebp),%eax
0833abde +0x044:  mov    0x1c(%eax),%eax
0833abe1 +0x047:  mov    %eax,0x8(%esp)
0833abe5 +0x04b:  movl   $0x8a,0x4(%esp)
0833abed +0x053:  lea    -0x34(%ebp),%eax
0833abf0 +0x056:  mov    %eax,(%esp)
0833abf3 +0x059:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833abf8 +0x05e:  mov    0x8(%ebp),%eax
0833abfb +0x061:  mov    %eax,(%esp)
0833abfe +0x064:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833ac03 +0x069:  mov    %eax,-0x1c(%ebp)
0833ac06 +0x06c:  mov    0x8(%ebp),%eax
0833ac09 +0x06f:  mov    0x1c(%eax),%eax
0833ac0c +0x072:  mov    %eax,(%esp)
0833ac0f +0x075:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833ac14 +0x07a:  mov    -0x1c(%ebp),%edx
0833ac17 +0x07d:  mov    %edx,0x14(%esp)
0833ac1b +0x081:  mov    0x14(%ebp),%edx
0833ac1e +0x084:  mov    %edx,0x10(%esp)
0833ac22 +0x088:  mov    0x10(%ebp),%edx
0833ac25 +0x08b:  mov    %edx,0xc(%esp)
0833ac29 +0x08f:  mov    %eax,0x8(%esp)
0833ac2d +0x093:  mov    0xc(%ebp),%eax
0833ac30 +0x096:  mov    %eax,0x4(%esp)
0833ac34 +0x09a:  lea    -0x34(%ebp),%eax
0833ac37 +0x09d:  mov    %eax,(%esp)
0833ac3a +0x0a0:  call   0833ff34 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2001>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2001
0833ac3f +0x0a5:  xor    $0x1,%eax
0833ac42 +0x0a8:  test   %al,%al
0833ac44 +0x0aa:  je     0833ac9b <+0x101>
0833ac46 +0x0ac:  mov    0x8(%ebp),%eax
0833ac49 +0x0af:  mov    0x1c(%eax),%eax
0833ac4c +0x0b2:  mov    %eax,(%esp)
0833ac4f +0x0b5:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833ac54 +0x0ba:  movzwl %ax,%ebx
0833ac57 +0x0bd:  movl   $0x5,0xc(%esp)
0833ac5f +0x0c5:  movl   $0xc09,0x8(%esp)
0833ac67 +0x0cd:  movl   $&_ZZN13user_creature12CCreatureMgr8RecvMailEP10Inven_ItemiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833ac6f +0x0d5:  lea    -0x2c(%ebp),%eax
0833ac72 +0x0d8:  mov    %eax,(%esp)
0833ac75 +0x0db:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833ac7a +0x0e0:  mov    %ebx,0x8(%esp)
0833ac7e +0x0e4:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833ac86 +0x0ec:  lea    -0x2c(%ebp),%eax
0833ac89 +0x0ef:  mov    %eax,(%esp)
0833ac8c +0x0f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833ac91 +0x0f7:  mov    $0x0,%ebx
0833ac96 +0x0fc:  jmp    0833ad1f <+0x185>
0833ac9b +0x101:  lea    -0x34(%ebp),%eax
0833ac9e +0x104:  mov    %eax,(%esp)
0833aca1 +0x107:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833aca6 +0x10c:  mov    0x14(%ebp),%eax
0833aca9 +0x10f:  mov    %eax,-0x3c(%ebp)
0833acac +0x112:  mov    0xc(%ebp),%eax
0833acaf +0x115:  movzbl 0x1(%eax),%eax
0833acb3 +0x119:  movzbl %al,%edi
0833acb6 +0x11c:  mov    0xc(%ebp),%eax
0833acb9 +0x11f:  mov    0x7(%eax),%esi
0833acbc +0x122:  mov    0xc(%ebp),%eax
0833acbf +0x125:  mov    0x2(%eax),%eax
0833acc2 +0x128:  mov    %eax,%ebx
0833acc4 +0x12a:  mov    0x8(%ebp),%eax
0833acc7 +0x12d:  mov    0x1c(%eax),%eax
0833acca +0x130:  mov    %eax,(%esp)
0833accd +0x133:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0833acd2 +0x138:  mov    -0x3c(%ebp),%edx
0833acd5 +0x13b:  mov    %edx,0x18(%esp)
0833acd9 +0x13f:  mov    %edi,0x14(%esp)
0833acdd +0x143:  movl   $0x1,0x10(%esp)
0833ace5 +0x14b:  mov    %esi,0xc(%esp)
0833ace9 +0x14f:  mov    %ebx,0x8(%esp)
0833aced +0x153:  movl   $0x3,0x4(%esp)
0833acf5 +0x15b:  mov    %eax,(%esp)
0833acf8 +0x15e:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0833acfd +0x163:  mov    $0x1,%ebx
0833ad02 +0x168:  jmp    0833ad1f <+0x185>
0833ad04 +0x16a:  mov    %edx,%ebx
0833ad06 +0x16c:  mov    %eax,%esi
0833ad08 +0x16e:  lea    -0x34(%ebp),%eax
0833ad0b +0x171:  mov    %eax,(%esp)
0833ad0e +0x174:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833ad13 +0x179:  mov    %esi,%eax
0833ad15 +0x17b:  mov    %ebx,%edx
0833ad17 +0x17d:  mov    %eax,(%esp)
0833ad1a +0x180:  call   08ae3750 <_Unwind_Resume>
0833ad1f +0x185:  lea    -0x34(%ebp),%eax
0833ad22 +0x188:  mov    %eax,(%esp)
0833ad25 +0x18b:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833ad2a +0x190:  mov    %ebx,%eax
0833ad2c +0x192:  add    $0x5c,%esp
0833ad2f +0x195:  pop    %ebx
0833ad30 +0x196:  pop    %esi
0833ad31 +0x197:  pop    %edi
0833ad32 +0x198:  pop    %ebp
0833ad33 +0x199:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::RecvMail @ 0x833ab9a

/* user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::RecvMail
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
  int local_20;
  
  cVar4 = IsCreatureEquipmentScope(this,param_2);
  if (cVar4 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_38,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833abfe to 0833acfc has its CatchHandler @ 0833ad04 */
      local_20 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar4 = CDBMsgSender::RecvMail(local_38,param_1,iVar5,param_2,param_3,local_20);
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
                           "bool user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int)",0xc09
                           ,5);
        cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
      }
      CDBMsgSender::~CDBMsgSender(local_38);
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
