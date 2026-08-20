# isHelpAbuseParty

`_ZN6CParty16isHelpAbusePartyEv`

`CParty::isHelpAbuseParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a21d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a21d4  _ZN6CParty16isHelpAbusePartyEv
#           CParty::isHelpAbuseParty()
# range [0x085a21d4, 0x085a2245]
085a21d4 +0x00:  push   %ebp
085a21d5 +0x01:  mov    %esp,%ebp
085a21d7 +0x03:  sub    $0x28,%esp
085a21da +0x06:  movl   $0x0,-0x10(%ebp)
085a21e1 +0x0d:  jmp    085a2233 <+0x5f>
085a21e3 +0x0f:  mov    -0x10(%ebp),%eax
085a21e6 +0x12:  mov    %eax,0x4(%esp)
085a21ea +0x16:  mov    0x8(%ebp),%eax
085a21ed +0x19:  mov    %eax,(%esp)
085a21f0 +0x1c:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085a21f5 +0x21:  xor    $0x1,%eax
085a21f8 +0x24:  test   %al,%al
085a21fa +0x26:  jne    085a222e <+0x5a>
085a21fc +0x28:  mov    -0x10(%ebp),%eax
085a21ff +0x2b:  mov    %eax,0x4(%esp)
085a2203 +0x2f:  mov    0x8(%ebp),%eax
085a2206 +0x32:  mov    %eax,(%esp)
085a2209 +0x35:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085a220e +0x3a:  mov    %eax,-0xc(%ebp)
085a2211 +0x3d:  mov    -0xc(%ebp),%eax
085a2214 +0x40:  mov    %eax,0x4(%esp)
085a2218 +0x44:  mov    0x8(%ebp),%eax
085a221b +0x47:  mov    %eax,(%esp)
085a221e +0x4a:  call   085a21ca <_ZN6CParty16isHelpAbusePartyEP5CUser>  ; CParty::isHelpAbuseParty(CUser*)
085a2223 +0x4f:  test   %al,%al
085a2225 +0x51:  je     085a222f <+0x5b>
085a2227 +0x53:  mov    $0x1,%eax
085a222c +0x58:  jmp    085a2243 <+0x6f>
085a222e +0x5a:  nop
085a222f +0x5b:  addl   $0x1,-0x10(%ebp)
085a2233 +0x5f:  cmpl   $0x3,-0x10(%ebp)
085a2237 +0x63:  setle  %al
085a223a +0x66:  test   %al,%al
085a223c +0x68:  jne    085a21e3 <+0xf>
085a223e +0x6a:  mov    $0x0,%eax
085a2243 +0x6f:  leave
085a2244 +0x70:  ret
085a2245 +0x71:  nop
```

## 反编译 C

```c
// CParty::isHelpAbuseParty @ 0x85a21d4

/* CParty::isHelpAbuseParty() */

undefined4 __thiscall CParty::isHelpAbuseParty(CParty *this)

{
  char cVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    cVar1 = checkValidUser(this,local_14);
    if (cVar1 == '\x01') {
      get_user(this,local_14);
      cVar1 = isHelpAbuseParty((CUser *)this);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
