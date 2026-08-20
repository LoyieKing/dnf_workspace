# dispatch_sig

`_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci`

`Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorGuildMemberNamingReply` | `0x084cc23c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc23c  _ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci
#           Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser*, char*, int)
# range [0x084cc23c, 0x084cc35b]
084cc23c +0x000:  push   %ebp
084cc23d +0x001:  mov    %esp,%ebp
084cc23f +0x003:  push   %esi
084cc240 +0x004:  push   %ebx
084cc241 +0x005:  sub    $0x20,%esp
084cc244 +0x008:  mov    0xc(%ebp),%eax
084cc247 +0x00b:  mov    %eax,(%esp)
084cc24a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc24f +0x013:  test   %eax,%eax
084cc251 +0x015:  sete   %al
084cc254 +0x018:  test   %al,%al
084cc256 +0x01a:  je     084cc262 <+0x26>
084cc258 +0x01c:  mov    $0x0,%ebx
084cc25d +0x021:  jmp    084cc353 <+0x117>
084cc262 +0x026:  mov    0x10(%ebp),%eax
084cc265 +0x029:  mov    %eax,-0xc(%ebp)
084cc268 +0x02c:  mov    -0xc(%ebp),%eax
084cc26b +0x02f:  mov    0x12(%eax),%ebx
084cc26e +0x032:  movl   $0xffffffff,0x4(%esp)
084cc276 +0x03a:  mov    0xc(%ebp),%eax
084cc279 +0x03d:  mov    %eax,(%esp)
084cc27c +0x040:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc281 +0x045:  cmp    %eax,%ebx
084cc283 +0x047:  setne  %al
084cc286 +0x04a:  test   %al,%al
084cc288 +0x04c:  je     084cc294 <+0x58>
084cc28a +0x04e:  mov    $0x0,%ebx
084cc28f +0x053:  jmp    084cc353 <+0x117>
084cc294 +0x058:  lea    -0x18(%ebp),%eax
084cc297 +0x05b:  mov    %eax,(%esp)
084cc29a +0x05e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc29f +0x063:  movl   $0x80,0x8(%esp)
084cc2a7 +0x06b:  movl   $0x1,0x4(%esp)
084cc2af +0x073:  lea    -0x18(%ebp),%eax
084cc2b2 +0x076:  mov    %eax,(%esp)
084cc2b5 +0x079:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc2ba +0x07e:  mov    -0xc(%ebp),%eax
084cc2bd +0x081:  mov    0xa(%eax),%eax
084cc2c0 +0x084:  test   %eax,%eax
084cc2c2 +0x086:  jne    084cc2d9 <+0x9d>
084cc2c4 +0x088:  movl   $0x1,0x4(%esp)
084cc2cc +0x090:  lea    -0x18(%ebp),%eax
084cc2cf +0x093:  mov    %eax,(%esp)
084cc2d2 +0x096:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc2d7 +0x09b:  jmp    084cc2ec <+0xb0>
084cc2d9 +0x09d:  movl   $0x0,0x4(%esp)
084cc2e1 +0x0a5:  lea    -0x18(%ebp),%eax
084cc2e4 +0x0a8:  mov    %eax,(%esp)
084cc2e7 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc2ec +0x0b0:  mov    -0xc(%ebp),%eax
084cc2ef +0x0b3:  mov    0xa(%eax),%eax
084cc2f2 +0x0b6:  mov    %eax,0x4(%esp)
084cc2f6 +0x0ba:  lea    -0x18(%ebp),%eax
084cc2f9 +0x0bd:  mov    %eax,(%esp)
084cc2fc +0x0c0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc301 +0x0c5:  movl   $0x1,0x4(%esp)
084cc309 +0x0cd:  lea    -0x18(%ebp),%eax
084cc30c +0x0d0:  mov    %eax,(%esp)
084cc30f +0x0d3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc314 +0x0d8:  lea    -0x18(%ebp),%eax
084cc317 +0x0db:  mov    %eax,0x4(%esp)
084cc31b +0x0df:  mov    0xc(%ebp),%eax
084cc31e +0x0e2:  mov    %eax,(%esp)
084cc321 +0x0e5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc326 +0x0ea:  mov    $0x0,%ebx
084cc32b +0x0ef:  lea    -0x18(%ebp),%eax
084cc32e +0x0f2:  mov    %eax,(%esp)
084cc331 +0x0f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc336 +0x0fa:  jmp    084cc353 <+0x117>
084cc338 +0x0fc:  mov    %edx,%ebx
084cc33a +0x0fe:  mov    %eax,%esi
084cc33c +0x100:  lea    -0x18(%ebp),%eax
084cc33f +0x103:  mov    %eax,(%esp)
084cc342 +0x106:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc347 +0x10b:  mov    %esi,%eax
084cc349 +0x10d:  mov    %ebx,%edx
084cc34b +0x10f:  mov    %eax,(%esp)
084cc34e +0x112:  call   08ae3750 <_Unwind_Resume>
084cc353 +0x117:  mov    %ebx,%eax
084cc355 +0x119:  add    $0x20,%esp
084cc358 +0x11c:  pop    %ebx
084cc359 +0x11d:  pop    %esi
084cc35a +0x11e:  pop    %ebp
084cc35b +0x11f:  ret
```

## 反编译 C

```c
// Inter_MonitorGuildMemberNamingReply::dispatch_sig @ 0x84cc23c

/* Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0x12);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc2b5 to 084cc325 has its CatchHandler @ 084cc338 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x80);
      if (*(int *)(local_10 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
