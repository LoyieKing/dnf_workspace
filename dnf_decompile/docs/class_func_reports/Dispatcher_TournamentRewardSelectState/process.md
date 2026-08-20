# process

`_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelectState` | `0x081dfca2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dfca2  _ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dfca2, 0x081dfd73]
081dfca2 +0x00:  push   %ebp
081dfca3 +0x01:  mov    %esp,%ebp
081dfca5 +0x03:  push   %ebx
081dfca6 +0x04:  sub    $0x24,%esp
081dfca9 +0x07:  mov    0x14(%ebp),%eax
081dfcac +0x0a:  mov    %eax,-0x10(%ebp)
081dfcaf +0x0d:  mov    0x10(%ebp),%eax
081dfcb2 +0x10:  mov    %eax,0x8(%esp)
081dfcb6 +0x14:  mov    0xc(%ebp),%eax
081dfcb9 +0x17:  mov    %eax,0x4(%esp)
081dfcbd +0x1b:  mov    0x8(%ebp),%eax
081dfcc0 +0x1e:  mov    %eax,(%esp)
081dfcc3 +0x21:  call   081dff32 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_TournamentRewardSelectState::check_error(CUser*, MSG_BASE&)
081dfcc8 +0x26:  mov    -0x10(%ebp),%edx
081dfccb +0x29:  mov    %eax,0x4(%edx)
081dfcce +0x2c:  mov    -0x10(%ebp),%eax
081dfcd1 +0x2f:  mov    0x4(%eax),%eax
081dfcd4 +0x32:  test   %eax,%eax
081dfcd6 +0x34:  jle    081dfce2 <+0x40>
081dfcd8 +0x36:  mov    $0x0,%eax
081dfcdd +0x3b:  jmp    081dfd6e <+0xcc>
081dfce2 +0x40:  mov    -0x10(%ebp),%eax
081dfce5 +0x43:  mov    0x4(%eax),%eax
081dfce8 +0x46:  test   %eax,%eax
081dfcea +0x48:  jns    081dfd14 <+0x72>
081dfcec +0x4a:  mov    -0x10(%ebp),%eax
081dfcef +0x4d:  mov    0x4(%eax),%eax
081dfcf2 +0x50:  movl   $0x0,0xc(%esp)
081dfcfa +0x58:  mov    %eax,0x8(%esp)
081dfcfe +0x5c:  movl   $&_ZZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dfd06 +0x64:  movl   $0x52af,(%esp)
081dfd0d +0x6b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dfd12 +0x70:  jmp    081dfd6e <+0xcc>
081dfd14 +0x72:  mov    0xc(%ebp),%eax
081dfd17 +0x75:  mov    %eax,(%esp)
081dfd1a +0x78:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081dfd1f +0x7d:  movswl %ax,%ebx
081dfd22 +0x80:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081dfd27 +0x85:  mov    %ebx,0x4(%esp)
081dfd2b +0x89:  mov    %eax,(%esp)
081dfd2e +0x8c:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081dfd33 +0x91:  mov    %eax,-0xc(%ebp)
081dfd36 +0x94:  cmpl   $0x0,-0xc(%ebp)
081dfd3a +0x98:  jne    081dfd69 <+0xc7>
081dfd3c +0x9a:  mov    0xc(%ebp),%eax
081dfd3f +0x9d:  mov    %eax,(%esp)
081dfd42 +0xa0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081dfd47 +0xa5:  mov    %eax,0xc(%esp)
081dfd4b +0xa9:  movl   $0x0,0x8(%esp)
081dfd53 +0xb1:  movl   $&_ZZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dfd5b +0xb9:  movl   $0x52b4,(%esp)
081dfd62 +0xc0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dfd67 +0xc5:  jmp    081dfd6e <+0xcc>
081dfd69 +0xc7:  mov    $0x0,%eax
081dfd6e +0xcc:  add    $0x24,%esp
081dfd71 +0xcf:  pop    %ebx
081dfd72 +0xd0:  pop    %ebp
081dfd73 +0xd1:  ret
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelectState::process @ 0x81dfca2

/* Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelectState::process
          (Dispatcher_TournamentRewardSelectState *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x52af,
                       "virtual int Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      CUser::GetPartyIndex(param_1);
      iVar2 = G_CGameManager();
      iVar2 = CGameManager::GetParty(iVar2);
      if (iVar2 == 0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar1 = LineFunc(0x52b4,
                         "virtual int Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
