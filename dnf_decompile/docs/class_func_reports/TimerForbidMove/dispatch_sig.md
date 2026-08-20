# dispatch_sig

`_ZN15TimerForbidMove12dispatch_sigEiij`

`TimerForbidMove::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerForbidMove` | `0x086360aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086360aa  _ZN15TimerForbidMove12dispatch_sigEiij
#           TimerForbidMove::dispatch_sig(int, int, unsigned int)
# range [0x086360aa, 0x08636203]
086360aa +0x000:  push   %ebp
086360ab +0x001:  mov    %esp,%ebp
086360ad +0x003:  push   %ebx
086360ae +0x004:  sub    $0x54,%esp
086360b1 +0x007:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086360b6 +0x00c:  movl   $0xb,0x8(%esp)
086360be +0x014:  mov    0xc(%ebp),%edx
086360c1 +0x017:  mov    %edx,0x4(%esp)
086360c5 +0x01b:  mov    %eax,(%esp)
086360c8 +0x01e:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
086360cd +0x023:  mov    %eax,-0xc(%ebp)
086360d0 +0x026:  cmpl   $0x0,-0xc(%ebp)
086360d4 +0x02a:  jne    086360e0 <+0x36>
086360d6 +0x02c:  mov    $0x0,%eax
086360db +0x031:  jmp    086361fd <+0x153>
086360e0 +0x036:  mov    0x14(%ebp),%eax
086360e3 +0x039:  mov    %eax,0x4(%esp)
086360e7 +0x03d:  mov    -0xc(%ebp),%eax
086360ea +0x040:  mov    %eax,(%esp)
086360ed +0x043:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
086360f2 +0x048:  mov    %eax,%ebx
086360f4 +0x04a:  movl   $0x0,0xc(%esp)
086360fc +0x052:  movl   $0xa64,0x8(%esp)
08636104 +0x05a:  movl   $&_ZZN15TimerForbidMove12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863610c +0x062:  lea    -0x3c(%ebp),%eax
0863610f +0x065:  mov    %eax,(%esp)
08636112 +0x068:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636117 +0x06d:  mov    %ebx,0x8(%esp)
0863611b +0x071:  movl   $"TimerForbidMove %s",0x4(%esp)
08636123 +0x079:  lea    -0x3c(%ebp),%eax
08636126 +0x07c:  mov    %eax,(%esp)
08636129 +0x07f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863612e +0x084:  mov    0x14(%ebp),%eax
08636131 +0x087:  mov    %eax,0x4(%esp)
08636135 +0x08b:  mov    -0xc(%ebp),%eax
08636138 +0x08e:  mov    %eax,(%esp)
0863613b +0x091:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
08636140 +0x096:  mov    %eax,%ebx
08636142 +0x098:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08636147 +0x09d:  mov    %ebx,0x4(%esp)
0863614b +0x0a1:  mov    %eax,(%esp)
0863614e +0x0a4:  call   086cde5a <_ZN9GameWorld10EnableMoveEPKc>  ; GameWorld::EnableMove(char const*)
08636153 +0x0a9:  xor    $0x1,%eax
08636156 +0x0ac:  test   %al,%al
08636158 +0x0ae:  je     086361aa <+0x100>
0863615a +0x0b0:  mov    0x14(%ebp),%eax
0863615d +0x0b3:  mov    %eax,0x4(%esp)
08636161 +0x0b7:  mov    -0xc(%ebp),%eax
08636164 +0x0ba:  mov    %eax,(%esp)
08636167 +0x0bd:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
0863616c +0x0c2:  mov    %eax,%ebx
0863616e +0x0c4:  movl   $0x0,0xc(%esp)
08636176 +0x0cc:  movl   $0xa66,0x8(%esp)
0863617e +0x0d4:  movl   $&_ZZN15TimerForbidMove12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08636186 +0x0dc:  lea    -0x2c(%ebp),%eax
08636189 +0x0df:  mov    %eax,(%esp)
0863618c +0x0e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636191 +0x0e7:  mov    %ebx,0x8(%esp)
08636195 +0x0eb:  movl   $"Failed to enable to move for: %s",0x4(%esp)
0863619d +0x0f3:  lea    -0x2c(%ebp),%eax
086361a0 +0x0f6:  mov    %eax,(%esp)
086361a3 +0x0f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086361a8 +0x0fe:  jmp    086361f8 <+0x14e>
086361aa +0x100:  mov    0x14(%ebp),%eax
086361ad +0x103:  mov    %eax,0x4(%esp)
086361b1 +0x107:  mov    -0xc(%ebp),%eax
086361b4 +0x10a:  mov    %eax,(%esp)
086361b7 +0x10d:  call   0863bece <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3df
086361bc +0x112:  mov    %eax,%ebx
086361be +0x114:  movl   $0x0,0xc(%esp)
086361c6 +0x11c:  movl   $0xa68,0x8(%esp)
086361ce +0x124:  movl   $&_ZZN15TimerForbidMove12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
086361d6 +0x12c:  lea    -0x1c(%ebp),%eax
086361d9 +0x12f:  mov    %eax,(%esp)
086361dc +0x132:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086361e1 +0x137:  mov    %ebx,0x8(%esp)
086361e5 +0x13b:  movl   $"Enabled to move for: %s",0x4(%esp)
086361ed +0x143:  lea    -0x1c(%ebp),%eax
086361f0 +0x146:  mov    %eax,(%esp)
086361f3 +0x149:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086361f8 +0x14e:  mov    $0x1,%eax
086361fd +0x153:  add    $0x54,%esp
08636200 +0x156:  pop    %ebx
08636201 +0x157:  pop    %ebp
08636202 +0x158:  ret
08636203 +0x159:  nop
```

## 反编译 C

```c
// TimerForbidMove::dispatch_sig @ 0x86360aa

/* TimerForbidMove::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerForbidMove::dispatch_sig(TimerForbidMove *this,int param_1,int param_2,uint param_3)

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
                       "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xa64,0);
    cMyTrace::operator()(local_40,"TimerForbidMove %s",uVar3);
    pcVar4 = (char *)CUser::get_charac_name_by_charac_no(local_10,param_3);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::EnableMove(this_00,pcVar4);
    if (cVar1 == '\x01') {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_20,
                         "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa68,0);
      cMyTrace::operator()(local_20,"Enabled to move for: %s",uVar3);
    }
    else {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa66,0);
      cMyTrace::operator()(local_30,"Failed to enable to move for: %s",uVar3);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
