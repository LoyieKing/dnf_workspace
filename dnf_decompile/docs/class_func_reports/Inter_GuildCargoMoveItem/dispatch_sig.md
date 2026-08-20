# dispatch_sig

`_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci`

`Inter_GuildCargoMoveItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoMoveItem` | `0x084debb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084debb4  _ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci
#           Inter_GuildCargoMoveItem::dispatch_sig(CUser*, char*, int)
# range [0x084debb4, 0x084ded41]
084debb4 +0x000:  push   %ebp
084debb5 +0x001:  mov    %esp,%ebp
084debb7 +0x003:  push   %esi
084debb8 +0x004:  push   %ebx
084debb9 +0x005:  sub    $0x30,%esp
084debbc +0x008:  mov    0x10(%ebp),%eax
084debbf +0x00b:  mov    %eax,-0xc(%ebp)
084debc2 +0x00e:  mov    0xc(%ebp),%eax
084debc5 +0x011:  mov    %eax,(%esp)
084debc8 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084debcd +0x019:  cmp    $0x2,%eax
084debd0 +0x01c:  setle  %al
084debd3 +0x01f:  test   %al,%al
084debd5 +0x021:  je     084debe1 <+0x2d>
084debd7 +0x023:  mov    $0x0,%ebx
084debdc +0x028:  jmp    084ded38 <+0x184>
084debe1 +0x02d:  movl   $0xffffffff,0x4(%esp)
084debe9 +0x035:  mov    0xc(%ebp),%eax
084debec +0x038:  mov    %eax,(%esp)
084debef +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084debf4 +0x040:  mov    %eax,%edx
084debf6 +0x042:  mov    -0xc(%ebp),%eax
084debf9 +0x045:  mov    0xe(%eax),%eax
084debfc +0x048:  cmp    %eax,%edx
084debfe +0x04a:  setne  %al
084dec01 +0x04d:  test   %al,%al
084dec03 +0x04f:  je     084dec0f <+0x5b>
084dec05 +0x051:  mov    $0x0,%ebx
084dec0a +0x056:  jmp    084ded38 <+0x184>
084dec0f +0x05b:  mov    -0xc(%ebp),%eax
084dec12 +0x05e:  mov    0x17(%eax),%ecx
084dec15 +0x061:  mov    -0xc(%ebp),%eax
084dec18 +0x064:  mov    0x13(%eax),%edx
084dec1b +0x067:  mov    -0xc(%ebp),%eax
084dec1e +0x06a:  movzbl 0x12(%eax),%eax
084dec22 +0x06e:  movzbl %al,%eax
084dec25 +0x071:  mov    0xc(%ebp),%ebx
084dec28 +0x074:  add    $0x79700,%ebx
084dec2e +0x07a:  mov    %ecx,0x10(%esp)
084dec32 +0x07e:  mov    %edx,0xc(%esp)
084dec36 +0x082:  mov    %eax,0x8(%esp)
084dec3a +0x086:  movl   $0xe,0x4(%esp)
084dec42 +0x08e:  mov    %ebx,(%esp)
084dec45 +0x091:  call   08686800 <_ZN15cUserHistoryLog24GuildCargoMoveItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiii>  ; cUserHistoryLog::GuildCargoMoveItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int)
084dec4a +0x096:  lea    -0x18(%ebp),%eax
084dec4d +0x099:  mov    %eax,(%esp)
084dec50 +0x09c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dec55 +0x0a1:  movl   $0xfd,0x8(%esp)
084dec5d +0x0a9:  movl   $0x1,0x4(%esp)
084dec65 +0x0b1:  lea    -0x18(%ebp),%eax
084dec68 +0x0b4:  mov    %eax,(%esp)
084dec6b +0x0b7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dec70 +0x0bc:  mov    -0xc(%ebp),%eax
084dec73 +0x0bf:  movzbl 0x12(%eax),%eax
084dec77 +0x0c3:  cmp    $0xc1,%al
084dec79 +0x0c5:  je     084deca9 <+0xf5>
084dec7b +0x0c7:  movl   $0x0,0x4(%esp)
084dec83 +0x0cf:  lea    -0x18(%ebp),%eax
084dec86 +0x0d2:  mov    %eax,(%esp)
084dec89 +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dec8e +0x0da:  mov    -0xc(%ebp),%eax
084dec91 +0x0dd:  movzbl 0x12(%eax),%eax
084dec95 +0x0e1:  movzbl %al,%eax
084dec98 +0x0e4:  mov    %eax,0x4(%esp)
084dec9c +0x0e8:  lea    -0x18(%ebp),%eax
084dec9f +0x0eb:  mov    %eax,(%esp)
084deca2 +0x0ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084deca7 +0x0f3:  jmp    084decbc <+0x108>
084deca9 +0x0f5:  movl   $0x1,0x4(%esp)
084decb1 +0x0fd:  lea    -0x18(%ebp),%eax
084decb4 +0x100:  mov    %eax,(%esp)
084decb7 +0x103:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084decbc +0x108:  mov    -0xc(%ebp),%eax
084decbf +0x10b:  mov    0x13(%eax),%eax
084decc2 +0x10e:  mov    %eax,0x4(%esp)
084decc6 +0x112:  lea    -0x18(%ebp),%eax
084decc9 +0x115:  mov    %eax,(%esp)
084deccc +0x118:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084decd1 +0x11d:  mov    -0xc(%ebp),%eax
084decd4 +0x120:  mov    0x17(%eax),%eax
084decd7 +0x123:  mov    %eax,0x4(%esp)
084decdb +0x127:  lea    -0x18(%ebp),%eax
084decde +0x12a:  mov    %eax,(%esp)
084dece1 +0x12d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dece6 +0x132:  movl   $0x1,0x4(%esp)
084decee +0x13a:  lea    -0x18(%ebp),%eax
084decf1 +0x13d:  mov    %eax,(%esp)
084decf4 +0x140:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084decf9 +0x145:  lea    -0x18(%ebp),%eax
084decfc +0x148:  mov    %eax,0x4(%esp)
084ded00 +0x14c:  mov    0xc(%ebp),%eax
084ded03 +0x14f:  mov    %eax,(%esp)
084ded06 +0x152:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ded0b +0x157:  mov    $0x0,%ebx
084ded10 +0x15c:  lea    -0x18(%ebp),%eax
084ded13 +0x15f:  mov    %eax,(%esp)
084ded16 +0x162:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ded1b +0x167:  jmp    084ded38 <+0x184>
084ded1d +0x169:  mov    %edx,%ebx
084ded1f +0x16b:  mov    %eax,%esi
084ded21 +0x16d:  lea    -0x18(%ebp),%eax
084ded24 +0x170:  mov    %eax,(%esp)
084ded27 +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ded2c +0x178:  mov    %esi,%eax
084ded2e +0x17a:  mov    %ebx,%edx
084ded30 +0x17c:  mov    %eax,(%esp)
084ded33 +0x17f:  call   08ae3750 <_Unwind_Resume>
084ded38 +0x184:  mov    %ebx,%eax
084ded3a +0x186:  add    $0x30,%esp
084ded3d +0x189:  pop    %ebx
084ded3e +0x18a:  pop    %esi
084ded3f +0x18b:  pop    %ebp
084ded40 +0x18c:  ret
084ded41 +0x18d:  nop
```

## 反编译 C

```c
// Inter_GuildCargoMoveItem::dispatch_sig @ 0x84debb4

/* Inter_GuildCargoMoveItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoMoveItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0xe))) {
    cUserHistoryLog::GuildCargoMoveItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),0xe,*(undefined1 *)(local_10 + 0x12),
               *(undefined4 *)(local_10 + 0x13),*(undefined4 *)(local_10 + 0x17));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dec6b to 084ded0a has its CatchHandler @ 084ded1d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xfd);
    if (*(char *)(local_10 + 0x12) == -0x3f) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
