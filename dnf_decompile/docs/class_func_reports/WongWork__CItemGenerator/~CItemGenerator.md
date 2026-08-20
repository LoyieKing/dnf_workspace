# ~CItemGenerator

`_ZN8WongWork14CItemGeneratorD1Ev`

`WongWork::CItemGenerator::~CItemGenerator()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenerator` | `0x08533b9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533b9a  _ZN8WongWork14CItemGeneratorD1Ev
#           WongWork::CItemGenerator::~CItemGenerator()
# range [0x08533b9a, 0x08533bc7]
08533b9a +0x00:  push   %ebp
08533b9b +0x01:  mov    %esp,%ebp
08533b9d +0x03:  sub    $0x18,%esp
08533ba0 +0x06:  mov    0x8(%ebp),%eax
08533ba3 +0x09:  movl   $&_ZTVN8WongWork14CItemGeneratorE+0x8,(%eax)
08533ba9 +0x0f:  mov    0x8(%ebp),%eax
08533bac +0x12:  add    $0x10,%eax
08533baf +0x15:  mov    %eax,(%esp)
08533bb2 +0x18:  call   0853364e <_ZN8WongWork21GenerateRandomUpgradeD1Ev>  ; WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade()
08533bb7 +0x1d:  mov    0x8(%ebp),%eax
08533bba +0x20:  add    $0x8,%eax
08533bbd +0x23:  mov    %eax,(%esp)
08533bc0 +0x26:  call   085335d0 <_ZN8WongWork21CGenerateRandomNumberD1Ev>  ; WongWork::CGenerateRandomNumber::~CGenerateRandomNumber()
08533bc5 +0x2b:  leave
08533bc6 +0x2c:  ret
08533bc7 +0x2d:  nop
```

## 反编译 C

```c
// WongWork::CItemGenerator::~CItemGenerator @ 0x8533b9a

/* WongWork::CItemGenerator::~CItemGenerator() */

void __thiscall WongWork::CItemGenerator::~CItemGenerator(CItemGenerator *this)

{
  *(undefined ***)this = &PTR_setDropRatio_08c9a790;
  GenerateRandomUpgrade::~GenerateRandomUpgrade((GenerateRandomUpgrade *)(this + 0x10));
  CGenerateRandomNumber::~CGenerateRandomNumber((CGenerateRandomNumber *)(this + 8));
  return;
}
```
