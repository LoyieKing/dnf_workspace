# InitTcp

`_ZN15BaseServerProxy7InitTcpEb`

`BaseServerProxy::InitTcp(bool)`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd47c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd47c  _ZN15BaseServerProxy7InitTcpEb
#           BaseServerProxy::InitTcp(bool)
# range [0x082fd47c, 0x082fd6e3]
082fd47c +0x000:  push   %ebp
082fd47d +0x001:  mov    %esp,%ebp
082fd47f +0x003:  push   %edi
082fd480 +0x004:  push   %esi
082fd481 +0x005:  push   %ebx
082fd482 +0x006:  sub    $0x6c,%esp
082fd485 +0x009:  mov    0xc(%ebp),%eax
082fd488 +0x00c:  mov    %al,-0x4c(%ebp)
082fd48b +0x00f:  mov    0x8(%ebp),%eax
082fd48e +0x012:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd493 +0x017:  mov    %eax,(%esp)
082fd496 +0x01a:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
082fd49b +0x01f:  test   %eax,%eax
082fd49d +0x021:  je     082fd4ac <+0x30>
082fd49f +0x023:  mov    0x8(%ebp),%eax
082fd4a2 +0x026:  mov    &_ZL14gUnicodeBuffer+0x268d8(%eax),%eax
082fd4a8 +0x02c:  test   %eax,%eax
082fd4aa +0x02e:  jne    082fd4b3 <+0x37>
082fd4ac +0x030:  mov    $0x1,%eax
082fd4b1 +0x035:  jmp    082fd4b8 <+0x3c>
082fd4b3 +0x037:  mov    $0x0,%eax
082fd4b8 +0x03c:  test   %al,%al
082fd4ba +0x03e:  je     082fd4c6 <+0x4a>
082fd4bc +0x040:  mov    $0x0,%eax
082fd4c1 +0x045:  jmp    082fd6d8 <+0x25c>
082fd4c6 +0x04a:  mov    0x8(%ebp),%eax
082fd4c9 +0x04d:  mov    0x4(%eax),%eax
082fd4cc +0x050:  test   %eax,%eax
082fd4ce +0x052:  jns    082fd6d3 <+0x257>
082fd4d4 +0x058:  cmpb   $0x0,-0x4c(%ebp)
082fd4d8 +0x05c:  je     082fd5da <+0x15e>
082fd4de +0x062:  mov    0x8(%ebp),%eax
082fd4e1 +0x065:  mov    &_ZL14gUnicodeBuffer+0x268d8(%eax),%ebx
082fd4e7 +0x06b:  mov    0x8(%ebp),%eax
082fd4ea +0x06e:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd4ef +0x073:  mov    %eax,(%esp)
082fd4f2 +0x076:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd4f7 +0x07b:  mov    0x8(%ebp),%edx
082fd4fa +0x07e:  add    $0x4,%edx
082fd4fd +0x081:  mov    %ebx,0x8(%esp)
082fd501 +0x085:  mov    %eax,0x4(%esp)
082fd505 +0x089:  mov    %edx,(%esp)
082fd508 +0x08c:  call   082fdd99 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4a>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4a
082fd50d +0x091:  mov    %eax,-0x1c(%ebp)
082fd510 +0x094:  cmpl   $0x0,-0x1c(%ebp)
082fd514 +0x098:  setne  %al
082fd517 +0x09b:  test   %al,%al
082fd519 +0x09d:  je     082fd6d3 <+0x257>
082fd51f +0x0a3:  call   0807dd70 <_init+0x668>
082fd524 +0x0a8:  mov    (%eax),%eax
082fd526 +0x0aa:  mov    %eax,(%esp)
082fd529 +0x0ad:  call   0807d730 <_init+0x28>
082fd52e +0x0b2:  mov    %eax,%esi
082fd530 +0x0b4:  call   0807dd70 <_init+0x668>
082fd535 +0x0b9:  mov    (%eax),%eax
082fd537 +0x0bb:  mov    %eax,-0x54(%ebp)
082fd53a +0x0be:  mov    -0x1c(%ebp),%edi
082fd53d +0x0c1:  lea    -0x44(%ebp),%eax
082fd540 +0x0c4:  mov    0x8(%ebp),%edx
082fd543 +0x0c7:  mov    %edx,0x4(%esp)
082fd547 +0x0cb:  mov    %eax,(%esp)
082fd54a +0x0ce:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fd54f +0x0d3:  sub    $0x4,%esp
082fd552 +0x0d6:  lea    -0x44(%ebp),%eax
082fd555 +0x0d9:  mov    %eax,(%esp)
082fd558 +0x0dc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd55d +0x0e1:  mov    %eax,%ebx
082fd55f +0x0e3:  movl   $0x0,0xc(%esp)
082fd567 +0x0eb:  movl   $0x134,0x8(%esp)
082fd56f +0x0f3:  movl   $&_ZZN15BaseServerProxy7InitTcpEbE19__PRETTY_FUNCTION__,0x4(%esp)
082fd577 +0x0fb:  lea    -0x40(%ebp),%eax
082fd57a +0x0fe:  mov    %eax,(%esp)
082fd57d +0x101:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fd582 +0x106:  mov    %esi,0x14(%esp)
082fd586 +0x10a:  mov    -0x54(%ebp),%eax
082fd589 +0x10d:  mov    %eax,0x10(%esp)
082fd58d +0x111:  mov    %edi,0xc(%esp)
082fd591 +0x115:  mov    %ebx,0x8(%esp)
082fd595 +0x119:  movl   $"%s CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
082fd59d +0x121:  lea    -0x40(%ebp),%eax
082fd5a0 +0x124:  mov    %eax,(%esp)
082fd5a3 +0x127:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fd5a8 +0x12c:  jmp    082fd5c5 <+0x149>
082fd5aa +0x12e:  mov    %edx,%ebx
082fd5ac +0x130:  mov    %eax,%esi
082fd5ae +0x132:  lea    -0x44(%ebp),%eax
082fd5b1 +0x135:  mov    %eax,(%esp)
082fd5b4 +0x138:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd5b9 +0x13d:  mov    %esi,%eax
082fd5bb +0x13f:  mov    %ebx,%edx
082fd5bd +0x141:  mov    %eax,(%esp)
082fd5c0 +0x144:  call   08ae3750 <_Unwind_Resume>
082fd5c5 +0x149:  lea    -0x44(%ebp),%eax
082fd5c8 +0x14c:  mov    %eax,(%esp)
082fd5cb +0x14f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd5d0 +0x154:  mov    $0x0,%eax
082fd5d5 +0x159:  jmp    082fd6d8 <+0x25c>
082fd5da +0x15e:  mov    0x8(%ebp),%eax
082fd5dd +0x161:  mov    &_ZL14gUnicodeBuffer+0x268d8(%eax),%ebx
082fd5e3 +0x167:  mov    0x8(%ebp),%eax
082fd5e6 +0x16a:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd5eb +0x16f:  mov    %eax,(%esp)
082fd5ee +0x172:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd5f3 +0x177:  mov    0x8(%ebp),%edx
082fd5f6 +0x17a:  add    $0x4,%edx
082fd5f9 +0x17d:  mov    %ebx,0x8(%esp)
082fd5fd +0x181:  mov    %eax,0x4(%esp)
082fd601 +0x185:  mov    %edx,(%esp)
082fd604 +0x188:  call   082fde9b <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x14c>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x14c
082fd609 +0x18d:  mov    %eax,-0x1c(%ebp)
082fd60c +0x190:  cmpl   $0x0,-0x1c(%ebp)
082fd610 +0x194:  setne  %al
082fd613 +0x197:  test   %al,%al
082fd615 +0x199:  je     082fd6d3 <+0x257>
082fd61b +0x19f:  call   0807dd70 <_init+0x668>
082fd620 +0x1a4:  mov    (%eax),%eax
082fd622 +0x1a6:  mov    %eax,(%esp)
082fd625 +0x1a9:  call   0807d730 <_init+0x28>
082fd62a +0x1ae:  mov    %eax,%esi
082fd62c +0x1b0:  call   0807dd70 <_init+0x668>
082fd631 +0x1b5:  mov    (%eax),%eax
082fd633 +0x1b7:  mov    %eax,-0x50(%ebp)
082fd636 +0x1ba:  mov    -0x1c(%ebp),%edi
082fd639 +0x1bd:  lea    -0x30(%ebp),%eax
082fd63c +0x1c0:  mov    0x8(%ebp),%edx
082fd63f +0x1c3:  mov    %edx,0x4(%esp)
082fd643 +0x1c7:  mov    %eax,(%esp)
082fd646 +0x1ca:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fd64b +0x1cf:  sub    $0x4,%esp
082fd64e +0x1d2:  lea    -0x30(%ebp),%eax
082fd651 +0x1d5:  mov    %eax,(%esp)
082fd654 +0x1d8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd659 +0x1dd:  mov    %eax,%ebx
082fd65b +0x1df:  movl   $0x0,0xc(%esp)
082fd663 +0x1e7:  movl   $0x13d,0x8(%esp)
082fd66b +0x1ef:  movl   $&_ZZN15BaseServerProxy7InitTcpEbE19__PRETTY_FUNCTION__,0x4(%esp)
082fd673 +0x1f7:  lea    -0x2c(%ebp),%eax
082fd676 +0x1fa:  mov    %eax,(%esp)
082fd679 +0x1fd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fd67e +0x202:  mov    %esi,0x14(%esp)
082fd682 +0x206:  mov    -0x50(%ebp),%eax
082fd685 +0x209:  mov    %eax,0x10(%esp)
082fd689 +0x20d:  mov    %edi,0xc(%esp)
082fd68d +0x211:  mov    %ebx,0x8(%esp)
082fd691 +0x215:  movl   $"%s CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
082fd699 +0x21d:  lea    -0x2c(%ebp),%eax
082fd69c +0x220:  mov    %eax,(%esp)
082fd69f +0x223:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fd6a4 +0x228:  jmp    082fd6c1 <+0x245>
082fd6a6 +0x22a:  mov    %edx,%ebx
082fd6a8 +0x22c:  mov    %eax,%esi
082fd6aa +0x22e:  lea    -0x30(%ebp),%eax
082fd6ad +0x231:  mov    %eax,(%esp)
082fd6b0 +0x234:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd6b5 +0x239:  mov    %esi,%eax
082fd6b7 +0x23b:  mov    %ebx,%edx
082fd6b9 +0x23d:  mov    %eax,(%esp)
082fd6bc +0x240:  call   08ae3750 <_Unwind_Resume>
082fd6c1 +0x245:  lea    -0x30(%ebp),%eax
082fd6c4 +0x248:  mov    %eax,(%esp)
082fd6c7 +0x24b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd6cc +0x250:  mov    $0x0,%eax
082fd6d1 +0x255:  jmp    082fd6d8 <+0x25c>
082fd6d3 +0x257:  mov    $0x1,%eax
082fd6d8 +0x25c:  lea    -0xc(%ebp),%esp
082fd6db +0x25f:  add    $0x0,%esp
082fd6de +0x262:  pop    %ebx
082fd6df +0x263:  pop    %esi
082fd6e0 +0x264:  pop    %edi
082fd6e1 +0x265:  pop    %ebp
082fd6e2 +0x266:  ret
082fd6e3 +0x267:  nop
```

## 反编译 C

```c
// BaseServerProxy::InitTcp @ 0x82fd47c

/* BaseServerProxy::InitTcp(bool) */

undefined4 __thiscall BaseServerProxy::InitTcp(BaseServerProxy *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  string local_48 [4];
  cMyTrace local_44 [16];
  string local_34 [4];
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30e00));
  if ((iVar3 == 0) || (*(int *)(this + 0x30e04) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (*(int *)(this + 4) < 0) {
      if (param_1) {
        iVar3 = *(int *)(this + 0x30e04);
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x30e00));
        local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 4),pcVar4,iVar3);
        if (local_20 != 0) {
          piVar5 = __errno_location();
          pcVar4 = strerror(*piVar5);
          piVar5 = __errno_location();
          iVar2 = local_20;
          iVar3 = *piVar5;
          GetServerName();
                    /* try { // try from 082fd558 to 082fd5a7 has its CatchHandler @ 082fd5aa */
          uVar6 = std::string::c_str(local_48);
          cMyTrace::cMyTrace(local_44,"bool BaseServerProxy::InitTcp(bool)",0x134,0);
          cMyTrace::operator()
                    (local_44,"%s CreateConnectionSocket() error(%d:%d:%s)",uVar6,iVar2,iVar3,pcVar4
                    );
          std::string::~string(local_48);
          return 0;
        }
      }
      else {
        iVar3 = *(int *)(this + 0x30e04);
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x30e00));
        local_20 = CNetwork<100000,100000>::CreateConnectionBlockSocket
                             ((int *)(this + 4),pcVar4,iVar3);
        if (local_20 != 0) {
          piVar5 = __errno_location();
          pcVar4 = strerror(*piVar5);
          piVar5 = __errno_location();
          iVar2 = local_20;
          iVar3 = *piVar5;
          GetServerName();
                    /* try { // try from 082fd654 to 082fd6a3 has its CatchHandler @ 082fd6a6 */
          uVar6 = std::string::c_str(local_34);
          cMyTrace::cMyTrace(local_30,"bool BaseServerProxy::InitTcp(bool)",0x13d,0);
          cMyTrace::operator()
                    (local_30,"%s CreateConnectionSocket() error(%d:%d:%s)",uVar6,iVar2,iVar3,pcVar4
                    );
          std::string::~string(local_34);
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}
```
