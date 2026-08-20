# GetUserPosition

`_ZN6CParty15GetUserPositionEP5CUser`

`CParty::GetUserPosition(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9e20  _ZN6CParty15GetUserPositionEP5CUser
#           CParty::GetUserPosition(CUser*)
# range [0x085b9e20, 0x085b9e7f]
085b9e20 +0x00:  push   %ebp
085b9e21 +0x01:  mov    %esp,%ebp
085b9e23 +0x03:  sub    $0x28,%esp
085b9e26 +0x06:  movl   $0x0,-0xc(%ebp)
085b9e2d +0x0d:  jmp    085b9e6e <+0x4e>
085b9e2f +0x0f:  mov    -0xc(%ebp),%eax
085b9e32 +0x12:  mov    %eax,0x4(%esp)
085b9e36 +0x16:  mov    0x8(%ebp),%eax
085b9e39 +0x19:  mov    %eax,(%esp)
085b9e3c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b9e41 +0x21:  xor    $0x1,%eax
085b9e44 +0x24:  test   %al,%al
085b9e46 +0x26:  jne    085b9e69 <+0x49>
085b9e48 +0x28:  mov    -0xc(%ebp),%edx
085b9e4b +0x2b:  mov    0x8(%ebp),%ecx
085b9e4e +0x2e:  mov    %edx,%eax
085b9e50 +0x30:  add    %eax,%eax
085b9e52 +0x32:  add    %edx,%eax
085b9e54 +0x34:  shl    $0x3,%eax
085b9e57 +0x37:  lea    (%ecx,%eax,1),%eax
085b9e5a +0x3a:  add    $0x78,%eax
085b9e5d +0x3d:  mov    (%eax),%eax
085b9e5f +0x3f:  cmp    0xc(%ebp),%eax
085b9e62 +0x42:  jne    085b9e6a <+0x4a>
085b9e64 +0x44:  mov    -0xc(%ebp),%eax
085b9e67 +0x47:  jmp    085b9e7e <+0x5e>
085b9e69 +0x49:  nop
085b9e6a +0x4a:  addl   $0x1,-0xc(%ebp)
085b9e6e +0x4e:  cmpl   $0x3,-0xc(%ebp)
085b9e72 +0x52:  setle  %al
085b9e75 +0x55:  test   %al,%al
085b9e77 +0x57:  jne    085b9e2f <+0xf>
085b9e79 +0x59:  mov    $0xffffffff,%eax
085b9e7e +0x5e:  leave
085b9e7f +0x5f:  ret
```

## 反编译 C

```c
// CParty::GetUserPosition @ 0x85b9e20

/* CParty::GetUserPosition(CUser*) */

int __thiscall CParty::GetUserPosition(CParty *this,CUser *param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return -1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
