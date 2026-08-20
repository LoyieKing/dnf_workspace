# RemovePremium

`_ZN8WongWork12CUserPremium13RemovePremiumEi`

`WongWork::CUserPremium::RemovePremium(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086adba6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086adba6  _ZN8WongWork12CUserPremium13RemovePremiumEi
#           WongWork::CUserPremium::RemovePremium(int)
# range [0x086adba6, 0x086adc69]
086adba6 +0x00:  push   %ebp
086adba7 +0x01:  mov    %esp,%ebp
086adba9 +0x03:  sub    $0x28,%esp
086adbac +0x06:  mov    0xc(%ebp),%edx
086adbaf +0x09:  mov    0x8(%ebp),%ecx
086adbb2 +0x0c:  mov    %edx,%eax
086adbb4 +0x0e:  shl    $0x2,%eax
086adbb7 +0x11:  add    %edx,%eax
086adbb9 +0x13:  shl    $0x2,%eax
086adbbc +0x16:  lea    (%ecx,%eax,1),%eax
086adbbf +0x19:  add    $0x10,%eax
086adbc2 +0x1c:  mov    (%eax),%eax
086adbc4 +0x1e:  cmp    $0x2,%eax
086adbc7 +0x21:  je     086adc66 <+0xc0>
086adbcd +0x27:  mov    0xc(%ebp),%edx
086adbd0 +0x2a:  mov    0x8(%ebp),%ecx
086adbd3 +0x2d:  mov    %edx,%eax
086adbd5 +0x2f:  shl    $0x2,%eax
086adbd8 +0x32:  add    %edx,%eax
086adbda +0x34:  shl    $0x2,%eax
086adbdd +0x37:  movl   $0x0,(%eax,%ecx,1)
086adbe4 +0x3e:  mov    0xc(%ebp),%edx
086adbe7 +0x41:  mov    %edx,%eax
086adbe9 +0x43:  shl    $0x3,%eax
086adbec +0x46:  add    %edx,%eax
086adbee +0x48:  shl    $0x5,%eax
086adbf1 +0x4b:  mov    &g_SPremiumInfo(%eax),%eax
086adbf7 +0x51:  cmp    $0x1,%eax
086adbfa +0x54:  jne    086adc31 <+0x8b>
086adbfc +0x56:  mov    0x8(%ebp),%eax
086adbff +0x59:  mov    0x848(%eax),%eax
086adc05 +0x5f:  sub    $0x1,%eax
086adc08 +0x62:  mov    %eax,-0x18(%ebp)
086adc0b +0x65:  movl   $0x0,-0x14(%ebp)
086adc12 +0x6c:  lea    -0x18(%ebp),%eax
086adc15 +0x6f:  mov    %eax,0x4(%esp)
086adc19 +0x73:  lea    -0x14(%ebp),%eax
086adc1c +0x76:  mov    %eax,(%esp)
086adc1f +0x79:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
086adc24 +0x7e:  mov    (%eax),%edx
086adc26 +0x80:  mov    0x8(%ebp),%eax
086adc29 +0x83:  mov    %edx,0x848(%eax)
086adc2f +0x89:  jmp    086adc67 <+0xc1>
086adc31 +0x8b:  mov    0x8(%ebp),%eax
086adc34 +0x8e:  mov    0x84c(%eax),%eax
086adc3a +0x94:  sub    $0x1,%eax
086adc3d +0x97:  mov    %eax,-0x10(%ebp)
086adc40 +0x9a:  movl   $0x0,-0xc(%ebp)
086adc47 +0xa1:  lea    -0x10(%ebp),%eax
086adc4a +0xa4:  mov    %eax,0x4(%esp)
086adc4e +0xa8:  lea    -0xc(%ebp),%eax
086adc51 +0xab:  mov    %eax,(%esp)
086adc54 +0xae:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
086adc59 +0xb3:  mov    (%eax),%edx
086adc5b +0xb5:  mov    0x8(%ebp),%eax
086adc5e +0xb8:  mov    %edx,0x84c(%eax)
086adc64 +0xbe:  jmp    086adc67 <+0xc1>
086adc66 +0xc0:  nop
086adc67 +0xc1:  leave
086adc68 +0xc2:  ret
086adc69 +0xc3:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::RemovePremium @ 0x86adba6

/* WongWork::CUserPremium::RemovePremium(int) */

void __thiscall WongWork::CUserPremium::RemovePremium(CUserPremium *this,int param_1)

{
  int *piVar1;
  int local_1c [3];
  int local_10 [3];
  
  if (*(int *)(this + param_1 * 0x14 + 0x10) != 2) {
    *(undefined4 *)(this + param_1 * 0x14) = 0;
    if (*(int *)(g_SPremiumInfo + param_1 * 0x120) == 1) {
      local_1c[0] = *(int *)(this + 0x848) + -1;
      local_1c[1] = 0;
      piVar1 = std::max<int>(local_1c + 1,local_1c);
      *(int *)(this + 0x848) = *piVar1;
    }
    else {
      local_1c[2] = *(int *)(this + 0x84c) + -1;
      local_10[0] = 0;
      piVar1 = std::max<int>(local_10,local_1c + 2);
      *(int *)(this + 0x84c) = *piVar1;
    }
  }
  return;
}
```
