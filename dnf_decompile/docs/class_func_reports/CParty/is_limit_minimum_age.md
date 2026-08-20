# is_limit_minimum_age

`_ZN6CParty20is_limit_minimum_ageEiRi`

`CParty::is_limit_minimum_age(int, int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a210  _ZN6CParty20is_limit_minimum_ageEiRi
#           CParty::is_limit_minimum_age(int, int&)
# range [0x0859a210, 0x0859a285]
0859a210 +0x00:  push   %ebp
0859a211 +0x01:  mov    %esp,%ebp
0859a213 +0x03:  sub    $0x28,%esp
0859a216 +0x06:  movl   $0x0,-0xc(%ebp)
0859a21d +0x0d:  jmp    0859a274 <+0x64>
0859a21f +0x0f:  mov    -0xc(%ebp),%eax
0859a222 +0x12:  mov    %eax,0x4(%esp)
0859a226 +0x16:  mov    0x8(%ebp),%eax
0859a229 +0x19:  mov    %eax,(%esp)
0859a22c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a231 +0x21:  test   %al,%al
0859a233 +0x23:  je     0859a270 <+0x60>
0859a235 +0x25:  mov    -0xc(%ebp),%edx
0859a238 +0x28:  mov    0x8(%ebp),%ecx
0859a23b +0x2b:  mov    %edx,%eax
0859a23d +0x2d:  add    %eax,%eax
0859a23f +0x2f:  add    %edx,%eax
0859a241 +0x31:  shl    $0x3,%eax
0859a244 +0x34:  lea    (%ecx,%eax,1),%eax
0859a247 +0x37:  add    $0x78,%eax
0859a24a +0x3a:  mov    (%eax),%eax
0859a24c +0x3c:  mov    0x10(%ebp),%edx
0859a24f +0x3f:  mov    %edx,0x8(%esp)
0859a253 +0x43:  mov    0xc(%ebp),%edx
0859a256 +0x46:  mov    %edx,0x4(%esp)
0859a25a +0x4a:  mov    %eax,(%esp)
0859a25d +0x4d:  call   0864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>  ; CUser::CheckLimitMiniumAge(int, int&)
0859a262 +0x52:  xor    $0x1,%eax
0859a265 +0x55:  test   %al,%al
0859a267 +0x57:  je     0859a270 <+0x60>
0859a269 +0x59:  mov    $0x0,%eax
0859a26e +0x5e:  jmp    0859a284 <+0x74>
0859a270 +0x60:  addl   $0x1,-0xc(%ebp)
0859a274 +0x64:  cmpl   $0x3,-0xc(%ebp)
0859a278 +0x68:  setle  %al
0859a27b +0x6b:  test   %al,%al
0859a27d +0x6d:  jne    0859a21f <+0xf>
0859a27f +0x6f:  mov    $0x1,%eax
0859a284 +0x74:  leave
0859a285 +0x75:  ret
```

## 反编译 C

```c
// CParty::is_limit_minimum_age @ 0x859a210

/* CParty::is_limit_minimum_age(int, int&) */

undefined4 __thiscall CParty::is_limit_minimum_age(CParty *this,int param_1,int *param_2)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') &&
       (cVar1 = CUser::CheckLimitMiniumAge
                          (*(CUser **)(this + local_10 * 0x18 + 0x78),param_1,param_2),
       cVar1 != '\x01')) break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
