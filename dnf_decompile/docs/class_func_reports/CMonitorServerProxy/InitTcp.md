# InitTcp

`_ZN19CMonitorServerProxy7InitTcpEv`

`CMonitorServerProxy::InitTcp()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470ad6  _ZN19CMonitorServerProxy7InitTcpEv
#           CMonitorServerProxy::InitTcp()
# range [0x08470ad6, 0x08470bed]
08470ad6 +0x000:  push   %ebp
08470ad7 +0x001:  mov    %esp,%ebp
08470ad9 +0x003:  push   %edi
08470ada +0x004:  push   %esi
08470adb +0x005:  push   %ebx
08470adc +0x006:  sub    $0x5c,%esp
08470adf +0x009:  mov    0x8(%ebp),%eax
08470ae2 +0x00c:  mov    0x4(%eax),%eax
08470ae5 +0x00f:  test   %eax,%eax
08470ae7 +0x011:  jne    08470af3 <+0x1d>
08470ae9 +0x013:  mov    $0x1,%eax
08470aee +0x018:  jmp    08470be5 <+0x10f>
08470af3 +0x01d:  mov    0x8(%ebp),%eax
08470af6 +0x020:  mov    0xc(%eax),%eax
08470af9 +0x023:  test   %eax,%eax
08470afb +0x025:  jns    08470b9a <+0xc4>
08470b01 +0x02b:  mov    0x8(%ebp),%eax
08470b04 +0x02e:  mov    0x8(%eax),%ebx
08470b07 +0x031:  mov    0x8(%ebp),%eax
08470b0a +0x034:  mov    %eax,(%esp)
08470b0d +0x037:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08470b12 +0x03c:  mov    0x8(%ebp),%edx
08470b15 +0x03f:  add    $0xc,%edx
08470b18 +0x042:  mov    %ebx,0x8(%esp)
08470b1c +0x046:  mov    %eax,0x4(%esp)
08470b20 +0x04a:  mov    %edx,(%esp)
08470b23 +0x04d:  call   082fdd99 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4a>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4a
08470b28 +0x052:  mov    %eax,-0x1c(%ebp)
08470b2b +0x055:  cmpl   $0x0,-0x1c(%ebp)
08470b2f +0x059:  setne  %al
08470b32 +0x05c:  test   %al,%al
08470b34 +0x05e:  je     08470b9a <+0xc4>
08470b36 +0x060:  call   0807dd70 <_init+0x668>
08470b3b +0x065:  mov    (%eax),%eax
08470b3d +0x067:  mov    %eax,(%esp)
08470b40 +0x06a:  call   0807d730 <_init+0x28>
08470b45 +0x06f:  mov    %eax,%ebx
08470b47 +0x071:  call   0807dd70 <_init+0x668>
08470b4c +0x076:  mov    (%eax),%edi
08470b4e +0x078:  mov    -0x1c(%ebp),%esi
08470b51 +0x07b:  movl   $0x0,0xc(%esp)
08470b59 +0x083:  movl   $0x49b,0x8(%esp)
08470b61 +0x08b:  movl   $&_ZZN19CMonitorServerProxy7InitTcpEvE19__PRETTY_FUNCTION__,0x4(%esp)
08470b69 +0x093:  lea    -0x3c(%ebp),%eax
08470b6c +0x096:  mov    %eax,(%esp)
08470b6f +0x099:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08470b74 +0x09e:  mov    %ebx,0x10(%esp)
08470b78 +0x0a2:  mov    %edi,0xc(%esp)
08470b7c +0x0a6:  mov    %esi,0x8(%esp)
08470b80 +0x0aa:  movl   $"CMonitorServerProxy CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
08470b88 +0x0b2:  lea    -0x3c(%ebp),%eax
08470b8b +0x0b5:  mov    %eax,(%esp)
08470b8e +0x0b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08470b93 +0x0bd:  mov    $0x0,%eax
08470b98 +0x0c2:  jmp    08470be5 <+0x10f>
08470b9a +0x0c4:  movl   $0x1,0x14(%esp)
08470ba2 +0x0cc:  movl   $0x1,0x10(%esp)
08470baa +0x0d4:  movl   $0x9,0xc(%esp)
08470bb2 +0x0dc:  movl   $0x4a0,0x8(%esp)
08470bba +0x0e4:  movl   $&_ZZN19CMonitorServerProxy7InitTcpEvE19__PRETTY_FUNCTION__,0x4(%esp)
08470bc2 +0x0ec:  lea    -0x2c(%ebp),%eax
08470bc5 +0x0ef:  mov    %eax,(%esp)
08470bc8 +0x0f2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08470bcd +0x0f7:  movl   $"[!] Connect To Monitor Server ... ",0x4(%esp)
08470bd5 +0x0ff:  lea    -0x2c(%ebp),%eax
08470bd8 +0x102:  mov    %eax,(%esp)
08470bdb +0x105:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08470be0 +0x10a:  mov    $0x1,%eax
08470be5 +0x10f:  add    $0x5c,%esp
08470be8 +0x112:  pop    %ebx
08470be9 +0x113:  pop    %esi
08470bea +0x114:  pop    %edi
08470beb +0x115:  pop    %ebp
08470bec +0x116:  ret
08470bed +0x117:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::InitTcp @ 0x8470ad6

/* CMonitorServerProxy::InitTcp() */

undefined4 __thiscall CMonitorServerProxy::InitTcp(CMonitorServerProxy *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 0xc) < 0) {
      iVar1 = *(int *)(this + 8);
      pcVar3 = (char *)std::string::c_str((string *)this);
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 0xc),pcVar3,iVar1);
      if (local_20 != 0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        piVar4 = __errno_location();
        iVar2 = local_20;
        iVar1 = *piVar4;
        cMyTrace::cMyTrace(local_40,"bool CMonitorServerProxy::InitTcp()",0x49b,0);
        cMyTrace::operator()
                  (local_40,"CMonitorServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
                   iVar1,pcVar3);
        return 0;
      }
    }
    cMyTrace::cMyTrace(local_30,"bool CMonitorServerProxy::InitTcp()",0x4a0,9,true,true);
    cMyTrace::operator()(local_30,"[!] Connect To Monitor Server ... ");
  }
  return 1;
}
```
