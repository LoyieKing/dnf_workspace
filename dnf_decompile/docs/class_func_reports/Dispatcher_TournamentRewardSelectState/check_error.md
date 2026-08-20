# check_error

`_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_TournamentRewardSelectState::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelectState` | `0x081dff32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dff32  _ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_TournamentRewardSelectState::check_error(CUser*, MSG_BASE&)
# range [0x081dff32, 0x081dffd9]
081dff32 +0x00:  push   %ebp
081dff33 +0x01:  mov    %esp,%ebp
081dff35 +0x03:  push   %ebx
081dff36 +0x04:  sub    $0x24,%esp
081dff39 +0x07:  cmpl   $0x0,0xc(%ebp)
081dff3d +0x0b:  jne    081dff49 <+0x17>
081dff3f +0x0d:  mov    $0xffffffff,%eax
081dff44 +0x12:  jmp    081dffd4 <+0xa2>
081dff49 +0x17:  mov    0xc(%ebp),%eax
081dff4c +0x1a:  mov    %eax,(%esp)
081dff4f +0x1d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dff54 +0x22:  cmp    $0x5,%eax
081dff57 +0x25:  setne  %al
081dff5a +0x28:  test   %al,%al
081dff5c +0x2a:  je     081dff65 <+0x33>
081dff5e +0x2c:  mov    $0x7fffffff,%eax
081dff63 +0x31:  jmp    081dffd4 <+0xa2>
081dff65 +0x33:  mov    0xc(%ebp),%eax
081dff68 +0x36:  mov    %eax,(%esp)
081dff6b +0x39:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081dff70 +0x3e:  movswl %ax,%ebx
081dff73 +0x41:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081dff78 +0x46:  mov    %ebx,0x4(%esp)
081dff7c +0x4a:  mov    %eax,(%esp)
081dff7f +0x4d:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081dff84 +0x52:  mov    %eax,-0xc(%ebp)
081dff87 +0x55:  cmpl   $0x0,-0xc(%ebp)
081dff8b +0x59:  jne    081dff94 <+0x62>
081dff8d +0x5b:  mov    $0xffffffff,%eax
081dff92 +0x60:  jmp    081dffd4 <+0xa2>
081dff94 +0x62:  mov    -0xc(%ebp),%eax
081dff97 +0x65:  mov    %eax,(%esp)
081dff9a +0x68:  call   085bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>  ; CParty::GetTournamentDungeonClearState()
081dff9f +0x6d:  cmp    $0x1,%al
081dffa1 +0x6f:  setne  %al
081dffa4 +0x72:  test   %al,%al
081dffa6 +0x74:  je     081dffaf <+0x7d>
081dffa8 +0x76:  mov    $0x7fffffff,%eax
081dffad +0x7b:  jmp    081dffd4 <+0xa2>
081dffaf +0x7d:  mov    0xc(%ebp),%eax
081dffb2 +0x80:  mov    %eax,0x4(%esp)
081dffb6 +0x84:  mov    -0xc(%ebp),%eax
081dffb9 +0x87:  mov    %eax,(%esp)
081dffbc +0x8a:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081dffc1 +0x8f:  xor    $0x1,%eax
081dffc4 +0x92:  test   %al,%al
081dffc6 +0x94:  je     081dffcf <+0x9d>
081dffc8 +0x96:  mov    $0x7fffffff,%eax
081dffcd +0x9b:  jmp    081dffd4 <+0xa2>
081dffcf +0x9d:  mov    $0x0,%eax
081dffd4 +0xa2:  add    $0x24,%esp
081dffd7 +0xa5:  pop    %ebx
081dffd8 +0xa6:  pop    %ebp
081dffd9 +0xa7:  ret
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelectState::check_error @ 0x81dff32

/* Dispatcher_TournamentRewardSelectState::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelectState::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CParty *this;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      CUser::GetPartyIndex((CUser *)param_2);
      iVar3 = G_CGameManager();
      this = (CParty *)CGameManager::GetParty(iVar3);
      if (this == (CParty *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        cVar1 = CParty::GetTournamentDungeonClearState(this);
        if (cVar1 == '\x01') {
          cVar1 = CParty::CheckRecvFromAllMember(this,(CUser *)param_2);
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = 0x7fffffff;
          }
        }
        else {
          uVar2 = 0x7fffffff;
        }
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
  }
  return uVar2;
}
```
