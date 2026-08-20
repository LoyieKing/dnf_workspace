# checkCodeChecksumRange

`_ZN5CUser22checkCodeChecksumRangeERK18CodeHackChecksumExRK20CodeHackCheckRangeEx`

`CUser::checkCodeChecksumRange(CodeHackChecksumEx const&, CodeHackCheckRangeEx const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ea5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ea5c  _ZN5CUser22checkCodeChecksumRangeERK18CodeHackChecksumExRK20CodeHackCheckRangeEx
#           CUser::checkCodeChecksumRange(CodeHackChecksumEx const&, CodeHackCheckRangeEx const&)
# range [0x0867ea5c, 0x0867ebb9]
0867ea5c +0x000:  push   %ebp
0867ea5d +0x001:  mov    %esp,%ebp
0867ea5f +0x003:  push   %esi
0867ea60 +0x004:  push   %ebx
0867ea61 +0x005:  sub    $0x30,%esp
0867ea64 +0x008:  mov    0x8(%ebp),%eax
0867ea67 +0x00b:  mov    %eax,(%esp)
0867ea6a +0x00e:  call   0869730a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3b5f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3b5f
0867ea6f +0x013:  mov    %eax,-0x10(%ebp)
0867ea72 +0x016:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0867ea79 +0x01d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0867ea7e +0x022:  mov    %eax,-0xc(%ebp)
0867ea81 +0x025:  mov    -0x10(%ebp),%eax
0867ea84 +0x028:  cmp    -0xc(%ebp),%eax
0867ea87 +0x02b:  jge    0867ebae <+0x152>
0867ea8d +0x031:  mov    0x8(%ebp),%eax
0867ea90 +0x034:  lea    0x795fc(%eax),%edx
0867ea96 +0x03a:  mov    0xc(%ebp),%eax
0867ea99 +0x03d:  mov    %eax,0x4(%esp)
0867ea9d +0x041:  mov    %edx,(%esp)
0867eaa0 +0x044:  call   08575cd0 <_ZN20CodeHackCheckStorage8PushDataEPK18CodeHackChecksumEx>  ; CodeHackCheckStorage::PushData(CodeHackChecksumEx const*)
0867eaa5 +0x049:  xor    $0x1,%eax
0867eaa8 +0x04c:  test   %al,%al
0867eaaa +0x04e:  je     0867eab6 <+0x5a>
0867eaac +0x050:  mov    $0x0,%eax
0867eab1 +0x055:  jmp    0867ebb3 <+0x157>
0867eab6 +0x05a:  lea    -0x1c(%ebp),%eax
0867eab9 +0x05d:  mov    %eax,(%esp)
0867eabc +0x060:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867eac1 +0x065:  movl   $0x6f,0x8(%esp)
0867eac9 +0x06d:  movl   $0x0,0x4(%esp)
0867ead1 +0x075:  lea    -0x1c(%ebp),%eax
0867ead4 +0x078:  mov    %eax,(%esp)
0867ead7 +0x07b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867eadc +0x080:  mov    0x10(%ebp),%eax
0867eadf +0x083:  mov    %eax,(%esp)
0867eae2 +0x086:  call   0808a9c4 <_ZNK20CodeHackCheckRangeEx11GetFileNameEv>  ; CodeHackCheckRangeEx::GetFileName() const
0867eae7 +0x08b:  mov    %eax,(%esp)
0867eaea +0x08e:  call   0807e3b0 <_init+0xca8>
0867eaef +0x093:  mov    %eax,0x4(%esp)
0867eaf3 +0x097:  lea    -0x1c(%ebp),%eax
0867eaf6 +0x09a:  mov    %eax,(%esp)
0867eaf9 +0x09d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867eafe +0x0a2:  mov    0x10(%ebp),%eax
0867eb01 +0x0a5:  mov    %eax,(%esp)
0867eb04 +0x0a8:  call   0808a9c4 <_ZNK20CodeHackCheckRangeEx11GetFileNameEv>  ; CodeHackCheckRangeEx::GetFileName() const
0867eb09 +0x0ad:  mov    %eax,(%esp)
0867eb0c +0x0b0:  call   0807e3b0 <_init+0xca8>
0867eb11 +0x0b5:  mov    %eax,%ebx
0867eb13 +0x0b7:  mov    0x10(%ebp),%eax
0867eb16 +0x0ba:  mov    %eax,(%esp)
0867eb19 +0x0bd:  call   0808a9c4 <_ZNK20CodeHackCheckRangeEx11GetFileNameEv>  ; CodeHackCheckRangeEx::GetFileName() const
0867eb1e +0x0c2:  mov    %ebx,0x8(%esp)
0867eb22 +0x0c6:  mov    %eax,0x4(%esp)
0867eb26 +0x0ca:  lea    -0x1c(%ebp),%eax
0867eb29 +0x0cd:  mov    %eax,(%esp)
0867eb2c +0x0d0:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0867eb31 +0x0d5:  mov    0x10(%ebp),%eax
0867eb34 +0x0d8:  mov    0x104(%eax),%eax
0867eb3a +0x0de:  mov    %eax,0x4(%esp)
0867eb3e +0x0e2:  lea    -0x1c(%ebp),%eax
0867eb41 +0x0e5:  mov    %eax,(%esp)
0867eb44 +0x0e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867eb49 +0x0ed:  mov    0x10(%ebp),%eax
0867eb4c +0x0f0:  mov    0x108(%eax),%eax
0867eb52 +0x0f6:  mov    %eax,0x4(%esp)
0867eb56 +0x0fa:  lea    -0x1c(%ebp),%eax
0867eb59 +0x0fd:  mov    %eax,(%esp)
0867eb5c +0x100:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867eb61 +0x105:  movl   $0x1,0x4(%esp)
0867eb69 +0x10d:  lea    -0x1c(%ebp),%eax
0867eb6c +0x110:  mov    %eax,(%esp)
0867eb6f +0x113:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867eb74 +0x118:  lea    -0x1c(%ebp),%eax
0867eb77 +0x11b:  mov    %eax,0x4(%esp)
0867eb7b +0x11f:  mov    0x8(%ebp),%eax
0867eb7e +0x122:  mov    %eax,(%esp)
0867eb81 +0x125:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867eb86 +0x12a:  jmp    0867eba3 <+0x147>
0867eb88 +0x12c:  mov    %edx,%ebx
0867eb8a +0x12e:  mov    %eax,%esi
0867eb8c +0x130:  lea    -0x1c(%ebp),%eax
0867eb8f +0x133:  mov    %eax,(%esp)
0867eb92 +0x136:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867eb97 +0x13b:  mov    %esi,%eax
0867eb99 +0x13d:  mov    %ebx,%edx
0867eb9b +0x13f:  mov    %eax,(%esp)
0867eb9e +0x142:  call   08ae3750 <_Unwind_Resume>
0867eba3 +0x147:  lea    -0x1c(%ebp),%eax
0867eba6 +0x14a:  mov    %eax,(%esp)
0867eba9 +0x14d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867ebae +0x152:  mov    $0x1,%eax
0867ebb3 +0x157:  add    $0x30,%esp
0867ebb6 +0x15a:  pop    %ebx
0867ebb7 +0x15b:  pop    %esi
0867ebb8 +0x15c:  pop    %ebp
0867ebb9 +0x15d:  ret
```

## 反编译 C

```c
// CUser::checkCodeChecksumRange @ 0x867ea5c

/* CUser::checkCodeChecksumRange(CodeHackChecksumEx const&, CodeHackCheckRangeEx const&) */

undefined4 __thiscall
CUser::checkCodeChecksumRange(CUser *this,CodeHackChecksumEx *param_1,CodeHackCheckRangeEx *param_2)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = GetResumeChecksumTime(this);
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (local_14 < local_10) {
    cVar1 = CodeHackCheckStorage::PushData((CodeHackCheckStorage *)(this + 0x795fc),param_1);
    if (cVar1 != '\x01') {
      return 0;
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0867ead7 to 0867eb85 has its CatchHandler @ 0867eb88 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x6f);
    pcVar2 = (char *)CodeHackCheckRangeEx::GetFileName(param_2);
    sVar3 = strlen(pcVar2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,sVar3);
    pcVar2 = (char *)CodeHackCheckRangeEx::GetFileName(param_2);
    sVar3 = strlen(pcVar2);
    pcVar2 = (char *)CodeHackCheckRangeEx::GetFileName(param_2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,pcVar2,sVar3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(param_2 + 0x104));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(param_2 + 0x108));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    Send(this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 1;
}
```
