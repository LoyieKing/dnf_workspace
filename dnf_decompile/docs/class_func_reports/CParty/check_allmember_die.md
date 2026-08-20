# check_allmember_die

`_ZN6CParty19check_allmember_dieEv`

`CParty::check_allmember_die()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2b52  _ZN6CParty19check_allmember_dieEv
#           CParty::check_allmember_die()
# range [0x085b2b52, 0x085b2ba9]
085b2b52 +0x00:  push   %ebp
085b2b53 +0x01:  mov    %esp,%ebp
085b2b55 +0x03:  sub    $0x28,%esp
085b2b58 +0x06:  movl   $0x0,-0xc(%ebp)
085b2b5f +0x0d:  jmp    085b2b98 <+0x46>
085b2b61 +0x0f:  mov    -0xc(%ebp),%eax
085b2b64 +0x12:  mov    %eax,0x4(%esp)
085b2b68 +0x16:  mov    0x8(%ebp),%eax
085b2b6b +0x19:  mov    %eax,(%esp)
085b2b6e +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b2b73 +0x21:  xor    $0x1,%eax
085b2b76 +0x24:  test   %al,%al
085b2b78 +0x26:  jne    085b2b93 <+0x41>
085b2b7a +0x28:  mov    -0xc(%ebp),%eax
085b2b7d +0x2b:  mov    0x8(%ebp),%edx
085b2b80 +0x2e:  movzbl 0x380(%edx,%eax,1),%eax
085b2b88 +0x36:  test   %al,%al
085b2b8a +0x38:  je     085b2b94 <+0x42>
085b2b8c +0x3a:  mov    $0x0,%eax
085b2b91 +0x3f:  jmp    085b2ba8 <+0x56>
085b2b93 +0x41:  nop
085b2b94 +0x42:  addl   $0x1,-0xc(%ebp)
085b2b98 +0x46:  cmpl   $0x3,-0xc(%ebp)
085b2b9c +0x4a:  setle  %al
085b2b9f +0x4d:  test   %al,%al
085b2ba1 +0x4f:  jne    085b2b61 <+0xf>
085b2ba3 +0x51:  mov    $0x1,%eax
085b2ba8 +0x56:  leave
085b2ba9 +0x57:  ret
```

## 反编译 C

```c
// CParty::check_allmember_die @ 0x85b2b52

/* CParty::check_allmember_die() */

undefined4 __thiscall CParty::check_allmember_die(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (this[local_10 + 0x380] != (CParty)0x0)) break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
