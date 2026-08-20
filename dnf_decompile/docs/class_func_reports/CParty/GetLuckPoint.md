# GetLuckPoint

`_ZN6CParty12GetLuckPointEP10CLuckPointb`

`CParty::GetLuckPoint(CLuckPoint*, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b61be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b61be  _ZN6CParty12GetLuckPointEP10CLuckPointb
#           CParty::GetLuckPoint(CLuckPoint*, bool)
# range [0x085b61be, 0x085b624d]
085b61be +0x00:  push   %ebp
085b61bf +0x01:  mov    %esp,%ebp
085b61c1 +0x03:  sub    $0x38,%esp
085b61c4 +0x06:  mov    0x10(%ebp),%eax
085b61c7 +0x09:  mov    %al,-0x1c(%ebp)
085b61ca +0x0c:  cmpl   $0x0,0xc(%ebp)
085b61ce +0x10:  je     085b624a <+0x8c>
085b61d0 +0x12:  movl   $0x0,-0xc(%ebp)
085b61d7 +0x19:  jmp    085b623d <+0x7f>
085b61d9 +0x1b:  mov    -0xc(%ebp),%eax
085b61dc +0x1e:  mov    %eax,0x4(%esp)
085b61e0 +0x22:  mov    0x8(%ebp),%eax
085b61e3 +0x25:  mov    %eax,(%esp)
085b61e6 +0x28:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b61eb +0x2d:  xor    $0x1,%eax
085b61ee +0x30:  test   %al,%al
085b61f0 +0x32:  jne    085b6235 <+0x77>
085b61f2 +0x34:  cmpb   $0x0,-0x1c(%ebp)
085b61f6 +0x38:  je     085b620d <+0x4f>
085b61f8 +0x3a:  mov    -0xc(%ebp),%eax
085b61fb +0x3d:  mov    0x8(%ebp),%edx
085b61fe +0x40:  movzbl 0x380(%edx,%eax,1),%eax
085b6206 +0x48:  xor    $0x1,%eax
085b6209 +0x4b:  test   %al,%al
085b620b +0x4d:  jne    085b6238 <+0x7a>
085b620d +0x4f:  mov    -0xc(%ebp),%edx
085b6210 +0x52:  mov    0x8(%ebp),%ecx
085b6213 +0x55:  mov    %edx,%eax
085b6215 +0x57:  add    %eax,%eax
085b6217 +0x59:  add    %edx,%eax
085b6219 +0x5b:  shl    $0x3,%eax
085b621c +0x5e:  lea    (%ecx,%eax,1),%eax
085b621f +0x61:  add    $0x78,%eax
085b6222 +0x64:  mov    (%eax),%eax
085b6224 +0x66:  mov    %eax,0x4(%esp)
085b6228 +0x6a:  mov    0xc(%ebp),%eax
085b622b +0x6d:  mov    %eax,(%esp)
085b622e +0x70:  call   08550932 <_ZN10CLuckPoint7AddUserEP5CUser>  ; CLuckPoint::AddUser(CUser*)
085b6233 +0x75:  jmp    085b6239 <+0x7b>
085b6235 +0x77:  nop
085b6236 +0x78:  jmp    085b6239 <+0x7b>
085b6238 +0x7a:  nop
085b6239 +0x7b:  addl   $0x1,-0xc(%ebp)
085b623d +0x7f:  cmpl   $0x3,-0xc(%ebp)
085b6241 +0x83:  setle  %al
085b6244 +0x86:  test   %al,%al
085b6246 +0x88:  jne    085b61d9 <+0x1b>
085b6248 +0x8a:  jmp    085b624b <+0x8d>
085b624a +0x8c:  nop
085b624b +0x8d:  leave
085b624c +0x8e:  ret
085b624d +0x8f:  nop
```

## 反编译 C

```c
// CParty::GetLuckPoint @ 0x85b61be

/* CParty::GetLuckPoint(CLuckPoint*, bool) */

void __thiscall CParty::GetLuckPoint(CParty *this,CLuckPoint *param_1,bool param_2)

{
  char cVar1;
  int local_10;
  
  if (param_1 != (CLuckPoint *)0x0) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = _checkValidUser(this,local_10);
      if ((cVar1 == '\x01') && ((!param_2 || (this[local_10 + 0x380] == (CParty)0x1)))) {
        CLuckPoint::AddUser(param_1,*(CUser **)(this + local_10 * 0x18 + 0x78));
      }
    }
  }
  return;
}
```
