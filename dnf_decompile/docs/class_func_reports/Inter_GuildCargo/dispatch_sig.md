# dispatch_sig

`_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci`

`Inter_GuildCargo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargo` | `0x084dd26c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd26c  _ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci
#           Inter_GuildCargo::dispatch_sig(CUser*, char*, int)
# range [0x084dd26c, 0x084dd4b1]
084dd26c +0x000:  push   %ebp
084dd26d +0x001:  mov    %esp,%ebp
084dd26f +0x003:  push   %esi
084dd270 +0x004:  push   %ebx
084dd271 +0x005:  sub    $0x30,%esp
084dd274 +0x008:  mov    0x10(%ebp),%eax
084dd277 +0x00b:  mov    %eax,-0x14(%ebp)
084dd27a +0x00e:  mov    0xc(%ebp),%eax
084dd27d +0x011:  mov    %eax,(%esp)
084dd280 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dd285 +0x019:  cmp    $0x2,%eax
084dd288 +0x01c:  setle  %al
084dd28b +0x01f:  test   %al,%al
084dd28d +0x021:  je     084dd299 <+0x2d>
084dd28f +0x023:  mov    $0x0,%ebx
084dd294 +0x028:  jmp    084dd4a9 <+0x23d>
084dd299 +0x02d:  movl   $0xffffffff,0x4(%esp)
084dd2a1 +0x035:  mov    0xc(%ebp),%eax
084dd2a4 +0x038:  mov    %eax,(%esp)
084dd2a7 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dd2ac +0x040:  mov    %eax,%edx
084dd2ae +0x042:  mov    -0x14(%ebp),%eax
084dd2b1 +0x045:  mov    0xe(%eax),%eax
084dd2b4 +0x048:  cmp    %eax,%edx
084dd2b6 +0x04a:  setne  %al
084dd2b9 +0x04d:  test   %al,%al
084dd2bb +0x04f:  je     084dd2c7 <+0x5b>
084dd2bd +0x051:  mov    $0x0,%ebx
084dd2c2 +0x056:  jmp    084dd4a9 <+0x23d>
084dd2c7 +0x05b:  mov    -0x14(%ebp),%eax
084dd2ca +0x05e:  mov    0x18ea(%eax),%eax
084dd2d0 +0x064:  mov    %eax,%edx
084dd2d2 +0x066:  mov    -0x14(%ebp),%eax
084dd2d5 +0x069:  movzbl 0x18ee(%eax),%eax
084dd2dc +0x070:  movzbl %al,%eax
084dd2df +0x073:  mov    0xc(%ebp),%ecx
084dd2e2 +0x076:  add    $0x79700,%ecx
084dd2e8 +0x07c:  mov    %edx,0xc(%esp)
084dd2ec +0x080:  mov    %eax,0x8(%esp)
084dd2f0 +0x084:  movl   $0x1,0x4(%esp)
084dd2f8 +0x08c:  mov    %ecx,(%esp)
084dd2fb +0x08f:  call   08686512 <_ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii>  ; cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)
084dd300 +0x094:  mov    -0x14(%ebp),%eax
084dd303 +0x097:  movzbl 0x18ee(%eax),%eax
084dd30a +0x09e:  cmp    $0xc1,%al
084dd30c +0x0a0:  je     084dd33c <+0xd0>
084dd30e +0x0a2:  mov    -0x14(%ebp),%eax
084dd311 +0x0a5:  movzbl 0x18ee(%eax),%eax
084dd318 +0x0ac:  movzbl %al,%eax
084dd31b +0x0af:  mov    %eax,0x8(%esp)
084dd31f +0x0b3:  movl   $0x109,0x4(%esp)
084dd327 +0x0bb:  mov    0xc(%ebp),%eax
084dd32a +0x0be:  mov    %eax,(%esp)
084dd32d +0x0c1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dd332 +0x0c6:  mov    $0x0,%ebx
084dd337 +0x0cb:  jmp    084dd4a9 <+0x23d>
084dd33c +0x0d0:  mov    -0x14(%ebp),%eax
084dd33f +0x0d3:  mov    0x18ea(%eax),%eax
084dd345 +0x0d9:  mov    %eax,0x4(%esp)
084dd349 +0x0dd:  mov    0xc(%ebp),%eax
084dd34c +0x0e0:  mov    %eax,(%esp)
084dd34f +0x0e3:  call   084ecefe <_GLOBAL__I__Z7getUserj+0x3eb0>  ; global constructors keyed to getUser(unsigned int)+0x3eb0
084dd354 +0x0e8:  movl   $0x0,-0x18(%ebp)
084dd35b +0x0ef:  movl   $0x0,-0x10(%ebp)
084dd362 +0x0f6:  lea    -0x24(%ebp),%eax
084dd365 +0x0f9:  mov    %eax,(%esp)
084dd368 +0x0fc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dd36d +0x101:  movl   $0x109,0x8(%esp)
084dd375 +0x109:  movl   $0x1,0x4(%esp)
084dd37d +0x111:  lea    -0x24(%ebp),%eax
084dd380 +0x114:  mov    %eax,(%esp)
084dd383 +0x117:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dd388 +0x11c:  movl   $0x1,0x4(%esp)
084dd390 +0x124:  lea    -0x24(%ebp),%eax
084dd393 +0x127:  mov    %eax,(%esp)
084dd396 +0x12a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dd39b +0x12f:  mov    -0x14(%ebp),%eax
084dd39e +0x132:  mov    0x18ea(%eax),%eax
084dd3a4 +0x138:  mov    %eax,0x4(%esp)
084dd3a8 +0x13c:  lea    -0x24(%ebp),%eax
084dd3ab +0x13f:  mov    %eax,(%esp)
084dd3ae +0x142:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dd3b3 +0x147:  lea    -0x24(%ebp),%eax
084dd3b6 +0x14a:  mov    %eax,(%esp)
084dd3b9 +0x14d:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084dd3be +0x152:  mov    %eax,-0x18(%ebp)
084dd3c1 +0x155:  mov    -0x10(%ebp),%eax
084dd3c4 +0x158:  mov    %eax,0x4(%esp)
084dd3c8 +0x15c:  lea    -0x24(%ebp),%eax
084dd3cb +0x15f:  mov    %eax,(%esp)
084dd3ce +0x162:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dd3d3 +0x167:  movl   $0x0,-0xc(%ebp)
084dd3da +0x16e:  jmp    084dd433 <+0x1c7>
084dd3dc +0x170:  mov    -0xc(%ebp),%eax
084dd3df +0x173:  mov    -0x14(%ebp),%edx
084dd3e2 +0x176:  imul   $0x35,%eax,%eax
084dd3e5 +0x179:  lea    (%edx,%eax,1),%eax
084dd3e8 +0x17c:  add    $0x10,%eax
084dd3eb +0x17f:  mov    0x3(%eax),%eax
084dd3ee +0x182:  test   %eax,%eax
084dd3f0 +0x184:  je     084dd42f <+0x1c3>
084dd3f2 +0x186:  mov    -0xc(%ebp),%eax
084dd3f5 +0x189:  cwtl
084dd3f6 +0x18a:  mov    %eax,0x4(%esp)
084dd3fa +0x18e:  lea    -0x24(%ebp),%eax
084dd3fd +0x191:  mov    %eax,(%esp)
084dd400 +0x194:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dd405 +0x199:  mov    -0xc(%ebp),%eax
084dd408 +0x19c:  imul   $0x35,%eax,%eax
084dd40b +0x19f:  add    $0x10,%eax
084dd40e +0x1a2:  add    -0x14(%ebp),%eax
084dd411 +0x1a5:  add    $0x2,%eax
084dd414 +0x1a8:  movl   $0x35,0x8(%esp)
084dd41c +0x1b0:  mov    %eax,0x4(%esp)
084dd420 +0x1b4:  lea    -0x24(%ebp),%eax
084dd423 +0x1b7:  mov    %eax,(%esp)
084dd426 +0x1ba:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084dd42b +0x1bf:  addl   $0x1,-0x10(%ebp)
084dd42f +0x1c3:  addl   $0x1,-0xc(%ebp)
084dd433 +0x1c7:  cmpl   $0x77,-0xc(%ebp)
084dd437 +0x1cb:  setle  %al
084dd43a +0x1ce:  test   %al,%al
084dd43c +0x1d0:  jne    084dd3dc <+0x170>
084dd43e +0x1d2:  mov    -0x10(%ebp),%eax
084dd441 +0x1d5:  mov    %eax,0x8(%esp)
084dd445 +0x1d9:  lea    -0x18(%ebp),%eax
084dd448 +0x1dc:  mov    %eax,0x4(%esp)
084dd44c +0x1e0:  lea    -0x24(%ebp),%eax
084dd44f +0x1e3:  mov    %eax,(%esp)
084dd452 +0x1e6:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084dd457 +0x1eb:  movl   $0x1,0x4(%esp)
084dd45f +0x1f3:  lea    -0x24(%ebp),%eax
084dd462 +0x1f6:  mov    %eax,(%esp)
084dd465 +0x1f9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dd46a +0x1fe:  lea    -0x24(%ebp),%eax
084dd46d +0x201:  mov    %eax,0x4(%esp)
084dd471 +0x205:  mov    0xc(%ebp),%eax
084dd474 +0x208:  mov    %eax,(%esp)
084dd477 +0x20b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dd47c +0x210:  mov    $0x0,%ebx
084dd481 +0x215:  lea    -0x24(%ebp),%eax
084dd484 +0x218:  mov    %eax,(%esp)
084dd487 +0x21b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd48c +0x220:  jmp    084dd4a9 <+0x23d>
084dd48e +0x222:  mov    %edx,%ebx
084dd490 +0x224:  mov    %eax,%esi
084dd492 +0x226:  lea    -0x24(%ebp),%eax
084dd495 +0x229:  mov    %eax,(%esp)
084dd498 +0x22c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dd49d +0x231:  mov    %esi,%eax
084dd49f +0x233:  mov    %ebx,%edx
084dd4a1 +0x235:  mov    %eax,(%esp)
084dd4a4 +0x238:  call   08ae3750 <_Unwind_Resume>
084dd4a9 +0x23d:  mov    %ebx,%eax
084dd4ab +0x23f:  add    $0x30,%esp
084dd4ae +0x242:  pop    %ebx
084dd4af +0x243:  pop    %esi
084dd4b0 +0x244:  pop    %ebp
084dd4b1 +0x245:  ret
```

## 反编译 C

```c
// Inter_GuildCargo::dispatch_sig @ 0x84dd26c

/* Inter_GuildCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
              ((cUserHistoryLog *)(param_2 + 0x79700),1,*(undefined1 *)(local_18 + 0x18ee),
               *(undefined4 *)(local_18 + 0x18ea));
    if (*(char *)(local_18 + 0x18ee) == -0x3f) {
      CUser::SetGuildCargoCapacity((CUser *)param_2,*(uint *)(local_18 + 0x18ea));
      local_1c = 0;
      local_14 = 0;
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd383 to 084dd47b has its CatchHandler @ 084dd48e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x109);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_18 + 0x18ea));
      local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_14);
      for (local_10 = 0; local_10 < 0x78; local_10 = local_10 + 1) {
        if (*(int *)(local_18 + local_10 * 0x35 + 0x13) != 0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)(short)local_10);
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_28,(char *)(local_10 * 0x35 + local_18 + 0x12),0x35
                    );
          local_14 = local_14 + 1;
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_1c,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x109,*(undefined1 *)(local_18 + 0x18ee));
    }
  }
  return 0;
}
```
