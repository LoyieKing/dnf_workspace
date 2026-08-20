# GetCoinCount

`_ZN6CParty12GetCoinCountEP5CUser`

`CParty::GetCoinCount(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b357c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b357c  _ZN6CParty12GetCoinCountEP5CUser
#           CParty::GetCoinCount(CUser*)
# range [0x085b357c, 0x085b35f3]
085b357c +0x00:  push   %ebp
085b357d +0x01:  mov    %esp,%ebp
085b357f +0x03:  sub    $0x28,%esp
085b3582 +0x06:  movl   $0x0,-0xc(%ebp)
085b3589 +0x0d:  jmp    085b35e2 <+0x66>
085b358b +0x0f:  mov    -0xc(%ebp),%eax
085b358e +0x12:  mov    %eax,0x4(%esp)
085b3592 +0x16:  mov    0x8(%ebp),%eax
085b3595 +0x19:  mov    %eax,(%esp)
085b3598 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b359d +0x21:  xor    $0x1,%eax
085b35a0 +0x24:  test   %al,%al
085b35a2 +0x26:  jne    085b35dd <+0x61>
085b35a4 +0x28:  mov    -0xc(%ebp),%edx
085b35a7 +0x2b:  mov    0x8(%ebp),%ecx
085b35aa +0x2e:  mov    %edx,%eax
085b35ac +0x30:  add    %eax,%eax
085b35ae +0x32:  add    %edx,%eax
085b35b0 +0x34:  shl    $0x3,%eax
085b35b3 +0x37:  lea    (%ecx,%eax,1),%eax
085b35b6 +0x3a:  add    $0x78,%eax
085b35b9 +0x3d:  mov    (%eax),%eax
085b35bb +0x3f:  cmp    0xc(%ebp),%eax
085b35be +0x42:  jne    085b35de <+0x62>
085b35c0 +0x44:  mov    -0xc(%ebp),%edx
085b35c3 +0x47:  mov    0x8(%ebp),%eax
085b35c6 +0x4a:  add    $0x2c0,%edx
085b35cc +0x50:  mov    0x14(%eax,%edx,4),%eax
085b35d0 +0x54:  mov    $0x7fffffff,%edx
085b35d5 +0x59:  mov    %edx,%ecx
085b35d7 +0x5b:  sub    %eax,%ecx
085b35d9 +0x5d:  mov    %ecx,%eax
085b35db +0x5f:  jmp    085b35f2 <+0x76>
085b35dd +0x61:  nop
085b35de +0x62:  addl   $0x1,-0xc(%ebp)
085b35e2 +0x66:  cmpl   $0x3,-0xc(%ebp)
085b35e6 +0x6a:  setle  %al
085b35e9 +0x6d:  test   %al,%al
085b35eb +0x6f:  jne    085b358b <+0xf>
085b35ed +0x71:  mov    $0x0,%eax
085b35f2 +0x76:  leave
085b35f3 +0x77:  ret
```

## 反编译 C

```c
// CParty::GetCoinCount @ 0x85b357c

/* CParty::GetCoinCount(CUser*) */

int __thiscall CParty::GetCoinCount(CParty *this,CUser *param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) break;
    local_10 = local_10 + 1;
  }
  return 0x7fffffff - *(int *)(this + (local_10 + 0x2c0) * 4 + 0x14);
}
```
