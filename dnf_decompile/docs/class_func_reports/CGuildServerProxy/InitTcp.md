# InitTcp

`_ZN17CGuildServerProxy7InitTcpEv`

`CGuildServerProxy::InitTcp()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846d96c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d96c  _ZN17CGuildServerProxy7InitTcpEv
#           CGuildServerProxy::InitTcp()
# range [0x0846d96c, 0x0846da83]
0846d96c +0x000:  push   %ebp
0846d96d +0x001:  mov    %esp,%ebp
0846d96f +0x003:  push   %edi
0846d970 +0x004:  push   %esi
0846d971 +0x005:  push   %ebx
0846d972 +0x006:  sub    $0x5c,%esp
0846d975 +0x009:  mov    0x8(%ebp),%eax
0846d978 +0x00c:  mov    0x4(%eax),%eax
0846d97b +0x00f:  test   %eax,%eax
0846d97d +0x011:  jne    0846d989 <+0x1d>
0846d97f +0x013:  mov    $0x1,%eax
0846d984 +0x018:  jmp    0846da7b <+0x10f>
0846d989 +0x01d:  mov    0x8(%ebp),%eax
0846d98c +0x020:  mov    0x24(%eax),%eax
0846d98f +0x023:  test   %eax,%eax
0846d991 +0x025:  jns    0846da30 <+0xc4>
0846d997 +0x02b:  mov    0x8(%ebp),%eax
0846d99a +0x02e:  mov    0x20(%eax),%ebx
0846d99d +0x031:  mov    0x8(%ebp),%eax
0846d9a0 +0x034:  mov    %eax,(%esp)
0846d9a3 +0x037:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d9a8 +0x03c:  mov    0x8(%ebp),%edx
0846d9ab +0x03f:  add    $0x24,%edx
0846d9ae +0x042:  mov    %ebx,0x8(%esp)
0846d9b2 +0x046:  mov    %eax,0x4(%esp)
0846d9b6 +0x04a:  mov    %edx,(%esp)
0846d9b9 +0x04d:  call   082fdd99 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4a>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4a
0846d9be +0x052:  mov    %eax,-0x1c(%ebp)
0846d9c1 +0x055:  cmpl   $0x0,-0x1c(%ebp)
0846d9c5 +0x059:  setne  %al
0846d9c8 +0x05c:  test   %al,%al
0846d9ca +0x05e:  je     0846da30 <+0xc4>
0846d9cc +0x060:  call   0807dd70 <_init+0x668>
0846d9d1 +0x065:  mov    (%eax),%eax
0846d9d3 +0x067:  mov    %eax,(%esp)
0846d9d6 +0x06a:  call   0807d730 <_init+0x28>
0846d9db +0x06f:  mov    %eax,%ebx
0846d9dd +0x071:  call   0807dd70 <_init+0x668>
0846d9e2 +0x076:  mov    (%eax),%edi
0846d9e4 +0x078:  mov    -0x1c(%ebp),%esi
0846d9e7 +0x07b:  movl   $0x0,0xc(%esp)
0846d9ef +0x083:  movl   $0x4ea,0x8(%esp)
0846d9f7 +0x08b:  movl   $&_ZZN17CGuildServerProxy7InitTcpEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846d9ff +0x093:  lea    -0x3c(%ebp),%eax
0846da02 +0x096:  mov    %eax,(%esp)
0846da05 +0x099:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846da0a +0x09e:  mov    %ebx,0x10(%esp)
0846da0e +0x0a2:  mov    %edi,0xc(%esp)
0846da12 +0x0a6:  mov    %esi,0x8(%esp)
0846da16 +0x0aa:  movl   $"CGuildServerProxy CreateConnectionSocket() error(%d:%d:%s)",0x4(%esp)
0846da1e +0x0b2:  lea    -0x3c(%ebp),%eax
0846da21 +0x0b5:  mov    %eax,(%esp)
0846da24 +0x0b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846da29 +0x0bd:  mov    $0x0,%eax
0846da2e +0x0c2:  jmp    0846da7b <+0x10f>
0846da30 +0x0c4:  movl   $0x1,0x14(%esp)
0846da38 +0x0cc:  movl   $0x1,0x10(%esp)
0846da40 +0x0d4:  movl   $0x9,0xc(%esp)
0846da48 +0x0dc:  movl   $0x4ef,0x8(%esp)
0846da50 +0x0e4:  movl   $&_ZZN17CGuildServerProxy7InitTcpEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846da58 +0x0ec:  lea    -0x2c(%ebp),%eax
0846da5b +0x0ef:  mov    %eax,(%esp)
0846da5e +0x0f2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0846da63 +0x0f7:  movl   $"[!] Connect To Guild Server ...",0x4(%esp)
0846da6b +0x0ff:  lea    -0x2c(%ebp),%eax
0846da6e +0x102:  mov    %eax,(%esp)
0846da71 +0x105:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846da76 +0x10a:  mov    $0x1,%eax
0846da7b +0x10f:  add    $0x5c,%esp
0846da7e +0x112:  pop    %ebx
0846da7f +0x113:  pop    %esi
0846da80 +0x114:  pop    %edi
0846da81 +0x115:  pop    %ebp
0846da82 +0x116:  ret
0846da83 +0x117:  nop
```

## 反编译 C

```c
// CGuildServerProxy::InitTcp @ 0x846d96c

/* CGuildServerProxy::InitTcp() */

undefined4 __thiscall CGuildServerProxy::InitTcp(CGuildServerProxy *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 0x24) < 0) {
      iVar1 = *(int *)(this + 0x20);
      pcVar3 = (char *)std::string::c_str((string *)this);
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 0x24),pcVar3,iVar1);
      if (local_20 != 0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        piVar4 = __errno_location();
        iVar2 = local_20;
        iVar1 = *piVar4;
        cMyTrace::cMyTrace(local_40,"bool CGuildServerProxy::InitTcp()",0x4ea,0);
        cMyTrace::operator()
                  (local_40,"CGuildServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,iVar1
                   ,pcVar3);
        return 0;
      }
    }
    cMyTrace::cMyTrace(local_30,"bool CGuildServerProxy::InitTcp()",0x4ef,9,true,true);
    cMyTrace::operator()(local_30,"[!] Connect To Guild Server ...");
  }
  return 1;
}
```
