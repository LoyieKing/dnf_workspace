# ~Arad_Dispatcher_BuyItemCheck_Impl

`_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD1Ev`

`ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818e9f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e9f0  _ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD1Ev
#           ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl()
# range [0x0818e9f0, 0x0818ea1f]
0818e9f0 +0x00:  push   %ebp
0818e9f1 +0x01:  mov    %esp,%ebp
0818e9f3 +0x03:  sub    $0x18,%esp
0818e9f6 +0x06:  mov    0x8(%ebp),%eax
0818e9f9 +0x09:  movl   $&_ZTVN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplE+0x8,(%eax)
0818e9ff +0x0f:  mov    0x8(%ebp),%eax
0818ea02 +0x12:  mov    %eax,(%esp)
0818ea05 +0x15:  call   0818e900 <_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream+0x1d>  ; global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)+0x1d
0818ea0a +0x1a:  mov    $0x0,%eax
0818ea0f +0x1f:  test   %al,%al
0818ea11 +0x21:  je     0818ea1e <+0x2e>
0818ea13 +0x23:  mov    0x8(%ebp),%eax
0818ea16 +0x26:  mov    %eax,(%esp)
0818ea19 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818ea1e +0x2e:  leave
0818ea1f +0x2f:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl @ 0x818e9f0

/* WARNING: Removing unreachable block (ram,0x0818ea13) */
/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  *(undefined ***)this = &PTR__Arad_Dispatcher_BuyItemCheck_Impl_08b98120;
  Arad_Dispatcher::~Arad_Dispatcher((Arad_Dispatcher *)this);
  return;
}
```
