# SetRoutingTimerOver

`_ZN6CParty19SetRoutingTimerOverEv`

`CParty::SetRoutingTimerOver()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba222  _ZN6CParty19SetRoutingTimerOverEv
#           CParty::SetRoutingTimerOver()
# range [0x085ba222, 0x085ba293]
085ba222 +0x00:  push   %ebp
085ba223 +0x01:  mov    %esp,%ebp
085ba225 +0x03:  sub    $0x28,%esp
085ba228 +0x06:  movl   $0x0,-0xc(%ebp)
085ba22f +0x0d:  jmp    085ba286 <+0x64>
085ba231 +0x0f:  mov    -0xc(%ebp),%eax
085ba234 +0x12:  mov    %eax,0x4(%esp)
085ba238 +0x16:  mov    0x8(%ebp),%eax
085ba23b +0x19:  mov    %eax,(%esp)
085ba23e +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba243 +0x21:  xor    $0x1,%eax
085ba246 +0x24:  test   %al,%al
085ba248 +0x26:  jne    085ba281 <+0x5f>
085ba24a +0x28:  mov    0x8(%ebp),%eax
085ba24d +0x2b:  mov    -0xc(%ebp),%edx
085ba250 +0x2e:  mov    %edx,0x4(%esp)
085ba254 +0x32:  mov    %eax,(%esp)
085ba257 +0x35:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba25c +0x3a:  test   %al,%al
085ba25e +0x3c:  sete   %al
085ba261 +0x3f:  test   %al,%al
085ba263 +0x41:  je     085ba282 <+0x60>
085ba265 +0x43:  mov    0x8(%ebp),%eax
085ba268 +0x46:  movl   $0x2,0x8(%esp)
085ba270 +0x4e:  mov    -0xc(%ebp),%edx
085ba273 +0x51:  mov    %edx,0x4(%esp)
085ba277 +0x55:  mov    %eax,(%esp)
085ba27a +0x58:  call   085bf6b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc16>  ; global constructors keyed to CParty::cMember::cMember()+0xc16
085ba27f +0x5d:  jmp    085ba282 <+0x60>
085ba281 +0x5f:  nop
085ba282 +0x60:  addl   $0x1,-0xc(%ebp)
085ba286 +0x64:  cmpl   $0x3,-0xc(%ebp)
085ba28a +0x68:  setle  %al
085ba28d +0x6b:  test   %al,%al
085ba28f +0x6d:  jne    085ba231 <+0xf>
085ba291 +0x6f:  leave
085ba292 +0x70:  ret
085ba293 +0x71:  nop
```

## 反编译 C

```c
// CParty::SetRoutingTimerOver @ 0x85ba222

/* CParty::SetRoutingTimerOver() */

void __thiscall CParty::SetRoutingTimerOver(CParty *this)

{
  char cVar1;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      cVar1 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_10);
      if (cVar1 == '\0') {
        CItemRoutingData::SetMemberRoutingState((CItemRoutingData *)this,local_10,'\x02');
      }
    }
  }
  return;
}
```
