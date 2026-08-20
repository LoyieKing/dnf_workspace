# AuctionRegist

`_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii`

`user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b09c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b09c  _ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii
#           user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int)
# range [0x0833b09c, 0x0833b203]
0833b09c +0x000:  push   %ebp
0833b09d +0x001:  mov    %esp,%ebp
0833b09f +0x003:  push   %esi
0833b0a0 +0x004:  push   %ebx
0833b0a1 +0x005:  sub    $0x40,%esp
0833b0a4 +0x008:  mov    0x10(%ebp),%eax
0833b0a7 +0x00b:  mov    %eax,0x4(%esp)
0833b0ab +0x00f:  mov    0x8(%ebp),%eax
0833b0ae +0x012:  mov    %eax,(%esp)
0833b0b1 +0x015:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833b0b6 +0x01a:  xor    $0x1,%eax
0833b0b9 +0x01d:  test   %al,%al
0833b0bb +0x01f:  je     0833b0c7 <+0x2b>
0833b0bd +0x021:  mov    $0x1,%ebx
0833b0c2 +0x026:  jmp    0833b1fb <+0x15f>
0833b0c7 +0x02b:  mov    0xc(%ebp),%eax
0833b0ca +0x02e:  movzbl 0x1(%eax),%eax
0833b0ce +0x032:  cmp    $0x5,%al
0833b0d0 +0x034:  je     0833b0dc <+0x40>
0833b0d2 +0x036:  mov    $0x1,%ebx
0833b0d7 +0x03b:  jmp    0833b1fb <+0x15f>
0833b0dc +0x040:  mov    0x8(%ebp),%eax
0833b0df +0x043:  mov    0x1c(%eax),%eax
0833b0e2 +0x046:  mov    %eax,0x8(%esp)
0833b0e6 +0x04a:  movl   $0x8a,0x4(%esp)
0833b0ee +0x052:  lea    -0x24(%ebp),%eax
0833b0f1 +0x055:  mov    %eax,(%esp)
0833b0f4 +0x058:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833b0f9 +0x05d:  mov    0x8(%ebp),%eax
0833b0fc +0x060:  mov    %eax,(%esp)
0833b0ff +0x063:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833b104 +0x068:  mov    %eax,-0xc(%ebp)
0833b107 +0x06b:  mov    0x8(%ebp),%eax
0833b10a +0x06e:  mov    0x1c(%eax),%eax
0833b10d +0x071:  mov    %eax,(%esp)
0833b110 +0x074:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833b115 +0x079:  mov    -0xc(%ebp),%edx
0833b118 +0x07c:  mov    %edx,0x14(%esp)
0833b11c +0x080:  mov    0x14(%ebp),%edx
0833b11f +0x083:  mov    %edx,0x10(%esp)
0833b123 +0x087:  mov    0x10(%ebp),%edx
0833b126 +0x08a:  mov    %edx,0xc(%esp)
0833b12a +0x08e:  mov    %eax,0x8(%esp)
0833b12e +0x092:  mov    0xc(%ebp),%eax
0833b131 +0x095:  mov    %eax,0x4(%esp)
0833b135 +0x099:  lea    -0x24(%ebp),%eax
0833b138 +0x09c:  mov    %eax,(%esp)
0833b13b +0x09f:  call   08340144 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2211>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2211
0833b140 +0x0a4:  xor    $0x1,%eax
0833b143 +0x0a7:  test   %al,%al
0833b145 +0x0a9:  je     0833b199 <+0xfd>
0833b147 +0x0ab:  mov    0x8(%ebp),%eax
0833b14a +0x0ae:  mov    0x1c(%eax),%eax
0833b14d +0x0b1:  mov    %eax,(%esp)
0833b150 +0x0b4:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833b155 +0x0b9:  movzwl %ax,%ebx
0833b158 +0x0bc:  movl   $0x5,0xc(%esp)
0833b160 +0x0c4:  movl   $0xc5c,0x8(%esp)
0833b168 +0x0cc:  movl   $&_ZZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_ItemiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833b170 +0x0d4:  lea    -0x1c(%ebp),%eax
0833b173 +0x0d7:  mov    %eax,(%esp)
0833b176 +0x0da:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833b17b +0x0df:  mov    %ebx,0x8(%esp)
0833b17f +0x0e3:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833b187 +0x0eb:  lea    -0x1c(%ebp),%eax
0833b18a +0x0ee:  mov    %eax,(%esp)
0833b18d +0x0f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833b192 +0x0f6:  mov    $0x0,%ebx
0833b197 +0x0fb:  jmp    0833b1f0 <+0x154>
0833b199 +0x0fd:  lea    -0x24(%ebp),%eax
0833b19c +0x100:  mov    %eax,(%esp)
0833b19f +0x103:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833b1a4 +0x108:  mov    0xc(%ebp),%eax
0833b1a7 +0x10b:  mov    0x7(%eax),%eax
0833b1aa +0x10e:  mov    0x14(%ebp),%edx
0833b1ad +0x111:  mov    %edx,0x8(%esp)
0833b1b1 +0x115:  mov    %eax,0x4(%esp)
0833b1b5 +0x119:  mov    0x8(%ebp),%eax
0833b1b8 +0x11c:  mov    %eax,(%esp)
0833b1bb +0x11f:  call   0833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>  ; user_creature::CCreatureMgr::DeleteCreatureItem(int, int)
0833b1c0 +0x124:  xor    $0x1,%eax
0833b1c3 +0x127:  test   %al,%al
0833b1c5 +0x129:  je     0833b1ce <+0x132>
0833b1c7 +0x12b:  mov    $0x0,%ebx
0833b1cc +0x130:  jmp    0833b1f0 <+0x154>
0833b1ce +0x132:  mov    $0x1,%ebx
0833b1d3 +0x137:  jmp    0833b1f0 <+0x154>
0833b1d5 +0x139:  mov    %edx,%ebx
0833b1d7 +0x13b:  mov    %eax,%esi
0833b1d9 +0x13d:  lea    -0x24(%ebp),%eax
0833b1dc +0x140:  mov    %eax,(%esp)
0833b1df +0x143:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b1e4 +0x148:  mov    %esi,%eax
0833b1e6 +0x14a:  mov    %ebx,%edx
0833b1e8 +0x14c:  mov    %eax,(%esp)
0833b1eb +0x14f:  call   08ae3750 <_Unwind_Resume>
0833b1f0 +0x154:  lea    -0x24(%ebp),%eax
0833b1f3 +0x157:  mov    %eax,(%esp)
0833b1f6 +0x15a:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b1fb +0x15f:  mov    %ebx,%eax
0833b1fd +0x161:  add    $0x40,%esp
0833b200 +0x164:  pop    %ebx
0833b201 +0x165:  pop    %esi
0833b202 +0x166:  pop    %ebp
0833b203 +0x167:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::AuctionRegist @ 0x833b09c

/* user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::AuctionRegist
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
                    /* try { // try from 0833b0ff to 0833b1bf has its CatchHandler @ 0833b1d5 */
      local_10 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar1 = CDBMsgSender::AuctionRegist(local_28,param_1,iVar2,param_2,param_3,local_10);
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
                           "bool user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int)",
                           0xc5c,5);
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
