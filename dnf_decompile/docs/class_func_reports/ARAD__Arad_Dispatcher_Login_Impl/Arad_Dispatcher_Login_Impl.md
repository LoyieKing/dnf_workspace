# Arad_Dispatcher_Login_Impl

`_ZN4ARAD26Arad_Dispatcher_Login_ImplC1Ev`

`ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818eed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818eed0  _ZN4ARAD26Arad_Dispatcher_Login_ImplC1Ev
#           ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()
# range [0x0818eed0, 0x0818eef3]
0818eed0 +0x00:  push   %ebp
0818eed1 +0x01:  mov    %esp,%ebp
0818eed3 +0x03:  sub    $0x18,%esp
0818eed6 +0x06:  mov    0x8(%ebp),%eax
0818eed9 +0x09:  movl   $0x1,0x4(%esp)
0818eee1 +0x11:  mov    %eax,(%esp)
0818eee4 +0x14:  call   0818edd0 <_GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()+0x1c
0818eee9 +0x19:  mov    0x8(%ebp),%eax
0818eeec +0x1c:  movl   $&_ZTVN4ARAD26Arad_Dispatcher_Login_ImplE+0x8,(%eax)
0818eef2 +0x22:  leave
0818eef3 +0x23:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl @ 0x818eed0

/* ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  Arad_Dispatcher::Arad_Dispatcher((Arad_Dispatcher *)this,1);
  *(undefined ***)this = &PTR__Arad_Dispatcher_Login_Impl_08b98fd8;
  return;
}
```
