# dispatch_sig

`_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci`

`Inter_GuildCargoHistory::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoHistory` | `0x084dd69e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd69e  _ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci
#           Inter_GuildCargoHistory::dispatch_sig(CUser*, char*, int)
# range [0x084dd69e, 0x084dd855]
084dd69e +0x000:  push   %ebp
084dd69f +0x001:  mov    %esp,%ebp
084dd6a1 +0x003:  push   %esi
084dd6a2 +0x004:  push   %ebx
084dd6a3 +0x005:  sub    $0x30,%esp
084dd6a6 +0x008:  mov    0x10(%ebp),%eax
084dd6a9 +0x00b:  mov    %eax,-0x14(%ebp)
084dd6ac +0x00e:  mov    0xc(%ebp),%eax
084dd6af +0x011:  mov    %eax,(%esp)
084dd6b2 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dd6b7 +0x019:  cmp    $0x2,%eax
084dd6ba +0x01c:  setle  %al
084dd6bd +0x01f:  test   %al,%al
084dd6bf +0x021:  je     084dd6cb <+0x2d>
084dd6c1 +0x023:  mov    $0x0,%ebx
084dd6c6 +0x028:  jmp    084dd84d <+0x1af>
084dd6cb +0x02d:  movl   $0xffffffff,0x4(%esp)
084dd6d3 +0x035:  mov    0xc(%ebp),%eax
084dd6d6 +0x038:  mov    %eax,(%esp)
084dd6d9 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dd6de +0x040:  mov    %eax,%edx
084dd6e0 +0x042:  mov    -0x14(%ebp),%eax
084dd6e3 +0x045:  mov    0xe(%eax),%eax
084dd6e6 +0x048:  cmp    %eax,%edx
084dd6e8 +0x04a:  setne  %al
084dd6eb +0x04d:  test   %al,%al
084dd6ed +0x04f:  je     084dd6f9 <+0x5b>
084dd6ef +0x051:  mov    $0x0,%ebx
084dd6f4 +0x056:  jmp    084dd84d <+0x1af>
084dd6f9 +0x05b:  movl   $0x0,-0x18(%ebp)
084dd700 +0x062:  movl   $0x0,-0x10(%ebp)
084dd707 +0x069:  lea    -0x24(%ebp),%eax
084dd70a +0x06c:  mov    %eax,(%esp)
084dd70d +0x06f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dd712 +0x074:  movl   $0x10a,0x8(%esp)
084dd71a +0x07c:  movl   $0x1,0x4(%esp)
084dd722 +0x084:  lea    -0x24(%ebp),%eax
084dd725 +0x087:  mov    %eax,(%esp)
084dd728 +0x08a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dd72d +0x08f:  movl   $0x1,0x4(%esp)
084dd735 +0x097:  lea    -0x24(%ebp),%eax
084dd738 +0x09a:  mov    %eax,(%esp)
084dd73b +0x09d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dd740 +0x0a2:  lea    -0x24(%ebp),%eax
084dd743 +0x0a5:  mov    %eax,(%esp)
084dd746 +0x0a8:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084dd74b +0x0ad:  mov    %eax,-0x18(%ebp)
084dd74e +0x0b0:  mov    -0x10(%ebp),%eax
084dd751 +0x0b3:  mov    %eax,0x4(%esp)
084dd755 +0x0b7:  lea    -0x24(%ebp),%eax
084dd758 +0x0ba:  mov    %eax,(%esp)
084dd75b +0x0bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dd760 +0x0c2:  movl   $0x0,-0xc(%ebp)
084dd767 +0x0c9:  jmp    084dd7b7 <+0x119>
084dd769 +0x0cb:  mov    -0xc(%ebp),%edx
084dd76c +0x0ce:  mov    -0x14(%ebp),%ecx
084dd76f +0x0d1:  mov    %edx,%eax
084dd771 +0x0d3:  add    %eax,%eax
084dd773 +0x0d5:  add    %edx,%eax
084dd775 +0x0d7:  add    $0x1,%eax
084dd778 +0x0da:  shl    $0x4,%eax
084dd77b +0x0dd:  mov    0x2(%eax,%ecx,1),%eax
084dd77f +0x0e1:  test   %eax,%eax
084dd781 +0x0e3:  je     084dd7b3 <+0x115>
084dd783 +0x0e5:  mov    -0xc(%ebp),%edx
084dd786 +0x0e8:  mov    %edx,%eax
084dd788 +0x0ea:  add    %eax,%eax
084dd78a +0x0ec:  add    %edx,%eax
084dd78c +0x0ee:  add    $0x1,%eax
084dd78f +0x0f1:  shl    $0x4,%eax
084dd792 +0x0f4:  add    -0x14(%ebp),%eax
084dd795 +0x0f7:  add    $0x2,%eax
084dd798 +0x0fa:  movl   $0x30,0x8(%esp)
084dd7a0 +0x102:  mov    %eax,0x4(%esp)
084dd7a4 +0x106:  lea    -0x24(%ebp),%eax
084dd7a7 +0x109:  mov    %eax,(%esp)
084dd7aa +0x10c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084dd7af +0x111:  addl   $0x1,-0x10(%ebp)
084dd7b3 +0x115:  addl   $0x1,-0xc(%ebp)
084dd7b7 +0x119:  cmpl   $0x31,-0xc(%ebp)
084dd7bb +0x11d:  setle  %al
084dd7be +0x120:  test   %al,%al
084dd7c0 +0x122:  jne    084dd769 <+0xcb>
084dd7c2 +0x124:  mov    -0x10(%ebp),%eax
084dd7c5 +0x127:  mov    %eax,0x8(%esp)
084dd7c9 +0x12b:  lea    -0x18(%ebp),%eax
084dd7cc +0x12e:  mov    %eax,0x4(%esp)
084dd7d0 +0x132:  lea    -0x24(%ebp),%eax
084dd7d3 +0x135:  mov    %eax,(%esp)
084dd7d6 +0x138:  call   084b804a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x8d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x8d
084dd7db +0x13d:  movl   $0x1,0x4(%esp)
084dd7e3 +0x145:  lea    -0x24(%ebp),%eax
084dd7e6 +0x148:  mov    %eax,(%esp)
084dd7e9 +0x14b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dd7ee +0x150:  lea    -0x24(%ebp),%eax
084dd7f1 +0x153:  mov    %eax,0x4(%esp)
084dd7f5 +0x157:  mov    0xc(%ebp),%eax
084dd7f8 +0x15a:  mov    %eax,(%esp)
084dd7fb +0x15d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dd800 +0x162:  mov    0xc(%ebp),%eax
084dd803 +0x165:  lea    0x79700(%eax),%edx
084dd809 +0x16b:  mov    -0x10(%ebp),%eax
084dd80c +0x16e:  mov    %eax,0x8(%esp)
084dd810 +0x172:  movl   $0x4,0x4(%esp)
084dd818 +0x17a:  mov    %edx,(%esp)
084dd81b +0x17d:  call   08686570 <_ZN15cUserHistoryLog23GuildCargoHistoryResultE31ENUM_GUILD_CARGO_HISTORY_REASONi>  ; cUserHistoryLog::GuildCargoHistoryResult(ENUM_GUILD_CARGO_HISTORY_REASON, int)
084dd820 +0x182:  mov    $0x0,%ebx
084dd825 +0x187:  lea    -0x24(%ebp),%eax
084dd828 +0x18a:  mov    %eax,(%esp)
084dd82b +0x18d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd830 +0x192:  jmp    084dd84d <+0x1af>
084dd832 +0x194:  mov    %edx,%ebx
084dd834 +0x196:  mov    %eax,%esi
084dd836 +0x198:  lea    -0x24(%ebp),%eax
084dd839 +0x19b:  mov    %eax,(%esp)
084dd83c +0x19e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd841 +0x1a3:  mov    %esi,%eax
084dd843 +0x1a5:  mov    %ebx,%edx
084dd845 +0x1a7:  mov    %eax,(%esp)
084dd848 +0x1aa:  call   08ae3750 <_Unwind_Resume>
084dd84d +0x1af:  mov    %ebx,%eax
084dd84f +0x1b1:  add    $0x30,%esp
084dd852 +0x1b4:  pop    %ebx
084dd853 +0x1b5:  pop    %esi
084dd854 +0x1b6:  pop    %ebp
084dd855 +0x1b7:  ret
```

## 反编译 C

```c
// Inter_GuildCargoHistory::dispatch_sig @ 0x84dd69e

/* Inter_GuildCargoHistory::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoHistory::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_18 + 0xe))) {
    local_1c = 0;
    local_14 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd728 to 084dd81f has its CatchHandler @ 084dd832 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x10a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
    for (local_10 = 0; local_10 < 0x32; local_10 = local_10 + 1) {
      if (*(int *)((local_10 * 3 + 1) * 0x10 + 2 + local_18) != 0) {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_28,(char *)((local_10 * 3 + 1) * 0x10 + local_18 + 2)
                   ,0x30);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,&local_1c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    cUserHistoryLog::GuildCargoHistoryResult((cUserHistoryLog *)(param_2 + 0x79700),4,local_14);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}
```
