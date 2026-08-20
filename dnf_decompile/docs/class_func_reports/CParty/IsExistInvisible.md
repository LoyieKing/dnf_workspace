# IsExistInvisible

`_ZN6CParty16IsExistInvisibleEv`

`CParty::IsExistInvisible()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b6410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b6410  _ZN6CParty16IsExistInvisibleEv
#           CParty::IsExistInvisible()
# range [0x085b6410, 0x085b6477]
085b6410 +0x00:  push   %ebp
085b6411 +0x01:  mov    %esp,%ebp
085b6413 +0x03:  sub    $0x28,%esp
085b6416 +0x06:  movl   $0x0,-0xc(%ebp)
085b641d +0x0d:  jmp    085b6466 <+0x56>
085b641f +0x0f:  mov    -0xc(%ebp),%eax
085b6422 +0x12:  mov    %eax,0x4(%esp)
085b6426 +0x16:  mov    0x8(%ebp),%eax
085b6429 +0x19:  mov    %eax,(%esp)
085b642c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b6431 +0x21:  test   %al,%al
085b6433 +0x23:  je     085b6462 <+0x52>
085b6435 +0x25:  mov    -0xc(%ebp),%edx
085b6438 +0x28:  mov    0x8(%ebp),%ecx
085b643b +0x2b:  mov    %edx,%eax
085b643d +0x2d:  add    %eax,%eax
085b643f +0x2f:  add    %edx,%eax
085b6441 +0x31:  shl    $0x3,%eax
085b6444 +0x34:  lea    (%ecx,%eax,1),%eax
085b6447 +0x37:  add    $0x78,%eax
085b644a +0x3a:  mov    (%eax),%eax
085b644c +0x3c:  mov    %eax,(%esp)
085b644f +0x3f:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
085b6454 +0x44:  xor    $0x1,%eax
085b6457 +0x47:  test   %al,%al
085b6459 +0x49:  je     085b6462 <+0x52>
085b645b +0x4b:  mov    $0x1,%eax
085b6460 +0x50:  jmp    085b6476 <+0x66>
085b6462 +0x52:  addl   $0x1,-0xc(%ebp)
085b6466 +0x56:  cmpl   $0x3,-0xc(%ebp)
085b646a +0x5a:  setle  %al
085b646d +0x5d:  test   %al,%al
085b646f +0x5f:  jne    085b641f <+0xf>
085b6471 +0x61:  mov    $0x0,%eax
085b6476 +0x66:  leave
085b6477 +0x67:  ret
```

## 反编译 C

```c
// CParty::IsExistInvisible @ 0x85b6410

/* CParty::IsExistInvisible() */

undefined4 __thiscall CParty::IsExistInvisible(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') &&
       (cVar1 = CUserCharacInfo::IsCurCharacVisible
                          (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78)), cVar1 != '\x01'))
    break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
