# dispatch_sig

`_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij`

`TimerCheckPaidPCRoomTerm::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckPaidPCRoomTerm` | `0x08634b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634b60  _ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij
#           TimerCheckPaidPCRoomTerm::dispatch_sig(int, int, unsigned int)
# range [0x08634b60, 0x08634c05]
08634b60 +0x00:  push   %ebp
08634b61 +0x01:  mov    %esp,%ebp
08634b63 +0x03:  sub    $0x28,%esp
08634b66 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634b6b +0x0b:  movl   $0x6,0x8(%esp)
08634b73 +0x13:  mov    0xc(%ebp),%edx
08634b76 +0x16:  mov    %edx,0x4(%esp)
08634b7a +0x1a:  mov    %eax,(%esp)
08634b7d +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08634b82 +0x22:  mov    %eax,-0xc(%ebp)
08634b85 +0x25:  cmpl   $0x0,-0xc(%ebp)
08634b89 +0x29:  jne    08634b92 <+0x32>
08634b8b +0x2b:  mov    $0x0,%eax
08634b90 +0x30:  jmp    08634c03 <+0xa3>
08634b92 +0x32:  mov    -0xc(%ebp),%eax
08634b95 +0x35:  mov    %eax,(%esp)
08634b98 +0x38:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08634b9d +0x3d:  cmp    0x14(%ebp),%eax
08634ba0 +0x40:  setne  %al
08634ba3 +0x43:  test   %al,%al
08634ba5 +0x45:  je     08634bae <+0x4e>
08634ba7 +0x47:  mov    $0x0,%eax
08634bac +0x4c:  jmp    08634c03 <+0xa3>
08634bae +0x4e:  mov    0x10(%ebp),%eax
08634bb1 +0x51:  mov    %eax,0x4(%esp)
08634bb5 +0x55:  mov    -0xc(%ebp),%eax
08634bb8 +0x58:  mov    %eax,(%esp)
08634bbb +0x5b:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08634bc0 +0x60:  xor    $0x1,%eax
08634bc3 +0x63:  test   %al,%al
08634bc5 +0x65:  je     08634be8 <+0x88>
08634bc7 +0x67:  movl   $0x0,0x8(%esp)
08634bcf +0x6f:  mov    0x10(%ebp),%eax
08634bd2 +0x72:  mov    %eax,0x4(%esp)
08634bd6 +0x76:  mov    -0xc(%ebp),%eax
08634bd9 +0x79:  mov    %eax,(%esp)
08634bdc +0x7c:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
08634be1 +0x81:  mov    $0x0,%eax
08634be6 +0x86:  jmp    08634c03 <+0xa3>
08634be8 +0x88:  mov    -0xc(%ebp),%eax
08634beb +0x8b:  mov    %eax,(%esp)
08634bee +0x8e:  call   0868170c <_ZN5CUser24SendLogoutToPCRoomServerEv>  ; CUser::SendLogoutToPCRoomServer()
08634bf3 +0x93:  mov    -0xc(%ebp),%eax
08634bf6 +0x96:  mov    %eax,(%esp)
08634bf9 +0x99:  call   0868152c <_ZN5CUser23SendLoginToPCRoomServerEv>  ; CUser::SendLoginToPCRoomServer()
08634bfe +0x9e:  mov    $0x1,%eax
08634c03 +0xa3:  leave
08634c04 +0xa4:  ret
08634c05 +0xa5:  nop
```

## 反编译 C

```c
// TimerCheckPaidPCRoomTerm::dispatch_sig @ 0x8634b60

/* TimerCheckPaidPCRoomTerm::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCheckPaidPCRoomTerm::dispatch_sig
          (TimerCheckPaidPCRoomTerm *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  uVar4 = 6;
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = CUser::get_acc_id(this_00);
    if (uVar3 == param_3) {
      cVar1 = CUser::isAffectedPremium(this_00,param_2,uVar4);
      if (cVar1 == '\x01') {
        CUser::SendLogoutToPCRoomServer(this_00);
        CUser::SendLoginToPCRoomServer(this_00);
        uVar4 = 1;
      }
      else {
        WongWork::CHandlePremium::handleNotifyPremiumInfo(this_00,param_2,0);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
