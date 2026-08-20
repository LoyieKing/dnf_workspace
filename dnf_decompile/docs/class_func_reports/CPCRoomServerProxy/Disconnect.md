# Disconnect

`_ZN18CPCRoomServerProxy10DisconnectEv`

`CPCRoomServerProxy::Disconnect()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x084719de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084719de  _ZN18CPCRoomServerProxy10DisconnectEv
#           CPCRoomServerProxy::Disconnect()
# range [0x084719de, 0x08471a31]
084719de +0x00:  push   %ebp
084719df +0x01:  mov    %esp,%ebp
084719e1 +0x03:  sub    $0x18,%esp
084719e4 +0x06:  mov    0x8(%ebp),%eax
084719e7 +0x09:  add    $&_ZL14gUnicodeBuffer+0x268cc,%eax
084719ec +0x0e:  mov    %eax,(%esp)
084719ef +0x11:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
084719f4 +0x16:  test   %eax,%eax
084719f6 +0x18:  je     08471a05 <+0x27>
084719f8 +0x1a:  mov    0x8(%ebp),%eax
084719fb +0x1d:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%eax
08471a01 +0x23:  test   %eax,%eax
08471a03 +0x25:  jne    08471a0c <+0x2e>
08471a05 +0x27:  mov    $0x1,%eax
08471a0a +0x2c:  jmp    08471a11 <+0x33>
08471a0c +0x2e:  mov    $0x0,%eax
08471a11 +0x33:  test   %al,%al
08471a13 +0x35:  jne    08471a2f <+0x51>
08471a15 +0x37:  mov    0x8(%ebp),%eax
08471a18 +0x3a:  mov    %eax,(%esp)
08471a1b +0x3d:  call   082fdf58 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x209>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x209
08471a20 +0x42:  mov    0x8(%ebp),%eax
08471a23 +0x45:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268d4(%eax)
08471a2d +0x4f:  jmp    08471a30 <+0x52>
08471a2f +0x51:  nop
08471a30 +0x52:  leave
08471a31 +0x53:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::Disconnect @ 0x84719de

/* CPCRoomServerProxy::Disconnect() */

void __thiscall CPCRoomServerProxy::Disconnect(CPCRoomServerProxy *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = std::string::length((string *)(this + 0x30df8));
  if ((iVar2 == 0) || (*(int *)(this + 0x30dfc) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)this);
    *(undefined4 *)(this + 0x30e00) = 0;
  }
  return;
}
```
