# EndAssault

`_ZN11pvp_assault13CAssaultPlace10EndAssaultEv`

`pvp_assault::CAssaultPlace::EndAssault()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e99a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e99a2  _ZN11pvp_assault13CAssaultPlace10EndAssaultEv
#           pvp_assault::CAssaultPlace::EndAssault()
# range [0x082e99a2, 0x082e9ad5]
082e99a2 +0x000:  push   %ebp
082e99a3 +0x001:  mov    %esp,%ebp
082e99a5 +0x003:  push   %esi
082e99a6 +0x004:  push   %ebx
082e99a7 +0x005:  sub    $0x30,%esp
082e99aa +0x008:  movl   $0x0,-0x10(%ebp)
082e99b1 +0x00f:  jmp    082e9a54 <+0xb2>
082e99b6 +0x014:  mov    -0x10(%ebp),%eax
082e99b9 +0x017:  shl    $0x5,%eax
082e99bc +0x01a:  add    0x8(%ebp),%eax
082e99bf +0x01d:  mov    %eax,(%esp)
082e99c2 +0x020:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e99c7 +0x025:  test   %al,%al
082e99c9 +0x027:  jne    082e9a4f <+0xad>
082e99cf +0x02d:  mov    -0x10(%ebp),%eax
082e99d2 +0x030:  shl    $0x5,%eax
082e99d5 +0x033:  add    0x8(%ebp),%eax
082e99d8 +0x036:  movl   $0x7,0x4(%esp)
082e99e0 +0x03e:  mov    %eax,(%esp)
082e99e3 +0x041:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082e99e8 +0x046:  lea    -0x1c(%ebp),%eax
082e99eb +0x049:  mov    %eax,(%esp)
082e99ee +0x04c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e99f3 +0x051:  lea    -0x1c(%ebp),%eax
082e99f6 +0x054:  mov    %eax,0x4(%esp)
082e99fa +0x058:  mov    0x8(%ebp),%eax
082e99fd +0x05b:  mov    %eax,(%esp)
082e9a00 +0x05e:  call   082e88a0 <_ZN11pvp_assault13CAssaultPlace15_MakeEndAssaultEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeEndAssault(PacketGuard*)
082e9a05 +0x063:  mov    -0x10(%ebp),%eax
082e9a08 +0x066:  shl    $0x5,%eax
082e9a0b +0x069:  add    0x8(%ebp),%eax
082e9a0e +0x06c:  mov    %eax,(%esp)
082e9a11 +0x06f:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e9a16 +0x074:  lea    -0x1c(%ebp),%edx
082e9a19 +0x077:  mov    %edx,0x4(%esp)
082e9a1d +0x07b:  mov    %eax,(%esp)
082e9a20 +0x07e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082e9a25 +0x083:  jmp    082e9a42 <+0xa0>
082e9a27 +0x085:  mov    %edx,%ebx
082e9a29 +0x087:  mov    %eax,%esi
082e9a2b +0x089:  lea    -0x1c(%ebp),%eax
082e9a2e +0x08c:  mov    %eax,(%esp)
082e9a31 +0x08f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e9a36 +0x094:  mov    %esi,%eax
082e9a38 +0x096:  mov    %ebx,%edx
082e9a3a +0x098:  mov    %eax,(%esp)
082e9a3d +0x09b:  call   08ae3750 <_Unwind_Resume>
082e9a42 +0x0a0:  lea    -0x1c(%ebp),%eax
082e9a45 +0x0a3:  mov    %eax,(%esp)
082e9a48 +0x0a6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e9a4d +0x0ab:  jmp    082e9a50 <+0xae>
082e9a4f +0x0ad:  nop
082e9a50 +0x0ae:  addl   $0x1,-0x10(%ebp)
082e9a54 +0x0b2:  cmpl   $0x7,-0x10(%ebp)
082e9a58 +0x0b6:  setle  %al
082e9a5b +0x0b9:  test   %al,%al
082e9a5d +0x0bb:  jne    082e99b6 <+0x14>
082e9a63 +0x0c1:  movl   $0x0,-0x24(%ebp)
082e9a6a +0x0c8:  movl   $0x0,-0x20(%ebp)
082e9a71 +0x0cf:  movb   $0x0,-0x9(%ebp)
082e9a75 +0x0d3:  lea    -0x24(%ebp),%eax
082e9a78 +0x0d6:  mov    %eax,0x4(%esp)
082e9a7c +0x0da:  mov    0x8(%ebp),%eax
082e9a7f +0x0dd:  mov    %eax,(%esp)
082e9a82 +0x0e0:  call   082e71c4 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi>  ; pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(int*)
082e9a87 +0x0e5:  mov    -0x24(%ebp),%eax
082e9a8a +0x0e8:  test   %eax,%eax
082e9a8c +0x0ea:  jne    082e9a98 <+0xf6>
082e9a8e +0x0ec:  mov    0x8(%ebp),%eax
082e9a91 +0x0ef:  movb   $0x1,0x121(%eax)
082e9a98 +0x0f6:  mov    -0x20(%ebp),%eax
082e9a9b +0x0f9:  test   %eax,%eax
082e9a9d +0x0fb:  jne    082e9aa9 <+0x107>
082e9a9f +0x0fd:  mov    0x8(%ebp),%eax
082e9aa2 +0x100:  movb   $0x1,0x120(%eax)
082e9aa9 +0x107:  mov    0x8(%ebp),%eax
082e9aac +0x10a:  mov    0x108(%eax),%edx
082e9ab2 +0x110:  mov    0x8(%ebp),%eax
082e9ab5 +0x113:  mov    0x104(%eax),%eax
082e9abb +0x119:  mov    %edx,0x8(%esp)
082e9abf +0x11d:  mov    %eax,0x4(%esp)
082e9ac3 +0x121:  movl   $0x5,(%esp)
082e9aca +0x128:  call   086376aa <_ZN17TimerCloseAssault15registNextTimerElii>  ; TimerCloseAssault::registNextTimer(long, int, int)
082e9acf +0x12d:  add    $0x30,%esp
082e9ad2 +0x130:  pop    %ebx
082e9ad3 +0x131:  pop    %esi
082e9ad4 +0x132:  pop    %ebp
082e9ad5 +0x133:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::EndAssault @ 0x82e99a2

/* pvp_assault::CAssaultPlace::EndAssault() */

void __thiscall pvp_assault::CAssaultPlace::EndAssault(CAssaultPlace *this)

{
  char cVar1;
  CUser *this_00;
  int local_28;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  undefined1 local_d;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_14 * 0x20),7);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082e9a00 to 082e9a24 has its CatchHandler @ 082e9a27 */
      _MakeEndAssault(this,local_20);
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      CUser::Send(this_00,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_d = 0;
  _GetTeamCountAliveUser(this,&local_28);
  if (local_28 == 0) {
    this[0x121] = (CAssaultPlace)0x1;
  }
  if (local_24 == 0) {
    this[0x120] = (CAssaultPlace)0x1;
  }
  TimerCloseAssault::registNextTimer(5,*(int *)(this + 0x104),*(int *)(this + 0x108));
  return;
}
```
