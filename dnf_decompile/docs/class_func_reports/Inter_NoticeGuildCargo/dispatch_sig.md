# dispatch_sig

`_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci`

`Inter_NoticeGuildCargo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeGuildCargo` | `0x084dd4b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd4b2  _ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci
#           Inter_NoticeGuildCargo::dispatch_sig(CUser*, char*, int)
# range [0x084dd4b2, 0x084dd69d]
084dd4b2 +0x000:  push   %ebp
084dd4b3 +0x001:  mov    %esp,%ebp
084dd4b5 +0x003:  push   %esi
084dd4b6 +0x004:  push   %ebx
084dd4b7 +0x005:  sub    $0x30,%esp
084dd4ba +0x008:  mov    0x10(%ebp),%eax
084dd4bd +0x00b:  mov    %eax,-0x14(%ebp)
084dd4c0 +0x00e:  mov    0xc(%ebp),%eax
084dd4c3 +0x011:  mov    %eax,(%esp)
084dd4c6 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dd4cb +0x019:  cmp    $0x2,%eax
084dd4ce +0x01c:  setle  %al
084dd4d1 +0x01f:  test   %al,%al
084dd4d3 +0x021:  je     084dd4df <+0x2d>
084dd4d5 +0x023:  mov    $0x0,%ebx
084dd4da +0x028:  jmp    084dd695 <+0x1e3>
084dd4df +0x02d:  movl   $0xffffffff,0x4(%esp)
084dd4e7 +0x035:  mov    0xc(%ebp),%eax
084dd4ea +0x038:  mov    %eax,(%esp)
084dd4ed +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dd4f2 +0x040:  mov    %eax,%edx
084dd4f4 +0x042:  mov    -0x14(%ebp),%eax
084dd4f7 +0x045:  mov    0xe(%eax),%eax
084dd4fa +0x048:  cmp    %eax,%edx
084dd4fc +0x04a:  setne  %al
084dd4ff +0x04d:  test   %al,%al
084dd501 +0x04f:  je     084dd50d <+0x5b>
084dd503 +0x051:  mov    $0x0,%ebx
084dd508 +0x056:  jmp    084dd695 <+0x1e3>
084dd50d +0x05b:  mov    -0x14(%ebp),%eax
084dd510 +0x05e:  mov    0x18ea(%eax),%eax
084dd516 +0x064:  mov    0xc(%ebp),%edx
084dd519 +0x067:  add    $0x79700,%edx
084dd51f +0x06d:  mov    %eax,0xc(%esp)
084dd523 +0x071:  movl   $0x0,0x8(%esp)
084dd52b +0x079:  movl   $0x2,0x4(%esp)
084dd533 +0x081:  mov    %edx,(%esp)
084dd536 +0x084:  call   08686512 <_ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii>  ; cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)
084dd53b +0x089:  mov    -0x14(%ebp),%eax
084dd53e +0x08c:  mov    0x18ea(%eax),%eax
084dd544 +0x092:  mov    %eax,0x4(%esp)
084dd548 +0x096:  mov    0xc(%ebp),%eax
084dd54b +0x099:  mov    %eax,(%esp)
084dd54e +0x09c:  call   084ecefe <_GLOBAL__I__Z7getUserj+0x3eb0>  ; global constructors keyed to getUser(unsigned int)+0x3eb0
084dd553 +0x0a1:  movl   $0x0,-0x18(%ebp)
084dd55a +0x0a8:  movl   $0x0,-0x10(%ebp)
084dd561 +0x0af:  lea    -0x24(%ebp),%eax
084dd564 +0x0b2:  mov    %eax,(%esp)
084dd567 +0x0b5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dd56c +0x0ba:  movl   $0xed,0x8(%esp)
084dd574 +0x0c2:  movl   $0x0,0x4(%esp)
084dd57c +0x0ca:  lea    -0x24(%ebp),%eax
084dd57f +0x0cd:  mov    %eax,(%esp)
084dd582 +0x0d0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dd587 +0x0d5:  mov    -0x14(%ebp),%eax
084dd58a +0x0d8:  mov    0x18ea(%eax),%eax
084dd590 +0x0de:  mov    %eax,0x4(%esp)
084dd594 +0x0e2:  lea    -0x24(%ebp),%eax
084dd597 +0x0e5:  mov    %eax,(%esp)
084dd59a +0x0e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dd59f +0x0ed:  lea    -0x24(%ebp),%eax
084dd5a2 +0x0f0:  mov    %eax,(%esp)
084dd5a5 +0x0f3:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084dd5aa +0x0f8:  mov    %eax,-0x18(%ebp)
084dd5ad +0x0fb:  mov    -0x10(%ebp),%eax
084dd5b0 +0x0fe:  mov    %eax,0x4(%esp)
084dd5b4 +0x102:  lea    -0x24(%ebp),%eax
084dd5b7 +0x105:  mov    %eax,(%esp)
084dd5ba +0x108:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dd5bf +0x10d:  movl   $0x0,-0xc(%ebp)
084dd5c6 +0x114:  jmp    084dd61f <+0x16d>
084dd5c8 +0x116:  mov    -0xc(%ebp),%eax
084dd5cb +0x119:  mov    -0x14(%ebp),%edx
084dd5ce +0x11c:  imul   $0x35,%eax,%eax
084dd5d1 +0x11f:  lea    (%edx,%eax,1),%eax
084dd5d4 +0x122:  add    $0x10,%eax
084dd5d7 +0x125:  mov    0x3(%eax),%eax
084dd5da +0x128:  test   %eax,%eax
084dd5dc +0x12a:  je     084dd61b <+0x169>
084dd5de +0x12c:  mov    -0xc(%ebp),%eax
084dd5e1 +0x12f:  cwtl
084dd5e2 +0x130:  mov    %eax,0x4(%esp)
084dd5e6 +0x134:  lea    -0x24(%ebp),%eax
084dd5e9 +0x137:  mov    %eax,(%esp)
084dd5ec +0x13a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dd5f1 +0x13f:  mov    -0xc(%ebp),%eax
084dd5f4 +0x142:  imul   $0x35,%eax,%eax
084dd5f7 +0x145:  add    $0x10,%eax
084dd5fa +0x148:  add    -0x14(%ebp),%eax
084dd5fd +0x14b:  add    $0x2,%eax
084dd600 +0x14e:  movl   $0x35,0x8(%esp)
084dd608 +0x156:  mov    %eax,0x4(%esp)
084dd60c +0x15a:  lea    -0x24(%ebp),%eax
084dd60f +0x15d:  mov    %eax,(%esp)
084dd612 +0x160:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084dd617 +0x165:  addl   $0x1,-0x10(%ebp)
084dd61b +0x169:  addl   $0x1,-0xc(%ebp)
084dd61f +0x16d:  cmpl   $0x77,-0xc(%ebp)
084dd623 +0x171:  setle  %al
084dd626 +0x174:  test   %al,%al
084dd628 +0x176:  jne    084dd5c8 <+0x116>
084dd62a +0x178:  mov    -0x10(%ebp),%eax
084dd62d +0x17b:  mov    %eax,0x8(%esp)
084dd631 +0x17f:  lea    -0x18(%ebp),%eax
084dd634 +0x182:  mov    %eax,0x4(%esp)
084dd638 +0x186:  lea    -0x24(%ebp),%eax
084dd63b +0x189:  mov    %eax,(%esp)
084dd63e +0x18c:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084dd643 +0x191:  movl   $0x1,0x4(%esp)
084dd64b +0x199:  lea    -0x24(%ebp),%eax
084dd64e +0x19c:  mov    %eax,(%esp)
084dd651 +0x19f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dd656 +0x1a4:  lea    -0x24(%ebp),%eax
084dd659 +0x1a7:  mov    %eax,0x4(%esp)
084dd65d +0x1ab:  mov    0xc(%ebp),%eax
084dd660 +0x1ae:  mov    %eax,(%esp)
084dd663 +0x1b1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dd668 +0x1b6:  mov    $0x0,%ebx
084dd66d +0x1bb:  lea    -0x24(%ebp),%eax
084dd670 +0x1be:  mov    %eax,(%esp)
084dd673 +0x1c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd678 +0x1c6:  jmp    084dd695 <+0x1e3>
084dd67a +0x1c8:  mov    %edx,%ebx
084dd67c +0x1ca:  mov    %eax,%esi
084dd67e +0x1cc:  lea    -0x24(%ebp),%eax
084dd681 +0x1cf:  mov    %eax,(%esp)
084dd684 +0x1d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd689 +0x1d7:  mov    %esi,%eax
084dd68b +0x1d9:  mov    %ebx,%edx
084dd68d +0x1db:  mov    %eax,(%esp)
084dd690 +0x1de:  call   08ae3750 <_Unwind_Resume>
084dd695 +0x1e3:  mov    %ebx,%eax
084dd697 +0x1e5:  add    $0x30,%esp
084dd69a +0x1e8:  pop    %ebx
084dd69b +0x1e9:  pop    %esi
084dd69c +0x1ea:  pop    %ebp
084dd69d +0x1eb:  ret
```

## 反编译 C

```c
// Inter_NoticeGuildCargo::dispatch_sig @ 0x84dd4b2

/* Inter_NoticeGuildCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    cUserHistoryLog::GuildCargoResult
              ((cUserHistoryLog *)(param_2 + 0x79700),2,0,*(undefined4 *)(local_18 + 0x18ea));
    CUser::SetGuildCargoCapacity((CUser *)param_2,*(uint *)(local_18 + 0x18ea));
    local_1c = 0;
    local_14 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd582 to 084dd667 has its CatchHandler @ 084dd67a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xed);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_18 + 0x18ea));
    local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_14);
    for (local_10 = 0; local_10 < 0x78; local_10 = local_10 + 1) {
      if (*(int *)(local_18 + local_10 * 0x35 + 0x13) != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)(short)local_10);
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_28,(char *)(local_10 * 0x35 + local_18 + 0x12),0x35);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_1c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}
```
