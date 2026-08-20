# dispatch_sig

`_ZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPci`

`Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorForbidChat` | `0x084d0466` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0466  _ZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPci
#           Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)
# range [0x084d0466, 0x084d0597]
084d0466 +0x000:  push   %ebp
084d0467 +0x001:  mov    %esp,%ebp
084d0469 +0x003:  push   %ebx
084d046a +0x004:  sub    $0x64,%esp
084d046d +0x007:  movl   $0x0,0xc(%esp)
084d0475 +0x00f:  movl   $0x2e96,0x8(%esp)
084d047d +0x017:  movl   $&_ZZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d0485 +0x01f:  lea    -0x2c(%ebp),%eax
084d0488 +0x022:  mov    %eax,(%esp)
084d048b +0x025:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d0490 +0x02a:  movl   $"Inter_MonitorForbidChat::dispatch_sig recv\n",0x4(%esp)
084d0498 +0x032:  lea    -0x2c(%ebp),%eax
084d049b +0x035:  mov    %eax,(%esp)
084d049e +0x038:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d04a3 +0x03d:  mov    0x10(%ebp),%eax
084d04a6 +0x040:  mov    %eax,-0xc(%ebp)
084d04a9 +0x043:  movl   $0x1e,0x8(%esp)
084d04b1 +0x04b:  movl   $0x0,0x4(%esp)
084d04b9 +0x053:  lea    -0x4a(%ebp),%eax
084d04bc +0x056:  mov    %eax,(%esp)
084d04bf +0x059:  call   0807dcc0 <_init+0x5b8>
084d04c4 +0x05e:  mov    -0xc(%ebp),%eax
084d04c7 +0x061:  mov    0xe(%eax),%eax
084d04ca +0x064:  mov    -0xc(%ebp),%edx
084d04cd +0x067:  add    $0x12,%edx
084d04d0 +0x06a:  mov    %eax,0x8(%esp)
084d04d4 +0x06e:  mov    %edx,0x4(%esp)
084d04d8 +0x072:  lea    -0x4a(%ebp),%eax
084d04db +0x075:  mov    %eax,(%esp)
084d04de +0x078:  call   0807d8d0 <_init+0x1c8>
084d04e3 +0x07d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d04e8 +0x082:  lea    -0x4a(%ebp),%edx
084d04eb +0x085:  mov    %edx,0x4(%esp)
084d04ef +0x089:  mov    %eax,(%esp)
084d04f2 +0x08c:  call   086cd908 <_ZN9GameWorld15IsForbiddenChatEPKc>  ; GameWorld::IsForbiddenChat(char const*)
084d04f7 +0x091:  xor    $0x1,%eax
084d04fa +0x094:  test   %al,%al
084d04fc +0x096:  je     084d058c <+0x126>
084d0502 +0x09c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d0507 +0x0a1:  movl   $0x0,0x8(%esp)
084d050f +0x0a9:  lea    -0x4a(%ebp),%edx
084d0512 +0x0ac:  mov    %edx,0x4(%esp)
084d0516 +0x0b0:  mov    %eax,(%esp)
084d0519 +0x0b3:  call   086cd568 <_ZN9GameWorld17InsertUserToIDMapEPKcj>  ; GameWorld::InsertUserToIDMap(char const*, unsigned int)
084d051e +0x0b8:  mov    -0xc(%ebp),%eax
084d0521 +0x0bb:  mov    0xa(%eax),%eax
084d0524 +0x0be:  mov    %eax,%ebx
084d0526 +0x0c0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d052b +0x0c5:  mov    %ebx,0x8(%esp)
084d052f +0x0c9:  lea    -0x4a(%ebp),%edx
084d0532 +0x0cc:  mov    %edx,0x4(%esp)
084d0536 +0x0d0:  mov    %eax,(%esp)
084d0539 +0x0d3:  call   086ce054 <_ZN9GameWorld11DisableChatEPKci>  ; GameWorld::DisableChat(char const*, int)
084d053e +0x0d8:  mov    -0xc(%ebp),%eax
084d0541 +0x0db:  mov    0xa(%eax),%ebx
084d0544 +0x0de:  movl   $0x0,0xc(%esp)
084d054c +0x0e6:  movl   $0x2ea2,0x8(%esp)
084d0554 +0x0ee:  movl   $&_ZZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d055c +0x0f6:  lea    -0x1c(%ebp),%eax
084d055f +0x0f9:  mov    %eax,(%esp)
084d0562 +0x0fc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d0567 +0x101:  mov    %ebx,0xc(%esp)
084d056b +0x105:  lea    -0x4a(%ebp),%eax
084d056e +0x108:  mov    %eax,0x8(%esp)
084d0572 +0x10c:  movl   $"Inter_MonitorForbidChat::dispatch_sig %s for %d secs\n",0x4(%esp)
084d057a +0x114:  lea    -0x1c(%ebp),%eax
084d057d +0x117:  mov    %eax,(%esp)
084d0580 +0x11a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d0585 +0x11f:  mov    $0x0,%eax
084d058a +0x124:  jmp    084d0591 <+0x12b>
084d058c +0x126:  mov    $0x0,%eax
084d0591 +0x12b:  add    $0x64,%esp
084d0594 +0x12e:  pop    %ebx
084d0595 +0x12f:  pop    %ebp
084d0596 +0x130:  ret
084d0597 +0x131:  nop
```

## 反编译 C

```c
// Inter_MonitorForbidChat::dispatch_sig @ 0x84d0466

/* Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorForbidChat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *pGVar4;
  char local_4e [30];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)",0x2e96,
                     0);
  cMyTrace::operator()(local_30,"Inter_MonitorForbidChat::dispatch_sig recv\n");
  local_10 = param_3;
  memset(local_4e,0,0x1e);
  strncpy(local_4e,(char *)(local_10 + 0x12),*(size_t *)(local_10 + 0xe));
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsForbiddenChat(pGVar4,local_4e);
  if (cVar3 != '\x01') {
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::InsertUserToIDMap(pGVar4,local_4e,0);
    iVar1 = *(int *)(local_10 + 10);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::DisableChat(pGVar4,local_4e,iVar1);
    uVar2 = *(undefined4 *)(local_10 + 10);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)",
                       0x2ea2,0);
    cMyTrace::operator()
              (local_20,"Inter_MonitorForbidChat::dispatch_sig %s for %d secs\n",local_4e,uVar2);
  }
  return 0;
}
```
