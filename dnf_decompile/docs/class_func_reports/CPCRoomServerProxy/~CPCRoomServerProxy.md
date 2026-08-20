# ~CPCRoomServerProxy

`_ZN18CPCRoomServerProxyD1Ev`

`CPCRoomServerProxy::~CPCRoomServerProxy()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471874  _ZN18CPCRoomServerProxyD1Ev
#           CPCRoomServerProxy::~CPCRoomServerProxy()
# range [0x08471874, 0x084718bb]
08471874 +0x00:  push   %ebp
08471875 +0x01:  mov    %esp,%ebp
08471877 +0x03:  push   %esi
08471878 +0x04:  push   %ebx
08471879 +0x05:  sub    $0x10,%esp
0847187c +0x08:  mov    0x8(%ebp),%eax
0847187f +0x0b:  add    $&_ZL14gUnicodeBuffer+0x268cc,%eax
08471884 +0x10:  mov    %eax,(%esp)
08471887 +0x13:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0847188c +0x18:  jmp    084718a9 <+0x35>
0847188e +0x1a:  mov    %edx,%ebx
08471890 +0x1c:  mov    %eax,%esi
08471892 +0x1e:  mov    0x8(%ebp),%eax
08471895 +0x21:  mov    %eax,(%esp)
08471898 +0x24:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
0847189d +0x29:  mov    %esi,%eax
0847189f +0x2b:  mov    %ebx,%edx
084718a1 +0x2d:  mov    %eax,(%esp)
084718a4 +0x30:  call   08ae3750 <_Unwind_Resume>
084718a9 +0x35:  mov    0x8(%ebp),%eax
084718ac +0x38:  mov    %eax,(%esp)
084718af +0x3b:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
084718b4 +0x40:  add    $0x10,%esp
084718b7 +0x43:  pop    %ebx
084718b8 +0x44:  pop    %esi
084718b9 +0x45:  pop    %ebp
084718ba +0x46:  ret
084718bb +0x47:  nop
```

## 反编译 C

```c
// CPCRoomServerProxy::~CPCRoomServerProxy @ 0x8471874

/* CPCRoomServerProxy::~CPCRoomServerProxy() */

void __thiscall CPCRoomServerProxy::~CPCRoomServerProxy(CPCRoomServerProxy *this)

{
                    /* try { // try from 08471887 to 0847188b has its CatchHandler @ 0847188e */
  std::string::~string((string *)(this + 0x30df8));
  CNetwork<100000,100000>::~CNetwork((CNetwork<100000,100000> *)this);
  return;
}
```
