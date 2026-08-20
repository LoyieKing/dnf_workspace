# dispatch_sig

`_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci`

`Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorRegistGameServerAck` | `0x084e2dee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e2dee  _ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci
#           Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)
# range [0x084e2dee, 0x084e2f1d]
084e2dee +0x000:  push   %ebp
084e2def +0x001:  mov    %esp,%ebp
084e2df1 +0x003:  push   %esi
084e2df2 +0x004:  push   %ebx
084e2df3 +0x005:  sub    $0x60,%esp
084e2df6 +0x008:  mov    0x10(%ebp),%eax
084e2df9 +0x00b:  mov    %eax,-0xc(%ebp)
084e2dfc +0x00e:  mov    -0xc(%ebp),%eax
084e2dff +0x011:  movzbl 0xb(%eax),%eax
084e2e03 +0x015:  cmp    $0x1,%al
084e2e05 +0x017:  jne    084e2e6c <+0x7e>
084e2e07 +0x019:  mov    -0xc(%ebp),%eax
084e2e0a +0x01c:  movzbl 0xa(%eax),%eax
084e2e0e +0x020:  movzbl %al,%esi
084e2e11 +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2e16 +0x028:  mov    0x1b0(%eax),%ebx
084e2e1c +0x02e:  movl   $0x5,0xc(%esp)
084e2e24 +0x036:  movl   $0x5308,0x8(%esp)
084e2e2c +0x03e:  movl   $&_ZZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e2e34 +0x046:  lea    -0x3c(%ebp),%eax
084e2e37 +0x049:  mov    %eax,(%esp)
084e2e3a +0x04c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e2e3f +0x051:  mov    %esi,0xc(%esp)
084e2e43 +0x055:  mov    %ebx,0x8(%esp)
084e2e47 +0x059:  movl   $"Channel NO %d is already registerd(server type : %d). use another channel NO",0x4(%esp)
084e2e4f +0x061:  lea    -0x3c(%ebp),%eax
084e2e52 +0x064:  mov    %eax,(%esp)
084e2e55 +0x067:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e2e5a +0x06c:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084e2e5f +0x071:  mov    %eax,(%esp)
084e2e62 +0x074:  call   082a35a6 <_ZN15CShutdowManager18SendShutdownSignalEv>  ; CShutdowManager::SendShutdownSignal()
084e2e67 +0x079:  jmp    084e2f12 <+0x124>
084e2e6c +0x07e:  mov    -0xc(%ebp),%eax
084e2e6f +0x081:  movzbl 0xa(%eax),%eax
084e2e73 +0x085:  movzbl %al,%eax
084e2e76 +0x088:  test   %eax,%eax
084e2e78 +0x08a:  je     084e2e84 <+0x96>
084e2e7a +0x08c:  cmp    $0x1,%eax
084e2e7d +0x08f:  je     084e2ecc <+0xde>
084e2e7f +0x091:  jmp    084e2f12 <+0x124>
084e2e84 +0x096:  movl   $0x1,0x14(%esp)
084e2e8c +0x09e:  movl   $0x1,0x10(%esp)
084e2e94 +0x0a6:  movl   $0x9,0xc(%esp)
084e2e9c +0x0ae:  movl   $0x5312,0x8(%esp)
084e2ea4 +0x0b6:  movl   $&_ZZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e2eac +0x0be:  lea    -0x2c(%ebp),%eax
084e2eaf +0x0c1:  mov    %eax,(%esp)
084e2eb2 +0x0c4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
084e2eb7 +0x0c9:  movl   $"[!] Monitor Server Connected",0x4(%esp)
084e2ebf +0x0d1:  lea    -0x2c(%ebp),%eax
084e2ec2 +0x0d4:  mov    %eax,(%esp)
084e2ec5 +0x0d7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e2eca +0x0dc:  jmp    084e2f12 <+0x124>
084e2ecc +0x0de:  movl   $0x1,0x14(%esp)
084e2ed4 +0x0e6:  movl   $0x1,0x10(%esp)
084e2edc +0x0ee:  movl   $0x9,0xc(%esp)
084e2ee4 +0x0f6:  movl   $0x5317,0x8(%esp)
084e2eec +0x0fe:  movl   $&_ZZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e2ef4 +0x106:  lea    -0x1c(%ebp),%eax
084e2ef7 +0x109:  mov    %eax,(%esp)
084e2efa +0x10c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
084e2eff +0x111:  movl   $"[!] Guild Server Connected",0x4(%esp)
084e2f07 +0x119:  lea    -0x1c(%ebp),%eax
084e2f0a +0x11c:  mov    %eax,(%esp)
084e2f0d +0x11f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e2f12 +0x124:  mov    $0x0,%eax
084e2f17 +0x129:  add    $0x60,%esp
084e2f1a +0x12c:  pop    %ebx
084e2f1b +0x12d:  pop    %esi
084e2f1c +0x12e:  pop    %ebp
084e2f1d +0x12f:  ret
```

## 反编译 C

```c
// Inter_MonitorRegistGameServerAck::dispatch_sig @ 0x84e2dee

/* Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorRegistGameServerAck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 0xb) == '\x01') {
    bVar1 = *(byte *)(param_3 + 10);
    iVar3 = G_CEnvironment();
    uVar2 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5308,5);
    cMyTrace::operator()
              (local_40,
               "Channel NO %d is already registerd(server type : %d). use another channel NO",uVar2,
               (uint)bVar1);
    GetInstanceShutdowManager();
    CShutdowManager::SendShutdownSignal();
  }
  else if (*(char *)(param_3 + 10) == '\0') {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5312,9,true,true);
    cMyTrace::operator()(local_30,"[!] Monitor Server Connected");
  }
  else if (*(char *)(param_3 + 10) == '\x01') {
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5317,9,true,true);
    cMyTrace::operator()(local_20,"[!] Guild Server Connected");
  }
  return 0;
}
```
