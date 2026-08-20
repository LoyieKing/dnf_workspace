# process

`_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPartyInfo` | `0x081c4562` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4562  _ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c4562, 0x081c46bf]
081c4562 +0x000:  push   %ebp
081c4563 +0x001:  mov    %esp,%ebp
081c4565 +0x003:  sub    $0x28,%esp
081c4568 +0x006:  mov    0x14(%ebp),%eax
081c456b +0x009:  mov    %eax,-0x18(%ebp)
081c456e +0x00c:  mov    0x10(%ebp),%eax
081c4571 +0x00f:  mov    %eax,0x8(%esp)
081c4575 +0x013:  mov    0xc(%ebp),%eax
081c4578 +0x016:  mov    %eax,0x4(%esp)
081c457c +0x01a:  mov    0x8(%ebp),%eax
081c457f +0x01d:  mov    %eax,(%esp)
081c4582 +0x020:  call   081c4708 <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_SetPartyInfo::check_error(CUser*, MSG_BASE&)
081c4587 +0x025:  mov    %eax,%edx
081c4589 +0x027:  mov    -0x18(%ebp),%eax
081c458c +0x02a:  mov    %edx,0x4(%eax)
081c458f +0x02d:  mov    -0x18(%ebp),%eax
081c4592 +0x030:  mov    0x4(%eax),%eax
081c4595 +0x033:  test   %eax,%eax
081c4597 +0x035:  jle    081c45a3 <+0x41>
081c4599 +0x037:  mov    $0x0,%eax
081c459e +0x03c:  jmp    081c46be <+0x15c>
081c45a3 +0x041:  mov    -0x18(%ebp),%eax
081c45a6 +0x044:  mov    0x4(%eax),%eax
081c45a9 +0x047:  test   %eax,%eax
081c45ab +0x049:  jns    081c45df <+0x7d>
081c45ad +0x04b:  mov    0xc(%ebp),%eax
081c45b0 +0x04e:  mov    %eax,(%esp)
081c45b3 +0x051:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c45b8 +0x056:  mov    -0x18(%ebp),%edx
081c45bb +0x059:  mov    0x4(%edx),%edx
081c45be +0x05c:  mov    %eax,0xc(%esp)
081c45c2 +0x060:  mov    %edx,0x8(%esp)
081c45c6 +0x064:  movl   $&_ZZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c45ce +0x06c:  movl   $0x10f6,(%esp)
081c45d5 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c45da +0x078:  jmp    081c46be <+0x15c>
081c45df +0x07d:  mov    0x10(%ebp),%eax
081c45e2 +0x080:  mov    %eax,-0x14(%ebp)
081c45e5 +0x083:  mov    0xc(%ebp),%eax
081c45e8 +0x086:  mov    %eax,(%esp)
081c45eb +0x089:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c45f0 +0x08e:  mov    %eax,-0x10(%ebp)
081c45f3 +0x091:  cmpl   $0x0,-0x10(%ebp)
081c45f7 +0x095:  jne    081c4665 <+0x103>
081c45f9 +0x097:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c45fe +0x09c:  mov    %eax,(%esp)
081c4601 +0x09f:  call   08294e10 <_ZN12CGameManager8GetPartyEv>  ; CGameManager::GetParty()
081c4606 +0x0a4:  mov    %eax,-0xc(%ebp)
081c4609 +0x0a7:  cmpl   $0x0,-0xc(%ebp)
081c460d +0x0ab:  jne    081c4623 <+0xc1>
081c460f +0x0ad:  mov    -0x18(%ebp),%eax
081c4612 +0x0b0:  movl   $0x4,0x4(%eax)
081c4619 +0x0b7:  mov    $0x0,%eax
081c461e +0x0bc:  jmp    081c46be <+0x15c>
081c4623 +0x0c1:  mov    0xc(%ebp),%eax
081c4626 +0x0c4:  mov    %eax,0x4(%esp)
081c462a +0x0c8:  mov    -0xc(%ebp),%eax
081c462d +0x0cb:  mov    %eax,(%esp)
081c4630 +0x0ce:  call   0859b1be <_ZN6CParty12create_partyEP5CUser>  ; CParty::create_party(CUser*)
081c4635 +0x0d3:  mov    -0x14(%ebp),%eax
081c4638 +0x0d6:  mov    %eax,0x4(%esp)
081c463c +0x0da:  mov    -0xc(%ebp),%eax
081c463f +0x0dd:  mov    %eax,(%esp)
081c4642 +0x0e0:  call   0859b234 <_ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO>  ; CParty::SetPartyInfoUI(MSG_PARTY_SET_INFO const&)
081c4647 +0x0e5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c464c +0x0ea:  movl   $0x0,0x8(%esp)
081c4654 +0x0f2:  mov    -0xc(%ebp),%edx
081c4657 +0x0f5:  mov    %edx,0x4(%esp)
081c465b +0x0f9:  mov    %eax,(%esp)
081c465e +0x0fc:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
081c4663 +0x101:  jmp    081c46b9 <+0x157>
081c4665 +0x103:  mov    -0x10(%ebp),%eax
081c4668 +0x106:  mov    %eax,(%esp)
081c466b +0x109:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c4670 +0x10e:  cmp    0xc(%ebp),%eax
081c4673 +0x111:  setne  %al
081c4676 +0x114:  test   %al,%al
081c4678 +0x116:  je     081c468b <+0x129>
081c467a +0x118:  mov    -0x18(%ebp),%eax
081c467d +0x11b:  movl   $0x8,0x4(%eax)
081c4684 +0x122:  mov    $0x0,%eax
081c4689 +0x127:  jmp    081c46be <+0x15c>
081c468b +0x129:  mov    -0x14(%ebp),%eax
081c468e +0x12c:  mov    %eax,0x4(%esp)
081c4692 +0x130:  mov    -0x10(%ebp),%eax
081c4695 +0x133:  mov    %eax,(%esp)
081c4698 +0x136:  call   0859b234 <_ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO>  ; CParty::SetPartyInfoUI(MSG_PARTY_SET_INFO const&)
081c469d +0x13b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c46a2 +0x140:  movl   $0x1,0x8(%esp)
081c46aa +0x148:  mov    -0x10(%ebp),%edx
081c46ad +0x14b:  mov    %edx,0x4(%esp)
081c46b1 +0x14f:  mov    %eax,(%esp)
081c46b4 +0x152:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
081c46b9 +0x157:  mov    $0x0,%eax
081c46be +0x15c:  leave
081c46bf +0x15d:  ret
```

## 反编译 C

```c
// DisPatcher_SetPartyInfo::process @ 0x81c4562

/* DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::process
          (DisPatcher_SetPartyInfo *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CParty *pCVar3;
  CGameManager *this_00;
  GameWorld *pGVar4;
  CUser *pCVar5;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x10f6,
                       "virtual int DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      if (pCVar3 == (CParty *)0x0) {
        this_00 = (CGameManager *)G_CGameManager();
        pCVar3 = (CParty *)CGameManager::GetParty(this_00);
        if (pCVar3 == (CParty *)0x0) {
          *(undefined4 *)(param_3 + 4) = 4;
          return 0;
        }
        CParty::create_party(pCVar3,param_1);
        CParty::SetPartyInfoUI(pCVar3,(MSG_PARTY_SET_INFO *)param_2);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar4,pCVar3,0);
      }
      else {
        pCVar5 = (CUser *)CParty::getManager(pCVar3);
        if (pCVar5 != param_1) {
          *(undefined4 *)(param_3 + 4) = 8;
          return 0;
        }
        CParty::SetPartyInfoUI(pCVar3,(MSG_PARTY_SET_INFO *)param_2);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar4,pCVar3,1);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
