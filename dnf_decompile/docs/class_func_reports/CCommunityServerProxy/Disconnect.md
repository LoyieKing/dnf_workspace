# Disconnect

`_ZN21CCommunityServerProxy10DisconnectEv`

`CCommunityServerProxy::Disconnect()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c770  _ZN21CCommunityServerProxy10DisconnectEv
#           CCommunityServerProxy::Disconnect()
# range [0x0846c770, 0x0846c7c3]
0846c770 +0x00:  push   %ebp
0846c771 +0x01:  mov    %esp,%ebp
0846c773 +0x03:  sub    $0x18,%esp
0846c776 +0x06:  mov    0x8(%ebp),%eax
0846c779 +0x09:  add    $&_ZL14gUnicodeBuffer+0x268d0,%eax
0846c77e +0x0e:  mov    %eax,(%esp)
0846c781 +0x11:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0846c786 +0x16:  test   %eax,%eax
0846c788 +0x18:  je     0846c797 <+0x27>
0846c78a +0x1a:  mov    0x8(%ebp),%eax
0846c78d +0x1d:  mov    &_ZL14gUnicodeBuffer+0x268d4(%eax),%eax
0846c793 +0x23:  test   %eax,%eax
0846c795 +0x25:  jne    0846c79e <+0x2e>
0846c797 +0x27:  mov    $0x1,%eax
0846c79c +0x2c:  jmp    0846c7a3 <+0x33>
0846c79e +0x2e:  mov    $0x0,%eax
0846c7a3 +0x33:  test   %al,%al
0846c7a5 +0x35:  jne    0846c7c1 <+0x51>
0846c7a7 +0x37:  mov    0x8(%ebp),%eax
0846c7aa +0x3a:  mov    %eax,(%esp)
0846c7ad +0x3d:  call   082fdf58 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x209>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x209
0846c7b2 +0x42:  mov    0x8(%ebp),%eax
0846c7b5 +0x45:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268cc(%eax)
0846c7bf +0x4f:  jmp    0846c7c2 <+0x52>
0846c7c1 +0x51:  nop
0846c7c2 +0x52:  leave
0846c7c3 +0x53:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::Disconnect @ 0x846c770

/* CCommunityServerProxy::Disconnect() */

void __thiscall CCommunityServerProxy::Disconnect(CCommunityServerProxy *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = std::string::length((string *)(this + 0x30dfc));
  if ((iVar2 == 0) || (*(int *)(this + 0x30e00) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)this);
    *(undefined4 *)(this + 0x30df8) = 0;
  }
  return;
}
```
