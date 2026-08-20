# checkUserConditionEnterBlueMarble

`_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser`

`BlueMarble::checkUserConditionEnterBlueMarble(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8d02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8d02  _ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser
#           BlueMarble::checkUserConditionEnterBlueMarble(CUser*)
# range [0x080d8d02, 0x080d8f57]
080d8d02 +0x000:  push   %ebp
080d8d03 +0x001:  mov    %esp,%ebp
080d8d05 +0x003:  sub    $0x28,%esp
080d8d08 +0x006:  cmpl   $0x0,0xc(%ebp)
080d8d0c +0x00a:  jne    080d8d18 <+0x16>
080d8d0e +0x00c:  mov    $0x17,%eax
080d8d13 +0x011:  jmp    080d8f56 <+0x254>
080d8d18 +0x016:  movl   $0x0,-0x14(%ebp)
080d8d1f +0x01d:  movl   $0x0,-0x10(%ebp)
080d8d26 +0x024:  jmp    080d8d57 <+0x55>
080d8d28 +0x026:  mov    -0x10(%ebp),%eax
080d8d2b +0x029:  mov    0x8(%ebp),%edx
080d8d2e +0x02c:  add    $0x4,%edx
080d8d31 +0x02f:  mov    %eax,0x4(%esp)
080d8d35 +0x033:  mov    %edx,(%esp)
080d8d38 +0x036:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8d3d +0x03b:  mov    %eax,(%esp)
080d8d40 +0x03e:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8d45 +0x043:  cmp    0xc(%ebp),%eax
080d8d48 +0x046:  sete   %al
080d8d4b +0x049:  test   %al,%al
080d8d4d +0x04b:  je     080d8d53 <+0x51>
080d8d4f +0x04d:  addl   $0x1,-0x14(%ebp)
080d8d53 +0x051:  addl   $0x1,-0x10(%ebp)
080d8d57 +0x055:  mov    0x8(%ebp),%eax
080d8d5a +0x058:  mov    0x38(%eax),%eax
080d8d5d +0x05b:  mov    0x30(%eax),%eax
080d8d60 +0x05e:  cmp    -0x10(%ebp),%eax
080d8d63 +0x061:  setg   %al
080d8d66 +0x064:  test   %al,%al
080d8d68 +0x066:  jne    080d8d28 <+0x26>
080d8d6a +0x068:  cmpl   $0x0,-0x14(%ebp)
080d8d6e +0x06c:  jle    080d8d8c <+0x8a>
080d8d70 +0x06e:  mov    0xc(%ebp),%eax
080d8d73 +0x071:  mov    %eax,0x4(%esp)
080d8d77 +0x075:  mov    0x8(%ebp),%eax
080d8d7a +0x078:  mov    %eax,(%esp)
080d8d7d +0x07b:  call   080d9136 <_ZN10BlueMarble9leaveUserEP5CUser>  ; BlueMarble::leaveUser(CUser*)
080d8d82 +0x080:  mov    $0x12,%eax
080d8d87 +0x085:  jmp    080d8f56 <+0x254>
080d8d8c +0x08a:  mov    0xc(%ebp),%eax
080d8d8f +0x08d:  mov    %eax,(%esp)
080d8d92 +0x090:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080d8d97 +0x095:  cmp    $0x3,%eax
080d8d9a +0x098:  setne  %al
080d8d9d +0x09b:  test   %al,%al
080d8d9f +0x09d:  je     080d8dab <+0xa9>
080d8da1 +0x09f:  mov    $0x17,%eax
080d8da6 +0x0a4:  jmp    080d8f56 <+0x254>
080d8dab +0x0a9:  mov    0xc(%ebp),%eax
080d8dae +0x0ac:  mov    %eax,(%esp)
080d8db1 +0x0af:  call   080da32a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4c7>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4c7
080d8db6 +0x0b4:  test   %al,%al
080d8db8 +0x0b6:  je     080d8dc4 <+0xc2>
080d8dba +0x0b8:  mov    $0x17,%eax
080d8dbf +0x0bd:  jmp    080d8f56 <+0x254>
080d8dc4 +0x0c2:  mov    0xc(%ebp),%eax
080d8dc7 +0x0c5:  mov    %eax,(%esp)
080d8dca +0x0c8:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
080d8dcf +0x0cd:  cmp    $0x1,%eax
080d8dd2 +0x0d0:  sete   %al
080d8dd5 +0x0d3:  test   %al,%al
080d8dd7 +0x0d5:  je     080d8de3 <+0xe1>
080d8dd9 +0x0d7:  mov    $0x17,%eax
080d8dde +0x0dc:  jmp    080d8f56 <+0x254>
080d8de3 +0x0e1:  mov    0xc(%ebp),%eax
080d8de6 +0x0e4:  mov    %eax,(%esp)
080d8de9 +0x0e7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080d8dee +0x0ec:  mov    0x8(%ebp),%edx
080d8df1 +0x0ef:  mov    0x38(%edx),%edx
080d8df4 +0x0f2:  mov    0x34(%edx),%edx
080d8df7 +0x0f5:  cmp    %edx,%eax
080d8df9 +0x0f7:  jl     080d8e13 <+0x111>
080d8dfb +0x0f9:  mov    0xc(%ebp),%eax
080d8dfe +0x0fc:  mov    %eax,(%esp)
080d8e01 +0x0ff:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080d8e06 +0x104:  mov    0x8(%ebp),%edx
080d8e09 +0x107:  mov    0x38(%edx),%edx
080d8e0c +0x10a:  mov    0x38(%edx),%edx
080d8e0f +0x10d:  cmp    %edx,%eax
080d8e11 +0x10f:  jle    080d8e1a <+0x118>
080d8e13 +0x111:  mov    $0x1,%eax
080d8e18 +0x116:  jmp    080d8e1f <+0x11d>
080d8e1a +0x118:  mov    $0x0,%eax
080d8e1f +0x11d:  test   %al,%al
080d8e21 +0x11f:  je     080d8e2d <+0x12b>
080d8e23 +0x121:  mov    $0x17,%eax
080d8e28 +0x126:  jmp    080d8f56 <+0x254>
080d8e2d +0x12b:  mov    0xc(%ebp),%eax
080d8e30 +0x12e:  mov    %eax,(%esp)
080d8e33 +0x131:  call   08690f42 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv>  ; CUserCharacInfo::getBlueMarbleEnterCount() const
080d8e38 +0x136:  movzbl %al,%edx
080d8e3b +0x139:  mov    0x8(%ebp),%eax
080d8e3e +0x13c:  mov    0x38(%eax),%eax
080d8e41 +0x13f:  mov    0x3c(%eax),%eax
080d8e44 +0x142:  cmp    %eax,%edx
080d8e46 +0x144:  setge  %al
080d8e49 +0x147:  test   %al,%al
080d8e4b +0x149:  je     080d8e57 <+0x155>
080d8e4d +0x14b:  mov    $0x17,%eax
080d8e52 +0x150:  jmp    080d8f56 <+0x254>
080d8e57 +0x155:  mov    0xc(%ebp),%eax
080d8e5a +0x158:  mov    %eax,(%esp)
080d8e5d +0x15b:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
080d8e62 +0x160:  cmp    $0x7,%al
080d8e64 +0x162:  sete   %al
080d8e67 +0x165:  test   %al,%al
080d8e69 +0x167:  je     080d8e75 <+0x173>
080d8e6b +0x169:  mov    $0x17,%eax
080d8e70 +0x16e:  jmp    080d8f56 <+0x254>
080d8e75 +0x173:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
080d8e7a +0x178:  mov    0xc(%ebp),%edx
080d8e7d +0x17b:  mov    %edx,0x4(%esp)
080d8e81 +0x17f:  mov    %eax,(%esp)
080d8e84 +0x182:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
080d8e89 +0x187:  test   %al,%al
080d8e8b +0x189:  je     080d8e97 <+0x195>
080d8e8d +0x18b:  mov    $0x17,%eax
080d8e92 +0x190:  jmp    080d8f56 <+0x254>
080d8e97 +0x195:  mov    0xc(%ebp),%eax
080d8e9a +0x198:  mov    %eax,(%esp)
080d8e9d +0x19b:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
080d8ea2 +0x1a0:  test   %al,%al
080d8ea4 +0x1a2:  je     080d8eb0 <+0x1ae>
080d8ea6 +0x1a4:  mov    $0x17,%eax
080d8eab +0x1a9:  jmp    080d8f56 <+0x254>
080d8eb0 +0x1ae:  mov    0xc(%ebp),%eax
080d8eb3 +0x1b1:  mov    %eax,(%esp)
080d8eb6 +0x1b4:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
080d8ebb +0x1b9:  test   %al,%al
080d8ebd +0x1bb:  je     080d8ec9 <+0x1c7>
080d8ebf +0x1bd:  mov    $0x17,%eax
080d8ec4 +0x1c2:  jmp    080d8f56 <+0x254>
080d8ec9 +0x1c7:  mov    0xc(%ebp),%eax
080d8ecc +0x1ca:  mov    %eax,(%esp)
080d8ecf +0x1cd:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
080d8ed4 +0x1d2:  test   %al,%al
080d8ed6 +0x1d4:  je     080d8edf <+0x1dd>
080d8ed8 +0x1d6:  mov    $0x17,%eax
080d8edd +0x1db:  jmp    080d8f56 <+0x254>
080d8edf +0x1dd:  mov    0xc(%ebp),%eax
080d8ee2 +0x1e0:  mov    %eax,(%esp)
080d8ee5 +0x1e3:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
080d8eea +0x1e8:  test   %al,%al
080d8eec +0x1ea:  je     080d8ef5 <+0x1f3>
080d8eee +0x1ec:  mov    $0x17,%eax
080d8ef3 +0x1f1:  jmp    080d8f56 <+0x254>
080d8ef5 +0x1f3:  mov    0xc(%ebp),%eax
080d8ef8 +0x1f6:  mov    %eax,(%esp)
080d8efb +0x1f9:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
080d8f00 +0x1fe:  test   %al,%al
080d8f02 +0x200:  je     080d8f51 <+0x24f>
080d8f04 +0x202:  mov    0xc(%ebp),%eax
080d8f07 +0x205:  mov    %eax,(%esp)
080d8f0a +0x208:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
080d8f0f +0x20d:  mov    %eax,-0xc(%ebp)
080d8f12 +0x210:  cmpl   $0x0,-0xc(%ebp)
080d8f16 +0x214:  je     080d8f51 <+0x24f>
080d8f18 +0x216:  mov    0xc(%ebp),%eax
080d8f1b +0x219:  mov    %eax,(%esp)
080d8f1e +0x21c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
080d8f23 +0x221:  movzwl %ax,%eax
080d8f26 +0x224:  mov    %eax,0x4(%esp)
080d8f2a +0x228:  mov    -0xc(%ebp),%eax
080d8f2d +0x22b:  mov    %eax,(%esp)
080d8f30 +0x22e:  call   0859d4b8 <_ZN6CParty22send_invite_bluemarbleEi>  ; CParty::send_invite_bluemarble(int)
080d8f35 +0x233:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
080d8f3a +0x238:  movl   $0x0,0x8(%esp)
080d8f42 +0x240:  mov    0xc(%ebp),%edx
080d8f45 +0x243:  mov    %edx,0x4(%esp)
080d8f49 +0x247:  mov    %eax,(%esp)
080d8f4c +0x24a:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
080d8f51 +0x24f:  mov    $0x0,%eax
080d8f56 +0x254:  leave
080d8f57 +0x255:  ret
```

## 反编译 C

```c
// BlueMarble::checkUserConditionEnterBlueMarble @ 0x80d8d02

/* BlueMarble::checkUserConditionEnterBlueMarble(CUser*) */

undefined4 __thiscall BlueMarble::checkUserConditionEnterBlueMarble(BlueMarble *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  BlueMarbleUserInfo *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CPrivateStoreMgr *this_01;
  CParty *this_02;
  CUser *pCVar6;
  int local_18;
  uint local_14;
  
  if (param_1 == (CUser *)0x0) {
    return 0x17;
  }
  local_18 = 0;
  for (local_14 = 0; (int)local_14 < *(int *)(*(int *)(this + 0x38) + 0x30); local_14 = local_14 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_14);
    pCVar6 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
    if (pCVar6 == param_1) {
      local_18 = local_18 + 1;
    }
  }
  if (0 < local_18) {
    leaveUser(this,param_1);
    return 0x12;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 3) {
    return 0x17;
  }
  cVar2 = CUser::checkInBlueMarble(param_1);
  if (cVar2 == '\0') {
    iVar3 = CUser::getMoveSpace(param_1);
    if (iVar3 != 1) {
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if ((iVar3 < *(int *)(*(int *)(this + 0x38) + 0x34)) ||
         (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1),
         *(int *)(*(int *)(this + 0x38) + 0x38) < iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = 0x17;
      }
      else {
        uVar5 = CUserCharacInfo::getBlueMarbleEnterCount((CUserCharacInfo *)param_1);
        if ((int)(uVar5 & 0xff) < *(int *)(*(int *)(this + 0x38) + 0x3c)) {
          cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          if (cVar2 == '\a') {
            uVar4 = 0x17;
          }
          else {
            this_01 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
            cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_01,param_1);
            if (cVar2 == '\0') {
              cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
              if (cVar2 == '\0') {
                cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
                if (cVar2 == '\0') {
                  cVar2 = CUser::CheckInTrade(param_1);
                  if (cVar2 == '\0') {
                    cVar2 = CUser::isCompetitionMercenary(param_1);
                    if (cVar2 == '\0') {
                      cVar2 = CUser::CheckInParty(param_1);
                      if ((cVar2 != '\0') &&
                         (this_02 = (CParty *)CUser::GetParty(param_1), this_02 != (CParty *)0x0)) {
                        uVar5 = CUser::get_unique_id(param_1);
                        CParty::send_invite_bluemarble(this_02,uVar5 & 0xffff);
                        pCVar6 = (CUser *)G_CGameManager();
                        CGameManager::CheckOutParty(pCVar6,SUB41(param_1,0));
                      }
                      uVar4 = 0;
                    }
                    else {
                      uVar4 = 0x17;
                    }
                  }
                  else {
                    uVar4 = 0x17;
                  }
                }
                else {
                  uVar4 = 0x17;
                }
              }
              else {
                uVar4 = 0x17;
              }
            }
            else {
              uVar4 = 0x17;
            }
          }
        }
        else {
          uVar4 = 0x17;
        }
      }
      return uVar4;
    }
    return 0x17;
  }
  return 0x17;
}
```
