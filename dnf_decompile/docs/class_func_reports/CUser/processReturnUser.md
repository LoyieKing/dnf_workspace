# processReturnUser

`_ZN5CUser17processReturnUserEv`

`CUser::processReturnUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691ec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691ec4  _ZN5CUser17processReturnUserEv
#           CUser::processReturnUser()
# range [0x08691ec4, 0x08691fff]
08691ec4 +0x000:  push   %ebp
08691ec5 +0x001:  mov    %esp,%ebp
08691ec7 +0x003:  push   %esi
08691ec8 +0x004:  push   %ebx
08691ec9 +0x005:  sub    $0x20,%esp
08691ecc +0x008:  mov    0x8(%ebp),%eax
08691ecf +0x00b:  mov    %eax,(%esp)
08691ed2 +0x00e:  call   085bfd66 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12c4>  ; global constructors keyed to CParty::cMember::cMember()+0x12c4
08691ed7 +0x013:  test   %al,%al
08691ed9 +0x015:  je     08691ff9 <+0x135>
08691edf +0x01b:  lea    -0x14(%ebp),%eax
08691ee2 +0x01e:  mov    %eax,(%esp)
08691ee5 +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08691eea +0x026:  lea    -0x14(%ebp),%eax
08691eed +0x029:  mov    %eax,(%esp)
08691ef0 +0x02c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08691ef5 +0x031:  movl   $0x12d,0x8(%esp)
08691efd +0x039:  movl   $0x0,0x4(%esp)
08691f05 +0x041:  lea    -0x14(%ebp),%eax
08691f08 +0x044:  mov    %eax,(%esp)
08691f0b +0x047:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08691f10 +0x04c:  mov    0x8(%ebp),%eax
08691f13 +0x04f:  mov    %eax,(%esp)
08691f16 +0x052:  call   084ec7b4 <_GLOBAL__I__Z7getUserj+0x3766>  ; global constructors keyed to getUser(unsigned int)+0x3766
08691f1b +0x057:  mov    %eax,%ebx
08691f1d +0x059:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08691f24 +0x060:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08691f29 +0x065:  mov    %ebx,%edx
08691f2b +0x067:  sub    %eax,%edx
08691f2d +0x069:  mov    %edx,%eax
08691f2f +0x06b:  mov    %eax,0x4(%esp)
08691f33 +0x06f:  lea    -0x14(%ebp),%eax
08691f36 +0x072:  mov    %eax,(%esp)
08691f39 +0x075:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08691f3e +0x07a:  movl   $0x1,0x4(%esp)
08691f46 +0x082:  lea    -0x14(%ebp),%eax
08691f49 +0x085:  mov    %eax,(%esp)
08691f4c +0x088:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08691f51 +0x08d:  lea    -0x14(%ebp),%eax
08691f54 +0x090:  mov    %eax,0x4(%esp)
08691f58 +0x094:  mov    0x8(%ebp),%eax
08691f5b +0x097:  mov    %eax,(%esp)
08691f5e +0x09a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08691f63 +0x09f:  mov    0x8(%ebp),%eax
08691f66 +0x0a2:  mov    %eax,(%esp)
08691f69 +0x0a5:  call   082a6786 <_GLOBAL__I__ZN4CLog5this_E+0x2bad>  ; global constructors keyed to CLog::this_+0x2bad
08691f6e +0x0aa:  test   %al,%al
08691f70 +0x0ac:  je     08691fee <+0x12a>
08691f72 +0x0ae:  mov    0x8(%ebp),%eax
08691f75 +0x0b1:  mov    %eax,(%esp)
08691f78 +0x0b4:  call   08692000 <_ZN5CUser19GiveItemsReturnUserEv>  ; CUser::GiveItemsReturnUser()
08691f7d +0x0b9:  mov    0x8(%ebp),%eax
08691f80 +0x0bc:  mov    %eax,(%esp)
08691f83 +0x0bf:  call   08692140 <_ZN5CUser24GiveEquipItemsReturnUserEv>  ; CUser::GiveEquipItemsReturnUser()
08691f88 +0x0c4:  mov    0x8(%ebp),%eax
08691f8b +0x0c7:  mov    %eax,(%esp)
08691f8e +0x0ca:  call   082a6786 <_GLOBAL__I__ZN4CLog5this_E+0x2bad>  ; global constructors keyed to CLog::this_+0x2bad
08691f93 +0x0cf:  movzbl %al,%esi
08691f96 +0x0d2:  mov    0x8(%ebp),%eax
08691f99 +0x0d5:  mov    %eax,(%esp)
08691f9c +0x0d8:  call   084ec7b4 <_GLOBAL__I__Z7getUserj+0x3766>  ; global constructors keyed to getUser(unsigned int)+0x3766
08691fa1 +0x0dd:  mov    %eax,%ebx
08691fa3 +0x0df:  mov    0x8(%ebp),%eax
08691fa6 +0x0e2:  mov    %eax,(%esp)
08691fa9 +0x0e5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08691fae +0x0ea:  mov    %esi,0x8(%esp)
08691fb2 +0x0ee:  mov    %ebx,0x4(%esp)
08691fb6 +0x0f2:  mov    %eax,(%esp)
08691fb9 +0x0f5:  call   0843e146 <_ZN29DB_UpdateReturnUserFirstLogin11makeRequestEjii>  ; DB_UpdateReturnUserFirstLogin::makeRequest(unsigned int, int, int)
08691fbe +0x0fa:  movl   $0x0,0x4(%esp)
08691fc6 +0x102:  mov    0x8(%ebp),%eax
08691fc9 +0x105:  mov    %eax,(%esp)
08691fcc +0x108:  call   084ec798 <_GLOBAL__I__Z7getUserj+0x374a>  ; global constructors keyed to getUser(unsigned int)+0x374a
08691fd1 +0x10d:  jmp    08691fee <+0x12a>
08691fd3 +0x10f:  mov    %edx,%ebx
08691fd5 +0x111:  mov    %eax,%esi
08691fd7 +0x113:  lea    -0x14(%ebp),%eax
08691fda +0x116:  mov    %eax,(%esp)
08691fdd +0x119:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691fe2 +0x11e:  mov    %esi,%eax
08691fe4 +0x120:  mov    %ebx,%edx
08691fe6 +0x122:  mov    %eax,(%esp)
08691fe9 +0x125:  call   08ae3750 <_Unwind_Resume>
08691fee +0x12a:  lea    -0x14(%ebp),%eax
08691ff1 +0x12d:  mov    %eax,(%esp)
08691ff4 +0x130:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691ff9 +0x135:  add    $0x20,%esp
08691ffc +0x138:  pop    %ebx
08691ffd +0x139:  pop    %esi
08691ffe +0x13a:  pop    %ebp
08691fff +0x13b:  ret
```

## 反编译 C

```c
// CUser::processReturnUser @ 0x8691ec4

/* CUser::processReturnUser() */

void __thiscall CUser::processReturnUser(CUser *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  PacketGuard local_18 [12];
  
  cVar1 = IsReturnUser(this);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08691ef0 to 08691fbd has its CatchHandler @ 08691fd3 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x12d);
    iVar2 = GetReturnUserExpireTime(this);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar2 - iVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    cVar1 = IsReturnUserFirstLogin(this);
    if (cVar1 != '\0') {
      GiveItemsReturnUser(this);
      GiveEquipItemsReturnUser(this);
      uVar4 = IsReturnUserFirstLogin(this);
      iVar2 = GetReturnUserExpireTime(this);
      uVar5 = get_acc_id(this);
      DB_UpdateReturnUserFirstLogin::makeRequest(uVar5,iVar2,uVar4 & 0xff);
      SetReturnUserFirstUserLogin(this,false);
    }
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
