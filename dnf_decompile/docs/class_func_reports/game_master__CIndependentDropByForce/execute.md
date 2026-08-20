# execute

`_ZN11game_master23CIndependentDropByForce7executeEv`

`game_master::CIndependentDropByForce::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDropByForce` | `0x084b1fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1fda  _ZN11game_master23CIndependentDropByForce7executeEv
#           game_master::CIndependentDropByForce::execute()
# range [0x084b1fda, 0x084b210f]
084b1fda +0x000:  push   %ebp
084b1fdb +0x001:  mov    %esp,%ebp
084b1fdd +0x003:  push   %esi
084b1fde +0x004:  push   %ebx
084b1fdf +0x005:  sub    $0x40,%esp
084b1fe2 +0x008:  mov    0x8(%ebp),%eax
084b1fe5 +0x00b:  mov    %eax,(%esp)
084b1fe8 +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b1fed +0x013:  mov    %eax,-0xc(%ebp)
084b1ff0 +0x016:  cmpl   $0x0,-0xc(%ebp)
084b1ff4 +0x01a:  je     084b2107 <+0x12d>
084b1ffa +0x020:  lea    -0x10(%ebp),%eax
084b1ffd +0x023:  mov    %eax,(%esp)
084b2000 +0x026:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084b2005 +0x02b:  mov    0x8(%ebp),%eax
084b2008 +0x02e:  movzbl 0x8(%eax),%eax
084b200c +0x032:  test   %al,%al
084b200e +0x034:  je     084b2025 <+0x4b>
084b2010 +0x036:  movl   $"independent drop item 100% on",0x4(%esp)
084b2018 +0x03e:  lea    -0x10(%ebp),%eax
084b201b +0x041:  mov    %eax,(%esp)
084b201e +0x044:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
084b2023 +0x049:  jmp    084b2038 <+0x5e>
084b2025 +0x04b:  movl   $"independent drop item 100% off",0x4(%esp)
084b202d +0x053:  lea    -0x10(%ebp),%eax
084b2030 +0x056:  mov    %eax,(%esp)
084b2033 +0x059:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
084b2038 +0x05e:  lea    -0x1c(%ebp),%eax
084b203b +0x061:  mov    %eax,(%esp)
084b203e +0x064:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b2043 +0x069:  lea    -0x10(%ebp),%eax
084b2046 +0x06c:  mov    %eax,(%esp)
084b2049 +0x06f:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
084b204e +0x074:  mov    %eax,%esi
084b2050 +0x076:  lea    -0x10(%ebp),%eax
084b2053 +0x079:  mov    %eax,(%esp)
084b2056 +0x07c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b205b +0x081:  mov    %eax,%ebx
084b205d +0x083:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b2062 +0x088:  movl   $0xc,0x18(%esp)
084b206a +0x090:  movl   $0x2,0x14(%esp)
084b2072 +0x098:  mov    %esi,0x10(%esp)
084b2076 +0x09c:  mov    %ebx,0xc(%esp)
084b207a +0x0a0:  mov    -0xc(%ebp),%edx
084b207d +0x0a3:  mov    %edx,0x8(%esp)
084b2081 +0x0a7:  lea    -0x1c(%ebp),%edx
084b2084 +0x0aa:  mov    %edx,0x4(%esp)
084b2088 +0x0ae:  mov    %eax,(%esp)
084b208b +0x0b1:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
084b2090 +0x0b6:  lea    -0x1c(%ebp),%eax
084b2093 +0x0b9:  mov    %eax,0x4(%esp)
084b2097 +0x0bd:  mov    -0xc(%ebp),%eax
084b209a +0x0c0:  mov    %eax,(%esp)
084b209d +0x0c3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b20a2 +0x0c8:  mov    0x8(%ebp),%eax
084b20a5 +0x0cb:  movzbl 0x8(%eax),%eax
084b20a9 +0x0cf:  movzbl %al,%eax
084b20ac +0x0d2:  mov    %eax,0x4(%esp)
084b20b0 +0x0d6:  mov    -0xc(%ebp),%eax
084b20b3 +0x0d9:  mov    %eax,(%esp)
084b20b6 +0x0dc:  call   0868f6fa <_ZN5CUser16setForceDropFlagEb>  ; CUser::setForceDropFlag(bool)
084b20bb +0x0e1:  jmp    084b20d2 <+0xf8>
084b20bd +0x0e3:  mov    %edx,%ebx
084b20bf +0x0e5:  mov    %eax,%esi
084b20c1 +0x0e7:  lea    -0x1c(%ebp),%eax
084b20c4 +0x0ea:  mov    %eax,(%esp)
084b20c7 +0x0ed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b20cc +0x0f2:  mov    %esi,%eax
084b20ce +0x0f4:  mov    %ebx,%edx
084b20d0 +0x0f6:  jmp    084b20df <+0x105>
084b20d2 +0x0f8:  lea    -0x1c(%ebp),%eax
084b20d5 +0x0fb:  mov    %eax,(%esp)
084b20d8 +0x0fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b20dd +0x103:  jmp    084b20fa <+0x120>
084b20df +0x105:  mov    %edx,%ebx
084b20e1 +0x107:  mov    %eax,%esi
084b20e3 +0x109:  lea    -0x10(%ebp),%eax
084b20e6 +0x10c:  mov    %eax,(%esp)
084b20e9 +0x10f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b20ee +0x114:  mov    %esi,%eax
084b20f0 +0x116:  mov    %ebx,%edx
084b20f2 +0x118:  mov    %eax,(%esp)
084b20f5 +0x11b:  call   08ae3750 <_Unwind_Resume>
084b20fa +0x120:  lea    -0x10(%ebp),%eax
084b20fd +0x123:  mov    %eax,(%esp)
084b2100 +0x126:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2105 +0x12b:  jmp    084b2108 <+0x12e>
084b2107 +0x12d:  nop
084b2108 +0x12e:  add    $0x40,%esp
084b210b +0x131:  pop    %ebx
084b210c +0x132:  pop    %esi
084b210d +0x133:  pop    %ebp
084b210e +0x134:  ret
084b210f +0x135:  nop
```

## 反编译 C

```c
// game_master::CIndependentDropByForce::execute @ 0x84b1fda

/* game_master::CIndependentDropByForce::execute() */

void __thiscall game_master::CIndependentDropByForce::execute(CIndependentDropByForce *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  GameWorld *pGVar3;
  PacketGuard local_20 [12];
  string local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    std::string::string(local_14);
    if (this[8] == (CIndependentDropByForce)0x0) {
      std::string::operator=(local_14,"independent drop item 100% off");
    }
    else {
                    /* try { // try from 084b201e to 084b2042 has its CatchHandler @ 084b20df */
      std::string::operator=(local_14,"independent drop item 100% on");
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084b2049 to 084b20ba has its CatchHandler @ 084b20bd */
    uVar1 = std::string::length(local_14);
    uVar2 = std::string::c_str(local_14);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::make_packet_chat_msg(pGVar3,local_20,local_10,uVar2,uVar1,2,0xc);
    CUser::Send(local_10,local_20);
    CUser::setForceDropFlag(local_10,(bool)this[8]);
                    /* try { // try from 084b20d8 to 084b20dc has its CatchHandler @ 084b20df */
    PacketGuard::~PacketGuard(local_20);
    std::string::~string(local_14);
  }
  return;
}
```
