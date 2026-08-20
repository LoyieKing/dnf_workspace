# dispatch_sig

`_ZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPci`

`Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AutoPunishRuleBlackIP` | `0x084d422a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d422a  _ZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPci
#           Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)
# range [0x084d422a, 0x084d443f]
084d422a +0x000:  push   %ebp
084d422b +0x001:  mov    %esp,%ebp
084d422d +0x003:  push   %ebx
084d422e +0x004:  sub    $0x74,%esp
084d4231 +0x007:  mov    &_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE,%eax
084d4236 +0x00c:  mov    %eax,(%esp)
084d4239 +0x00f:  call   082a5a74 <_GLOBAL__I__ZN4CLog5this_E+0x1e9b>  ; global constructors keyed to CLog::this_+0x1e9b
084d423e +0x014:  mov    0x10(%ebp),%eax
084d4241 +0x017:  mov    %eax,-0x10(%ebp)
084d4244 +0x01a:  mov    -0x10(%ebp),%eax
084d4247 +0x01d:  movzwl (%eax),%eax
084d424a +0x020:  movzwl %ax,%ebx
084d424d +0x023:  movl   $0x0,0xc(%esp)
084d4255 +0x02b:  movl   $0x3561,0x8(%esp)
084d425d +0x033:  movl   $&_ZZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d4265 +0x03b:  lea    -0x40(%ebp),%eax
084d4268 +0x03e:  mov    %eax,(%esp)
084d426b +0x041:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d4270 +0x046:  mov    %ebx,0x8(%esp)
084d4274 +0x04a:  movl   $"Black IP Load Start (TotalCount: %d)",0x4(%esp)
084d427c +0x052:  lea    -0x40(%ebp),%eax
084d427f +0x055:  mov    %eax,(%esp)
084d4282 +0x058:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d4287 +0x05d:  movl   $0x0,-0xc(%ebp)
084d428e +0x064:  jmp    084d43d4 <+0x1aa>
084d4293 +0x069:  movl   $0x0,-0x50(%ebp)
084d429a +0x070:  movl   $0x0,-0x4c(%ebp)
084d42a1 +0x077:  movl   $0x0,-0x48(%ebp)
084d42a8 +0x07e:  movl   $0x0,-0x44(%ebp)
084d42af +0x085:  mov    -0xc(%ebp),%edx
084d42b2 +0x088:  mov    -0x10(%ebp),%eax
084d42b5 +0x08b:  mov    0x4(%eax,%edx,8),%ebx
084d42b9 +0x08f:  mov    -0xc(%ebp),%edx
084d42bc +0x092:  mov    -0x10(%ebp),%eax
084d42bf +0x095:  movzbl 0x8(%eax,%edx,8),%eax
084d42c4 +0x09a:  movzbl %al,%eax
084d42c7 +0x09d:  mov    %eax,(%esp)
084d42ca +0x0a0:  call   0807db10 <_init+0x408>
084d42cf +0x0a5:  or     %ebx,%eax
084d42d1 +0x0a7:  mov    %eax,-0x54(%ebp)
084d42d4 +0x0aa:  mov    -0x54(%ebp),%eax
084d42d7 +0x0ad:  mov    %eax,(%esp)
084d42da +0x0b0:  call   0807ddc0 <_init+0x6b8>
084d42df +0x0b5:  movl   $0x10,0x8(%esp)
084d42e7 +0x0bd:  mov    %eax,0x4(%esp)
084d42eb +0x0c1:  lea    -0x50(%ebp),%eax
084d42ee +0x0c4:  mov    %eax,(%esp)
084d42f1 +0x0c7:  call   0807d8d0 <_init+0x1c8>
084d42f6 +0x0cc:  mov    -0xc(%ebp),%edx
084d42f9 +0x0cf:  mov    -0x10(%ebp),%eax
084d42fc +0x0d2:  movzbl 0x9(%eax,%edx,8),%eax
084d4301 +0x0d7:  movzbl %al,%ebx
084d4304 +0x0da:  mov    -0xc(%ebp),%edx
084d4307 +0x0dd:  mov    -0x10(%ebp),%eax
084d430a +0x0e0:  movzbl 0x8(%eax,%edx,8),%eax
084d430f +0x0e5:  movzbl %al,%ecx
084d4312 +0x0e8:  mov    -0xc(%ebp),%edx
084d4315 +0x0eb:  mov    -0x10(%ebp),%eax
084d4318 +0x0ee:  mov    0x4(%eax,%edx,8),%edx
084d431c +0x0f2:  mov    &_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE,%eax
084d4321 +0x0f7:  mov    %ebx,0xc(%esp)
084d4325 +0x0fb:  mov    %ecx,0x8(%esp)
084d4329 +0x0ff:  mov    %edx,0x4(%esp)
084d432d +0x103:  mov    %eax,(%esp)
084d4330 +0x106:  call   084eb5c0 <_GLOBAL__I__Z7getUserj+0x2572>  ; global constructors keyed to getUser(unsigned int)+0x2572
084d4335 +0x10b:  xor    $0x1,%eax
084d4338 +0x10e:  test   %al,%al
084d433a +0x110:  je     084d4381 <+0x157>
084d433c +0x112:  mov    -0xc(%ebp),%edx
084d433f +0x115:  mov    -0x10(%ebp),%eax
084d4342 +0x118:  movzbl 0x9(%eax,%edx,8),%eax
084d4347 +0x11d:  movzbl %al,%eax
084d434a +0x120:  mov    %eax,0x18(%esp)
084d434e +0x124:  lea    -0x50(%ebp),%eax
084d4351 +0x127:  mov    %eax,0x14(%esp)
084d4355 +0x12b:  movl   $"Black IP Load fail(StartIP:%s -> %d)",0x10(%esp)
084d435d +0x133:  movl   $0x356d,0xc(%esp)
084d4365 +0x13b:  movl   $&_ZZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d436d +0x143:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d4375 +0x14b:  movl   $0x1,(%esp)
084d437c +0x152:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d4381 +0x157:  mov    -0xc(%ebp),%edx
084d4384 +0x15a:  mov    -0x10(%ebp),%eax
084d4387 +0x15d:  movzbl 0x9(%eax,%edx,8),%eax
084d438c +0x162:  movzbl %al,%ebx
084d438f +0x165:  movl   $0x0,0xc(%esp)
084d4397 +0x16d:  movl   $0x356e,0x8(%esp)
084d439f +0x175:  movl   $&_ZZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d43a7 +0x17d:  lea    -0x30(%ebp),%eax
084d43aa +0x180:  mov    %eax,(%esp)
084d43ad +0x183:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d43b2 +0x188:  mov    %ebx,0xc(%esp)
084d43b6 +0x18c:  lea    -0x50(%ebp),%eax
084d43b9 +0x18f:  mov    %eax,0x8(%esp)
084d43bd +0x193:  movl   $"Black IP Load (StartIP:%s -> %d)",0x4(%esp)
084d43c5 +0x19b:  lea    -0x30(%ebp),%eax
084d43c8 +0x19e:  mov    %eax,(%esp)
084d43cb +0x1a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d43d0 +0x1a6:  addl   $0x1,-0xc(%ebp)
084d43d4 +0x1aa:  mov    -0x10(%ebp),%eax
084d43d7 +0x1ad:  movzwl (%eax),%eax
084d43da +0x1b0:  movzwl %ax,%eax
084d43dd +0x1b3:  cmp    -0xc(%ebp),%eax
084d43e0 +0x1b6:  seta   %al
084d43e3 +0x1b9:  test   %al,%al
084d43e5 +0x1bb:  jne    084d4293 <+0x69>
084d43eb +0x1c1:  mov    &_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE,%eax
084d43f0 +0x1c6:  mov    %eax,(%esp)
084d43f3 +0x1c9:  call   084eb7ca <_GLOBAL__I__Z7getUserj+0x277c>  ; global constructors keyed to getUser(unsigned int)+0x277c
084d43f8 +0x1ce:  mov    %eax,%ebx
084d43fa +0x1d0:  movl   $0x0,0xc(%esp)
084d4402 +0x1d8:  movl   $0x3570,0x8(%esp)
084d440a +0x1e0:  movl   $&_ZZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d4412 +0x1e8:  lea    -0x20(%ebp),%eax
084d4415 +0x1eb:  mov    %eax,(%esp)
084d4418 +0x1ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d441d +0x1f3:  mov    %ebx,0x8(%esp)
084d4421 +0x1f7:  movl   $"Black IP Load End (TotalCount: %d)",0x4(%esp)
084d4429 +0x1ff:  lea    -0x20(%ebp),%eax
084d442c +0x202:  mov    %eax,(%esp)
084d442f +0x205:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d4434 +0x20a:  mov    $0x0,%eax
084d4439 +0x20f:  add    $0x74,%esp
084d443c +0x212:  pop    %ebx
084d443d +0x213:  pop    %ebp
084d443e +0x214:  ret
084d443f +0x215:  nop
```

## 反编译 C

```c
// Inter_AutoPunishRuleBlackIP::dispatch_sig @ 0x84d422a

/* Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint32_t uVar5;
  char *__src;
  undefined4 uVar6;
  char local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  ushort *local_14;
  uint local_10;
  
  WongWork::CAutoPunishRuleBlackIPMgr::reset(GlobalData::g_autoPunishRuleBlackIPMgr);
  local_14 = (ushort *)param_3;
  uVar2 = *(ushort *)param_3;
  cMyTrace::cMyTrace(local_44,
                     "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                     0x3561,0);
  cMyTrace::operator()(local_44,"Black IP Load Start (TotalCount: %d)",(uint)uVar2);
  for (local_10 = 0; local_10 < *local_14; local_10 = local_10 + 1) {
    local_54[0] = '\0';
    local_54[1] = '\0';
    local_54[2] = '\0';
    local_54[3] = '\0';
    local_54[4] = '\0';
    local_54[5] = '\0';
    local_54[6] = '\0';
    local_54[7] = '\0';
    local_54[8] = '\0';
    local_54[9] = '\0';
    local_54[10] = '\0';
    local_54[0xb] = '\0';
    local_54[0xc] = '\0';
    local_54[0xd] = '\0';
    local_54[0xe] = '\0';
    local_54[0xf] = '\0';
    uVar3 = *(uint *)(local_14 + local_10 * 4 + 2);
    uVar5 = htonl((uint)(byte)local_14[local_10 * 4 + 4]);
    __src = inet_ntoa((in_addr)(uVar5 | uVar3));
    strncpy(local_54,__src,0x10);
    cVar4 = WongWork::CAutoPunishRuleBlackIPMgr::addBlackIP
                      (GlobalData::g_autoPunishRuleBlackIPMgr,
                       *(ulong *)(local_14 + local_10 * 4 + 2),(uchar)local_14[local_10 * 4 + 4],
                       *(uchar *)((int)local_14 + local_10 * 8 + 9));
    if (cVar4 != '\x01') {
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",0x356d,
                 "Black IP Load fail(StartIP:%s -> %d)",local_54,
                 (uint)*(byte *)((int)local_14 + local_10 * 8 + 9));
    }
    bVar1 = *(byte *)((int)local_14 + local_10 * 8 + 9);
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                       0x356e,0);
    cMyTrace::operator()(local_34,"Black IP Load (StartIP:%s -> %d)",local_54,(uint)bVar1);
  }
  uVar6 = WongWork::CAutoPunishRuleBlackIPMgr::getBlackIPCount
                    (GlobalData::g_autoPunishRuleBlackIPMgr);
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                     0x3570,0);
  cMyTrace::operator()(local_24,"Black IP Load End (TotalCount: %d)",uVar6);
  return 0;
}
```
