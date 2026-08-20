# GetCashShopErr

`_ZN21CSecu_ProtectionField14GetCashShopErrEi`

`CSecu_ProtectionField::GetCashShopErr(int)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x082881a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082881a2  _ZN21CSecu_ProtectionField14GetCashShopErrEi
#           CSecu_ProtectionField::GetCashShopErr(int)
# range [0x082881a2, 0x0828824d]
082881a2 +0x00:  push   %ebp
082881a3 +0x01:  mov    %esp,%ebp
082881a5 +0x03:  mov    0xc(%ebp),%eax
082881a8 +0x06:  cmp    $0x7b,%eax
082881ab +0x09:  je     0828820e <+0x6c>
082881ad +0x0b:  cmp    $0x7b,%eax
082881b0 +0x0e:  jg     082881d2 <+0x30>
082881b2 +0x10:  cmp    $0x73,%eax
082881b5 +0x13:  je     08288200 <+0x5e>
082881b7 +0x15:  cmp    $0x73,%eax
082881ba +0x18:  jg     082881c6 <+0x24>
082881bc +0x1a:  cmp    $0x72,%eax
082881bf +0x1d:  je     08288223 <+0x81>
082881c1 +0x1f:  jmp    08288246 <+0xa4>
082881c6 +0x24:  cmp    $0x78,%eax
082881c9 +0x27:  je     0828823f <+0x9d>
082881cb +0x29:  cmp    $0x7a,%eax
082881ce +0x2c:  je     08288207 <+0x65>
082881d0 +0x2e:  jmp    08288246 <+0xa4>
082881d2 +0x30:  cmp    $0xcf,%eax
082881d7 +0x35:  je     08288238 <+0x96>
082881d9 +0x37:  cmp    $0xcf,%eax
082881de +0x3c:  jg     082881f0 <+0x4e>
082881e0 +0x3e:  cmp    $0x88,%eax
082881e5 +0x43:  je     08288215 <+0x73>
082881e7 +0x45:  cmp    $0x89,%eax
082881ec +0x4a:  je     0828821c <+0x7a>
082881ee +0x4c:  jmp    08288246 <+0xa4>
082881f0 +0x4e:  cmp    $0xe4,%eax
082881f5 +0x53:  je     08288231 <+0x8f>
082881f7 +0x55:  cmp    $0xe5,%eax
082881fc +0x5a:  je     0828822a <+0x88>
082881fe +0x5c:  jmp    08288246 <+0xa4>
08288200 +0x5e:  mov    $0x82,%eax
08288205 +0x63:  jmp    0828824b <+0xa9>
08288207 +0x65:  mov    $0x83,%eax
0828820c +0x6a:  jmp    0828824b <+0xa9>
0828820e +0x6c:  mov    $0x84,%eax
08288213 +0x71:  jmp    0828824b <+0xa9>
08288215 +0x73:  mov    $0x85,%eax
0828821a +0x78:  jmp    0828824b <+0xa9>
0828821c +0x7a:  mov    $0x86,%eax
08288221 +0x7f:  jmp    0828824b <+0xa9>
08288223 +0x81:  mov    $0x87,%eax
08288228 +0x86:  jmp    0828824b <+0xa9>
0828822a +0x88:  mov    $0x88,%eax
0828822f +0x8d:  jmp    0828824b <+0xa9>
08288231 +0x8f:  mov    $0x89,%eax
08288236 +0x94:  jmp    0828824b <+0xa9>
08288238 +0x96:  mov    $0x8a,%eax
0828823d +0x9b:  jmp    0828824b <+0xa9>
0828823f +0x9d:  mov    $0x8b,%eax
08288244 +0xa2:  jmp    0828824b <+0xa9>
08288246 +0xa4:  mov    $0x1,%eax
0828824b +0xa9:  pop    %ebp
0828824c +0xaa:  ret
0828824d +0xab:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::GetCashShopErr @ 0x82881a2

/* CSecu_ProtectionField::GetCashShopErr(int) */

undefined4 __thiscall CSecu_ProtectionField::GetCashShopErr(CSecu_ProtectionField *this,int param_1)

{
  if (param_1 == 0x7b) {
    return 0x84;
  }
  if (param_1 < 0x7c) {
    if (param_1 == 0x73) {
      return 0x82;
    }
    if (param_1 < 0x74) {
      if (param_1 == 0x72) {
        return 0x87;
      }
    }
    else {
      if (param_1 == 0x78) {
        return 0x8b;
      }
      if (param_1 == 0x7a) {
        return 0x83;
      }
    }
  }
  else {
    if (param_1 == 0xcf) {
      return 0x8a;
    }
    if (param_1 < 0xd0) {
      if (param_1 == 0x88) {
        return 0x85;
      }
      if (param_1 == 0x89) {
        return 0x86;
      }
    }
    else {
      if (param_1 == 0xe4) {
        return 0x89;
      }
      if (param_1 == 0xe5) {
        return 0x88;
      }
    }
  }
  return 1;
}
```
