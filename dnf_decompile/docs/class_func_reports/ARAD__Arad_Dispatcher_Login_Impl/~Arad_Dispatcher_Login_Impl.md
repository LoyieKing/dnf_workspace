# ~Arad_Dispatcher_Login_Impl

`_ZN4ARAD26Arad_Dispatcher_Login_ImplD1Ev`

`ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818eef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818eef4  _ZN4ARAD26Arad_Dispatcher_Login_ImplD1Ev
#           ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl()
# range [0x0818eef4, 0x0818ef23]
0818eef4 +0x00:  push   %ebp
0818eef5 +0x01:  mov    %esp,%ebp
0818eef7 +0x03:  sub    $0x18,%esp
0818eefa +0x06:  mov    0x8(%ebp),%eax
0818eefd +0x09:  movl   $&_ZTVN4ARAD26Arad_Dispatcher_Login_ImplE+0x8,(%eax)
0818ef03 +0x0f:  mov    0x8(%ebp),%eax
0818ef06 +0x12:  mov    %eax,(%esp)
0818ef09 +0x15:  call   0818e900 <_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream+0x1d>  ; global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)+0x1d
0818ef0e +0x1a:  mov    $0x0,%eax
0818ef13 +0x1f:  test   %al,%al
0818ef15 +0x21:  je     0818ef22 <+0x2e>
0818ef17 +0x23:  mov    0x8(%ebp),%eax
0818ef1a +0x26:  mov    %eax,(%esp)
0818ef1d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818ef22 +0x2e:  leave
0818ef23 +0x2f:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl @ 0x818eef4

/* WARNING: Removing unreachable block (ram,0x0818ef17) */
/* ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  *(undefined ***)this = &PTR__Arad_Dispatcher_Login_Impl_08b98fd8;
  Arad_Dispatcher::~Arad_Dispatcher((Arad_Dispatcher *)this);
  return;
}
```
