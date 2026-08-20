# InitTcp

`_ZN21CCommunityServerProxy7InitTcpEv`

`CCommunityServerProxy::InitTcp()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c674  _ZN21CCommunityServerProxy7InitTcpEv
#           CCommunityServerProxy::InitTcp()
# range [0x0846c674, 0x0846c76f]
0846c674 +0x00:  push   %ebp
0846c675 +0x01:  mov    %esp,%ebp
0846c677 +0x03:  push   %edi
0846c678 +0x04:  push   %esi
0846c679 +0x05:  push   %ebx
0846c67a +0x06:  sub    $0x4c,%esp
0846c67d +0x09:  mov    0x8(%ebp),%eax
0846c680 +0x0c:  add    $&_ZL14gUnicodeBuffer+0x268d0,%eax
0846c685 +0x11:  mov    %eax,(%esp)
0846c688 +0x14:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0846c68d +0x19:  test   %eax,%eax
0846c68f +0x1b:  je     0846c69e <+0x2a>
0846c691 +0x1d:  mov    0x8(%ebp),%eax
0846c694 +0x20:  mov    &_ZL14gUnicodeBuffer+0x268d4(%eax),%eax
0846c69a +0x26:  test   %eax,%eax
0846c69c +0x28:  jne    0846c6a5 <+0x31>
0846c69e +0x2a:  mov    $0x1,%eax
0846c6a3 +0x2f:  jmp    0846c6aa <+0x36>
0846c6a5 +0x31:  mov    $0x0,%eax
0846c6aa +0x36:  test   %al,%al
0846c6ac +0x38:  je     0846c6b8 <+0x44>
0846c6ae +0x3a:  mov    $0x0,%eax
0846c6b3 +0x3f:  jmp    0846c768 <+0xf4>
0846c6b8 +0x44:  mov    0x8(%ebp),%eax
0846c6bb +0x47:  mov    (%eax),%eax
0846c6bd +0x49:  test   %eax,%eax
0846c6bf +0x4b:  jns    0846c763 <+0xef>
0846c6c5 +0x51:  mov    0x8(%ebp),%eax
0846c6c8 +0x54:  mov    &_ZL14gUnicodeBuffer+0x268d4(%eax),%ebx
0846c6ce +0x5a:  mov    0x8(%ebp),%eax
0846c6d1 +0x5d:  add    $&_ZL14gUnicodeBuffer+0x268d0,%eax
0846c6d6 +0x62:  mov    %eax,(%esp)
0846c6d9 +0x65:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846c6de +0x6a:  mov    0x8(%ebp),%edx
0846c6e1 +0x6d:  mov    %ebx,0x8(%esp)
0846c6e5 +0x71:  mov    %eax,0x4(%esp)
0846c6e9 +0x75:  mov    %edx,(%esp)
0846c6ec +0x78:  call   082fdd99 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4a>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4a
0846c6f1 +0x7d:  mov    %eax,-0x1c(%ebp)
0846c6f4 +0x80:  cmpl   $0x0,-0x1c(%ebp)
0846c6f8 +0x84:  setne  %al
0846c6fb +0x87:  test   %al,%al
0846c6fd +0x89:  je     0846c763 <+0xef>
0846c6ff +0x8b:  call   0807dd70 <_init+0x668>
0846c704 +0x90:  mov    (%eax),%eax
0846c706 +0x92:  mov    %eax,(%esp)
0846c709 +0x95:  call   0807d730 <_init+0x28>
0846c70e +0x9a:  mov    %eax,%ebx
0846c710 +0x9c:  call   0807dd70 <_init+0x668>
0846c715 +0xa1:  mov    (%eax),%edi
0846c717 +0xa3:  mov    -0x1c(%ebp),%esi
0846c71a +0xa6:  movl   $0x0,0xc(%esp)
0846c722 +0xae:  movl   $0xbf,0x8(%esp)
0846c72a +0xb6:  movl   $&_ZZN21CCommunityServerProxy7InitTcpEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846c732 +0xbe:  lea    -0x2c(%ebp),%eax
0846c735 +0xc1:  mov    %eax,(%esp)
0846c738 +0xc4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846c73d +0xc9:  mov    %ebx,0x10(%esp)
0846c741 +0xcd:  mov    %edi,0xc(%esp)
0846c745 +0xd1:  mov    %esi,0x8(%esp)
0846c749 +0xd5:  movl   $"CCommunityServerProxy CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
0846c751 +0xdd:  lea    -0x2c(%ebp),%eax
0846c754 +0xe0:  mov    %eax,(%esp)
0846c757 +0xe3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846c75c +0xe8:  mov    $0x0,%eax
0846c761 +0xed:  jmp    0846c768 <+0xf4>
0846c763 +0xef:  mov    $0x1,%eax
0846c768 +0xf4:  add    $0x4c,%esp
0846c76b +0xf7:  pop    %ebx
0846c76c +0xf8:  pop    %esi
0846c76d +0xf9:  pop    %edi
0846c76e +0xfa:  pop    %ebp
0846c76f +0xfb:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::InitTcp @ 0x846c674

/* CCommunityServerProxy::InitTcp() */

undefined4 __thiscall CCommunityServerProxy::InitTcp(CCommunityServerProxy *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30dfc));
  if ((iVar3 == 0) || (*(int *)(this + 0x30e00) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)this < 0) {
      iVar3 = *(int *)(this + 0x30e00);
      pcVar5 = (char *)std::string::c_str((string *)(this + 0x30dfc));
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)this,pcVar5,iVar3);
      if (local_20 != 0) {
        piVar6 = __errno_location();
        pcVar5 = strerror(*piVar6);
        piVar6 = __errno_location();
        iVar2 = local_20;
        iVar3 = *piVar6;
        cMyTrace::cMyTrace(local_30,"bool CCommunityServerProxy::InitTcp()",0xbf,0);
        cMyTrace::operator()
                  (local_30,"CCommunityServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
                   iVar3,pcVar5);
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
