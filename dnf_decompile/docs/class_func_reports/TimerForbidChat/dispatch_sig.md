# dispatch_sig

`_ZN15TimerForbidChat12dispatch_sigEiij`

`TimerForbidChat::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerForbidChat` | `0x08635f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635f50  _ZN15TimerForbidChat12dispatch_sigEiij
#           TimerForbidChat::dispatch_sig(int, int, unsigned int)
# range [0x08635f50, 0x086360a9]
08635f50 +0x000:  push   %ebp
08635f51 +0x001:  mov    %esp,%ebp
08635f53 +0x003:  push   %ebx
08635f54 +0x004:  sub    $0x54,%esp
08635f57 +0x007:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635f5c +0x00c:  movl   $0xa,0x8(%esp)
08635f64 +0x014:  mov    0xc(%ebp),%edx
08635f67 +0x017:  mov    %edx,0x4(%esp)
08635f6b +0x01b:  mov    %eax,(%esp)
08635f6e +0x01e:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08635f73 +0x023:  mov    %eax,-0xc(%ebp)
08635f76 +0x026:  cmpl   $0x0,-0xc(%ebp)
08635f7a +0x02a:  jne    08635f86 <+0x36>
08635f7c +0x02c:  mov    $0x0,%eax
08635f81 +0x031:  jmp    086360a3 <+0x153>
08635f86 +0x036:  mov    0x14(%ebp),%eax
08635f89 +0x039:  mov    %eax,0x4(%esp)
08635f8d +0x03d:  mov    -0xc(%ebp),%eax
08635f90 +0x040:  mov    %eax,(%esp)
08635f93 +0x043:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
08635f98 +0x048:  mov    %eax,%ebx
08635f9a +0x04a:  movl   $0x0,0xc(%esp)
08635fa2 +0x052:  movl   $0xa52,0x8(%esp)
08635faa +0x05a:  movl   $&_ZZN15TimerForbidChat12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08635fb2 +0x062:  lea    -0x3c(%ebp),%eax
08635fb5 +0x065:  mov    %eax,(%esp)
08635fb8 +0x068:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08635fbd +0x06d:  mov    %ebx,0x8(%esp)
08635fc1 +0x071:  movl   $"TimerForbidChat %s",0x4(%esp)
08635fc9 +0x079:  lea    -0x3c(%ebp),%eax
08635fcc +0x07c:  mov    %eax,(%esp)
08635fcf +0x07f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08635fd4 +0x084:  mov    0x14(%ebp),%eax
08635fd7 +0x087:  mov    %eax,0x4(%esp)
08635fdb +0x08b:  mov    -0xc(%ebp),%eax
08635fde +0x08e:  mov    %eax,(%esp)
08635fe1 +0x091:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
08635fe6 +0x096:  mov    %eax,%ebx
08635fe8 +0x098:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08635fed +0x09d:  mov    %ebx,0x4(%esp)
08635ff1 +0x0a1:  mov    %eax,(%esp)
08635ff4 +0x0a4:  call   086cdc60 <_ZN9GameWorld10EnableChatEPKc>  ; GameWorld::EnableChat(char const*)
08635ff9 +0x0a9:  xor    $0x1,%eax
08635ffc +0x0ac:  test   %al,%al
08635ffe +0x0ae:  je     08636050 <+0x100>
08636000 +0x0b0:  mov    0x14(%ebp),%eax
08636003 +0x0b3:  mov    %eax,0x4(%esp)
08636007 +0x0b7:  mov    -0xc(%ebp),%eax
0863600a +0x0ba:  mov    %eax,(%esp)
0863600d +0x0bd:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
08636012 +0x0c2:  mov    %eax,%ebx
08636014 +0x0c4:  movl   $0x0,0xc(%esp)
0863601c +0x0cc:  movl   $0xa54,0x8(%esp)
08636024 +0x0d4:  movl   $&_ZZN15TimerForbidChat12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863602c +0x0dc:  lea    -0x2c(%ebp),%eax
0863602f +0x0df:  mov    %eax,(%esp)
08636032 +0x0e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636037 +0x0e7:  mov    %ebx,0x8(%esp)
0863603b +0x0eb:  movl   $"Failed to enable to chat for: %s",0x4(%esp)
08636043 +0x0f3:  lea    -0x2c(%ebp),%eax
08636046 +0x0f6:  mov    %eax,(%esp)
08636049 +0x0f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863604e +0x0fe:  jmp    0863609e <+0x14e>
08636050 +0x100:  mov    0x14(%ebp),%eax
08636053 +0x103:  mov    %eax,0x4(%esp)
08636057 +0x107:  mov    -0xc(%ebp),%eax
0863605a +0x10a:  mov    %eax,(%esp)
0863605d +0x10d:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
08636062 +0x112:  mov    %eax,%ebx
08636064 +0x114:  movl   $0x0,0xc(%esp)
0863606c +0x11c:  movl   $0xa56,0x8(%esp)
08636074 +0x124:  movl   $&_ZZN15TimerForbidChat12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863607c +0x12c:  lea    -0x1c(%ebp),%eax
0863607f +0x12f:  mov    %eax,(%esp)
08636082 +0x132:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636087 +0x137:  mov    %ebx,0x8(%esp)
0863608b +0x13b:  movl   $"Enabled to chat for: %s",0x4(%esp)
08636093 +0x143:  lea    -0x1c(%ebp),%eax
08636096 +0x146:  mov    %eax,(%esp)
08636099 +0x149:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863609e +0x14e:  mov    $0x1,%eax
086360a3 +0x153:  add    $0x54,%esp
086360a6 +0x156:  pop    %ebx
086360a7 +0x157:  pop    %ebp
086360a8 +0x158:  ret
086360a9 +0x159:  nop
```

## 反编译 C

```c
// TimerForbidChat::dispatch_sig @ 0x8635f50

/* TimerForbidChat::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerForbidChat::dispatch_sig(TimerForbidChat *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  GameWorld *this_00;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
    cMyTrace::cMyTrace(local_40,
                       "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xa52,0);
    cMyTrace::operator()(local_40,"TimerForbidChat %s",uVar3);
    pcVar4 = (char *)CUser::get_charac_name_by_charac_no(local_10,param_3);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::EnableChat(this_00,pcVar4);
    if (cVar1 == '\x01') {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_20,
                         "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa56,0);
      cMyTrace::operator()(local_20,"Enabled to chat for: %s",uVar3);
    }
    else {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa54,0);
      cMyTrace::operator()(local_30,"Failed to enable to chat for: %s",uVar3);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
