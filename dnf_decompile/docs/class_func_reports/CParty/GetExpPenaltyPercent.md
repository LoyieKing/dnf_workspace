# GetExpPenaltyPercent

`_ZNK6CParty20GetExpPenaltyPercentEii`

`CParty::GetExpPenaltyPercent(int, int) const`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a2320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a2320  _ZNK6CParty20GetExpPenaltyPercentEii
#           CParty::GetExpPenaltyPercent(int, int) const
# range [0x085a2320, 0x085a23db]
085a2320 +0x00:  push   %ebp
085a2321 +0x01:  mov    %esp,%ebp
085a2323 +0x03:  sub    $0x10,%esp
085a2326 +0x06:  cmpl   $0x13,0xc(%ebp)
085a232a +0x0a:  jg     085a2373 <+0x53>
085a232c +0x0c:  mov    0x10(%ebp),%eax
085a232f +0x0f:  mov    0xc(%ebp),%edx
085a2332 +0x12:  mov    %edx,%ecx
085a2334 +0x14:  sub    %eax,%ecx
085a2336 +0x16:  mov    %ecx,%eax
085a2338 +0x18:  mov    %eax,%edx
085a233a +0x1a:  sar    $0x1f,%edx
085a233d +0x1d:  xor    %edx,%eax
085a233f +0x1f:  sub    %edx,%eax
085a2341 +0x21:  mov    %eax,-0x8(%ebp)
085a2344 +0x24:  cmpl   $0x5,-0x8(%ebp)
085a2348 +0x28:  jbe    085a2366 <+0x46>
085a234a +0x2a:  cmpl   $0x9,-0x8(%ebp)
085a234e +0x2e:  ja     085a2366 <+0x46>
085a2350 +0x30:  mov    $0xa,%eax
085a2355 +0x35:  mov    %eax,%edx
085a2357 +0x37:  sub    -0x8(%ebp),%edx
085a235a +0x3a:  mov    %edx,%eax
085a235c +0x3c:  shl    $0x2,%eax
085a235f +0x3f:  add    %edx,%eax
085a2361 +0x41:  shl    $0x2,%eax
085a2364 +0x44:  jmp    085a23d9 <+0xb9>
085a2366 +0x46:  cmpl   $0x9,-0x8(%ebp)
085a236a +0x4a:  jbe    085a23d4 <+0xb4>
085a236c +0x4c:  mov    $0x5,%eax
085a2371 +0x51:  jmp    085a23d9 <+0xb9>
085a2373 +0x53:  mov    0xc(%ebp),%eax
085a2376 +0x56:  cmp    0x10(%ebp),%eax
085a2379 +0x59:  jge    085a238b <+0x6b>
085a237b +0x5b:  mov    0xc(%ebp),%eax
085a237e +0x5e:  imul   $0x64,%eax,%eax
085a2381 +0x61:  mov    %eax,%edx
085a2383 +0x63:  sar    $0x1f,%edx
085a2386 +0x66:  idivl  0x10(%ebp)
085a2389 +0x69:  jmp    085a23d9 <+0xb9>
085a238b +0x6b:  mov    0x10(%ebp),%eax
085a238e +0x6e:  mov    0xc(%ebp),%edx
085a2391 +0x71:  mov    %edx,%ecx
085a2393 +0x73:  sub    %eax,%ecx
085a2395 +0x75:  mov    %ecx,%eax
085a2397 +0x77:  mov    %eax,-0x4(%ebp)
085a239a +0x7a:  cmpl   $0x5,-0x4(%ebp)
085a239e +0x7e:  jbe    085a23bc <+0x9c>
085a23a0 +0x80:  cmpl   $0x9,-0x4(%ebp)
085a23a4 +0x84:  ja     085a23bc <+0x9c>
085a23a6 +0x86:  mov    $0xa,%eax
085a23ab +0x8b:  mov    %eax,%edx
085a23ad +0x8d:  sub    -0x4(%ebp),%edx
085a23b0 +0x90:  mov    %edx,%eax
085a23b2 +0x92:  shl    $0x2,%eax
085a23b5 +0x95:  add    %edx,%eax
085a23b7 +0x97:  shl    $0x2,%eax
085a23ba +0x9a:  jmp    085a23d9 <+0xb9>
085a23bc +0x9c:  mov    0x10(%ebp),%eax
085a23bf +0x9f:  mov    0xc(%ebp),%edx
085a23c2 +0xa2:  mov    %edx,%ecx
085a23c4 +0xa4:  sub    %eax,%ecx
085a23c6 +0xa6:  mov    %ecx,%eax
085a23c8 +0xa8:  cmp    $0x9,%eax
085a23cb +0xab:  jle    085a23d4 <+0xb4>
085a23cd +0xad:  mov    $0x5,%eax
085a23d2 +0xb2:  jmp    085a23d9 <+0xb9>
085a23d4 +0xb4:  mov    $0x64,%eax
085a23d9 +0xb9:  leave
085a23da +0xba:  ret
085a23db +0xbb:  nop
```

## 反编译 C

```c
// CParty::GetExpPenaltyPercent @ 0x85a2320

/* CParty::GetExpPenaltyPercent(int, int) const */

int __thiscall CParty::GetExpPenaltyPercent(CParty *this,int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 < 0x14) {
    uVar1 = param_1 - param_2 >> 0x1f;
    uVar1 = (param_1 - param_2 ^ uVar1) - uVar1;
    if ((5 < uVar1) && (uVar1 < 10)) {
      return (10 - uVar1) * 0x14;
    }
    if (9 < uVar1) {
      return 5;
    }
  }
  else {
    if (param_1 < param_2) {
      return (param_1 * 100) / param_2;
    }
    uVar1 = param_1 - param_2;
    if ((5 < uVar1) && (uVar1 < 10)) {
      return (10 - uVar1) * 0x14;
    }
    if (9 < param_1 - param_2) {
      return 5;
    }
  }
  return 100;
}
```
