# ~CGenerateRandomNumber

`_ZN8WongWork21CGenerateRandomNumberD1Ev`

`WongWork::CGenerateRandomNumber::~CGenerateRandomNumber()`

| 类 | 地址 |
|---|---|
| `WongWork::CGenerateRandomNumber` | `0x085335d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085335d0  _ZN8WongWork21CGenerateRandomNumberD1Ev
#           WongWork::CGenerateRandomNumber::~CGenerateRandomNumber()
# range [0x085335d0, 0x085335ed]
085335d0 +0x00:  push   %ebp
085335d1 +0x01:  mov    %esp,%ebp
085335d3 +0x03:  sub    $0x18,%esp
085335d6 +0x06:  mov    0x8(%ebp),%eax
085335d9 +0x09:  mov    (%eax),%eax
085335db +0x0b:  test   %eax,%eax
085335dd +0x0d:  je     085335ec <+0x1c>
085335df +0x0f:  mov    0x8(%ebp),%eax
085335e2 +0x12:  mov    (%eax),%eax
085335e4 +0x14:  mov    %eax,(%esp)
085335e7 +0x17:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
085335ec +0x1c:  leave
085335ed +0x1d:  ret
```

## 反编译 C

```c
// WongWork::CGenerateRandomNumber::~CGenerateRandomNumber @ 0x85335d0

/* WongWork::CGenerateRandomNumber::~CGenerateRandomNumber() */

void __thiscall WongWork::CGenerateRandomNumber::~CGenerateRandomNumber(CGenerateRandomNumber *this)

{
  if (*(int *)this != 0) {
    operator_delete__(*(void **)this);
  }
  return;
}
```
