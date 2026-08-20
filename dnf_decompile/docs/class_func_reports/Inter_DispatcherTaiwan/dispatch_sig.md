# dispatch_sig

`_ZN22Inter_DispatcherTaiwan12dispatch_sigEP5CUserPci`

`Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DispatcherTaiwan` | `0x084e8c2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8c2e  _ZN22Inter_DispatcherTaiwan12dispatch_sigEP5CUserPci
#           Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int)
# range [0x084e8c2e, 0x084e8ce3]
084e8c2e +0x00:  push   %ebp
084e8c2f +0x01:  mov    %esp,%ebp
084e8c31 +0x03:  push   %ebx
084e8c32 +0x04:  sub    $0x34,%esp
084e8c35 +0x07:  mov    0x10(%ebp),%eax
084e8c38 +0x0a:  mov    (%eax),%eax
084e8c3a +0x0c:  mov    %eax,-0x10(%ebp)
084e8c3d +0x0f:  mov    -0x10(%ebp),%eax
084e8c40 +0x12:  mov    0x8(%ebp),%edx
084e8c43 +0x15:  add    $0x4,%edx
084e8c46 +0x18:  mov    %eax,0x4(%esp)
084e8c4a +0x1c:  mov    %edx,(%esp)
084e8c4d +0x1f:  call   0816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T)
084e8c52 +0x24:  mov    %eax,-0xc(%ebp)
084e8c55 +0x27:  cmpl   $0x0,-0xc(%ebp)
084e8c59 +0x2b:  jne    084e8cb0 <+0x82>
084e8c5b +0x2d:  mov    0xc(%ebp),%eax
084e8c5e +0x30:  mov    %eax,(%esp)
084e8c61 +0x33:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e8c66 +0x38:  mov    %eax,%ebx
084e8c68 +0x3a:  movl   $0x5,0xc(%esp)
084e8c70 +0x42:  movl   $0x6dca,0x8(%esp)
084e8c78 +0x4a:  movl   $&_ZZN22Inter_DispatcherTaiwan12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e8c80 +0x52:  lea    -0x20(%ebp),%eax
084e8c83 +0x55:  mov    %eax,(%esp)
084e8c86 +0x58:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8c8b +0x5d:  mov    %ebx,0xc(%esp)
084e8c8f +0x61:  mov    -0x10(%ebp),%eax
084e8c92 +0x64:  mov    %eax,0x8(%esp)
084e8c96 +0x68:  movl   $"[TaiwanDispatcher] Invalid internal packet code. Code:%d, Charac:%u)",0x4(%esp)
084e8c9e +0x70:  lea    -0x20(%ebp),%eax
084e8ca1 +0x73:  mov    %eax,(%esp)
084e8ca4 +0x76:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8ca9 +0x7b:  mov    $0x6dcb,%eax
084e8cae +0x80:  jmp    084e8cdd <+0xaf>
084e8cb0 +0x82:  mov    -0xc(%ebp),%eax
084e8cb3 +0x85:  mov    (%eax),%eax
084e8cb5 +0x87:  add    $0x8,%eax
084e8cb8 +0x8a:  mov    (%eax),%edx
084e8cba +0x8c:  mov    0x14(%ebp),%eax
084e8cbd +0x8f:  sub    $0x4,%eax
084e8cc0 +0x92:  mov    0x10(%ebp),%ecx
084e8cc3 +0x95:  add    $0x4,%ecx
084e8cc6 +0x98:  mov    %eax,0xc(%esp)
084e8cca +0x9c:  mov    %ecx,0x8(%esp)
084e8cce +0xa0:  mov    0xc(%ebp),%eax
084e8cd1 +0xa3:  mov    %eax,0x4(%esp)
084e8cd5 +0xa7:  mov    -0xc(%ebp),%eax
084e8cd8 +0xaa:  mov    %eax,(%esp)
084e8cdb +0xad:  call   *%edx
084e8cdd +0xaf:  add    $0x34,%esp
084e8ce0 +0xb2:  pop    %ebx
084e8ce1 +0xb3:  pop    %ebp
084e8ce2 +0xb4:  ret
084e8ce3 +0xb5:  nop
```

## 反编译 C

```c
// Inter_DispatcherTaiwan::dispatch_sig @ 0x84e8c2e

/* Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_DispatcherTaiwan::dispatch_sig
          (Inter_DispatcherTaiwan *this,CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_24 [16];
  undefined4 local_14;
  int *local_10;
  
  local_14 = *(undefined4 *)param_2;
  local_10 = (int *)TaiwanInternalDispatcher::getDispatcher(this + 4,local_14);
  if (local_10 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int)",0x6dca
                       ,5);
    cMyTrace::operator()
              (local_24,"[TaiwanDispatcher] Invalid internal packet code. Code:%d, Charac:%u)",
               local_14,uVar1);
    uVar1 = 0x6dcb;
  }
  else {
    uVar1 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2 + 4,param_3 + -4);
  }
  return uVar1;
}
```
