# ChangeOwner

`_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii`

`user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833ad34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833ad34  _ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii
#           user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int)
# range [0x0833ad34, 0x0833aedb]
0833ad34 +0x000:  push   %ebp
0833ad35 +0x001:  mov    %esp,%ebp
0833ad37 +0x003:  push   %edi
0833ad38 +0x004:  push   %esi
0833ad39 +0x005:  push   %ebx
0833ad3a +0x006:  sub    $0x5c,%esp
0833ad3d +0x009:  mov    0x10(%ebp),%eax
0833ad40 +0x00c:  mov    %eax,0x4(%esp)
0833ad44 +0x010:  mov    0x8(%ebp),%eax
0833ad47 +0x013:  mov    %eax,(%esp)
0833ad4a +0x016:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833ad4f +0x01b:  xor    $0x1,%eax
0833ad52 +0x01e:  test   %al,%al
0833ad54 +0x020:  je     0833ad60 <+0x2c>
0833ad56 +0x022:  mov    $0x1,%ebx
0833ad5b +0x027:  jmp    0833aed2 <+0x19e>
0833ad60 +0x02c:  mov    0xc(%ebp),%eax
0833ad63 +0x02f:  movzbl 0x1(%eax),%eax
0833ad67 +0x033:  cmp    $0x5,%al
0833ad69 +0x035:  je     0833ad75 <+0x41>
0833ad6b +0x037:  mov    $0x1,%ebx
0833ad70 +0x03c:  jmp    0833aed2 <+0x19e>
0833ad75 +0x041:  mov    0x8(%ebp),%eax
0833ad78 +0x044:  mov    0x1c(%eax),%eax
0833ad7b +0x047:  mov    %eax,0x8(%esp)
0833ad7f +0x04b:  movl   $0x8a,0x4(%esp)
0833ad87 +0x053:  lea    -0x34(%ebp),%eax
0833ad8a +0x056:  mov    %eax,(%esp)
0833ad8d +0x059:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833ad92 +0x05e:  mov    0x8(%ebp),%eax
0833ad95 +0x061:  mov    %eax,(%esp)
0833ad98 +0x064:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833ad9d +0x069:  mov    %eax,-0x1c(%ebp)
0833ada0 +0x06c:  mov    0x8(%ebp),%eax
0833ada3 +0x06f:  mov    0x1c(%eax),%eax
0833ada6 +0x072:  mov    %eax,(%esp)
0833ada9 +0x075:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833adae +0x07a:  mov    0x1c(%ebp),%edx
0833adb1 +0x07d:  mov    %edx,0x1c(%esp)
0833adb5 +0x081:  mov    0x18(%ebp),%edx
0833adb8 +0x084:  mov    %edx,0x18(%esp)
0833adbc +0x088:  mov    -0x1c(%ebp),%edx
0833adbf +0x08b:  mov    %edx,0x14(%esp)
0833adc3 +0x08f:  mov    0x14(%ebp),%edx
0833adc6 +0x092:  mov    %edx,0x10(%esp)
0833adca +0x096:  mov    0x10(%ebp),%edx
0833adcd +0x099:  mov    %edx,0xc(%esp)
0833add1 +0x09d:  mov    %eax,0x8(%esp)
0833add5 +0x0a1:  mov    0xc(%ebp),%eax
0833add8 +0x0a4:  mov    %eax,0x4(%esp)
0833addc +0x0a8:  lea    -0x34(%ebp),%eax
0833addf +0x0ab:  mov    %eax,(%esp)
0833ade2 +0x0ae:  call   0833ffe8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x20b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x20b5
0833ade7 +0x0b3:  xor    $0x1,%eax
0833adea +0x0b6:  test   %al,%al
0833adec +0x0b8:  je     0833ae43 <+0x10f>
0833adee +0x0ba:  mov    0x8(%ebp),%eax
0833adf1 +0x0bd:  mov    0x1c(%eax),%eax
0833adf4 +0x0c0:  mov    %eax,(%esp)
0833adf7 +0x0c3:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833adfc +0x0c8:  movzwl %ax,%ebx
0833adff +0x0cb:  movl   $0x5,0xc(%esp)
0833ae07 +0x0d3:  movl   $0xc26,0x8(%esp)
0833ae0f +0x0db:  movl   $&_ZZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_ItemiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833ae17 +0x0e3:  lea    -0x2c(%ebp),%eax
0833ae1a +0x0e6:  mov    %eax,(%esp)
0833ae1d +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833ae22 +0x0ee:  mov    %ebx,0x8(%esp)
0833ae26 +0x0f2:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833ae2e +0x0fa:  lea    -0x2c(%ebp),%eax
0833ae31 +0x0fd:  mov    %eax,(%esp)
0833ae34 +0x100:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833ae39 +0x105:  mov    $0x0,%ebx
0833ae3e +0x10a:  jmp    0833aec7 <+0x193>
0833ae43 +0x10f:  lea    -0x34(%ebp),%eax
0833ae46 +0x112:  mov    %eax,(%esp)
0833ae49 +0x115:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833ae4e +0x11a:  mov    0x14(%ebp),%eax
0833ae51 +0x11d:  mov    %eax,-0x3c(%ebp)
0833ae54 +0x120:  mov    0xc(%ebp),%eax
0833ae57 +0x123:  movzbl 0x1(%eax),%eax
0833ae5b +0x127:  movzbl %al,%edi
0833ae5e +0x12a:  mov    0xc(%ebp),%eax
0833ae61 +0x12d:  mov    0x7(%eax),%esi
0833ae64 +0x130:  mov    0xc(%ebp),%eax
0833ae67 +0x133:  mov    0x2(%eax),%eax
0833ae6a +0x136:  mov    %eax,%ebx
0833ae6c +0x138:  mov    0x8(%ebp),%eax
0833ae6f +0x13b:  mov    0x1c(%eax),%eax
0833ae72 +0x13e:  mov    %eax,(%esp)
0833ae75 +0x141:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0833ae7a +0x146:  mov    -0x3c(%ebp),%edx
0833ae7d +0x149:  mov    %edx,0x18(%esp)
0833ae81 +0x14d:  mov    %edi,0x14(%esp)
0833ae85 +0x151:  movl   $0x1,0x10(%esp)
0833ae8d +0x159:  mov    %esi,0xc(%esp)
0833ae91 +0x15d:  mov    %ebx,0x8(%esp)
0833ae95 +0x161:  movl   $0x3,0x4(%esp)
0833ae9d +0x169:  mov    %eax,(%esp)
0833aea0 +0x16c:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0833aea5 +0x171:  mov    $0x1,%ebx
0833aeaa +0x176:  jmp    0833aec7 <+0x193>
0833aeac +0x178:  mov    %edx,%ebx
0833aeae +0x17a:  mov    %eax,%esi
0833aeb0 +0x17c:  lea    -0x34(%ebp),%eax
0833aeb3 +0x17f:  mov    %eax,(%esp)
0833aeb6 +0x182:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833aebb +0x187:  mov    %esi,%eax
0833aebd +0x189:  mov    %ebx,%edx
0833aebf +0x18b:  mov    %eax,(%esp)
0833aec2 +0x18e:  call   08ae3750 <_Unwind_Resume>
0833aec7 +0x193:  lea    -0x34(%ebp),%eax
0833aeca +0x196:  mov    %eax,(%esp)
0833aecd +0x199:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833aed2 +0x19e:  mov    %ebx,%eax
0833aed4 +0x1a0:  add    $0x5c,%esp
0833aed7 +0x1a3:  pop    %ebx
0833aed8 +0x1a4:  pop    %esi
0833aed9 +0x1a5:  pop    %edi
0833aeda +0x1a6:  pop    %ebp
0833aedb +0x1a7:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::ChangeOwner @ 0x833ad34

/* user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int) */

bool __thiscall
user_creature::CCreatureMgr::ChangeOwner
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

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
                    /* try { // try from 0833ad98 to 0833aea4 has its CatchHandler @ 0833aeac */
      local_20 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar4 = CDBMsgSender::ChangeOwner
                        (local_38,param_1,iVar5,param_2,param_3,local_20,param_4,param_5);
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
                           "bool user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int)"
                           ,0xc26,5);
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
