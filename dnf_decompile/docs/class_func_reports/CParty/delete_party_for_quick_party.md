# delete_party_for_quick_party

`_ZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EE`

`CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b52c  _ZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EE
#           CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&)
# range [0x0859b52c, 0x0859b73d]
0859b52c +0x000:  push   %ebp
0859b52d +0x001:  mov    %esp,%ebp
0859b52f +0x003:  push   %edi
0859b530 +0x004:  push   %esi
0859b531 +0x005:  push   %ebx
0859b532 +0x006:  sub    $0x4c,%esp
0859b535 +0x009:  mov    0xc(%ebp),%eax
0859b538 +0x00c:  test   %eax,%eax
0859b53a +0x00e:  jne    0859b572 <+0x46>
0859b53c +0x010:  movl   $"QUICK_PARTY_LOG : NO EXIST USER!!",0x10(%esp)
0859b544 +0x018:  movl   $0x465,0xc(%esp)
0859b54c +0x020:  movl   $&_ZZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EEE19__PRETTY_FUNCTION__,0x8(%esp)
0859b554 +0x028:  movl   $"party.cpp",0x4(%esp)
0859b55c +0x030:  movl   $0x1,(%esp)
0859b563 +0x037:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859b568 +0x03c:  mov    $0x1,%eax
0859b56d +0x041:  jmp    0859b735 <+0x209>
0859b572 +0x046:  mov    0x8(%ebp),%eax
0859b575 +0x049:  mov    %eax,(%esp)
0859b578 +0x04c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859b57d +0x051:  cmp    $0x1,%eax
0859b580 +0x054:  sete   %al
0859b583 +0x057:  test   %al,%al
0859b585 +0x059:  je     0859b63f <+0x113>
0859b58b +0x05f:  mov    0xc(%ebp),%eax
0859b58e +0x062:  mov    %eax,(%esp)
0859b591 +0x065:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
0859b596 +0x06a:  movswl %ax,%edi
0859b599 +0x06d:  mov    0xc(%ebp),%eax
0859b59c +0x070:  mov    %eax,(%esp)
0859b59f +0x073:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0859b5a4 +0x078:  mov    %eax,%esi
0859b5a6 +0x07a:  mov    0xc(%ebp),%eax
0859b5a9 +0x07d:  mov    %eax,(%esp)
0859b5ac +0x080:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859b5b1 +0x085:  movl   $0x0,0x4(%esp)
0859b5b9 +0x08d:  mov    %eax,(%esp)
0859b5bc +0x090:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0859b5c1 +0x095:  mov    %eax,%ebx
0859b5c3 +0x097:  movl   $0x0,0xc(%esp)
0859b5cb +0x09f:  movl   $0x46c,0x8(%esp)
0859b5d3 +0x0a7:  movl   $&_ZZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EEE19__PRETTY_FUNCTION__,0x4(%esp)
0859b5db +0x0af:  lea    -0x2c(%ebp),%eax
0859b5de +0x0b2:  mov    %eax,(%esp)
0859b5e1 +0x0b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859b5e6 +0x0ba:  mov    %edi,0x10(%esp)
0859b5ea +0x0be:  mov    %esi,0xc(%esp)
0859b5ee +0x0c2:  mov    %ebx,0x8(%esp)
0859b5f2 +0x0c6:  movl   $"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",0x4(%esp)
0859b5fa +0x0ce:  lea    -0x2c(%ebp),%eax
0859b5fd +0x0d1:  mov    %eax,(%esp)
0859b600 +0x0d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859b605 +0x0d9:  mov    0xc(%ebp),%eax
0859b608 +0x0dc:  movl   $0xffffffff,0x4(%esp)
0859b610 +0x0e4:  mov    %eax,(%esp)
0859b613 +0x0e7:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b618 +0x0ec:  lea    0xc(%ebp),%eax
0859b61b +0x0ef:  mov    %eax,0x4(%esp)
0859b61f +0x0f3:  mov    0x10(%ebp),%eax
0859b622 +0x0f6:  mov    %eax,(%esp)
0859b625 +0x0f9:  call   085c02aa <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1808>  ; global constructors keyed to CParty::cMember::cMember()+0x1808
0859b62a +0x0fe:  mov    0x8(%ebp),%eax
0859b62d +0x101:  mov    %eax,(%esp)
0859b630 +0x104:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
0859b635 +0x109:  mov    $0x0,%eax
0859b63a +0x10e:  jmp    0859b735 <+0x209>
0859b63f +0x113:  mov    0x8(%ebp),%eax
0859b642 +0x116:  mov    0x74(%eax),%edx
0859b645 +0x119:  mov    0xc(%ebp),%eax
0859b648 +0x11c:  cmp    %eax,%edx
0859b64a +0x11e:  jne    0859b673 <+0x147>
0859b64c +0x120:  mov    0x8(%ebp),%eax
0859b64f +0x123:  mov    %eax,(%esp)
0859b652 +0x126:  call   0859b404 <_ZN6CParty30change_manager_for_quick_partyEv>  ; CParty::change_manager_for_quick_party()
0859b657 +0x12b:  lea    0xc(%ebp),%eax
0859b65a +0x12e:  mov    %eax,0x4(%esp)
0859b65e +0x132:  mov    0x10(%ebp),%eax
0859b661 +0x135:  mov    %eax,(%esp)
0859b664 +0x138:  call   085c02aa <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1808>  ; global constructors keyed to CParty::cMember::cMember()+0x1808
0859b669 +0x13d:  mov    $0x0,%eax
0859b66e +0x142:  jmp    0859b735 <+0x209>
0859b673 +0x147:  movl   $0x0,-0x1c(%ebp)
0859b67a +0x14e:  jmp    0859b721 <+0x1f5>
0859b67f +0x153:  mov    -0x1c(%ebp),%eax
0859b682 +0x156:  mov    %eax,0x4(%esp)
0859b686 +0x15a:  mov    0x8(%ebp),%eax
0859b689 +0x15d:  mov    %eax,(%esp)
0859b68c +0x160:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859b691 +0x165:  xor    $0x1,%eax
0859b694 +0x168:  test   %al,%al
0859b696 +0x16a:  jne    0859b71c <+0x1f0>
0859b69c +0x170:  mov    -0x1c(%ebp),%edx
0859b69f +0x173:  mov    0x8(%ebp),%ecx
0859b6a2 +0x176:  mov    %edx,%eax
0859b6a4 +0x178:  add    %eax,%eax
0859b6a6 +0x17a:  add    %edx,%eax
0859b6a8 +0x17c:  shl    $0x3,%eax
0859b6ab +0x17f:  lea    (%ecx,%eax,1),%eax
0859b6ae +0x182:  add    $0x78,%eax
0859b6b1 +0x185:  mov    (%eax),%edx
0859b6b3 +0x187:  mov    0xc(%ebp),%eax
0859b6b6 +0x18a:  cmp    %eax,%edx
0859b6b8 +0x18c:  jne    0859b71d <+0x1f1>
0859b6ba +0x18e:  mov    -0x1c(%ebp),%edx
0859b6bd +0x191:  mov    0x8(%ebp),%ecx
0859b6c0 +0x194:  mov    %edx,%eax
0859b6c2 +0x196:  add    %eax,%eax
0859b6c4 +0x198:  add    %edx,%eax
0859b6c6 +0x19a:  shl    $0x3,%eax
0859b6c9 +0x19d:  lea    (%ecx,%eax,1),%eax
0859b6cc +0x1a0:  add    $0x78,%eax
0859b6cf +0x1a3:  movl   $0x0,(%eax)
0859b6d5 +0x1a9:  mov    -0x1c(%ebp),%edx
0859b6d8 +0x1ac:  mov    0x8(%ebp),%ecx
0859b6db +0x1af:  mov    %edx,%eax
0859b6dd +0x1b1:  add    %eax,%eax
0859b6df +0x1b3:  add    %edx,%eax
0859b6e1 +0x1b5:  shl    $0x3,%eax
0859b6e4 +0x1b8:  lea    (%ecx,%eax,1),%eax
0859b6e7 +0x1bb:  sub    $0xffffff80,%eax
0859b6ea +0x1be:  movl   $0x0,(%eax)
0859b6f0 +0x1c4:  mov    0xc(%ebp),%eax
0859b6f3 +0x1c7:  movl   $0xffffffff,0x4(%esp)
0859b6fb +0x1cf:  mov    %eax,(%esp)
0859b6fe +0x1d2:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b703 +0x1d7:  lea    0xc(%ebp),%eax
0859b706 +0x1da:  mov    %eax,0x4(%esp)
0859b70a +0x1de:  mov    0x10(%ebp),%eax
0859b70d +0x1e1:  mov    %eax,(%esp)
0859b710 +0x1e4:  call   085c02aa <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1808>  ; global constructors keyed to CParty::cMember::cMember()+0x1808
0859b715 +0x1e9:  mov    $0x0,%eax
0859b71a +0x1ee:  jmp    0859b735 <+0x209>
0859b71c +0x1f0:  nop
0859b71d +0x1f1:  addl   $0x1,-0x1c(%ebp)
0859b721 +0x1f5:  cmpl   $0x3,-0x1c(%ebp)
0859b725 +0x1f9:  setle  %al
0859b728 +0x1fc:  test   %al,%al
0859b72a +0x1fe:  jne    0859b67f <+0x153>
0859b730 +0x204:  mov    $0x1,%eax
0859b735 +0x209:  add    $0x4c,%esp
0859b738 +0x20c:  pop    %ebx
0859b739 +0x20d:  pop    %esi
0859b73a +0x20e:  pop    %edi
0859b73b +0x20f:  pop    %ebp
0859b73c +0x210:  ret
0859b73d +0x211:  nop
```

## 反编译 C

```c
// CParty::delete_party_for_quick_party @ 0x859b52c

/* CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&) */

undefined4 __thiscall
CParty::delete_party_for_quick_party(CParty *this,CUser *param_1,list *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  cMyTrace local_30 [16];
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"party.cpp",
               "int CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&)"
               ,0x465,"QUICK_PARTY_LOG : NO EXIST USER!!");
    uVar3 = 1;
  }
  else {
    iVar4 = get_member_count(this);
    if (iVar4 == 1) {
      sVar2 = CUser::GetPartyIndex(param_1);
      uVar3 = CUser::get_state(param_1);
      uVar5 = CUser::get_acc_id(param_1);
      uVar6 = NumberToString(uVar5,0);
      cMyTrace::cMyTrace(local_30,
                         "int CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&)"
                         ,0x46c,0);
      cMyTrace::operator()
                (local_30,"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",uVar6,
                 uVar3,(int)sVar2);
      CUser::SetPartyIndex(param_1,-1);
      std::list<CUser*,std::allocator<CUser*>>::push_back
                ((list<CUser*,std::allocator<CUser*>> *)param_2,&param_1);
      destroy(this);
      uVar3 = 0;
    }
    else if (*(CUser **)(this + 0x74) == param_1) {
      change_manager_for_quick_party(this);
      std::list<CUser*,std::allocator<CUser*>>::push_back
                ((list<CUser*,std::allocator<CUser*>> *)param_2,&param_1);
      uVar3 = 0;
    }
    else {
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        cVar1 = _checkValidUser(this,local_20);
        if ((cVar1 == '\x01') && (*(CUser **)(this + local_20 * 0x18 + 0x78) == param_1)) {
          *(undefined4 *)(this + local_20 * 0x18 + 0x78) = 0;
          *(undefined4 *)(this + local_20 * 0x18 + 0x80) = 0;
          CUser::SetPartyIndex(param_1,-1);
          std::list<CUser*,std::allocator<CUser*>>::push_back
                    ((list<CUser*,std::allocator<CUser*>> *)param_2,&param_1);
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
