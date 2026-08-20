# execute

`_ZN11game_master14CCharacStatCmd7executeEv`

`game_master::CCharacStatCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CCharacStatCmd` | `0x084a905e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a905e  _ZN11game_master14CCharacStatCmd7executeEv
#           game_master::CCharacStatCmd::execute()
# range [0x084a905e, 0x084a9219]
084a905e +0x000:  push   %ebp
084a905f +0x001:  mov    %esp,%ebp
084a9061 +0x003:  push   %edi
084a9062 +0x004:  push   %esi
084a9063 +0x005:  push   %ebx
084a9064 +0x006:  sub    $0x13c,%esp
084a906a +0x00c:  lea    -0x127(%ebp),%edx
084a9070 +0x012:  mov    $0xff,%ebx
084a9075 +0x017:  mov    $0x0,%eax
084a907a +0x01c:  mov    %edx,%ecx
084a907c +0x01e:  and    $0x1,%ecx
084a907f +0x021:  test   %ecx,%ecx
084a9081 +0x023:  je     084a908b <+0x2d>
084a9083 +0x025:  mov    %al,(%edx)
084a9085 +0x027:  add    $0x1,%edx
084a9088 +0x02a:  sub    $0x1,%ebx
084a908b +0x02d:  mov    %edx,%ecx
084a908d +0x02f:  and    $0x2,%ecx
084a9090 +0x032:  test   %ecx,%ecx
084a9092 +0x034:  je     084a909d <+0x3f>
084a9094 +0x036:  mov    %ax,(%edx)
084a9097 +0x039:  add    $0x2,%edx
084a909a +0x03c:  sub    $0x2,%ebx
084a909d +0x03f:  mov    %ebx,%ecx
084a909f +0x041:  shr    $0x2,%ecx
084a90a2 +0x044:  mov    %edx,%edi
084a90a4 +0x046:  rep stos %eax,%es:(%edi)
084a90a6 +0x048:  mov    %edi,%edx
084a90a8 +0x04a:  mov    %ebx,%ecx
084a90aa +0x04c:  and    $0x2,%ecx
084a90ad +0x04f:  test   %ecx,%ecx
084a90af +0x051:  je     084a90b7 <+0x59>
084a90b1 +0x053:  mov    %ax,(%edx)
084a90b4 +0x056:  add    $0x2,%edx
084a90b7 +0x059:  mov    %ebx,%ecx
084a90b9 +0x05b:  and    $0x1,%ecx
084a90bc +0x05e:  test   %ecx,%ecx
084a90be +0x060:  je     084a90c5 <+0x67>
084a90c0 +0x062:  mov    %al,(%edx)
084a90c2 +0x064:  add    $0x1,%edx
084a90c5 +0x067:  mov    0x8(%ebp),%eax
084a90c8 +0x06a:  mov    %eax,(%esp)
084a90cb +0x06d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a90d0 +0x072:  mov    %eax,(%esp)
084a90d3 +0x075:  call   084b42bc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x36f>  ; global constructors keyed to game_master::CMacro::Reset()+0x36f
084a90d8 +0x07a:  mov    %eax,-0x1c(%ebp)
084a90db +0x07d:  mov    -0x1c(%ebp),%eax
084a90de +0x080:  movzwl 0x48(%eax),%eax
084a90e2 +0x084:  movzwl %ax,%ecx
084a90e5 +0x087:  mov    -0x1c(%ebp),%eax
084a90e8 +0x08a:  movzwl 0x46(%eax),%eax
084a90ec +0x08e:  movzwl %ax,%edx
084a90ef +0x091:  mov    -0x1c(%ebp),%eax
084a90f2 +0x094:  mov    0x42(%eax),%eax
084a90f5 +0x097:  mov    %ecx,0x10(%esp)
084a90f9 +0x09b:  mov    %edx,0xc(%esp)
084a90fd +0x09f:  mov    %eax,0x8(%esp)
084a9101 +0x0a3:  movl   $"charac_stat move_speed=%d,attack_speed=%d,cast_speed=%d",0x4(%esp)
084a9109 +0x0ab:  lea    -0x127(%ebp),%eax
084a910f +0x0b1:  mov    %eax,(%esp)
084a9112 +0x0b4:  call   0807e440 <_init+0xd38>
084a9117 +0x0b9:  lea    -0x28(%ebp),%eax
084a911a +0x0bc:  mov    %eax,(%esp)
084a911d +0x0bf:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a9122 +0x0c4:  movl   $0xc,0x8(%esp)
084a912a +0x0cc:  movl   $0x0,0x4(%esp)
084a9132 +0x0d4:  lea    -0x28(%ebp),%eax
084a9135 +0x0d7:  mov    %eax,(%esp)
084a9138 +0x0da:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a913d +0x0df:  movl   $0x0,0x4(%esp)
084a9145 +0x0e7:  lea    -0x28(%ebp),%eax
084a9148 +0x0ea:  mov    %eax,(%esp)
084a914b +0x0ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a9150 +0x0f2:  movl   $0x0,0x4(%esp)
084a9158 +0x0fa:  lea    -0x28(%ebp),%eax
084a915b +0x0fd:  mov    %eax,(%esp)
084a915e +0x100:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a9163 +0x105:  movl   $0x0,0x4(%esp)
084a916b +0x10d:  lea    -0x28(%ebp),%eax
084a916e +0x110:  mov    %eax,(%esp)
084a9171 +0x113:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a9176 +0x118:  lea    -0x127(%ebp),%eax
084a917c +0x11e:  mov    %eax,(%esp)
084a917f +0x121:  call   0807e3b0 <_init+0xca8>
084a9184 +0x126:  mov    %eax,0x4(%esp)
084a9188 +0x12a:  lea    -0x28(%ebp),%eax
084a918b +0x12d:  mov    %eax,(%esp)
084a918e +0x130:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a9193 +0x135:  lea    -0x127(%ebp),%eax
084a9199 +0x13b:  mov    %eax,(%esp)
084a919c +0x13e:  call   0807e3b0 <_init+0xca8>
084a91a1 +0x143:  mov    %eax,0x8(%esp)
084a91a5 +0x147:  lea    -0x127(%ebp),%eax
084a91ab +0x14d:  mov    %eax,0x4(%esp)
084a91af +0x151:  lea    -0x28(%ebp),%eax
084a91b2 +0x154:  mov    %eax,(%esp)
084a91b5 +0x157:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084a91ba +0x15c:  movl   $0x1,0x4(%esp)
084a91c2 +0x164:  lea    -0x28(%ebp),%eax
084a91c5 +0x167:  mov    %eax,(%esp)
084a91c8 +0x16a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a91cd +0x16f:  mov    0x8(%ebp),%eax
084a91d0 +0x172:  mov    %eax,(%esp)
084a91d3 +0x175:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a91d8 +0x17a:  lea    -0x28(%ebp),%edx
084a91db +0x17d:  mov    %edx,0x4(%esp)
084a91df +0x181:  mov    %eax,(%esp)
084a91e2 +0x184:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a91e7 +0x189:  jmp    084a9204 <+0x1a6>
084a91e9 +0x18b:  mov    %edx,%ebx
084a91eb +0x18d:  mov    %eax,%esi
084a91ed +0x18f:  lea    -0x28(%ebp),%eax
084a91f0 +0x192:  mov    %eax,(%esp)
084a91f3 +0x195:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a91f8 +0x19a:  mov    %esi,%eax
084a91fa +0x19c:  mov    %ebx,%edx
084a91fc +0x19e:  mov    %eax,(%esp)
084a91ff +0x1a1:  call   08ae3750 <_Unwind_Resume>
084a9204 +0x1a6:  lea    -0x28(%ebp),%eax
084a9207 +0x1a9:  mov    %eax,(%esp)
084a920a +0x1ac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a920f +0x1b1:  add    $0x13c,%esp
084a9215 +0x1b7:  pop    %ebx
084a9216 +0x1b8:  pop    %esi
084a9217 +0x1b9:  pop    %edi
084a9218 +0x1ba:  pop    %ebp
084a9219 +0x1bb:  ret
```

## 反编译 C

```c
// game_master::CCharacStatCmd::execute @ 0x84a905e

/* game_master::CCharacStatCmd::execute() */

void __thiscall game_master::CCharacStatCmd::execute(CCharacStatCmd *this)

{
  CUserCharacInfo *this_00;
  size_t sVar1;
  CUser *this_01;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_12b;
  char local_12a [254];
  PacketGuard local_2c [12];
  int local_20;
  
  pcVar3 = &local_12b;
  uVar4 = 0xff;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_12b = '\0';
    pcVar3 = local_12a;
    uVar4 = 0xfe;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if ((uVar4 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar5) {
    *pcVar3 = '\0';
  }
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  local_20 = CUserCharacInfo::getCurCharacAddInfoR(this_00);
  sprintf(&local_12b,"charac_stat move_speed=%d,attack_speed=%d,cast_speed=%d",
          *(undefined4 *)(local_20 + 0x42),(uint)*(ushort *)(local_20 + 0x46),
          (uint)*(ushort *)(local_20 + 0x48));
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084a9138 to 084a91e6 has its CatchHandler @ 084a91e9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  sVar1 = strlen(&local_12b);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar1);
  sVar1 = strlen(&local_12b);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_12b,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  this_01 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_01,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return;
}
```
