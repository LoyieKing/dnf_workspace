# dispatch_sig

`_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij`

`TimerCheckRecvPvpEndResult::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckRecvPvpEndResult` | `0x0863703a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863703a  _ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij
#           TimerCheckRecvPvpEndResult::dispatch_sig(int, int, unsigned int)
# range [0x0863703a, 0x08637139]
0863703a +0x00:  push   %ebp
0863703b +0x01:  mov    %esp,%ebp
0863703d +0x03:  push   %esi
0863703e +0x04:  push   %ebx
0863703f +0x05:  sub    $0x20,%esp
08637042 +0x08:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637047 +0x0d:  movl   $0x3d,0xc(%esp)
0863704f +0x15:  movl   $0x0,0x8(%esp)
08637057 +0x1d:  mov    0xc(%ebp),%edx
0863705a +0x20:  mov    %edx,0x4(%esp)
0863705e +0x24:  mov    %eax,(%esp)
08637061 +0x27:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08637066 +0x2c:  mov    %eax,-0xc(%ebp)
08637069 +0x2f:  cmpl   $0x0,-0xc(%ebp)
0863706d +0x33:  jne    08637079 <+0x3f>
0863706f +0x35:  mov    $0x0,%eax
08637074 +0x3a:  jmp    08637133 <+0xf9>
08637079 +0x3f:  movl   $0x3d,0x4(%esp)
08637081 +0x47:  mov    -0xc(%ebp),%eax
08637084 +0x4a:  mov    %eax,(%esp)
08637087 +0x4d:  call   0863bcb4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c5
0863708c +0x52:  cmp    0x10(%ebp),%eax
0863708f +0x55:  setne  %al
08637092 +0x58:  test   %al,%al
08637094 +0x5a:  je     086370a0 <+0x66>
08637096 +0x5c:  mov    $0x0,%eax
0863709b +0x61:  jmp    08637133 <+0xf9>
086370a0 +0x66:  mov    -0xc(%ebp),%eax
086370a3 +0x69:  mov    %eax,(%esp)
086370a6 +0x6c:  call   085dc1c8 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv>  ; PvP_Room::get_recv_pvp_end_result_count() const
086370ab +0x71:  test   %eax,%eax
086370ad +0x73:  setne  %al
086370b0 +0x76:  test   %al,%al
086370b2 +0x78:  je     0863712e <+0xf4>
086370b4 +0x7a:  mov    -0xc(%ebp),%eax
086370b7 +0x7d:  mov    %eax,(%esp)
086370ba +0x80:  call   085dca48 <_ZN8PvP_Room14end_pvp_resultEv>  ; PvP_Room::end_pvp_result()
086370bf +0x85:  lea    -0x18(%ebp),%eax
086370c2 +0x88:  mov    %eax,(%esp)
086370c5 +0x8b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086370ca +0x90:  lea    -0x18(%ebp),%eax
086370cd +0x93:  mov    %eax,0x4(%esp)
086370d1 +0x97:  mov    -0xc(%ebp),%eax
086370d4 +0x9a:  mov    %eax,(%esp)
086370d7 +0x9d:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
086370dc +0xa2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086370e1 +0xa7:  lea    -0x18(%ebp),%edx
086370e4 +0xaa:  mov    %edx,0x4(%esp)
086370e8 +0xae:  mov    %eax,(%esp)
086370eb +0xb1:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086370f0 +0xb6:  mov    -0xc(%ebp),%eax
086370f3 +0xb9:  mov    %eax,(%esp)
086370f6 +0xbc:  call   085d92fc <_ZN8PvP_Room7end_pvpEv>  ; PvP_Room::end_pvp()
086370fb +0xc1:  mov    -0xc(%ebp),%eax
086370fe +0xc4:  mov    %eax,(%esp)
08637101 +0xc7:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
08637106 +0xcc:  jmp    08637123 <+0xe9>
08637108 +0xce:  mov    %edx,%ebx
0863710a +0xd0:  mov    %eax,%esi
0863710c +0xd2:  lea    -0x18(%ebp),%eax
0863710f +0xd5:  mov    %eax,(%esp)
08637112 +0xd8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08637117 +0xdd:  mov    %esi,%eax
08637119 +0xdf:  mov    %ebx,%edx
0863711b +0xe1:  mov    %eax,(%esp)
0863711e +0xe4:  call   08ae3750 <_Unwind_Resume>
08637123 +0xe9:  lea    -0x18(%ebp),%eax
08637126 +0xec:  mov    %eax,(%esp)
08637129 +0xef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863712e +0xf4:  mov    $0x1,%eax
08637133 +0xf9:  add    $0x20,%esp
08637136 +0xfc:  pop    %ebx
08637137 +0xfd:  pop    %esi
08637138 +0xfe:  pop    %ebp
08637139 +0xff:  ret
```

## 反编译 C

```c
// TimerCheckRecvPvpEndResult::dispatch_sig @ 0x863703a

/* TimerCheckRecvPvpEndResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckRecvPvpEndResult::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  PvP_Room *local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_10 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3d);
  if (local_10 == (PvP_Room *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = PvP_Room::get_timer_key(local_10,0x3d);
    if (uVar2 == param_3) {
      iVar3 = PvP_Room::get_recv_pvp_end_result_count(local_10);
      if (iVar3 != 0) {
        PvP_Room::end_pvp_result(local_10);
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086370d7 to 08637105 has its CatchHandler @ 08637108 */
        PvP_Room::make_state_info(local_10,(char *)local_1c);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_1c);
        PvP_Room::end_pvp(local_10);
        PvP_Room::battle_reset(local_10);
        PacketGuard::~PacketGuard(local_1c);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
