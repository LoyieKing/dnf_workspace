# dispatch_sig

`_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij`

`Timer_PcRoomAuthRetry::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_PcRoomAuthRetry` | `0x08639924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639924  _ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij
#           Timer_PcRoomAuthRetry::dispatch_sig(int, int, unsigned int)
# range [0x08639924, 0x086399cf]
08639924 +0x00:  push   %ebp
08639925 +0x01:  mov    %esp,%ebp
08639927 +0x03:  sub    $0x28,%esp
0863992a +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863992f +0x0b:  movl   $0x2,0x8(%esp)
08639937 +0x13:  mov    0xc(%ebp),%edx
0863993a +0x16:  mov    %edx,0x4(%esp)
0863993e +0x1a:  mov    %eax,(%esp)
08639941 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08639946 +0x22:  mov    %eax,-0xc(%ebp)
08639949 +0x25:  cmpl   $0x0,-0xc(%ebp)
0863994d +0x29:  jne    08639956 <+0x32>
0863994f +0x2b:  mov    $0x0,%eax
08639954 +0x30:  jmp    086399ce <+0xaa>
08639956 +0x32:  mov    -0xc(%ebp),%eax
08639959 +0x35:  mov    %eax,(%esp)
0863995c +0x38:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08639961 +0x3d:  movzwl %ax,%eax
08639964 +0x40:  cmp    0x10(%ebp),%eax
08639967 +0x43:  setne  %al
0863996a +0x46:  test   %al,%al
0863996c +0x48:  je     08639975 <+0x51>
0863996e +0x4a:  mov    $0x0,%eax
08639973 +0x4f:  jmp    086399ce <+0xaa>
08639975 +0x51:  mov    -0xc(%ebp),%eax
08639978 +0x54:  mov    %eax,(%esp)
0863997b +0x57:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08639980 +0x5c:  test   %eax,%eax
08639982 +0x5e:  sete   %al
08639985 +0x61:  test   %al,%al
08639987 +0x63:  je     08639990 <+0x6c>
08639989 +0x65:  mov    $0x0,%eax
0863998e +0x6a:  jmp    086399ce <+0xaa>
08639990 +0x6c:  mov    -0xc(%ebp),%eax
08639993 +0x6f:  mov    %eax,(%esp)
08639996 +0x72:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863999b +0x77:  cmp    0x14(%ebp),%eax
0863999e +0x7a:  setne  %al
086399a1 +0x7d:  test   %al,%al
086399a3 +0x7f:  je     086399ac <+0x88>
086399a5 +0x81:  mov    $0x0,%eax
086399aa +0x86:  jmp    086399ce <+0xaa>
086399ac +0x88:  mov    -0xc(%ebp),%eax
086399af +0x8b:  mov    %eax,(%esp)
086399b2 +0x8e:  call   0863be54 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x365>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x365
086399b7 +0x93:  xor    $0x1,%eax
086399ba +0x96:  test   %al,%al
086399bc +0x98:  je     086399c9 <+0xa5>
086399be +0x9a:  mov    -0xc(%ebp),%eax
086399c1 +0x9d:  mov    %eax,(%esp)
086399c4 +0xa0:  call   0868152c <_ZN5CUser23SendLoginToPCRoomServerEv>  ; CUser::SendLoginToPCRoomServer()
086399c9 +0xa5:  mov    $0x1,%eax
086399ce +0xaa:  leave
086399cf +0xab:  ret
```

## 反编译 C

```c
// Timer_PcRoomAuthRetry::dispatch_sig @ 0x8639924

/* Timer_PcRoomAuthRetry::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_PcRoomAuthRetry::dispatch_sig
          (Timer_PcRoomAuthRetry *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this_00);
    if ((uVar4 & 0xffff) == param_2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this_00);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this_00);
        if (uVar4 == param_3) {
          cVar1 = CUser::getPcRoomAuth(this_00);
          if (cVar1 != '\x01') {
            CUser::SendLoginToPCRoomServer(this_00);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
