# init

`_ZN24Arad_DevMgr_Server_Proxy4initEv`

`Arad_DevMgr_Server_Proxy::init()`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818ddb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ddb6  _ZN24Arad_DevMgr_Server_Proxy4initEv
#           Arad_DevMgr_Server_Proxy::init()
# range [0x0818ddb6, 0x0818de29]
0818ddb6 +0x00:  push   %ebp
0818ddb7 +0x01:  mov    %esp,%ebp
0818ddb9 +0x03:  push   %ebx
0818ddba +0x04:  sub    $0x14,%esp
0818ddbd +0x07:  mov    0x8(%ebp),%eax
0818ddc0 +0x0a:  mov    0x8(%eax),%eax
0818ddc3 +0x0d:  test   %eax,%eax
0818ddc5 +0x0f:  jns    0818de1f <+0x69>
0818ddc7 +0x11:  mov    0x8(%ebp),%eax
0818ddca +0x14:  add    $0x4,%eax
0818ddcd +0x17:  movl   $"127.0.0.1",0x4(%esp)
0818ddd5 +0x1f:  mov    %eax,(%esp)
0818ddd8 +0x22:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0818dddd +0x27:  mov    0x8(%ebp),%eax
0818dde0 +0x2a:  movl   $0x7530,(%eax)
0818dde6 +0x30:  mov    0x8(%ebp),%eax
0818dde9 +0x33:  mov    (%eax),%ebx
0818ddeb +0x35:  mov    0x8(%ebp),%eax
0818ddee +0x38:  add    $0x4,%eax
0818ddf1 +0x3b:  mov    %eax,(%esp)
0818ddf4 +0x3e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0818ddf9 +0x43:  mov    0x8(%ebp),%edx
0818ddfc +0x46:  add    $0x8,%edx
0818ddff +0x49:  mov    %ebx,0x8(%esp)
0818de03 +0x4d:  mov    %eax,0x4(%esp)
0818de07 +0x51:  mov    %edx,(%esp)
0818de0a +0x54:  call   0818dffe <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0xba>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0xba
0818de0f +0x59:  test   %eax,%eax
0818de11 +0x5b:  sete   %al
0818de14 +0x5e:  test   %al,%al
0818de16 +0x60:  je     0818de1f <+0x69>
0818de18 +0x62:  mov    $0x0,%eax
0818de1d +0x67:  jmp    0818de24 <+0x6e>
0818de1f +0x69:  mov    $0x1,%eax
0818de24 +0x6e:  add    $0x14,%esp
0818de27 +0x71:  pop    %ebx
0818de28 +0x72:  pop    %ebp
0818de29 +0x73:  ret
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::init @ 0x818ddb6

/* Arad_DevMgr_Server_Proxy::init() */

undefined4 __thiscall Arad_DevMgr_Server_Proxy::init(Arad_DevMgr_Server_Proxy *this)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(this + 8) < 0) {
    std::string::operator=((string *)(this + 4),"127.0.0.1");
    *(undefined4 *)this = 30000;
    iVar2 = *(int *)this;
    pcVar1 = (char *)std::string::c_str((string *)(this + 4));
    iVar2 = CNetwork<6144,100000>::CreateConnectionSocket((int *)(this + 8),pcVar1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}
```
