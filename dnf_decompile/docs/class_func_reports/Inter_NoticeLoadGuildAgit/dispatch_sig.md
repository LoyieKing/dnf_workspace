# dispatch_sig

`_ZN25Inter_NoticeLoadGuildAgit12dispatch_sigEP5CUserPci`

`Inter_NoticeLoadGuildAgit::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeLoadGuildAgit` | `0x084dacda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dacda  _ZN25Inter_NoticeLoadGuildAgit12dispatch_sigEP5CUserPci
#           Inter_NoticeLoadGuildAgit::dispatch_sig(CUser*, char*, int)
# range [0x084dacda, 0x084dad95]
084dacda +0x00:  push   %ebp
084dacdb +0x01:  mov    %esp,%ebp
084dacdd +0x03:  push   %esi
084dacde +0x04:  push   %ebx
084dacdf +0x05:  sub    $0x20,%esp
084dace2 +0x08:  mov    0x10(%ebp),%eax
084dace5 +0x0b:  mov    %eax,-0xc(%ebp)
084dace8 +0x0e:  mov    -0xc(%ebp),%eax
084daceb +0x11:  add    $0x16,%eax
084dacee +0x14:  mov    %eax,0x4(%esp)
084dacf2 +0x18:  mov    0xc(%ebp),%eax
084dacf5 +0x1b:  mov    %eax,(%esp)
084dacf8 +0x1e:  call   084eced6 <_GLOBAL__I__Z7getUserj+0x3e88>  ; global constructors keyed to getUser(unsigned int)+0x3e88
084dacfd +0x23:  lea    -0x18(%ebp),%eax
084dad00 +0x26:  mov    %eax,(%esp)
084dad03 +0x29:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dad08 +0x2e:  movl   $0xbf,0x8(%esp)
084dad10 +0x36:  movl   $0x0,0x4(%esp)
084dad18 +0x3e:  lea    -0x18(%ebp),%eax
084dad1b +0x41:  mov    %eax,(%esp)
084dad1e +0x44:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dad23 +0x49:  mov    -0xc(%ebp),%eax
084dad26 +0x4c:  movzbl 0x16(%eax),%eax
084dad2a +0x50:  movzbl %al,%eax
084dad2d +0x53:  mov    %eax,0x4(%esp)
084dad31 +0x57:  lea    -0x18(%ebp),%eax
084dad34 +0x5a:  mov    %eax,(%esp)
084dad37 +0x5d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dad3c +0x62:  movl   $0x1,0x4(%esp)
084dad44 +0x6a:  lea    -0x18(%ebp),%eax
084dad47 +0x6d:  mov    %eax,(%esp)
084dad4a +0x70:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dad4f +0x75:  lea    -0x18(%ebp),%eax
084dad52 +0x78:  mov    %eax,0x4(%esp)
084dad56 +0x7c:  mov    0xc(%ebp),%eax
084dad59 +0x7f:  mov    %eax,(%esp)
084dad5c +0x82:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dad61 +0x87:  mov    $0x0,%ebx
084dad66 +0x8c:  lea    -0x18(%ebp),%eax
084dad69 +0x8f:  mov    %eax,(%esp)
084dad6c +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dad71 +0x97:  mov    %ebx,%eax
084dad73 +0x99:  add    $0x20,%esp
084dad76 +0x9c:  pop    %ebx
084dad77 +0x9d:  pop    %esi
084dad78 +0x9e:  pop    %ebp
084dad79 +0x9f:  ret
084dad7a +0xa0:  mov    %edx,%ebx
084dad7c +0xa2:  mov    %eax,%esi
084dad7e +0xa4:  lea    -0x18(%ebp),%eax
084dad81 +0xa7:  mov    %eax,(%esp)
084dad84 +0xaa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dad89 +0xaf:  mov    %esi,%eax
084dad8b +0xb1:  mov    %ebx,%edx
084dad8d +0xb3:  mov    %eax,(%esp)
084dad90 +0xb6:  call   08ae3750 <_Unwind_Resume>
084dad95 +0xbb:  nop
```

## 反编译 C

```c
// Inter_NoticeLoadGuildAgit::dispatch_sig @ 0x84dacda

/* Inter_NoticeLoadGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeLoadGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  CUser::SetGuildAgitDBInfo((CUser *)param_2,(STGuildAgitDBInfo *)(param_3 + 0x16));
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dad1e to 084dad60 has its CatchHandler @ 084dad7a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x16));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
