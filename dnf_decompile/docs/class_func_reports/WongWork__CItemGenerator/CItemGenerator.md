# CItemGenerator

`_ZN8WongWork14CItemGeneratorC1Ei`

`WongWork::CItemGenerator::CItemGenerator(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenerator` | `0x08533b3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533b3e  _ZN8WongWork14CItemGeneratorC1Ei
#           WongWork::CItemGenerator::CItemGenerator(int)
# range [0x08533b3e, 0x08533b99]
08533b3e +0x00:  push   %ebp
08533b3f +0x01:  mov    %esp,%ebp
08533b41 +0x03:  push   %esi
08533b42 +0x04:  push   %ebx
08533b43 +0x05:  sub    $0x10,%esp
08533b46 +0x08:  mov    0x8(%ebp),%eax
08533b49 +0x0b:  movl   $&_ZTVN8WongWork14CItemGeneratorE+0x8,(%eax)
08533b4f +0x11:  mov    0x8(%ebp),%eax
08533b52 +0x14:  lea    0x8(%eax),%edx
08533b55 +0x17:  mov    0xc(%ebp),%eax
08533b58 +0x1a:  mov    %eax,0x4(%esp)
08533b5c +0x1e:  mov    %edx,(%esp)
08533b5f +0x21:  call   085334ea <_ZN8WongWork21CGenerateRandomNumberC1Ei>  ; WongWork::CGenerateRandomNumber::CGenerateRandomNumber(int)
08533b64 +0x26:  mov    0x8(%ebp),%eax
08533b67 +0x29:  add    $0x10,%eax
08533b6a +0x2c:  mov    %eax,(%esp)
08533b6d +0x2f:  call   085335ee <_ZN8WongWork21GenerateRandomUpgradeC1Ev>  ; WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade()
08533b72 +0x34:  jmp    08533b92 <+0x54>
08533b74 +0x36:  mov    %edx,%ebx
08533b76 +0x38:  mov    %eax,%esi
08533b78 +0x3a:  mov    0x8(%ebp),%eax
08533b7b +0x3d:  add    $0x8,%eax
08533b7e +0x40:  mov    %eax,(%esp)
08533b81 +0x43:  call   085335d0 <_ZN8WongWork21CGenerateRandomNumberD1Ev>  ; WongWork::CGenerateRandomNumber::~CGenerateRandomNumber()
08533b86 +0x48:  mov    %esi,%eax
08533b88 +0x4a:  mov    %ebx,%edx
08533b8a +0x4c:  mov    %eax,(%esp)
08533b8d +0x4f:  call   08ae3750 <_Unwind_Resume>
08533b92 +0x54:  add    $0x10,%esp
08533b95 +0x57:  pop    %ebx
08533b96 +0x58:  pop    %esi
08533b97 +0x59:  pop    %ebp
08533b98 +0x5a:  ret
08533b99 +0x5b:  nop
```

## 反编译 C

```c
// WongWork::CItemGenerator::CItemGenerator @ 0x8533b3e

/* WongWork::CItemGenerator::CItemGenerator(int) */

void __thiscall WongWork::CItemGenerator::CItemGenerator(CItemGenerator *this,int param_1)

{
  *(undefined ***)this = &PTR_setDropRatio_08c9a790;
  CGenerateRandomNumber::CGenerateRandomNumber((CGenerateRandomNumber *)(this + 8),param_1);
                    /* try { // try from 08533b6d to 08533b71 has its CatchHandler @ 08533b74 */
  GenerateRandomUpgrade::GenerateRandomUpgrade((GenerateRandomUpgrade *)(this + 0x10));
  return;
}
```
