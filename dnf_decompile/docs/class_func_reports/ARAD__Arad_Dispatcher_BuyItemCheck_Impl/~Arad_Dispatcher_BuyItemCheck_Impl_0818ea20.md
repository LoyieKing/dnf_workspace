# ~Arad_Dispatcher_BuyItemCheck_Impl

`_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD0Ev`

`ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818ea20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ea20  _ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD0Ev
#           ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl()
# range [0x0818ea20, 0x0818ea3d]
0818ea20 +0x00:  push   %ebp
0818ea21 +0x01:  mov    %esp,%ebp
0818ea23 +0x03:  sub    $0x18,%esp
0818ea26 +0x06:  mov    0x8(%ebp),%eax
0818ea29 +0x09:  mov    %eax,(%esp)
0818ea2c +0x0c:  call   0818e9f0 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD1Ev>  ; ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl()
0818ea31 +0x11:  mov    0x8(%ebp),%eax
0818ea34 +0x14:  mov    %eax,(%esp)
0818ea37 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818ea3c +0x1c:  leave
0818ea3d +0x1d:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl @ 0x818ea20

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  ~Arad_Dispatcher_BuyItemCheck_Impl(this);
  operator_delete(this);
  return;
}
```
