# die_user

`_ZN6CParty8die_userEP5CUser`

`CParty::die_user(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7828` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7828  _ZN6CParty8die_userEP5CUser
#           CParty::die_user(CUser*)
# range [0x085a7828, 0x085a7a71]
085a7828 +0x000:  push   %ebp
085a7829 +0x001:  mov    %esp,%ebp
085a782b +0x003:  push   %esi
085a782c +0x004:  push   %ebx
085a782d +0x005:  sub    $0x30,%esp
085a7830 +0x008:  movl   $0xffffffff,-0x10(%ebp)
085a7837 +0x00f:  movl   $0x0,-0xc(%ebp)
085a783e +0x016:  jmp    085a78b5 <+0x8d>
085a7840 +0x018:  mov    -0xc(%ebp),%eax
085a7843 +0x01b:  mov    %eax,0x4(%esp)
085a7847 +0x01f:  mov    0x8(%ebp),%eax
085a784a +0x022:  mov    %eax,(%esp)
085a784d +0x025:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a7852 +0x02a:  test   %al,%al
085a7854 +0x02c:  je     085a78b1 <+0x89>
085a7856 +0x02e:  mov    -0xc(%ebp),%edx
085a7859 +0x031:  mov    0x8(%ebp),%ecx
085a785c +0x034:  mov    %edx,%eax
085a785e +0x036:  add    %eax,%eax
085a7860 +0x038:  add    %edx,%eax
085a7862 +0x03a:  shl    $0x3,%eax
085a7865 +0x03d:  lea    (%ecx,%eax,1),%eax
085a7868 +0x040:  add    $0x78,%eax
085a786b +0x043:  mov    (%eax),%eax
085a786d +0x045:  cmp    0xc(%ebp),%eax
085a7870 +0x048:  jne    085a78b1 <+0x89>
085a7872 +0x04a:  mov    -0xc(%ebp),%edx
085a7875 +0x04d:  mov    0x8(%ebp),%ecx
085a7878 +0x050:  mov    %edx,%eax
085a787a +0x052:  add    %eax,%eax
085a787c +0x054:  add    %edx,%eax
085a787e +0x056:  shl    $0x3,%eax
085a7881 +0x059:  lea    (%ecx,%eax,1),%eax
085a7884 +0x05c:  add    $0x78,%eax
085a7887 +0x05f:  mov    (%eax),%eax
085a7889 +0x061:  mov    0x8e038(%eax),%edx
085a788f +0x067:  add    $0x1,%edx
085a7892 +0x06a:  mov    %edx,0x8e038(%eax)
085a7898 +0x070:  mov    -0xc(%ebp),%eax
085a789b +0x073:  mov    %eax,-0x10(%ebp)
085a789e +0x076:  mov    0xc(%ebp),%eax
085a78a1 +0x079:  mov    0x796f8(%eax),%eax
085a78a7 +0x07f:  mov    %eax,(%esp)
085a78aa +0x082:  call   084b9ff8 <_ZN10HistoryLog8WriteDieEP8_IO_FILE>  ; HistoryLog::WriteDie(_IO_FILE*)
085a78af +0x087:  jmp    085a78c0 <+0x98>
085a78b1 +0x089:  addl   $0x1,-0xc(%ebp)
085a78b5 +0x08d:  cmpl   $0x3,-0xc(%ebp)
085a78b9 +0x091:  setle  %al
085a78bc +0x094:  test   %al,%al
085a78be +0x096:  jne    085a7840 <+0x18>
085a78c0 +0x098:  lea    -0x1c(%ebp),%eax
085a78c3 +0x09b:  mov    %eax,(%esp)
085a78c6 +0x09e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a78cb +0x0a3:  movl   $0x2b,0x8(%esp)
085a78d3 +0x0ab:  movl   $0x1,0x4(%esp)
085a78db +0x0b3:  lea    -0x1c(%ebp),%eax
085a78de +0x0b6:  mov    %eax,(%esp)
085a78e1 +0x0b9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a78e6 +0x0be:  movl   $0x0,0x4(%esp)
085a78ee +0x0c6:  lea    -0x1c(%ebp),%eax
085a78f1 +0x0c9:  mov    %eax,(%esp)
085a78f4 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a78f9 +0x0d1:  cmpl   $0xffffffff,-0x10(%ebp)
085a78fd +0x0d5:  jne    085a793c <+0x114>
085a78ff +0x0d7:  movl   $0x1,0x4(%esp)
085a7907 +0x0df:  lea    -0x1c(%ebp),%eax
085a790a +0x0e2:  mov    %eax,(%esp)
085a790d +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7912 +0x0ea:  movl   $0x1,0x4(%esp)
085a791a +0x0f2:  lea    -0x1c(%ebp),%eax
085a791d +0x0f5:  mov    %eax,(%esp)
085a7920 +0x0f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a7925 +0x0fd:  lea    -0x1c(%ebp),%eax
085a7928 +0x100:  mov    %eax,0x4(%esp)
085a792c +0x104:  mov    0xc(%ebp),%eax
085a792f +0x107:  mov    %eax,(%esp)
085a7932 +0x10a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a7937 +0x10f:  jmp    085a7a60 <+0x238>
085a793c +0x114:  mov    -0x10(%ebp),%eax
085a793f +0x117:  mov    0x8(%ebp),%edx
085a7942 +0x11a:  movzbl 0x380(%edx,%eax,1),%eax
085a794a +0x122:  xor    $0x1,%eax
085a794d +0x125:  test   %al,%al
085a794f +0x127:  je     085a798e <+0x166>
085a7951 +0x129:  movl   $0x12,0x4(%esp)
085a7959 +0x131:  lea    -0x1c(%ebp),%eax
085a795c +0x134:  mov    %eax,(%esp)
085a795f +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7964 +0x13c:  movl   $0x1,0x4(%esp)
085a796c +0x144:  lea    -0x1c(%ebp),%eax
085a796f +0x147:  mov    %eax,(%esp)
085a7972 +0x14a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a7977 +0x14f:  lea    -0x1c(%ebp),%eax
085a797a +0x152:  mov    %eax,0x4(%esp)
085a797e +0x156:  mov    0xc(%ebp),%eax
085a7981 +0x159:  mov    %eax,(%esp)
085a7984 +0x15c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a7989 +0x161:  jmp    085a7a60 <+0x238>
085a798e +0x166:  movl   $0x0,0x8(%esp)
085a7996 +0x16e:  mov    0xc(%ebp),%eax
085a7999 +0x171:  mov    %eax,0x4(%esp)
085a799d +0x175:  mov    0x8(%ebp),%eax
085a79a0 +0x178:  mov    %eax,(%esp)
085a79a3 +0x17b:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
085a79a8 +0x180:  mov    0xc(%ebp),%eax
085a79ab +0x183:  mov    %eax,(%esp)
085a79ae +0x186:  call   0814aa8c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x82b>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x82b
085a79b3 +0x18b:  mov    %eax,%ebx
085a79b5 +0x18d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a79bc +0x194:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085a79c1 +0x199:  cmp    %eax,%ebx
085a79c3 +0x19b:  setg   %al
085a79c6 +0x19e:  test   %al,%al
085a79c8 +0x1a0:  je     085a79f7 <+0x1cf>
085a79ca +0x1a2:  movl   $0x2,0x8(%esp)
085a79d2 +0x1aa:  mov    0xc(%ebp),%eax
085a79d5 +0x1ad:  mov    %eax,0x4(%esp)
085a79d9 +0x1b1:  mov    0x8(%ebp),%eax
085a79dc +0x1b4:  mov    %eax,(%esp)
085a79df +0x1b7:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
085a79e4 +0x1bc:  movl   $0x0,0x4(%esp)
085a79ec +0x1c4:  mov    0xc(%ebp),%eax
085a79ef +0x1c7:  mov    %eax,(%esp)
085a79f2 +0x1ca:  call   0814aa7a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x819>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x819
085a79f7 +0x1cf:  movl   $0x0,0x4(%esp)
085a79ff +0x1d7:  mov    0xc(%ebp),%eax
085a7a02 +0x1da:  mov    %eax,(%esp)
085a7a05 +0x1dd:  call   0814aa9a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x839>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x839
085a7a0a +0x1e2:  mov    0x8(%ebp),%eax
085a7a0d +0x1e5:  mov    %eax,(%esp)
085a7a10 +0x1e8:  call   085b2b52 <_ZN6CParty19check_allmember_dieEv>  ; CParty::check_allmember_die()
085a7a15 +0x1ed:  test   %al,%al
085a7a17 +0x1ef:  je     085a7a60 <+0x238>
085a7a19 +0x1f1:  mov    0x8(%ebp),%eax
085a7a1c +0x1f4:  movzbl 0x11a(%eax),%eax
085a7a23 +0x1fb:  xor    $0x1,%eax
085a7a26 +0x1fe:  test   %al,%al
085a7a28 +0x200:  je     085a7a60 <+0x238>
085a7a2a +0x202:  mov    0x8(%ebp),%eax
085a7a2d +0x205:  mov    0xcd8(%eax),%eax
085a7a33 +0x20b:  cmp    $0x1,%eax
085a7a36 +0x20e:  je     085a7a60 <+0x238>
085a7a38 +0x210:  mov    0x8(%ebp),%eax
085a7a3b +0x213:  mov    %eax,(%esp)
085a7a3e +0x216:  call   085b35f4 <_ZN6CParty21send_dungeon_fail_msgEv>  ; CParty::send_dungeon_fail_msg()
085a7a43 +0x21b:  jmp    085a7a60 <+0x238>
085a7a45 +0x21d:  mov    %edx,%ebx
085a7a47 +0x21f:  mov    %eax,%esi
085a7a49 +0x221:  lea    -0x1c(%ebp),%eax
085a7a4c +0x224:  mov    %eax,(%esp)
085a7a4f +0x227:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a7a54 +0x22c:  mov    %esi,%eax
085a7a56 +0x22e:  mov    %ebx,%edx
085a7a58 +0x230:  mov    %eax,(%esp)
085a7a5b +0x233:  call   08ae3750 <_Unwind_Resume>
085a7a60 +0x238:  lea    -0x1c(%ebp),%eax
085a7a63 +0x23b:  mov    %eax,(%esp)
085a7a66 +0x23e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a7a6b +0x243:  add    $0x30,%esp
085a7a6e +0x246:  pop    %ebx
085a7a6f +0x247:  pop    %esi
085a7a70 +0x248:  pop    %ebp
085a7a71 +0x249:  ret
```

## 反编译 C

```c
// CParty::die_user @ 0x85a7828

/* CParty::die_user(CUser*) */

void __thiscall CParty::die_user(CParty *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = -1;
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_085a78c0:
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 085a78e1 to 085a7a42 has its CatchHandler @ 085a7a45 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x2b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      if (local_14 == -1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
      }
      else if (this[local_14 + 0x380] == (CParty)0x1) {
        set_charac_live(this,param_1,0);
        iVar2 = CUser::GetRevivalTime(param_1);
        iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (iVar3 < iVar2) {
          set_charac_live(this,param_1,2);
          CUser::SetRevivalTime(param_1,0);
        }
        CUser::SetUseAPCPotionTime(param_1,0);
        cVar1 = check_allmember_die(this);
        if (((cVar1 != '\0') && (this[0x11a] != (CParty)0x1)) && (*(int *)(this + 0xcd8) != 1)) {
          send_dungeon_fail_msg(this);
        }
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0x12);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
      return;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) {
      *(int *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x8e038) =
           *(int *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x8e038) + 1;
      local_14 = local_10;
      HistoryLog::WriteDie(*(_IO_FILE **)(param_1 + 0x796f8));
      goto LAB_085a78c0;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
