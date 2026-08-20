# send_loadingcheck_msg

`_ZN6CParty21send_loadingcheck_msgEv`

`CParty::send_loadingcheck_msg()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b1fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b1fe0  _ZN6CParty21send_loadingcheck_msgEv
#           CParty::send_loadingcheck_msg()
# range [0x085b1fe0, 0x085b2067]
085b1fe0 +0x00:  push   %ebp
085b1fe1 +0x01:  mov    %esp,%ebp
085b1fe3 +0x03:  push   %esi
085b1fe4 +0x04:  push   %ebx
085b1fe5 +0x05:  sub    $0x30,%esp
085b1fe8 +0x08:  mov    0x8(%ebp),%eax
085b1feb +0x0b:  movb   $0x0,0x119(%eax)
085b1ff2 +0x12:  mov    0x8(%ebp),%eax
085b1ff5 +0x15:  mov    %eax,(%esp)
085b1ff8 +0x18:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b1ffd +0x1d:  cmp    $0x1,%eax
085b2000 +0x20:  jne    085b2009 <+0x29>
085b2002 +0x22:  mov    &_ZL37CONST_SINGLE_MAP_LOADING_WAIT_TIMEOUT,%eax
085b2007 +0x27:  jmp    085b200e <+0x2e>
085b2009 +0x29:  mov    &_ZL36CONST_PARTY_MAP_LOADING_WAIT_TIMEOUT,%eax
085b200e +0x2e:  mov    %eax,-0xc(%ebp)
085b2011 +0x31:  movl   $0xb,0x4(%esp)
085b2019 +0x39:  mov    0x8(%ebp),%eax
085b201c +0x3c:  mov    %eax,(%esp)
085b201f +0x3f:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b2024 +0x44:  mov    %eax,%ebx
085b2026 +0x46:  mov    0x8(%ebp),%eax
085b2029 +0x49:  mov    0x64(%eax),%esi
085b202c +0x4c:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b2031 +0x51:  movl   $0x0,0x18(%esp)
085b2039 +0x59:  mov    %ebx,0x14(%esp)
085b203d +0x5d:  mov    -0xc(%ebp),%edx
085b2040 +0x60:  mov    %edx,0x10(%esp)
085b2044 +0x64:  movl   $0xb,0xc(%esp)
085b204c +0x6c:  mov    %esi,0x8(%esp)
085b2050 +0x70:  movl   $0x1,0x4(%esp)
085b2058 +0x78:  mov    %eax,(%esp)
085b205b +0x7b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b2060 +0x80:  add    $0x30,%esp
085b2063 +0x83:  pop    %ebx
085b2064 +0x84:  pop    %esi
085b2065 +0x85:  pop    %ebp
085b2066 +0x86:  ret
085b2067 +0x87:  nop
```

## 反编译 C

```c
// CParty::send_loadingcheck_msg @ 0x85b1fe0

/* CParty::send_loadingcheck_msg() */

void __thiscall CParty::send_loadingcheck_msg(CParty *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  
  this[0x119] = (CParty)0x0;
  iVar2 = get_member_count(this);
  uVar3 = ::CONST_PARTY_MAP_LOADING_WAIT_TIMEOUT;
  if (iVar2 == 1) {
    uVar3 = ::CONST_SINGLE_MAP_LOADING_WAIT_TIMEOUT;
  }
  uVar4 = gen_timer_key(this,0xb);
  uVar1 = *(undefined4 *)(this + 100);
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,1,uVar1,0xb,uVar3,uVar4,0);
  return;
}
```
