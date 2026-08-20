# ~CObfuscator

`_ZN11CObfuscatorD1Ev`

`CObfuscator::~CObfuscator()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x085858d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085858d6  _ZN11CObfuscatorD1Ev
#           CObfuscator::~CObfuscator()
# range [0x085858d6, 0x085858e9]
085858d6 +0x00:  push   %ebp
085858d7 +0x01:  mov    %esp,%ebp
085858d9 +0x03:  sub    $0x18,%esp
085858dc +0x06:  mov    0x8(%ebp),%eax
085858df +0x09:  mov    %eax,(%esp)
085858e2 +0x0c:  call   0831c0c8 <_ZN11CBitManagerD1Ev>  ; CBitManager::~CBitManager()
085858e7 +0x11:  leave
085858e8 +0x12:  ret
085858e9 +0x13:  nop
```

## 反编译 C

```c
// CObfuscator::~CObfuscator @ 0x85858d6

/* CObfuscator::~CObfuscator() */

void __thiscall CObfuscator::~CObfuscator(CObfuscator *this)

{
  CBitManager::~CBitManager((CBitManager *)this);
  return;
}
```
