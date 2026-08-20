# SendMail

`_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii`

`user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833aa32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833aa32  _ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii
#           user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int)
# range [0x0833aa32, 0x0833ab99]
0833aa32 +0x000:  push   %ebp
0833aa33 +0x001:  mov    %esp,%ebp
0833aa35 +0x003:  push   %esi
0833aa36 +0x004:  push   %ebx
0833aa37 +0x005:  sub    $0x40,%esp
0833aa3a +0x008:  mov    0x10(%ebp),%eax
0833aa3d +0x00b:  mov    %eax,0x4(%esp)
0833aa41 +0x00f:  mov    0x8(%ebp),%eax
0833aa44 +0x012:  mov    %eax,(%esp)
0833aa47 +0x015:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833aa4c +0x01a:  xor    $0x1,%eax
0833aa4f +0x01d:  test   %al,%al
0833aa51 +0x01f:  je     0833aa5d <+0x2b>
0833aa53 +0x021:  mov    $0x1,%ebx
0833aa58 +0x026:  jmp    0833ab91 <+0x15f>
0833aa5d +0x02b:  mov    0xc(%ebp),%eax
0833aa60 +0x02e:  movzbl 0x1(%eax),%eax
0833aa64 +0x032:  cmp    $0x5,%al
0833aa66 +0x034:  je     0833aa72 <+0x40>
0833aa68 +0x036:  mov    $0x1,%ebx
0833aa6d +0x03b:  jmp    0833ab91 <+0x15f>
0833aa72 +0x040:  mov    0x8(%ebp),%eax
0833aa75 +0x043:  mov    0x1c(%eax),%eax
0833aa78 +0x046:  mov    %eax,0x8(%esp)
0833aa7c +0x04a:  movl   $0x8a,0x4(%esp)
0833aa84 +0x052:  lea    -0x24(%ebp),%eax
0833aa87 +0x055:  mov    %eax,(%esp)
0833aa8a +0x058:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833aa8f +0x05d:  mov    0x8(%ebp),%eax
0833aa92 +0x060:  mov    %eax,(%esp)
0833aa95 +0x063:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833aa9a +0x068:  mov    %eax,-0xc(%ebp)
0833aa9d +0x06b:  mov    0x8(%ebp),%eax
0833aaa0 +0x06e:  mov    0x1c(%eax),%eax
0833aaa3 +0x071:  mov    %eax,(%esp)
0833aaa6 +0x074:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833aaab +0x079:  mov    -0xc(%ebp),%edx
0833aaae +0x07c:  mov    %edx,0x14(%esp)
0833aab2 +0x080:  mov    0x14(%ebp),%edx
0833aab5 +0x083:  mov    %edx,0x10(%esp)
0833aab9 +0x087:  mov    0x10(%ebp),%edx
0833aabc +0x08a:  mov    %edx,0xc(%esp)
0833aac0 +0x08e:  mov    %eax,0x8(%esp)
0833aac4 +0x092:  mov    0xc(%ebp),%eax
0833aac7 +0x095:  mov    %eax,0x4(%esp)
0833aacb +0x099:  lea    -0x24(%ebp),%eax
0833aace +0x09c:  mov    %eax,(%esp)
0833aad1 +0x09f:  call   0833fe8c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1f59>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1f59
0833aad6 +0x0a4:  xor    $0x1,%eax
0833aad9 +0x0a7:  test   %al,%al
0833aadb +0x0a9:  je     0833ab2f <+0xfd>
0833aadd +0x0ab:  mov    0x8(%ebp),%eax
0833aae0 +0x0ae:  mov    0x1c(%eax),%eax
0833aae3 +0x0b1:  mov    %eax,(%esp)
0833aae6 +0x0b4:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833aaeb +0x0b9:  movzwl %ax,%ebx
0833aaee +0x0bc:  movl   $0x5,0xc(%esp)
0833aaf6 +0x0c4:  movl   $0xbed,0x8(%esp)
0833aafe +0x0cc:  movl   $&_ZZN13user_creature12CCreatureMgr8SendMailEP10Inven_ItemiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833ab06 +0x0d4:  lea    -0x1c(%ebp),%eax
0833ab09 +0x0d7:  mov    %eax,(%esp)
0833ab0c +0x0da:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833ab11 +0x0df:  mov    %ebx,0x8(%esp)
0833ab15 +0x0e3:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833ab1d +0x0eb:  lea    -0x1c(%ebp),%eax
0833ab20 +0x0ee:  mov    %eax,(%esp)
0833ab23 +0x0f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833ab28 +0x0f6:  mov    $0x0,%ebx
0833ab2d +0x0fb:  jmp    0833ab86 <+0x154>
0833ab2f +0x0fd:  lea    -0x24(%ebp),%eax
0833ab32 +0x100:  mov    %eax,(%esp)
0833ab35 +0x103:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833ab3a +0x108:  mov    0xc(%ebp),%eax
0833ab3d +0x10b:  mov    0x7(%eax),%eax
0833ab40 +0x10e:  mov    0x14(%ebp),%edx
0833ab43 +0x111:  mov    %edx,0x8(%esp)
0833ab47 +0x115:  mov    %eax,0x4(%esp)
0833ab4b +0x119:  mov    0x8(%ebp),%eax
0833ab4e +0x11c:  mov    %eax,(%esp)
0833ab51 +0x11f:  call   0833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>  ; user_creature::CCreatureMgr::DeleteCreatureItem(int, int)
0833ab56 +0x124:  xor    $0x1,%eax
0833ab59 +0x127:  test   %al,%al
0833ab5b +0x129:  je     0833ab64 <+0x132>
0833ab5d +0x12b:  mov    $0x0,%ebx
0833ab62 +0x130:  jmp    0833ab86 <+0x154>
0833ab64 +0x132:  mov    $0x1,%ebx
0833ab69 +0x137:  jmp    0833ab86 <+0x154>
0833ab6b +0x139:  mov    %edx,%ebx
0833ab6d +0x13b:  mov    %eax,%esi
0833ab6f +0x13d:  lea    -0x24(%ebp),%eax
0833ab72 +0x140:  mov    %eax,(%esp)
0833ab75 +0x143:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833ab7a +0x148:  mov    %esi,%eax
0833ab7c +0x14a:  mov    %ebx,%edx
0833ab7e +0x14c:  mov    %eax,(%esp)
0833ab81 +0x14f:  call   08ae3750 <_Unwind_Resume>
0833ab86 +0x154:  lea    -0x24(%ebp),%eax
0833ab89 +0x157:  mov    %eax,(%esp)
0833ab8c +0x15a:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833ab91 +0x15f:  mov    %ebx,%eax
0833ab93 +0x161:  add    $0x40,%esp
0833ab96 +0x164:  pop    %ebx
0833ab97 +0x165:  pop    %esi
0833ab98 +0x166:  pop    %ebp
0833ab99 +0x167:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SendMail @ 0x833aa32

/* user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SendMail
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CDBMsgSender local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  cVar1 = IsCreatureEquipmentScope(this,param_2);
  if (cVar1 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833aa95 to 0833ab55 has its CatchHandler @ 0833ab6b */
      local_10 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar1 = CDBMsgSender::SendMail(local_28,param_1,iVar2,param_2,param_3,local_10);
      if (cVar1 == '\x01') {
        CDBMsgSender::Send(local_28);
        cVar1 = DeleteCreatureItem((int)this,*(int *)(param_1 + 7));
        if (cVar1 == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar3 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_20,
                           "bool user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int)",0xbed
                           ,5);
        cMyTrace::operator()(local_20,"cannot write db uid(%d)\n",uVar3 & 0xffff);
        uVar4 = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_28);
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
