# Disconnect

`_ZN15BaseServerProxy10DisconnectEv`

`BaseServerProxy::Disconnect()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd6e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd6e4  _ZN15BaseServerProxy10DisconnectEv
#           BaseServerProxy::Disconnect()
# range [0x082fd6e4, 0x082fd829]
082fd6e4 +0x000:  push   %ebp
082fd6e5 +0x001:  mov    %esp,%ebp
082fd6e7 +0x003:  push   %edi
082fd6e8 +0x004:  push   %esi
082fd6e9 +0x005:  push   %ebx
082fd6ea +0x006:  sub    $0x5c,%esp
082fd6ed +0x009:  mov    0x8(%ebp),%eax
082fd6f0 +0x00c:  add    $0x4,%eax
082fd6f3 +0x00f:  mov    %eax,(%esp)
082fd6f6 +0x012:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
082fd6fb +0x017:  mov    %eax,%edi
082fd6fd +0x019:  mov    0x8(%ebp),%eax
082fd700 +0x01c:  mov    &_ZL14gUnicodeBuffer+0x268d8(%eax),%eax
082fd706 +0x022:  mov    %eax,-0x40(%ebp)
082fd709 +0x025:  mov    0x8(%ebp),%eax
082fd70c +0x028:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd711 +0x02d:  mov    %eax,(%esp)
082fd714 +0x030:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd719 +0x035:  mov    %eax,%esi
082fd71b +0x037:  mov    0x8(%ebp),%eax
082fd71e +0x03a:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%eax
082fd724 +0x040:  mov    %eax,-0x3c(%ebp)
082fd727 +0x043:  lea    -0x2c(%ebp),%eax
082fd72a +0x046:  mov    0x8(%ebp),%edx
082fd72d +0x049:  mov    %edx,0x4(%esp)
082fd731 +0x04d:  mov    %eax,(%esp)
082fd734 +0x050:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fd739 +0x055:  sub    $0x4,%esp
082fd73c +0x058:  lea    -0x2c(%ebp),%eax
082fd73f +0x05b:  mov    %eax,(%esp)
082fd742 +0x05e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd747 +0x063:  mov    %eax,%ebx
082fd749 +0x065:  movl   $0x0,0xc(%esp)
082fd751 +0x06d:  movl   $0x148,0x8(%esp)
082fd759 +0x075:  movl   $&_ZZN15BaseServerProxy10DisconnectEvE19__PRETTY_FUNCTION__,0x4(%esp)
082fd761 +0x07d:  lea    -0x28(%ebp),%eax
082fd764 +0x080:  mov    %eax,(%esp)
082fd767 +0x083:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fd76c +0x088:  mov    %edi,0x18(%esp)
082fd770 +0x08c:  mov    -0x40(%ebp),%eax
082fd773 +0x08f:  mov    %eax,0x14(%esp)
082fd777 +0x093:  mov    %esi,0x10(%esp)
082fd77b +0x097:  mov    -0x3c(%ebp),%eax
082fd77e +0x09a:  mov    %eax,0xc(%esp)
082fd782 +0x09e:  mov    %ebx,0x8(%esp)
082fd786 +0x0a2:  movl   $"BaseServerProxy::Disconnect(), ServerName:%s,SocketState:%d,IP:%s,Port:%d,Socket:%d",0x4(%esp)
082fd78e +0x0aa:  lea    -0x28(%ebp),%eax
082fd791 +0x0ad:  mov    %eax,(%esp)
082fd794 +0x0b0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fd799 +0x0b5:  jmp    082fd7b6 <+0xd2>
082fd79b +0x0b7:  mov    %edx,%ebx
082fd79d +0x0b9:  mov    %eax,%esi
082fd79f +0x0bb:  lea    -0x2c(%ebp),%eax
082fd7a2 +0x0be:  mov    %eax,(%esp)
082fd7a5 +0x0c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd7aa +0x0c6:  mov    %esi,%eax
082fd7ac +0x0c8:  mov    %ebx,%edx
082fd7ae +0x0ca:  mov    %eax,(%esp)
082fd7b1 +0x0cd:  call   08ae3750 <_Unwind_Resume>
082fd7b6 +0x0d2:  lea    -0x2c(%ebp),%eax
082fd7b9 +0x0d5:  mov    %eax,(%esp)
082fd7bc +0x0d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd7c1 +0x0dd:  mov    0x8(%ebp),%eax
082fd7c4 +0x0e0:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd7c9 +0x0e5:  mov    %eax,(%esp)
082fd7cc +0x0e8:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
082fd7d1 +0x0ed:  test   %eax,%eax
082fd7d3 +0x0ef:  je     082fd7e2 <+0xfe>
082fd7d5 +0x0f1:  mov    0x8(%ebp),%eax
082fd7d8 +0x0f4:  mov    &_ZL14gUnicodeBuffer+0x268d8(%eax),%eax
082fd7de +0x0fa:  test   %eax,%eax
082fd7e0 +0x0fc:  jne    082fd7e9 <+0x105>
082fd7e2 +0x0fe:  mov    $0x1,%eax
082fd7e7 +0x103:  jmp    082fd7ee <+0x10a>
082fd7e9 +0x105:  mov    $0x0,%eax
082fd7ee +0x10a:  test   %al,%al
082fd7f0 +0x10c:  jne    082fd81e <+0x13a>
082fd7f2 +0x10e:  mov    0x8(%ebp),%eax
082fd7f5 +0x111:  add    $0x4,%eax
082fd7f8 +0x114:  mov    %eax,(%esp)
082fd7fb +0x117:  call   082fdf58 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x209>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x209
082fd800 +0x11c:  mov    0x8(%ebp),%eax
082fd803 +0x11f:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268d0(%eax)
082fd80d +0x129:  mov    0x8(%ebp),%eax
082fd810 +0x12c:  mov    (%eax),%eax
082fd812 +0x12e:  mov    (%eax),%edx
082fd814 +0x130:  mov    0x8(%ebp),%eax
082fd817 +0x133:  mov    %eax,(%esp)
082fd81a +0x136:  call   *%edx
082fd81c +0x138:  jmp    082fd81f <+0x13b>
082fd81e +0x13a:  nop
082fd81f +0x13b:  lea    -0xc(%ebp),%esp
082fd822 +0x13e:  add    $0x0,%esp
082fd825 +0x141:  pop    %ebx
082fd826 +0x142:  pop    %esi
082fd827 +0x143:  pop    %edi
082fd828 +0x144:  pop    %ebp
082fd829 +0x145:  ret
```

## 反编译 C

```c
// BaseServerProxy::Disconnect @ 0x82fd6e4

/* BaseServerProxy::Disconnect() */

void __thiscall BaseServerProxy::Disconnect(BaseServerProxy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  string local_30 [4];
  cMyTrace local_2c [28];
  
  uVar4 = CNetwork<100000,100000>::get_socket((CNetwork<100000,100000> *)(this + 4));
  uVar1 = *(undefined4 *)(this + 0x30e04);
  uVar5 = std::string::c_str((string *)(this + 0x30e00));
  uVar2 = *(undefined4 *)(this + 0x30dfc);
  GetServerName();
                    /* try { // try from 082fd742 to 082fd798 has its CatchHandler @ 082fd79b */
  uVar6 = std::string::c_str(local_30);
  cMyTrace::cMyTrace(local_2c,"virtual void BaseServerProxy::Disconnect()",0x148,0);
  cMyTrace::operator()
            (local_2c,
             "BaseServerProxy::Disconnect(), ServerName:%s,SocketState:%d,IP:%s,Port:%d,Socket:%d",
             uVar6,uVar2,uVar5,uVar1,uVar4);
  std::string::~string(local_30);
  iVar7 = std::string::length((string *)(this + 0x30e00));
  if ((iVar7 == 0) || (*(int *)(this + 0x30e04) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 4));
    *(undefined4 *)(this + 0x30dfc) = 0;
    (*(code *)**(undefined4 **)this)(this);
  }
  return;
}
```
