# process

`_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPReady` | `0x081c9a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9a14  _ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c9a14, 0x081c9b9b]
081c9a14 +0x000:  push   %ebp
081c9a15 +0x001:  mov    %esp,%ebp
081c9a17 +0x003:  push   %esi
081c9a18 +0x004:  push   %ebx
081c9a19 +0x005:  sub    $0x30,%esp
081c9a1c +0x008:  mov    0x10(%ebp),%eax
081c9a1f +0x00b:  mov    %eax,0x8(%esp)
081c9a23 +0x00f:  mov    0xc(%ebp),%eax
081c9a26 +0x012:  mov    %eax,0x4(%esp)
081c9a2a +0x016:  mov    0x8(%ebp),%eax
081c9a2d +0x019:  mov    %eax,(%esp)
081c9a30 +0x01c:  call   081c9b9c <_ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_SetPVPReady::check_error(CUser*, MSG_BASE&)
081c9a35 +0x021:  mov    %eax,-0x18(%ebp)
081c9a38 +0x024:  cmpl   $0x0,-0x18(%ebp)
081c9a3c +0x028:  jle    081c9a48 <+0x34>
081c9a3e +0x02a:  mov    $0xffffffff,%ebx
081c9a43 +0x02f:  jmp    081c9b92 <+0x17e>
081c9a48 +0x034:  cmpl   $0x0,-0x18(%ebp)
081c9a4c +0x038:  jns    081c9a80 <+0x6c>
081c9a4e +0x03a:  mov    0xc(%ebp),%eax
081c9a51 +0x03d:  mov    %eax,(%esp)
081c9a54 +0x040:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c9a59 +0x045:  mov    %eax,0xc(%esp)
081c9a5d +0x049:  movl   $0x0,0x8(%esp)
081c9a65 +0x051:  movl   $&_ZZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c9a6d +0x059:  movl   $0x1ce3,(%esp)
081c9a74 +0x060:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9a79 +0x065:  mov    %eax,%ebx
081c9a7b +0x067:  jmp    081c9b92 <+0x17e>
081c9a80 +0x06c:  mov    0xc(%ebp),%eax
081c9a83 +0x06f:  mov    %eax,(%esp)
081c9a86 +0x072:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081c9a8b +0x077:  mov    %eax,-0x14(%ebp)
081c9a8e +0x07a:  cmpl   $0x0,-0x14(%ebp)
081c9a92 +0x07e:  jne    081c9ac6 <+0xb2>
081c9a94 +0x080:  mov    0xc(%ebp),%eax
081c9a97 +0x083:  mov    %eax,(%esp)
081c9a9a +0x086:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c9a9f +0x08b:  mov    %eax,0xc(%esp)
081c9aa3 +0x08f:  movl   $0x0,0x8(%esp)
081c9aab +0x097:  movl   $&_ZZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c9ab3 +0x09f:  movl   $0x1ce6,(%esp)
081c9aba +0x0a6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9abf +0x0ab:  mov    %eax,%ebx
081c9ac1 +0x0ad:  jmp    081c9b92 <+0x17e>
081c9ac6 +0x0b2:  mov    -0x14(%ebp),%eax
081c9ac9 +0x0b5:  mov    %eax,(%esp)
081c9acc +0x0b8:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
081c9ad1 +0x0bd:  cmp    $0x6,%eax
081c9ad4 +0x0c0:  sete   %al
081c9ad7 +0x0c3:  test   %al,%al
081c9ad9 +0x0c5:  je     081c9ae5 <+0xd1>
081c9adb +0x0c7:  mov    $0xffffffff,%ebx
081c9ae0 +0x0cc:  jmp    081c9b92 <+0x17e>
081c9ae5 +0x0d1:  mov    0x14(%ebp),%eax
081c9ae8 +0x0d4:  mov    %eax,-0x10(%ebp)
081c9aeb +0x0d7:  mov    0x10(%ebp),%eax
081c9aee +0x0da:  mov    %eax,-0xc(%ebp)
081c9af1 +0x0dd:  mov    -0xc(%ebp),%eax
081c9af4 +0x0e0:  movzbl 0xd(%eax),%eax
081c9af8 +0x0e4:  test   %al,%al
081c9afa +0x0e6:  setne  %al
081c9afd +0x0e9:  movzbl %al,%eax
081c9b00 +0x0ec:  mov    %eax,0x8(%esp)
081c9b04 +0x0f0:  mov    0xc(%ebp),%eax
081c9b07 +0x0f3:  mov    %eax,0x4(%esp)
081c9b0b +0x0f7:  mov    -0x14(%ebp),%eax
081c9b0e +0x0fa:  mov    %eax,(%esp)
081c9b11 +0x0fd:  call   085d8290 <_ZN8PvP_Room15set_ready_stateEP5CUserb>  ; PvP_Room::set_ready_state(CUser*, bool)
081c9b16 +0x102:  mov    -0x10(%ebp),%edx
081c9b19 +0x105:  mov    %eax,0x4(%edx)
081c9b1c +0x108:  mov    -0x10(%ebp),%eax
081c9b1f +0x10b:  mov    0x4(%eax),%eax
081c9b22 +0x10e:  test   %eax,%eax
081c9b24 +0x110:  jns    081c9b8f <+0x17b>
081c9b26 +0x112:  mov    -0x14(%ebp),%eax
081c9b29 +0x115:  mov    %eax,(%esp)
081c9b2c +0x118:  call   085d8c3a <_ZN8PvP_Room9start_pvpEv>  ; PvP_Room::start_pvp()
081c9b31 +0x11d:  lea    -0x24(%ebp),%eax
081c9b34 +0x120:  mov    %eax,(%esp)
081c9b37 +0x123:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c9b3c +0x128:  lea    -0x24(%ebp),%eax
081c9b3f +0x12b:  mov    %eax,0x4(%esp)
081c9b43 +0x12f:  mov    -0x14(%ebp),%eax
081c9b46 +0x132:  mov    %eax,(%esp)
081c9b49 +0x135:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
081c9b4e +0x13a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9b53 +0x13f:  lea    -0x24(%ebp),%edx
081c9b56 +0x142:  mov    %edx,0x4(%esp)
081c9b5a +0x146:  mov    %eax,(%esp)
081c9b5d +0x149:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081c9b62 +0x14e:  mov    $0xffffffff,%ebx
081c9b67 +0x153:  lea    -0x24(%ebp),%eax
081c9b6a +0x156:  mov    %eax,(%esp)
081c9b6d +0x159:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9b72 +0x15e:  jmp    081c9b92 <+0x17e>
081c9b74 +0x160:  mov    %edx,%ebx
081c9b76 +0x162:  mov    %eax,%esi
081c9b78 +0x164:  lea    -0x24(%ebp),%eax
081c9b7b +0x167:  mov    %eax,(%esp)
081c9b7e +0x16a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9b83 +0x16f:  mov    %esi,%eax
081c9b85 +0x171:  mov    %ebx,%edx
081c9b87 +0x173:  mov    %eax,(%esp)
081c9b8a +0x176:  call   08ae3750 <_Unwind_Resume>
081c9b8f +0x17b:  mov    -0x18(%ebp),%ebx
081c9b92 +0x17e:  mov    %ebx,%eax
081c9b94 +0x180:  add    $0x30,%esp
081c9b97 +0x183:  pop    %ebx
081c9b98 +0x184:  pop    %esi
081c9b99 +0x185:  pop    %ebp
081c9b9a +0x186:  ret
081c9b9b +0x187:  nop
```

## 反编译 C

```c
// DisPatcher_SetPVPReady::process @ 0x81c9a14

/* DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_SetPVPReady::process
          (DisPatcher_SetPVPReady *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  PacketGuard local_28 [12];
  int local_1c;
  PvP_Room *local_18;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_1c = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (local_1c < 1) {
    if (local_1c < 0) {
      uVar1 = CUser::get_acc_id(param_1);
      local_1c = LineFunc(0x1ce3,
                          "virtual int DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)"
                          ,0,uVar1);
    }
    else {
      local_18 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_18 == (PvP_Room *)0x0) {
        uVar1 = CUser::get_acc_id(param_1);
        local_1c = LineFunc(0x1ce6,
                            "virtual int DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)"
                            ,0,uVar1);
      }
      else {
        iVar2 = PvP_Room::get_pvp_battle_mode(local_18);
        if (iVar2 == 6) {
          local_1c = -1;
        }
        else {
          local_14 = param_3;
          local_10 = param_2;
          uVar3 = PvP_Room::set_ready_state(local_18,param_1,param_2[0xd] != (MSG_BASE)0x0);
          *(undefined4 *)(local_14 + 4) = uVar3;
          if (*(int *)(local_14 + 4) < 0) {
            PvP_Room::start_pvp(local_18);
            PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081c9b49 to 081c9b61 has its CatchHandler @ 081c9b74 */
            PvP_Room::make_state_info(local_18,(char *)local_28);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_28);
            PacketGuard::~PacketGuard(local_28);
            local_1c = -1;
          }
        }
      }
    }
  }
  else {
    local_1c = -1;
  }
  return local_1c;
}
```
