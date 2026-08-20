# Arad_Dispatcher_BuyItemCheck_Impl

`_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC1Ev`

`ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818e9cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e9cc  _ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC1Ev
#           ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()
# range [0x0818e9cc, 0x0818e9ef]
0818e9cc +0x00:  push   %ebp
0818e9cd +0x01:  mov    %esp,%ebp
0818e9cf +0x03:  sub    $0x18,%esp
0818e9d2 +0x06:  mov    0x8(%ebp),%eax
0818e9d5 +0x09:  movl   $0x1fa,0x4(%esp)
0818e9dd +0x11:  mov    %eax,(%esp)
0818e9e0 +0x14:  call   0818edd0 <_GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()+0x1c
0818e9e5 +0x19:  mov    0x8(%ebp),%eax
0818e9e8 +0x1c:  movl   $&_ZTVN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplE+0x8,(%eax)
0818e9ee +0x22:  leave
0818e9ef +0x23:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl @ 0x818e9cc

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  Arad_Dispatcher::Arad_Dispatcher((Arad_Dispatcher *)this,0x1fa);
  *(undefined ***)this = &PTR__Arad_Dispatcher_BuyItemCheck_Impl_08b98120;
  return;
}
```
