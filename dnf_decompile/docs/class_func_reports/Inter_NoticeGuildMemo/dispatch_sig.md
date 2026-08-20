# dispatch_sig

`_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci`

`Inter_NoticeGuildMemo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeGuildMemo` | `0x084dad96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dad96  _ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci
#           Inter_NoticeGuildMemo::dispatch_sig(CUser*, char*, int)
# range [0x084dad96, 0x084daeed]
084dad96 +0x000:  push   %ebp
084dad97 +0x001:  mov    %esp,%ebp
084dad99 +0x003:  push   %esi
084dad9a +0x004:  push   %ebx
084dad9b +0x005:  sub    $0x30,%esp
084dad9e +0x008:  mov    0xc(%ebp),%eax
084dada1 +0x00b:  mov    %eax,(%esp)
084dada4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dada9 +0x013:  test   %eax,%eax
084dadab +0x015:  sete   %al
084dadae +0x018:  test   %al,%al
084dadb0 +0x01a:  je     084dadbc <+0x26>
084dadb2 +0x01c:  mov    $0x0,%ebx
084dadb7 +0x021:  jmp    084daee4 <+0x14e>
084dadbc +0x026:  mov    0x10(%ebp),%eax
084dadbf +0x029:  mov    %eax,-0x10(%ebp)
084dadc2 +0x02c:  mov    -0x10(%ebp),%eax
084dadc5 +0x02f:  mov    0xe(%eax),%ebx
084dadc8 +0x032:  movl   $0xffffffff,0x4(%esp)
084dadd0 +0x03a:  mov    0xc(%ebp),%eax
084dadd3 +0x03d:  mov    %eax,(%esp)
084dadd6 +0x040:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084daddb +0x045:  cmp    %eax,%ebx
084daddd +0x047:  setne  %al
084dade0 +0x04a:  test   %al,%al
084dade2 +0x04c:  je     084dadee <+0x58>
084dade4 +0x04e:  mov    $0x0,%ebx
084dade9 +0x053:  jmp    084daee4 <+0x14e>
084dadee +0x058:  lea    -0x1c(%ebp),%eax
084dadf1 +0x05b:  mov    %eax,(%esp)
084dadf4 +0x05e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dadf9 +0x063:  movl   $0xc5,0x8(%esp)
084dae01 +0x06b:  movl   $0x0,0x4(%esp)
084dae09 +0x073:  lea    -0x1c(%ebp),%eax
084dae0c +0x076:  mov    %eax,(%esp)
084dae0f +0x079:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dae14 +0x07e:  mov    -0x10(%ebp),%eax
084dae17 +0x081:  add    $0x12,%eax
084dae1a +0x084:  mov    %eax,(%esp)
084dae1d +0x087:  call   0807e3b0 <_init+0xca8>
084dae22 +0x08c:  mov    %eax,-0xc(%ebp)
084dae25 +0x08f:  mov    -0xc(%ebp),%eax
084dae28 +0x092:  mov    %eax,0x4(%esp)
084dae2c +0x096:  lea    -0x1c(%ebp),%eax
084dae2f +0x099:  mov    %eax,(%esp)
084dae32 +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dae37 +0x0a1:  mov    -0x10(%ebp),%eax
084dae3a +0x0a4:  lea    0x12(%eax),%edx
084dae3d +0x0a7:  mov    -0xc(%ebp),%eax
084dae40 +0x0aa:  mov    %eax,0x8(%esp)
084dae44 +0x0ae:  mov    %edx,0x4(%esp)
084dae48 +0x0b2:  lea    -0x1c(%ebp),%eax
084dae4b +0x0b5:  mov    %eax,(%esp)
084dae4e +0x0b8:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084dae53 +0x0bd:  mov    -0x10(%ebp),%eax
084dae56 +0x0c0:  add    $0x30,%eax
084dae59 +0x0c3:  mov    %eax,(%esp)
084dae5c +0x0c6:  call   0807e3b0 <_init+0xca8>
084dae61 +0x0cb:  mov    %eax,-0xc(%ebp)
084dae64 +0x0ce:  mov    -0xc(%ebp),%eax
084dae67 +0x0d1:  mov    %eax,0x4(%esp)
084dae6b +0x0d5:  lea    -0x1c(%ebp),%eax
084dae6e +0x0d8:  mov    %eax,(%esp)
084dae71 +0x0db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dae76 +0x0e0:  mov    -0x10(%ebp),%eax
084dae79 +0x0e3:  lea    0x30(%eax),%edx
084dae7c +0x0e6:  mov    -0xc(%ebp),%eax
084dae7f +0x0e9:  mov    %eax,0x8(%esp)
084dae83 +0x0ed:  mov    %edx,0x4(%esp)
084dae87 +0x0f1:  lea    -0x1c(%ebp),%eax
084dae8a +0x0f4:  mov    %eax,(%esp)
084dae8d +0x0f7:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084dae92 +0x0fc:  movl   $0x1,0x4(%esp)
084dae9a +0x104:  lea    -0x1c(%ebp),%eax
084dae9d +0x107:  mov    %eax,(%esp)
084daea0 +0x10a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084daea5 +0x10f:  lea    -0x1c(%ebp),%eax
084daea8 +0x112:  mov    %eax,0x4(%esp)
084daeac +0x116:  mov    0xc(%ebp),%eax
084daeaf +0x119:  mov    %eax,(%esp)
084daeb2 +0x11c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084daeb7 +0x121:  mov    $0x0,%ebx
084daebc +0x126:  lea    -0x1c(%ebp),%eax
084daebf +0x129:  mov    %eax,(%esp)
084daec2 +0x12c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084daec7 +0x131:  jmp    084daee4 <+0x14e>
084daec9 +0x133:  mov    %edx,%ebx
084daecb +0x135:  mov    %eax,%esi
084daecd +0x137:  lea    -0x1c(%ebp),%eax
084daed0 +0x13a:  mov    %eax,(%esp)
084daed3 +0x13d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084daed8 +0x142:  mov    %esi,%eax
084daeda +0x144:  mov    %ebx,%edx
084daedc +0x146:  mov    %eax,(%esp)
084daedf +0x149:  call   08ae3750 <_Unwind_Resume>
084daee4 +0x14e:  mov    %ebx,%eax
084daee6 +0x150:  add    $0x30,%esp
084daee9 +0x153:  pop    %ebx
084daeea +0x154:  pop    %esi
084daeeb +0x155:  pop    %ebp
084daeec +0x156:  ret
084daeed +0x157:  nop
```

## 反编译 C

```c
// Inter_NoticeGuildMemo::dispatch_sig @ 0x84dad96

/* Inter_NoticeGuildMemo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildMemo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084dae0f to 084daeb6 has its CatchHandler @ 084daec9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xc5);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 0x30));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x30),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```
