# dispatch_sig

`_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildMarkChange` | `0x084ca1e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ca1e6  _ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)
# range [0x084ca1e6, 0x084ca379]
084ca1e6 +0x000:  push   %ebp
084ca1e7 +0x001:  mov    %esp,%ebp
084ca1e9 +0x003:  push   %edi
084ca1ea +0x004:  push   %esi
084ca1eb +0x005:  push   %ebx
084ca1ec +0x006:  sub    $0x4c,%esp
084ca1ef +0x009:  mov    0xc(%ebp),%eax
084ca1f2 +0x00c:  mov    %eax,(%esp)
084ca1f5 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ca1fa +0x014:  test   %eax,%eax
084ca1fc +0x016:  sete   %al
084ca1ff +0x019:  test   %al,%al
084ca201 +0x01b:  je     084ca20d <+0x27>
084ca203 +0x01d:  mov    $0x0,%ebx
084ca208 +0x022:  jmp    084ca36f <+0x189>
084ca20d +0x027:  mov    0x10(%ebp),%eax
084ca210 +0x02a:  mov    %eax,-0x1c(%ebp)
084ca213 +0x02d:  movl   $0xffffffff,0x4(%esp)
084ca21b +0x035:  mov    0xc(%ebp),%eax
084ca21e +0x038:  mov    %eax,(%esp)
084ca221 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca226 +0x040:  mov    %eax,%edx
084ca228 +0x042:  mov    -0x1c(%ebp),%eax
084ca22b +0x045:  mov    0xe(%eax),%eax
084ca22e +0x048:  cmp    %eax,%edx
084ca230 +0x04a:  setne  %al
084ca233 +0x04d:  test   %al,%al
084ca235 +0x04f:  je     084ca28e <+0xa8>
084ca237 +0x051:  mov    -0x1c(%ebp),%eax
084ca23a +0x054:  mov    0xe(%eax),%ebx
084ca23d +0x057:  movl   $0xffffffff,0x4(%esp)
084ca245 +0x05f:  mov    0xc(%ebp),%eax
084ca248 +0x062:  mov    %eax,(%esp)
084ca24b +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca250 +0x06a:  mov    %ebx,0x18(%esp)
084ca254 +0x06e:  mov    %eax,0x14(%esp)
084ca258 +0x072:  movl   $"Inter_MonitorNoticeGuildMarkChange::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ca260 +0x07a:  movl   $0x244a,0xc(%esp)
084ca268 +0x082:  movl   $&_ZZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ca270 +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ca278 +0x092:  movl   $0x1,(%esp)
084ca27f +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ca284 +0x09e:  mov    $0x0,%ebx
084ca289 +0x0a3:  jmp    084ca36f <+0x189>
084ca28e +0x0a8:  mov    -0x1c(%ebp),%eax
084ca291 +0x0ab:  mov    0x12(%eax),%edi
084ca294 +0x0ae:  mov    -0x1c(%ebp),%eax
084ca297 +0x0b1:  mov    0xe(%eax),%esi
084ca29a +0x0b4:  mov    -0x1c(%ebp),%eax
084ca29d +0x0b7:  mov    0xa(%eax),%ebx
084ca2a0 +0x0ba:  movl   $0x0,0xc(%esp)
084ca2a8 +0x0c2:  movl   $0x244f,0x8(%esp)
084ca2b0 +0x0ca:  movl   $&_ZZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084ca2b8 +0x0d2:  lea    -0x2c(%ebp),%eax
084ca2bb +0x0d5:  mov    %eax,(%esp)
084ca2be +0x0d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ca2c3 +0x0dd:  mov    %edi,0x10(%esp)
084ca2c7 +0x0e1:  mov    %esi,0xc(%esp)
084ca2cb +0x0e5:  mov    %ebx,0x8(%esp)
084ca2cf +0x0e9:  movl   $"[GUILD MARK CHANGE] Send to client. (channel:%d, character:%u, guildkey:%u)",0x4(%esp)
084ca2d7 +0x0f1:  lea    -0x2c(%ebp),%eax
084ca2da +0x0f4:  mov    %eax,(%esp)
084ca2dd +0x0f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ca2e2 +0x0fc:  lea    -0x38(%ebp),%eax
084ca2e5 +0x0ff:  mov    %eax,(%esp)
084ca2e8 +0x102:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ca2ed +0x107:  movl   $0x3c,0x8(%esp)
084ca2f5 +0x10f:  movl   $0x0,0x4(%esp)
084ca2fd +0x117:  lea    -0x38(%ebp),%eax
084ca300 +0x11a:  mov    %eax,(%esp)
084ca303 +0x11d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ca308 +0x122:  mov    -0x1c(%ebp),%eax
084ca30b +0x125:  mov    0x12(%eax),%eax
084ca30e +0x128:  mov    %eax,0x4(%esp)
084ca312 +0x12c:  lea    -0x38(%ebp),%eax
084ca315 +0x12f:  mov    %eax,(%esp)
084ca318 +0x132:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca31d +0x137:  movl   $0x1,0x4(%esp)
084ca325 +0x13f:  lea    -0x38(%ebp),%eax
084ca328 +0x142:  mov    %eax,(%esp)
084ca32b +0x145:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ca330 +0x14a:  lea    -0x38(%ebp),%eax
084ca333 +0x14d:  mov    %eax,0x4(%esp)
084ca337 +0x151:  mov    0xc(%ebp),%eax
084ca33a +0x154:  mov    %eax,(%esp)
084ca33d +0x157:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ca342 +0x15c:  mov    $0x0,%ebx
084ca347 +0x161:  lea    -0x38(%ebp),%eax
084ca34a +0x164:  mov    %eax,(%esp)
084ca34d +0x167:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ca352 +0x16c:  jmp    084ca36f <+0x189>
084ca354 +0x16e:  mov    %edx,%ebx
084ca356 +0x170:  mov    %eax,%esi
084ca358 +0x172:  lea    -0x38(%ebp),%eax
084ca35b +0x175:  mov    %eax,(%esp)
084ca35e +0x178:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ca363 +0x17d:  mov    %esi,%eax
084ca365 +0x17f:  mov    %ebx,%edx
084ca367 +0x181:  mov    %eax,(%esp)
084ca36a +0x184:  call   08ae3750 <_Unwind_Resume>
084ca36f +0x189:  mov    %ebx,%eax
084ca371 +0x18b:  add    $0x4c,%esp
084ca374 +0x18e:  pop    %ebx
084ca375 +0x18f:  pop    %esi
084ca376 +0x190:  pop    %edi
084ca377 +0x191:  pop    %ebp
084ca378 +0x192:  ret
084ca379 +0x193:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildMarkChange::dispatch_sig @ 0x84ca1e6

/* Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_20 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_20 + 0xe)) {
      uVar1 = *(undefined4 *)(local_20 + 0x12);
      uVar4 = *(undefined4 *)(local_20 + 0xe);
      uVar2 = *(undefined4 *)(local_20 + 10);
      cMyTrace::cMyTrace(local_30,
                         "virtual int Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)"
                         ,0x244f,0);
      cMyTrace::operator()
                (local_30,
                 "[GUILD MARK CHANGE] Send to client. (channel:%d, character:%u, guildkey:%u)",uVar2
                 ,uVar4,uVar1);
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084ca303 to 084ca341 has its CatchHandler @ 084ca354 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x3c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_20 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send((CUser *)param_2,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
    else {
      uVar1 = *(undefined4 *)(local_20 + 0xe);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)",
                 0x244a,
                 "Inter_MonitorNoticeGuildMarkChange::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar1);
    }
  }
  return 0;
}
```
