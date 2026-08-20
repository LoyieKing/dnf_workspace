# dispatch_sig

`_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci`

`Inter_NoticePvPBuddyInOut::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePvPBuddyInOut` | `0x084e1d96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1d96  _ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci
#           Inter_NoticePvPBuddyInOut::dispatch_sig(CUser*, char*, int)
# range [0x084e1d96, 0x084e1f01]
084e1d96 +0x000:  push   %ebp
084e1d97 +0x001:  mov    %esp,%ebp
084e1d99 +0x003:  push   %esi
084e1d9a +0x004:  push   %ebx
084e1d9b +0x005:  sub    $0x30,%esp
084e1d9e +0x008:  mov    0x10(%ebp),%eax
084e1da1 +0x00b:  mov    %eax,-0x10(%ebp)
084e1da4 +0x00e:  mov    0xc(%ebp),%eax
084e1da7 +0x011:  mov    %eax,(%esp)
084e1daa +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e1daf +0x019:  cmp    $0x2,%eax
084e1db2 +0x01c:  setle  %al
084e1db5 +0x01f:  test   %al,%al
084e1db7 +0x021:  je     084e1dc3 <+0x2d>
084e1db9 +0x023:  mov    $0x0,%ebx
084e1dbe +0x028:  jmp    084e1ef8 <+0x162>
084e1dc3 +0x02d:  mov    -0x10(%ebp),%eax
084e1dc6 +0x030:  mov    0xa(%eax),%ebx
084e1dc9 +0x033:  mov    0xc(%ebp),%eax
084e1dcc +0x036:  mov    %eax,(%esp)
084e1dcf +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e1dd4 +0x03e:  cmp    %eax,%ebx
084e1dd6 +0x040:  setne  %al
084e1dd9 +0x043:  test   %al,%al
084e1ddb +0x045:  je     084e1de7 <+0x51>
084e1ddd +0x047:  mov    $0x0,%ebx
084e1de2 +0x04c:  jmp    084e1ef8 <+0x162>
084e1de7 +0x051:  lea    -0x1c(%ebp),%eax
084e1dea +0x054:  mov    %eax,(%esp)
084e1ded +0x057:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e1df2 +0x05c:  mov    -0x10(%ebp),%eax
084e1df5 +0x05f:  movzbl 0x12(%eax),%eax
084e1df9 +0x063:  test   %al,%al
084e1dfb +0x065:  jne    084e1e33 <+0x9d>
084e1dfd +0x067:  movl   $0x10d,0x8(%esp)
084e1e05 +0x06f:  movl   $0x0,0x4(%esp)
084e1e0d +0x077:  lea    -0x1c(%ebp),%eax
084e1e10 +0x07a:  mov    %eax,(%esp)
084e1e13 +0x07d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1e18 +0x082:  mov    -0x10(%ebp),%eax
084e1e1b +0x085:  movzbl 0x13(%eax),%eax
084e1e1f +0x089:  movzbl %al,%eax
084e1e22 +0x08c:  mov    %eax,0x4(%esp)
084e1e26 +0x090:  lea    -0x1c(%ebp),%eax
084e1e29 +0x093:  mov    %eax,(%esp)
084e1e2c +0x096:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1e31 +0x09b:  jmp    084e1e4e <+0xb8>
084e1e33 +0x09d:  movl   $0x10e,0x8(%esp)
084e1e3b +0x0a5:  movl   $0x0,0x4(%esp)
084e1e43 +0x0ad:  lea    -0x1c(%ebp),%eax
084e1e46 +0x0b0:  mov    %eax,(%esp)
084e1e49 +0x0b3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1e4e +0x0b8:  mov    -0x10(%ebp),%eax
084e1e51 +0x0bb:  movzbl 0x14(%eax),%eax
084e1e55 +0x0bf:  movsbl %al,%eax
084e1e58 +0x0c2:  mov    %eax,0x4(%esp)
084e1e5c +0x0c6:  lea    -0x1c(%ebp),%eax
084e1e5f +0x0c9:  mov    %eax,(%esp)
084e1e62 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1e67 +0x0d1:  mov    -0x10(%ebp),%eax
084e1e6a +0x0d4:  add    $0x15,%eax
084e1e6d +0x0d7:  mov    %eax,(%esp)
084e1e70 +0x0da:  call   0807e3b0 <_init+0xca8>
084e1e75 +0x0df:  mov    %eax,-0xc(%ebp)
084e1e78 +0x0e2:  mov    -0xc(%ebp),%eax
084e1e7b +0x0e5:  mov    %eax,0x4(%esp)
084e1e7f +0x0e9:  lea    -0x1c(%ebp),%eax
084e1e82 +0x0ec:  mov    %eax,(%esp)
084e1e85 +0x0ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1e8a +0x0f4:  mov    -0x10(%ebp),%eax
084e1e8d +0x0f7:  lea    0x15(%eax),%edx
084e1e90 +0x0fa:  mov    -0xc(%ebp),%eax
084e1e93 +0x0fd:  mov    %eax,0x8(%esp)
084e1e97 +0x101:  mov    %edx,0x4(%esp)
084e1e9b +0x105:  lea    -0x1c(%ebp),%eax
084e1e9e +0x108:  mov    %eax,(%esp)
084e1ea1 +0x10b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e1ea6 +0x110:  movl   $0x1,0x4(%esp)
084e1eae +0x118:  lea    -0x1c(%ebp),%eax
084e1eb1 +0x11b:  mov    %eax,(%esp)
084e1eb4 +0x11e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e1eb9 +0x123:  lea    -0x1c(%ebp),%eax
084e1ebc +0x126:  mov    %eax,0x4(%esp)
084e1ec0 +0x12a:  mov    0xc(%ebp),%eax
084e1ec3 +0x12d:  mov    %eax,(%esp)
084e1ec6 +0x130:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e1ecb +0x135:  mov    $0x0,%ebx
084e1ed0 +0x13a:  lea    -0x1c(%ebp),%eax
084e1ed3 +0x13d:  mov    %eax,(%esp)
084e1ed6 +0x140:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1edb +0x145:  jmp    084e1ef8 <+0x162>
084e1edd +0x147:  mov    %edx,%ebx
084e1edf +0x149:  mov    %eax,%esi
084e1ee1 +0x14b:  lea    -0x1c(%ebp),%eax
084e1ee4 +0x14e:  mov    %eax,(%esp)
084e1ee7 +0x151:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1eec +0x156:  mov    %esi,%eax
084e1eee +0x158:  mov    %ebx,%edx
084e1ef0 +0x15a:  mov    %eax,(%esp)
084e1ef3 +0x15d:  call   08ae3750 <_Unwind_Resume>
084e1ef8 +0x162:  mov    %ebx,%eax
084e1efa +0x164:  add    $0x30,%esp
084e1efd +0x167:  pop    %ebx
084e1efe +0x168:  pop    %esi
084e1eff +0x169:  pop    %ebp
084e1f00 +0x16a:  ret
084e1f01 +0x16b:  nop
```

## 反编译 C

```c
// Inter_NoticePvPBuddyInOut::dispatch_sig @ 0x84e1d96

/* Inter_NoticePvPBuddyInOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePvPBuddyInOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_14 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_20);
    if (*(char *)(local_14 + 0x12) == '\0') {
                    /* try { // try from 084e1e13 to 084e1eca has its CatchHandler @ 084e1edd */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10e);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x14));
    local_10 = strlen((char *)(local_14 + 0x15));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x15),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
