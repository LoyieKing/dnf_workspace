# dispatch_sig

`_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij`

`Timer_AssaultGhostTimer::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_AssaultGhostTimer` | `0x0863b0ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b0ba  _ZN23Timer_AssaultGhostTimer12dispatch_sigEiij
#           Timer_AssaultGhostTimer::dispatch_sig(int, int, unsigned int)
# range [0x0863b0ba, 0x0863b241]
0863b0ba +0x000:  push   %ebp
0863b0bb +0x001:  mov    %esp,%ebp
0863b0bd +0x003:  push   %esi
0863b0be +0x004:  push   %ebx
0863b0bf +0x005:  sub    $0x20,%esp
0863b0c2 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863b0c7 +0x00d:  movl   $0x2,0x8(%esp)
0863b0cf +0x015:  mov    0xc(%ebp),%edx
0863b0d2 +0x018:  mov    %edx,0x4(%esp)
0863b0d6 +0x01c:  mov    %eax,(%esp)
0863b0d9 +0x01f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863b0de +0x024:  mov    %eax,-0xc(%ebp)
0863b0e1 +0x027:  cmpl   $0x0,-0xc(%ebp)
0863b0e5 +0x02b:  jne    0863b0f1 <+0x37>
0863b0e7 +0x02d:  mov    $0x0,%eax
0863b0ec +0x032:  jmp    0863b23b <+0x181>
0863b0f1 +0x037:  mov    -0xc(%ebp),%eax
0863b0f4 +0x03a:  mov    %eax,(%esp)
0863b0f7 +0x03d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863b0fc +0x042:  cmp    0x14(%ebp),%eax
0863b0ff +0x045:  setne  %al
0863b102 +0x048:  test   %al,%al
0863b104 +0x04a:  je     0863b110 <+0x56>
0863b106 +0x04c:  mov    $0x0,%eax
0863b10b +0x051:  jmp    0863b23b <+0x181>
0863b110 +0x056:  mov    -0xc(%ebp),%eax
0863b113 +0x059:  mov    %eax,(%esp)
0863b116 +0x05c:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
0863b11b +0x061:  test   %al,%al
0863b11d +0x063:  je     0863b236 <+0x17c>
0863b123 +0x069:  mov    -0xc(%ebp),%eax
0863b126 +0x06c:  movl   $0x0,0x4(%esp)
0863b12e +0x074:  mov    %eax,(%esp)
0863b131 +0x077:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
0863b136 +0x07c:  mov    -0xc(%ebp),%eax
0863b139 +0x07f:  movl   $0x0,0x4(%esp)
0863b141 +0x087:  mov    %eax,(%esp)
0863b144 +0x08a:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
0863b149 +0x08f:  mov    -0xc(%ebp),%eax
0863b14c +0x092:  movl   $0x0,0x4(%esp)
0863b154 +0x09a:  mov    %eax,(%esp)
0863b157 +0x09d:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
0863b15c +0x0a2:  mov    -0xc(%ebp),%eax
0863b15f +0x0a5:  add    $0x796f4,%eax
0863b164 +0x0aa:  mov    %eax,(%esp)
0863b167 +0x0ad:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0863b16c +0x0b2:  lea    -0x18(%ebp),%eax
0863b16f +0x0b5:  mov    %eax,(%esp)
0863b172 +0x0b8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863b177 +0x0bd:  lea    -0x18(%ebp),%eax
0863b17a +0x0c0:  mov    %eax,(%esp)
0863b17d +0x0c3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863b182 +0x0c8:  movl   $0x3,0x8(%esp)
0863b18a +0x0d0:  movl   $0x0,0x4(%esp)
0863b192 +0x0d8:  lea    -0x18(%ebp),%eax
0863b195 +0x0db:  mov    %eax,(%esp)
0863b198 +0x0de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863b19d +0x0e3:  movl   $0x1,0x4(%esp)
0863b1a5 +0x0eb:  lea    -0x18(%ebp),%eax
0863b1a8 +0x0ee:  mov    %eax,(%esp)
0863b1ab +0x0f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b1b0 +0x0f6:  mov    -0xc(%ebp),%eax
0863b1b3 +0x0f9:  mov    %eax,(%esp)
0863b1b6 +0x0fc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0863b1bb +0x101:  movzwl %ax,%eax
0863b1be +0x104:  mov    %eax,0x4(%esp)
0863b1c2 +0x108:  lea    -0x18(%ebp),%eax
0863b1c5 +0x10b:  mov    %eax,(%esp)
0863b1c8 +0x10e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0863b1cd +0x113:  movl   $0x0,0x4(%esp)
0863b1d5 +0x11b:  lea    -0x18(%ebp),%eax
0863b1d8 +0x11e:  mov    %eax,(%esp)
0863b1db +0x121:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b1e0 +0x126:  movl   $0x1,0x4(%esp)
0863b1e8 +0x12e:  lea    -0x18(%ebp),%eax
0863b1eb +0x131:  mov    %eax,(%esp)
0863b1ee +0x134:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863b1f3 +0x139:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863b1f8 +0x13e:  mov    -0xc(%ebp),%edx
0863b1fb +0x141:  mov    %edx,0x8(%esp)
0863b1ff +0x145:  lea    -0x18(%ebp),%edx
0863b202 +0x148:  mov    %edx,0x4(%esp)
0863b206 +0x14c:  mov    %eax,(%esp)
0863b209 +0x14f:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0863b20e +0x154:  jmp    0863b22b <+0x171>
0863b210 +0x156:  mov    %edx,%ebx
0863b212 +0x158:  mov    %eax,%esi
0863b214 +0x15a:  lea    -0x18(%ebp),%eax
0863b217 +0x15d:  mov    %eax,(%esp)
0863b21a +0x160:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b21f +0x165:  mov    %esi,%eax
0863b221 +0x167:  mov    %ebx,%edx
0863b223 +0x169:  mov    %eax,(%esp)
0863b226 +0x16c:  call   08ae3750 <_Unwind_Resume>
0863b22b +0x171:  lea    -0x18(%ebp),%eax
0863b22e +0x174:  mov    %eax,(%esp)
0863b231 +0x177:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b236 +0x17c:  mov    $0x1,%eax
0863b23b +0x181:  add    $0x20,%esp
0863b23e +0x184:  pop    %ebx
0863b23f +0x185:  pop    %esi
0863b240 +0x186:  pop    %ebp
0863b241 +0x187:  ret
```

## 反编译 C

```c
// Timer_AssaultGhostTimer::dispatch_sig @ 0x863b0ba

/* Timer_AssaultGhostTimer::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_AssaultGhostTimer::dispatch_sig
          (Timer_AssaultGhostTimer *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (local_10 == (CUserCharacInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUserCharacInfo::getCurCharacNo(local_10);
    if (uVar4 == param_3) {
      cVar1 = CUserCharacInfo::IsCurCharacGhost(local_10);
      if (cVar1 != '\0') {
        CUserCharacInfo::SetCurCharacGhost(local_10,false);
        CUserCharacInfo::SetCurCharacChaosDieTime(local_10,0);
        CUserCharacInfo::SetCurCharacChaosResponTime(local_10,0);
        CCharacterView::enableSaveCharacView((CCharacterView *)(local_10 + 0x796f4));
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863b17d to 0863b20d has its CatchHandler @ 0863b210 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        uVar4 = CUser::get_unique_id((CUser *)local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_1c,(CUser *)local_10);
        PacketGuard::~PacketGuard(local_1c);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
