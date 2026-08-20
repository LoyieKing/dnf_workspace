# dispatch_sig

`_ZN33Inter_Send_Charac_no_from_monitor12dispatch_sigEP5CUserPci`

`Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Send_Charac_no_from_monitor` | `0x084e312a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e312a  _ZN33Inter_Send_Charac_no_from_monitor12dispatch_sigEP5CUserPci
#           Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser*, char*, int)
# range [0x084e312a, 0x084e322d]
084e312a +0x000:  push   %ebp
084e312b +0x001:  mov    %esp,%ebp
084e312d +0x003:  push   %esi
084e312e +0x004:  push   %ebx
084e312f +0x005:  sub    $0x20,%esp
084e3132 +0x008:  mov    0x10(%ebp),%eax
084e3135 +0x00b:  mov    %eax,-0xc(%ebp)
084e3138 +0x00e:  lea    -0x18(%ebp),%eax
084e313b +0x011:  mov    %eax,(%esp)
084e313e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3143 +0x019:  movl   $0x14b,0x8(%esp)
084e314b +0x021:  movl   $0x1,0x4(%esp)
084e3153 +0x029:  lea    -0x18(%ebp),%eax
084e3156 +0x02c:  mov    %eax,(%esp)
084e3159 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e315e +0x034:  mov    -0xc(%ebp),%eax
084e3161 +0x037:  mov    0x12(%eax),%eax
084e3164 +0x03a:  test   %eax,%eax
084e3166 +0x03c:  jne    084e317d <+0x53>
084e3168 +0x03e:  movl   $0x0,0x4(%esp)
084e3170 +0x046:  lea    -0x18(%ebp),%eax
084e3173 +0x049:  mov    %eax,(%esp)
084e3176 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e317b +0x051:  jmp    084e31d9 <+0xaf>
084e317d +0x053:  movl   $0x1,0x4(%esp)
084e3185 +0x05b:  lea    -0x18(%ebp),%eax
084e3188 +0x05e:  mov    %eax,(%esp)
084e318b +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3190 +0x066:  mov    -0xc(%ebp),%eax
084e3193 +0x069:  mov    0xe(%eax),%eax
084e3196 +0x06c:  mov    %eax,0x4(%esp)
084e319a +0x070:  lea    -0x18(%ebp),%eax
084e319d +0x073:  mov    %eax,(%esp)
084e31a0 +0x076:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e31a5 +0x07b:  mov    -0xc(%ebp),%eax
084e31a8 +0x07e:  mov    0x12(%eax),%eax
084e31ab +0x081:  mov    %eax,0x4(%esp)
084e31af +0x085:  lea    -0x18(%ebp),%eax
084e31b2 +0x088:  mov    %eax,(%esp)
084e31b5 +0x08b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e31ba +0x090:  mov    -0xc(%ebp),%eax
084e31bd +0x093:  mov    0x12(%eax),%eax
084e31c0 +0x096:  mov    -0xc(%ebp),%edx
084e31c3 +0x099:  add    $0x16,%edx
084e31c6 +0x09c:  mov    %eax,0x8(%esp)
084e31ca +0x0a0:  mov    %edx,0x4(%esp)
084e31ce +0x0a4:  lea    -0x18(%ebp),%eax
084e31d1 +0x0a7:  mov    %eax,(%esp)
084e31d4 +0x0aa:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e31d9 +0x0af:  movl   $0x1,0x4(%esp)
084e31e1 +0x0b7:  lea    -0x18(%ebp),%eax
084e31e4 +0x0ba:  mov    %eax,(%esp)
084e31e7 +0x0bd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e31ec +0x0c2:  lea    -0x18(%ebp),%eax
084e31ef +0x0c5:  mov    %eax,0x4(%esp)
084e31f3 +0x0c9:  mov    0xc(%ebp),%eax
084e31f6 +0x0cc:  mov    %eax,(%esp)
084e31f9 +0x0cf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e31fe +0x0d4:  mov    $0x0,%ebx
084e3203 +0x0d9:  lea    -0x18(%ebp),%eax
084e3206 +0x0dc:  mov    %eax,(%esp)
084e3209 +0x0df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e320e +0x0e4:  mov    %ebx,%eax
084e3210 +0x0e6:  add    $0x20,%esp
084e3213 +0x0e9:  pop    %ebx
084e3214 +0x0ea:  pop    %esi
084e3215 +0x0eb:  pop    %ebp
084e3216 +0x0ec:  ret
084e3217 +0x0ed:  mov    %edx,%ebx
084e3219 +0x0ef:  mov    %eax,%esi
084e321b +0x0f1:  lea    -0x18(%ebp),%eax
084e321e +0x0f4:  mov    %eax,(%esp)
084e3221 +0x0f7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3226 +0x0fc:  mov    %esi,%eax
084e3228 +0x0fe:  mov    %ebx,%edx
084e322a +0x100:  mov    %eax,(%esp)
084e322d +0x103:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_Send_Charac_no_from_monitor::dispatch_sig @ 0x84e312a

/* Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3159 to 084e31fd has its CatchHandler @ 084e3217 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14b);
  if (*(int *)(local_10 + 0x12) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x16),*(int *)(local_10 + 0x12));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
