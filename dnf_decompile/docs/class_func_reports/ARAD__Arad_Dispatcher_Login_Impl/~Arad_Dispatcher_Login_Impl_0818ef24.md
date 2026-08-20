# ~Arad_Dispatcher_Login_Impl

`_ZN4ARAD26Arad_Dispatcher_Login_ImplD0Ev`

`ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818ef24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ef24  _ZN4ARAD26Arad_Dispatcher_Login_ImplD0Ev
#           ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl()
# range [0x0818ef24, 0x0818ef41]
0818ef24 +0x00:  push   %ebp
0818ef25 +0x01:  mov    %esp,%ebp
0818ef27 +0x03:  sub    $0x18,%esp
0818ef2a +0x06:  mov    0x8(%ebp),%eax
0818ef2d +0x09:  mov    %eax,(%esp)
0818ef30 +0x0c:  call   0818eef4 <_ZN4ARAD26Arad_Dispatcher_Login_ImplD1Ev>  ; ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl()
0818ef35 +0x11:  mov    0x8(%ebp),%eax
0818ef38 +0x14:  mov    %eax,(%esp)
0818ef3b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818ef40 +0x1c:  leave
0818ef41 +0x1d:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl @ 0x818ef24

/* ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  ~Arad_Dispatcher_Login_Impl(this);
  operator_delete(this);
  return;
}
```
