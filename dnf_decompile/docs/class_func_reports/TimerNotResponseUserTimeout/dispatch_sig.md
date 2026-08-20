# dispatch_sig

`_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij`

`TimerNotResponseUserTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerNotResponseUserTimeout` | `0x0863695a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863695a  _ZN27TimerNotResponseUserTimeout12dispatch_sigEiij
#           TimerNotResponseUserTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863695a, 0x08636a7b]
0863695a +0x000:  push   %ebp
0863695b +0x001:  mov    %esp,%ebp
0863695d +0x003:  push   %ebx
0863695e +0x004:  sub    $0x44,%esp
08636961 +0x007:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08636966 +0x00c:  movl   $0xc,0x8(%esp)
0863696e +0x014:  mov    0xc(%ebp),%edx
08636971 +0x017:  mov    %edx,0x4(%esp)
08636975 +0x01b:  mov    %eax,(%esp)
08636978 +0x01e:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863697d +0x023:  mov    %eax,-0xc(%ebp)
08636980 +0x026:  cmpl   $0x0,-0xc(%ebp)
08636984 +0x02a:  jne    08636990 <+0x36>
08636986 +0x02c:  mov    $0x0,%eax
0863698b +0x031:  jmp    08636a76 <+0x11c>
08636990 +0x036:  mov    -0xc(%ebp),%eax
08636993 +0x039:  mov    %eax,(%esp)
08636996 +0x03c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0863699b +0x041:  movzwl %ax,%eax
0863699e +0x044:  cmp    0x10(%ebp),%eax
086369a1 +0x047:  setne  %al
086369a4 +0x04a:  test   %al,%al
086369a6 +0x04c:  je     086369b2 <+0x58>
086369a8 +0x04e:  mov    $0x0,%eax
086369ad +0x053:  jmp    08636a76 <+0x11c>
086369b2 +0x058:  mov    -0xc(%ebp),%eax
086369b5 +0x05b:  mov    %eax,(%esp)
086369b8 +0x05e:  call   0863bf90 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4a1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4a1
086369bd +0x063:  xor    $0x1,%eax
086369c0 +0x066:  test   %al,%al
086369c2 +0x068:  je     08636a71 <+0x117>
086369c8 +0x06e:  movl   $0x0,0xc(%esp)
086369d0 +0x076:  movl   $0x0,0x8(%esp)
086369d8 +0x07e:  movl   $0x1d,0x4(%esp)
086369e0 +0x086:  mov    -0xc(%ebp),%eax
086369e3 +0x089:  mov    %eax,(%esp)
086369e6 +0x08c:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086369eb +0x091:  movl   $0x0,-0x30(%ebp)
086369f2 +0x098:  movl   $0x0,-0x2c(%ebp)
086369f9 +0x09f:  movl   $0x0,-0x28(%ebp)
08636a00 +0x0a6:  movl   $0x0,-0x24(%ebp)
08636a07 +0x0ad:  movl   $0x0,-0x20(%ebp)
08636a0e +0x0b4:  mov    -0xc(%ebp),%eax
08636a11 +0x0b7:  lea    0xe0(%eax),%edx
08636a17 +0x0bd:  movl   $0x14,0x8(%esp)
08636a1f +0x0c5:  lea    -0x30(%ebp),%eax
08636a22 +0x0c8:  mov    %eax,0x4(%esp)
08636a26 +0x0cc:  mov    %edx,(%esp)
08636a29 +0x0cf:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08636a2e +0x0d4:  mov    %eax,%ebx
08636a30 +0x0d6:  movl   $0x0,0xc(%esp)
08636a38 +0x0de:  movl   $0xb73,0x8(%esp)
08636a40 +0x0e6:  movl   $&_ZZN27TimerNotResponseUserTimeout12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08636a48 +0x0ee:  lea    -0x1c(%ebp),%eax
08636a4b +0x0f1:  mov    %eax,(%esp)
08636a4e +0x0f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08636a53 +0x0f9:  mov    %ebx,0xc(%esp)
08636a57 +0x0fd:  mov    0xc(%ebp),%eax
08636a5a +0x100:  mov    %eax,0x8(%esp)
08636a5e +0x104:  movl   $"Not response user timeout: idx(%d), IP(%s)",0x4(%esp)
08636a66 +0x10c:  lea    -0x1c(%ebp),%eax
08636a69 +0x10f:  mov    %eax,(%esp)
08636a6c +0x112:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08636a71 +0x117:  mov    $0x1,%eax
08636a76 +0x11c:  add    $0x44,%esp
08636a79 +0x11f:  pop    %ebx
08636a7a +0x120:  pop    %ebp
08636a7b +0x121:  ret
```

## 反编译 C

```c
// TimerNotResponseUserTimeout::dispatch_sig @ 0x863695a

/* TimerNotResponseUserTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNotResponseUserTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_34 [20];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar2,param_2);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(local_10);
    if ((uVar4 & 0xffff) == param_3) {
      cVar1 = CUser::IsRecvEvent(local_10);
      if (cVar1 != '\x01') {
        CUser::DisConnSig(local_10,0x1d,0,0);
        local_34[0] = '\0';
        local_34[1] = '\0';
        local_34[2] = '\0';
        local_34[3] = '\0';
        local_34[4] = '\0';
        local_34[5] = '\0';
        local_34[6] = '\0';
        local_34[7] = '\0';
        local_34[8] = '\0';
        local_34[9] = '\0';
        local_34[10] = '\0';
        local_34[0xb] = '\0';
        local_34[0xc] = '\0';
        local_34[0xd] = '\0';
        local_34[0xe] = '\0';
        local_34[0xf] = '\0';
        local_34[0x10] = '\0';
        local_34[0x11] = '\0';
        local_34[0x12] = '\0';
        local_34[0x13] = '\0';
        uVar3 = CNetwork<4096,450000>::GetPeerIP2
                          ((CNetwork<4096,450000> *)(local_10 + 0xe0),local_34,0x14);
        cMyTrace::cMyTrace(local_20,
                           "virtual bool TimerNotResponseUserTimeout::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0xb73,0);
        cMyTrace::operator()(local_20,"Not response user timeout: idx(%d), IP(%s)",param_2,uVar3);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
