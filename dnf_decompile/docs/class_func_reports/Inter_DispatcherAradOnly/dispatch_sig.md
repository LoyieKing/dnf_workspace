# dispatch_sig

`_ZN24Inter_DispatcherAradOnly12dispatch_sigEP5CUserPci`

`Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DispatcherAradOnly` | `0x084e7f2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7f2c  _ZN24Inter_DispatcherAradOnly12dispatch_sigEP5CUserPci
#           Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int)
# range [0x084e7f2c, 0x084e7fe1]
084e7f2c +0x00:  push   %ebp
084e7f2d +0x01:  mov    %esp,%ebp
084e7f2f +0x03:  push   %ebx
084e7f30 +0x04:  sub    $0x34,%esp
084e7f33 +0x07:  mov    0x10(%ebp),%eax
084e7f36 +0x0a:  mov    (%eax),%eax
084e7f38 +0x0c:  mov    %eax,-0x10(%ebp)
084e7f3b +0x0f:  mov    -0x10(%ebp),%eax
084e7f3e +0x12:  mov    0x8(%ebp),%edx
084e7f41 +0x15:  add    $0x4,%edx
084e7f44 +0x18:  mov    %eax,0x4(%esp)
084e7f48 +0x1c:  mov    %edx,(%esp)
084e7f4b +0x1f:  call   0819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
084e7f50 +0x24:  mov    %eax,-0xc(%ebp)
084e7f53 +0x27:  cmpl   $0x0,-0xc(%ebp)
084e7f57 +0x2b:  jne    084e7fae <+0x82>
084e7f59 +0x2d:  mov    0xc(%ebp),%eax
084e7f5c +0x30:  mov    %eax,(%esp)
084e7f5f +0x33:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e7f64 +0x38:  mov    %eax,%ebx
084e7f66 +0x3a:  movl   $0x5,0xc(%esp)
084e7f6e +0x42:  movl   $0x6ba2,0x8(%esp)
084e7f76 +0x4a:  movl   $&_ZZN24Inter_DispatcherAradOnly12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e7f7e +0x52:  lea    -0x20(%ebp),%eax
084e7f81 +0x55:  mov    %eax,(%esp)
084e7f84 +0x58:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e7f89 +0x5d:  mov    %ebx,0xc(%esp)
084e7f8d +0x61:  mov    -0x10(%ebp),%eax
084e7f90 +0x64:  mov    %eax,0x8(%esp)
084e7f94 +0x68:  movl   $"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d, charac:%u)",0x4(%esp)
084e7f9c +0x70:  lea    -0x20(%ebp),%eax
084e7f9f +0x73:  mov    %eax,(%esp)
084e7fa2 +0x76:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e7fa7 +0x7b:  mov    $0x6ba3,%eax
084e7fac +0x80:  jmp    084e7fdb <+0xaf>
084e7fae +0x82:  mov    -0xc(%ebp),%eax
084e7fb1 +0x85:  mov    (%eax),%eax
084e7fb3 +0x87:  add    $0x8,%eax
084e7fb6 +0x8a:  mov    (%eax),%edx
084e7fb8 +0x8c:  mov    0x14(%ebp),%eax
084e7fbb +0x8f:  sub    $0x4,%eax
084e7fbe +0x92:  mov    0x10(%ebp),%ecx
084e7fc1 +0x95:  add    $0x4,%ecx
084e7fc4 +0x98:  mov    %eax,0xc(%esp)
084e7fc8 +0x9c:  mov    %ecx,0x8(%esp)
084e7fcc +0xa0:  mov    0xc(%ebp),%eax
084e7fcf +0xa3:  mov    %eax,0x4(%esp)
084e7fd3 +0xa7:  mov    -0xc(%ebp),%eax
084e7fd6 +0xaa:  mov    %eax,(%esp)
084e7fd9 +0xad:  call   *%edx
084e7fdb +0xaf:  add    $0x34,%esp
084e7fde +0xb2:  pop    %ebx
084e7fdf +0xb3:  pop    %ebp
084e7fe0 +0xb4:  ret
084e7fe1 +0xb5:  nop
```

## 反编译 C

```c
// Inter_DispatcherAradOnly::dispatch_sig @ 0x84e7f2c

/* Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_DispatcherAradOnly::dispatch_sig
          (Inter_DispatcherAradOnly *this,CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_24 [16];
  undefined4 local_14;
  int *local_10;
  
  local_14 = *(undefined4 *)param_2;
  local_10 = (int *)ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(this + 4,local_14);
  if (local_10 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int)",
                       0x6ba2,5);
    cMyTrace::operator()
              (local_24,"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d, charac:%u)",
               local_14,uVar1);
    uVar1 = 0x6ba3;
  }
  else {
    uVar1 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2 + 4,param_3 + -4);
  }
  return uVar1;
}
```
