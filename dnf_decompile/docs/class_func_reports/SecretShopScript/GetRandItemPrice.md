# GetRandItemPrice

`_ZN16SecretShopScript16GetRandItemPriceEi`

`SecretShopScript::GetRandItemPrice(int)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a83188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a83188  _ZN16SecretShopScript16GetRandItemPriceEi
#           SecretShopScript::GetRandItemPrice(int)
# range [0x08a83188, 0x08a8324d]
08a83188 +0x00:  push   %ebp
08a83189 +0x01:  mov    %esp,%ebp
08a8318b +0x03:  push   %ebx
08a8318c +0x04:  sub    $0x24,%esp
08a8318f +0x07:  call   0807dca0 <_init+0x598>
08a83194 +0x0c:  mov    %eax,%ecx
08a83196 +0x0e:  mov    $0x55555556,%edx
08a8319b +0x13:  mov    %ecx,%eax
08a8319d +0x15:  imul   %edx
08a8319f +0x17:  mov    %ecx,%eax
08a831a1 +0x19:  sar    $0x1f,%eax
08a831a4 +0x1c:  mov    %edx,%ebx
08a831a6 +0x1e:  sub    %eax,%ebx
08a831a8 +0x20:  mov    %ebx,%eax
08a831aa +0x22:  mov    %eax,-0xc(%ebp)
08a831ad +0x25:  mov    -0xc(%ebp),%edx
08a831b0 +0x28:  mov    %edx,%eax
08a831b2 +0x2a:  add    %eax,%eax
08a831b4 +0x2c:  add    %edx,%eax
08a831b6 +0x2e:  mov    %ecx,%edx
08a831b8 +0x30:  sub    %eax,%edx
08a831ba +0x32:  mov    %edx,%eax
08a831bc +0x34:  mov    %eax,-0xc(%ebp)
08a831bf +0x37:  cmpl   $0x0,-0xc(%ebp)
08a831c3 +0x3b:  jne    08a831ff <+0x77>
08a831c5 +0x3d:  fildl  0xc(%ebp)
08a831c8 +0x40:  mov    0x8(%ebp),%eax
08a831cb +0x43:  mov    0x80(%eax),%eax
08a831d1 +0x49:  mov    %eax,-0x1c(%ebp)
08a831d4 +0x4c:  fildl  -0x1c(%ebp)
08a831d7 +0x4f:  fldl   &data#69d7849f(.rodata)
08a831dd +0x55:  fdivrp %st,%st(1)
08a831df +0x57:  fmulp  %st,%st(1)
08a831e1 +0x59:  fnstcw -0x1e(%ebp)
08a831e4 +0x5c:  movzwl -0x1e(%ebp),%eax
08a831e8 +0x60:  mov    $0xc,%ah
08a831ea +0x62:  mov    %ax,-0x20(%ebp)
08a831ee +0x66:  fldcw  -0x20(%ebp)
08a831f1 +0x69:  fistpl -0x1c(%ebp)
08a831f4 +0x6c:  fldcw  -0x1e(%ebp)
08a831f7 +0x6f:  mov    -0x1c(%ebp),%eax
08a831fa +0x72:  add    0xc(%ebp),%eax
08a831fd +0x75:  jmp    08a83248 <+0xc0>
08a831ff +0x77:  cmpl   $0x1,-0xc(%ebp)
08a83203 +0x7b:  jne    08a83245 <+0xbd>
08a83205 +0x7d:  fildl  0xc(%ebp)
08a83208 +0x80:  mov    0x8(%ebp),%eax
08a8320b +0x83:  mov    0x80(%eax),%eax
08a83211 +0x89:  mov    %eax,-0x1c(%ebp)
08a83214 +0x8c:  fildl  -0x1c(%ebp)
08a83217 +0x8f:  fldl   &data#69d7849f(.rodata)
08a8321d +0x95:  fdivrp %st,%st(1)
08a8321f +0x97:  fmulp  %st,%st(1)
08a83221 +0x99:  fnstcw -0x1e(%ebp)
08a83224 +0x9c:  movzwl -0x1e(%ebp),%eax
08a83228 +0xa0:  mov    $0xc,%ah
08a8322a +0xa2:  mov    %ax,-0x20(%ebp)
08a8322e +0xa6:  fldcw  -0x20(%ebp)
08a83231 +0xa9:  fistpl -0x1c(%ebp)
08a83234 +0xac:  fldcw  -0x1e(%ebp)
08a83237 +0xaf:  mov    -0x1c(%ebp),%eax
08a8323a +0xb2:  mov    0xc(%ebp),%edx
08a8323d +0xb5:  mov    %edx,%ecx
08a8323f +0xb7:  sub    %eax,%ecx
08a83241 +0xb9:  mov    %ecx,%eax
08a83243 +0xbb:  jmp    08a83248 <+0xc0>
08a83245 +0xbd:  mov    0xc(%ebp),%eax
08a83248 +0xc0:  add    $0x24,%esp
08a8324b +0xc3:  pop    %ebx
08a8324c +0xc4:  pop    %ebp
08a8324d +0xc5:  ret
```

## 反编译 C

```c
// SecretShopScript::GetRandItemPrice @ 0x8a83188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretShopScript::GetRandItemPrice(int) */

int __thiscall SecretShopScript::GetRandItemPrice(SecretShopScript *this,int param_1)

{
  int iVar1;
  
  iVar1 = rand();
  if (iVar1 % 3 == 0) {
    param_1 = (int)ROUND(((double)*(int *)(this + 0x80) / _DAT_08e282b0) * (double)param_1) +
              param_1;
  }
  else if (iVar1 % 3 == 1) {
    param_1 = param_1 - (int)ROUND(((double)*(int *)(this + 0x80) / _DAT_08e282b0) * (double)param_1
                                  );
  }
  return param_1;
}
```
