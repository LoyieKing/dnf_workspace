# OnCompleteLoad

`_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser`

`fair_pvp::CFairMatch::OnCompleteLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564962  _ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser
#           fair_pvp::CFairMatch::OnCompleteLoad(CUser*)
# range [0x08564962, 0x08564a8d]
08564962 +0x000:  push   %ebp
08564963 +0x001:  mov    %esp,%ebp
08564965 +0x003:  push   %esi
08564966 +0x004:  push   %ebx
08564967 +0x005:  sub    $0x30,%esp
0856496a +0x008:  lea    -0x20(%ebp),%eax
0856496d +0x00b:  mov    %eax,(%esp)
08564970 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08564975 +0x013:  movl   $0x116,0x8(%esp)
0856497d +0x01b:  movl   $0x0,0x4(%esp)
08564985 +0x023:  lea    -0x20(%ebp),%eax
08564988 +0x026:  mov    %eax,(%esp)
0856498b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08564990 +0x02e:  mov    0xc(%ebp),%eax
08564993 +0x031:  mov    %eax,(%esp)
08564996 +0x034:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0856499b +0x039:  movzwl %ax,%eax
0856499e +0x03c:  mov    %eax,0x4(%esp)
085649a2 +0x040:  lea    -0x20(%ebp),%eax
085649a5 +0x043:  mov    %eax,(%esp)
085649a8 +0x046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085649ad +0x04b:  movl   $0x1,0x4(%esp)
085649b5 +0x053:  lea    -0x20(%ebp),%eax
085649b8 +0x056:  mov    %eax,(%esp)
085649bb +0x059:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085649c0 +0x05e:  movl   $0x0,-0x14(%ebp)
085649c7 +0x065:  jmp    08564a4f <+0xed>
085649cc +0x06a:  movl   $0x0,-0x10(%ebp)
085649d3 +0x071:  jmp    08564a40 <+0xde>
085649d5 +0x073:  mov    -0x14(%ebp),%edx
085649d8 +0x076:  mov    -0x10(%ebp),%eax
085649db +0x079:  mov    0x8(%ebp),%ecx
085649de +0x07c:  mov    %eax,%ebx
085649e0 +0x07e:  shl    $0x4,%ebx
085649e3 +0x081:  mov    %edx,%eax
085649e5 +0x083:  shl    $0x3,%eax
085649e8 +0x086:  add    %edx,%eax
085649ea +0x088:  shl    $0x3,%eax
085649ed +0x08b:  lea    (%ebx,%eax,1),%eax
085649f0 +0x08e:  lea    (%ecx,%eax,1),%eax
085649f3 +0x091:  add    $0x24,%eax
085649f6 +0x094:  mov    (%eax),%eax
085649f8 +0x096:  mov    %eax,-0xc(%ebp)
085649fb +0x099:  mov    -0x14(%ebp),%edx
085649fe +0x09c:  mov    -0x10(%ebp),%eax
08564a01 +0x09f:  mov    0x8(%ebp),%ecx
08564a04 +0x0a2:  mov    %eax,%ebx
08564a06 +0x0a4:  shl    $0x4,%ebx
08564a09 +0x0a7:  mov    %edx,%eax
08564a0b +0x0a9:  shl    $0x3,%eax
08564a0e +0x0ac:  add    %edx,%eax
08564a10 +0x0ae:  shl    $0x3,%eax
08564a13 +0x0b1:  lea    (%ebx,%eax,1),%eax
08564a16 +0x0b4:  lea    (%ecx,%eax,1),%eax
08564a19 +0x0b7:  add    $0x10,%eax
08564a1c +0x0ba:  movzbl 0x18(%eax),%eax
08564a20 +0x0be:  test   %al,%al
08564a22 +0x0c0:  je     08564a3c <+0xda>
08564a24 +0x0c2:  cmpl   $0x0,-0xc(%ebp)
08564a28 +0x0c6:  je     08564a3c <+0xda>
08564a2a +0x0c8:  lea    -0x20(%ebp),%eax
08564a2d +0x0cb:  mov    %eax,0x4(%esp)
08564a31 +0x0cf:  mov    -0xc(%ebp),%eax
08564a34 +0x0d2:  mov    %eax,(%esp)
08564a37 +0x0d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08564a3c +0x0da:  addl   $0x1,-0x10(%ebp)
08564a40 +0x0de:  cmpl   $0x3,-0x10(%ebp)
08564a44 +0x0e2:  setle  %al
08564a47 +0x0e5:  test   %al,%al
08564a49 +0x0e7:  jne    085649d5 <+0x73>
08564a4b +0x0e9:  addl   $0x1,-0x14(%ebp)
08564a4f +0x0ed:  cmpl   $0x1,-0x14(%ebp)
08564a53 +0x0f1:  setle  %al
08564a56 +0x0f4:  test   %al,%al
08564a58 +0x0f6:  jne    085649cc <+0x6a>
08564a5e +0x0fc:  jmp    08564a7b <+0x119>
08564a60 +0x0fe:  mov    %edx,%ebx
08564a62 +0x100:  mov    %eax,%esi
08564a64 +0x102:  lea    -0x20(%ebp),%eax
08564a67 +0x105:  mov    %eax,(%esp)
08564a6a +0x108:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08564a6f +0x10d:  mov    %esi,%eax
08564a71 +0x10f:  mov    %ebx,%edx
08564a73 +0x111:  mov    %eax,(%esp)
08564a76 +0x114:  call   08ae3750 <_Unwind_Resume>
08564a7b +0x119:  lea    -0x20(%ebp),%eax
08564a7e +0x11c:  mov    %eax,(%esp)
08564a81 +0x11f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08564a86 +0x124:  add    $0x30,%esp
08564a89 +0x127:  pop    %ebx
08564a8a +0x128:  pop    %esi
08564a8b +0x129:  pop    %ebp
08564a8c +0x12a:  ret
08564a8d +0x12b:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnCompleteLoad @ 0x8564962

/* fair_pvp::CFairMatch::OnCompleteLoad(CUser*) */

void __thiscall fair_pvp::CFairMatch::OnCompleteLoad(CFairMatch *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0856498b to 08564a3b has its CatchHandler @ 08564a60 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x116);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x10 + local_18 * 0x48 + 0x24);
      if ((this[local_14 * 0x10 + local_18 * 0x48 + 0x28] != (CFairMatch)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
