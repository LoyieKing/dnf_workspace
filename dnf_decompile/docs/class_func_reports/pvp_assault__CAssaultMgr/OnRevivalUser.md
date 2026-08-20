# OnRevivalUser

`_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser`

`pvp_assault::CAssaultMgr::OnRevivalUser(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef464` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef464  _ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser
#           pvp_assault::CAssaultMgr::OnRevivalUser(CUser*)
# range [0x082ef464, 0x082ef56f]
082ef464 +0x000:  push   %ebp
082ef465 +0x001:  mov    %esp,%ebp
082ef467 +0x003:  push   %esi
082ef468 +0x004:  push   %ebx
082ef469 +0x005:  sub    $0x30,%esp
082ef46c +0x008:  movl   $0x0,-0x10(%ebp)
082ef473 +0x00f:  lea    -0x10(%ebp),%eax
082ef476 +0x012:  mov    %eax,0x4(%esp)
082ef47a +0x016:  mov    0xc(%ebp),%eax
082ef47d +0x019:  mov    %eax,(%esp)
082ef480 +0x01c:  call   082ed43e <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi>  ; pvp_assault::CAssaultPlace::RevivalUser(CUser*, int&)
082ef485 +0x021:  jmp    082ef564 <+0x100>
082ef48a +0x026:  cmp    $0x1,%edx
082ef48d +0x029:  je     082ef497 <+0x33>
082ef48f +0x02b:  mov    %eax,(%esp)
082ef492 +0x02e:  call   08ae3750 <_Unwind_Resume>
082ef497 +0x033:  mov    %eax,(%esp)
082ef49a +0x036:  call   08725ce0 <__cxa_begin_catch>
082ef49f +0x03b:  mov    (%eax),%eax
082ef4a1 +0x03d:  mov    %eax,-0xc(%ebp)
082ef4a4 +0x040:  lea    -0x1c(%ebp),%eax
082ef4a7 +0x043:  mov    %eax,(%esp)
082ef4aa +0x046:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ef4af +0x04b:  movl   $0x97,0x8(%esp)
082ef4b7 +0x053:  movl   $0x1,0x4(%esp)
082ef4bf +0x05b:  lea    -0x1c(%ebp),%eax
082ef4c2 +0x05e:  mov    %eax,(%esp)
082ef4c5 +0x061:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ef4ca +0x066:  movl   $0x0,0x4(%esp)
082ef4d2 +0x06e:  lea    -0x1c(%ebp),%eax
082ef4d5 +0x071:  mov    %eax,(%esp)
082ef4d8 +0x074:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef4dd +0x079:  mov    -0xc(%ebp),%eax
082ef4e0 +0x07c:  mov    %eax,0x4(%esp)
082ef4e4 +0x080:  lea    -0x1c(%ebp),%eax
082ef4e7 +0x083:  mov    %eax,(%esp)
082ef4ea +0x086:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef4ef +0x08b:  mov    -0x10(%ebp),%eax
082ef4f2 +0x08e:  mov    %eax,0x4(%esp)
082ef4f6 +0x092:  lea    -0x1c(%ebp),%eax
082ef4f9 +0x095:  mov    %eax,(%esp)
082ef4fc +0x098:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ef501 +0x09d:  movl   $0x1,0x4(%esp)
082ef509 +0x0a5:  lea    -0x1c(%ebp),%eax
082ef50c +0x0a8:  mov    %eax,(%esp)
082ef50f +0x0ab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ef514 +0x0b0:  lea    -0x1c(%ebp),%eax
082ef517 +0x0b3:  mov    %eax,0x4(%esp)
082ef51b +0x0b7:  mov    0xc(%ebp),%eax
082ef51e +0x0ba:  mov    %eax,(%esp)
082ef521 +0x0bd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ef526 +0x0c2:  jmp    082ef53d <+0xd9>
082ef528 +0x0c4:  mov    %edx,%ebx
082ef52a +0x0c6:  mov    %eax,%esi
082ef52c +0x0c8:  lea    -0x1c(%ebp),%eax
082ef52f +0x0cb:  mov    %eax,(%esp)
082ef532 +0x0ce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef537 +0x0d3:  mov    %esi,%eax
082ef539 +0x0d5:  mov    %ebx,%edx
082ef53b +0x0d7:  jmp    082ef54a <+0xe6>
082ef53d +0x0d9:  lea    -0x1c(%ebp),%eax
082ef540 +0x0dc:  mov    %eax,(%esp)
082ef543 +0x0df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef548 +0x0e4:  jmp    082ef55f <+0xfb>
082ef54a +0x0e6:  mov    %edx,%ebx
082ef54c +0x0e8:  mov    %eax,%esi
082ef54e +0x0ea:  call   08725c30 <__cxa_end_catch>
082ef553 +0x0ef:  mov    %esi,%eax
082ef555 +0x0f1:  mov    %ebx,%edx
082ef557 +0x0f3:  mov    %eax,(%esp)
082ef55a +0x0f6:  call   08ae3750 <_Unwind_Resume>
082ef55f +0x0fb:  call   08725c30 <__cxa_end_catch>
082ef564 +0x100:  mov    $0x1,%eax
082ef569 +0x105:  add    $0x30,%esp
082ef56c +0x108:  pop    %ebx
082ef56d +0x109:  pop    %esi
082ef56e +0x10a:  pop    %ebp
082ef56f +0x10b:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnRevivalUser @ 0x82ef464

/* pvp_assault::CAssaultMgr::OnRevivalUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnRevivalUser(CAssaultMgr *this,CUser *param_1)

{
  int local_14 [2];
  
  local_14[0] = 0;
                    /* try { // try from 082ef480 to 082ef484 has its CatchHandler @ 082ef48a */
  CAssaultPlace::RevivalUser(param_1,local_14);
  return 1;
}
```
