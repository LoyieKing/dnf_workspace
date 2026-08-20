# InitTcp

`_ZN18CPCRoomServerProxy7InitTcpEv`

`CPCRoomServerProxy::InitTcp()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x084718e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084718e2  _ZN18CPCRoomServerProxy7InitTcpEv
#           CPCRoomServerProxy::InitTcp()
# range [0x084718e2, 0x084719dd]
084718e2 +0x00:  push   %ebp
084718e3 +0x01:  mov    %esp,%ebp
084718e5 +0x03:  push   %edi
084718e6 +0x04:  push   %esi
084718e7 +0x05:  push   %ebx
084718e8 +0x06:  sub    $0x4c,%esp
084718eb +0x09:  mov    0x8(%ebp),%eax
084718ee +0x0c:  add    $&_ZL14gUnicodeBuffer+0x268cc,%eax
084718f3 +0x11:  mov    %eax,(%esp)
084718f6 +0x14:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
084718fb +0x19:  test   %eax,%eax
084718fd +0x1b:  je     0847190c <+0x2a>
084718ff +0x1d:  mov    0x8(%ebp),%eax
08471902 +0x20:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%eax
08471908 +0x26:  test   %eax,%eax
0847190a +0x28:  jne    08471913 <+0x31>
0847190c +0x2a:  mov    $0x1,%eax
08471911 +0x2f:  jmp    08471918 <+0x36>
08471913 +0x31:  mov    $0x0,%eax
08471918 +0x36:  test   %al,%al
0847191a +0x38:  je     08471926 <+0x44>
0847191c +0x3a:  mov    $0x0,%eax
08471921 +0x3f:  jmp    084719d6 <+0xf4>
08471926 +0x44:  mov    0x8(%ebp),%eax
08471929 +0x47:  mov    (%eax),%eax
0847192b +0x49:  test   %eax,%eax
0847192d +0x4b:  jns    084719d1 <+0xef>
08471933 +0x51:  mov    0x8(%ebp),%eax
08471936 +0x54:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%ebx
0847193c +0x5a:  mov    0x8(%ebp),%eax
0847193f +0x5d:  add    $&_ZL14gUnicodeBuffer+0x268cc,%eax
08471944 +0x62:  mov    %eax,(%esp)
08471947 +0x65:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0847194c +0x6a:  mov    0x8(%ebp),%edx
0847194f +0x6d:  mov    %ebx,0x8(%esp)
08471953 +0x71:  mov    %eax,0x4(%esp)
08471957 +0x75:  mov    %edx,(%esp)
0847195a +0x78:  call   082fdd99 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4a>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4a
0847195f +0x7d:  mov    %eax,-0x1c(%ebp)
08471962 +0x80:  cmpl   $0x0,-0x1c(%ebp)
08471966 +0x84:  setne  %al
08471969 +0x87:  test   %al,%al
0847196b +0x89:  je     084719d1 <+0xef>
0847196d +0x8b:  call   0807dd70 <_init+0x668>
08471972 +0x90:  mov    (%eax),%eax
08471974 +0x92:  mov    %eax,(%esp)
08471977 +0x95:  call   0807d730 <_init+0x28>
0847197c +0x9a:  mov    %eax,%ebx
0847197e +0x9c:  call   0807dd70 <_init+0x668>
08471983 +0xa1:  mov    (%eax),%edi
08471985 +0xa3:  mov    -0x1c(%ebp),%esi
08471988 +0xa6:  movl   $0x0,0xc(%esp)
08471990 +0xae:  movl   $0x116,0x8(%esp)
08471998 +0xb6:  movl   $&_ZZN18CPCRoomServerProxy7InitTcpEvE12__FUNCTION__,0x4(%esp)
084719a0 +0xbe:  lea    -0x2c(%ebp),%eax
084719a3 +0xc1:  mov    %eax,(%esp)
084719a6 +0xc4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084719ab +0xc9:  mov    %ebx,0x10(%esp)
084719af +0xcd:  mov    %edi,0xc(%esp)
084719b3 +0xd1:  mov    %esi,0x8(%esp)
084719b7 +0xd5:  movl   $"CPCRoomServerProxy CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
084719bf +0xdd:  lea    -0x2c(%ebp),%eax
084719c2 +0xe0:  mov    %eax,(%esp)
084719c5 +0xe3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084719ca +0xe8:  mov    $0x0,%eax
084719cf +0xed:  jmp    084719d6 <+0xf4>
084719d1 +0xef:  mov    $0x1,%eax
084719d6 +0xf4:  add    $0x4c,%esp
084719d9 +0xf7:  pop    %ebx
084719da +0xf8:  pop    %esi
084719db +0xf9:  pop    %edi
084719dc +0xfa:  pop    %ebp
084719dd +0xfb:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::InitTcp @ 0x84718e2

/* CPCRoomServerProxy::InitTcp() */

undefined4 __thiscall CPCRoomServerProxy::InitTcp(CPCRoomServerProxy *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30df8));
  if ((iVar3 == 0) || (*(int *)(this + 0x30dfc) == 0)) {
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
      iVar3 = *(int *)(this + 0x30dfc);
      pcVar5 = (char *)std::string::c_str((string *)(this + 0x30df8));
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)this,pcVar5,iVar3);
      if (local_20 != 0) {
        piVar6 = __errno_location();
        pcVar5 = strerror(*piVar6);
        piVar6 = __errno_location();
        iVar2 = local_20;
        iVar3 = *piVar6;
        cMyTrace::cMyTrace(local_30,"InitTcp",0x116,0);
        cMyTrace::operator()
                  (local_30,"CPCRoomServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
                   iVar3,pcVar5);
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
