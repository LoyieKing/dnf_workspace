# dispatch_sig

`_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EndPvPResult` | `0x081f88ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f88ae  _ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f88ae, 0x081f8a7b]
081f88ae +0x000:  push   %ebp
081f88af +0x001:  mov    %esp,%ebp
081f88b1 +0x003:  push   %esi
081f88b2 +0x004:  push   %ebx
081f88b3 +0x005:  sub    $0x30,%esp
081f88b6 +0x008:  mov    0xc(%ebp),%eax
081f88b9 +0x00b:  mov    %eax,(%esp)
081f88bc +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f88c1 +0x013:  cmp    $0x7,%eax
081f88c4 +0x016:  setne  %al
081f88c7 +0x019:  test   %al,%al
081f88c9 +0x01b:  je     081f88d5 <+0x27>
081f88cb +0x01d:  mov    $0x0,%eax
081f88d0 +0x022:  jmp    081f8a75 <+0x1c7>
081f88d5 +0x027:  mov    0xc(%ebp),%eax
081f88d8 +0x02a:  mov    %eax,(%esp)
081f88db +0x02d:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081f88e0 +0x032:  mov    %eax,-0xc(%ebp)
081f88e3 +0x035:  cmpl   $0x0,-0xc(%ebp)
081f88e7 +0x039:  jne    081f8912 <+0x64>
081f88e9 +0x03b:  movl   $0x0,0xc(%esp)
081f88f1 +0x043:  movl   $0x0,0x8(%esp)
081f88f9 +0x04b:  movl   $&_ZZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f8901 +0x053:  movl   $0x8681,(%esp)
081f8908 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f890d +0x05f:  jmp    081f8a75 <+0x1c7>
081f8912 +0x064:  mov    0xc(%ebp),%eax
081f8915 +0x067:  mov    %eax,0x4(%esp)
081f8919 +0x06b:  mov    -0xc(%ebp),%eax
081f891c +0x06e:  mov    %eax,(%esp)
081f891f +0x071:  call   085dbfec <_ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser>  ; PvP_Room::set_recv_pvp_end_result_flag(CUser*)
081f8924 +0x076:  mov    -0xc(%ebp),%eax
081f8927 +0x079:  mov    %eax,(%esp)
081f892a +0x07c:  call   085dc07e <_ZNK8PvP_Room23recv_pvp_end_result_allEv>  ; PvP_Room::recv_pvp_end_result_all() const
081f892f +0x081:  test   %al,%al
081f8931 +0x083:  je     081f89b2 <+0x104>
081f8933 +0x085:  mov    -0xc(%ebp),%eax
081f8936 +0x088:  mov    %eax,(%esp)
081f8939 +0x08b:  call   085dca48 <_ZN8PvP_Room14end_pvp_resultEv>  ; PvP_Room::end_pvp_result()
081f893e +0x090:  lea    -0x18(%ebp),%eax
081f8941 +0x093:  mov    %eax,(%esp)
081f8944 +0x096:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f8949 +0x09b:  lea    -0x18(%ebp),%eax
081f894c +0x09e:  mov    %eax,0x4(%esp)
081f8950 +0x0a2:  mov    -0xc(%ebp),%eax
081f8953 +0x0a5:  mov    %eax,(%esp)
081f8956 +0x0a8:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
081f895b +0x0ad:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f8960 +0x0b2:  lea    -0x18(%ebp),%edx
081f8963 +0x0b5:  mov    %edx,0x4(%esp)
081f8967 +0x0b9:  mov    %eax,(%esp)
081f896a +0x0bc:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f896f +0x0c1:  mov    -0xc(%ebp),%eax
081f8972 +0x0c4:  mov    %eax,(%esp)
081f8975 +0x0c7:  call   085d92fc <_ZN8PvP_Room7end_pvpEv>  ; PvP_Room::end_pvp()
081f897a +0x0cc:  mov    -0xc(%ebp),%eax
081f897d +0x0cf:  mov    %eax,(%esp)
081f8980 +0x0d2:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
081f8985 +0x0d7:  jmp    081f89a2 <+0xf4>
081f8987 +0x0d9:  mov    %edx,%ebx
081f8989 +0x0db:  mov    %eax,%esi
081f898b +0x0dd:  lea    -0x18(%ebp),%eax
081f898e +0x0e0:  mov    %eax,(%esp)
081f8991 +0x0e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f8996 +0x0e8:  mov    %esi,%eax
081f8998 +0x0ea:  mov    %ebx,%edx
081f899a +0x0ec:  mov    %eax,(%esp)
081f899d +0x0ef:  call   08ae3750 <_Unwind_Resume>
081f89a2 +0x0f4:  lea    -0x18(%ebp),%eax
081f89a5 +0x0f7:  mov    %eax,(%esp)
081f89a8 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f89ad +0x0ff:  jmp    081f8a70 <+0x1c2>
081f89b2 +0x104:  mov    -0xc(%ebp),%eax
081f89b5 +0x107:  mov    %eax,(%esp)
081f89b8 +0x10a:  call   0822d984 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x302e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x302e
081f89bd +0x10f:  test   %al,%al
081f89bf +0x111:  je     081f89de <+0x130>
081f89c1 +0x113:  mov    0xc(%ebp),%eax
081f89c4 +0x116:  mov    %eax,0x4(%esp)
081f89c8 +0x11a:  mov    -0xc(%ebp),%eax
081f89cb +0x11d:  mov    %eax,(%esp)
081f89ce +0x120:  call   085dc0f0 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser>  ; PvP_Room::recv_pvp_end_result_team(CUser*) const
081f89d3 +0x125:  test   %al,%al
081f89d5 +0x127:  je     081f89de <+0x130>
081f89d7 +0x129:  mov    $0x1,%eax
081f89dc +0x12e:  jmp    081f89e3 <+0x135>
081f89de +0x130:  mov    $0x0,%eax
081f89e3 +0x135:  test   %al,%al
081f89e5 +0x137:  je     081f8a50 <+0x1a2>
081f89e7 +0x139:  mov    -0xc(%ebp),%eax
081f89ea +0x13c:  mov    0x6e4(%eax),%eax
081f89f0 +0x142:  test   %eax,%eax
081f89f2 +0x144:  je     081f8a22 <+0x174>
081f89f4 +0x146:  mov    -0xc(%ebp),%eax
081f89f7 +0x149:  mov    0x6e4(%eax),%eax
081f89fd +0x14f:  mov    (%eax),%eax
081f89ff +0x151:  sub    $0xffffff80,%eax
081f8a02 +0x154:  mov    (%eax),%ecx
081f8a04 +0x156:  mov    -0xc(%ebp),%eax
081f8a07 +0x159:  mov    0x6e4(%eax),%eax
081f8a0d +0x15f:  mov    0xc(%ebp),%edx
081f8a10 +0x162:  mov    %edx,0x8(%esp)
081f8a14 +0x166:  mov    -0xc(%ebp),%edx
081f8a17 +0x169:  mov    %edx,0x4(%esp)
081f8a1b +0x16d:  mov    %eax,(%esp)
081f8a1e +0x170:  call   *%ecx
081f8a20 +0x172:  jmp    081f8a70 <+0x1c2>
081f8a22 +0x174:  movl   $"error end pvp result team",0x10(%esp)
081f8a2a +0x17c:  movl   $0x86b6,0xc(%esp)
081f8a32 +0x184:  movl   $&_ZZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081f8a3a +0x18c:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081f8a42 +0x194:  movl   $0x1,(%esp)
081f8a49 +0x19b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081f8a4e +0x1a0:  jmp    081f8a70 <+0x1c2>
081f8a50 +0x1a2:  mov    -0xc(%ebp),%eax
081f8a53 +0x1a5:  mov    %eax,(%esp)
081f8a56 +0x1a8:  call   085dc1c8 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv>  ; PvP_Room::get_recv_pvp_end_result_count() const
081f8a5b +0x1ad:  cmp    $0x1,%eax
081f8a5e +0x1b0:  sete   %al
081f8a61 +0x1b3:  test   %al,%al
081f8a63 +0x1b5:  je     081f8a70 <+0x1c2>
081f8a65 +0x1b7:  mov    -0xc(%ebp),%eax
081f8a68 +0x1ba:  mov    %eax,(%esp)
081f8a6b +0x1bd:  call   085dc23c <_ZN8PvP_Room32insert_timer_recv_pvp_end_resultEv>  ; PvP_Room::insert_timer_recv_pvp_end_result()
081f8a70 +0x1c2:  mov    $0x0,%eax
081f8a75 +0x1c7:  add    $0x30,%esp
081f8a78 +0x1ca:  pop    %ebx
081f8a79 +0x1cb:  pop    %esi
081f8a7a +0x1cc:  pop    %ebp
081f8a7b +0x1cd:  ret
```

## 反编译 C

```c
// DisPatcher_EndPvPResult::dispatch_sig @ 0x81f88ae

/* DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_EndPvPResult::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this;
  PacketGuard local_1c [12];
  PvP_Room *local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 7) {
    return 0;
  }
  local_10 = (PvP_Room *)CUser::GetPVPRoom((CUser *)param_2);
  if (local_10 != (PvP_Room *)0x0) {
    PvP_Room::set_recv_pvp_end_result_flag(local_10,(CUser *)param_2);
    cVar2 = PvP_Room::recv_pvp_end_result_all(local_10);
    if (cVar2 == '\0') {
      cVar2 = PvP_Room::isRematchable(local_10);
      if ((cVar2 == '\0') ||
         (cVar2 = PvP_Room::recv_pvp_end_result_team(local_10,(CUser *)param_2), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(local_10 + 0x6e4) == 0) {
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)",0x86b6,
                     "error end pvp result team");
        }
        else {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x80))
                    (*(undefined4 *)(local_10 + 0x6e4),local_10,param_2);
        }
      }
      else {
        iVar3 = PvP_Room::get_recv_pvp_end_result_count(local_10);
        if (iVar3 == 1) {
          PvP_Room::insert_timer_recv_pvp_end_result(local_10);
        }
      }
    }
    else {
      PvP_Room::end_pvp_result(local_10);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081f8956 to 081f8984 has its CatchHandler @ 081f8987 */
      PvP_Room::make_state_info(local_10,(char *)local_1c);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this,local_1c);
      PvP_Room::end_pvp(local_10);
      PvP_Room::battle_reset(local_10);
      PacketGuard::~PacketGuard(local_1c);
    }
    return 0;
  }
  uVar4 = LineFunc(0x8681,"virtual int DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)",0,
                   0);
  return uVar4;
}
```
