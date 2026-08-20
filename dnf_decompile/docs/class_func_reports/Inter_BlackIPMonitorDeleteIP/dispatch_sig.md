# dispatch_sig

`_ZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPci`

`Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_BlackIPMonitorDeleteIP` | `0x084d87e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d87e8  _ZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPci
#           Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)
# range [0x084d87e8, 0x084d891b]
084d87e8 +0x000:  push   %ebp
084d87e9 +0x001:  mov    %esp,%ebp
084d87eb +0x003:  push   %esi
084d87ec +0x004:  push   %ebx
084d87ed +0x005:  sub    $0x40,%esp
084d87f0 +0x008:  mov    0x10(%ebp),%eax
084d87f3 +0x00b:  mov    %eax,-0x10(%ebp)
084d87f6 +0x00e:  movl   $0x0,-0xc(%ebp)
084d87fd +0x015:  mov    -0x10(%ebp),%eax
084d8800 +0x018:  mov    0xa(%eax),%ebx
084d8803 +0x01b:  movl   $0x0,0xc(%esp)
084d880b +0x023:  movl   $0x3f6d,0x8(%esp)
084d8813 +0x02b:  movl   $&_ZZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d881b +0x033:  lea    -0x30(%ebp),%eax
084d881e +0x036:  mov    %eax,(%esp)
084d8821 +0x039:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d8826 +0x03e:  mov    %ebx,0x8(%esp)
084d882a +0x042:  movl   $"Delete IP Cnt : %d",0x4(%esp)
084d8832 +0x04a:  lea    -0x30(%ebp),%eax
084d8835 +0x04d:  mov    %eax,(%esp)
084d8838 +0x050:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d883d +0x055:  movl   $0x0,-0xc(%ebp)
084d8844 +0x05c:  jmp    084d88fc <+0x114>
084d8849 +0x061:  mov    -0xc(%ebp),%edx
084d884c +0x064:  mov    -0x10(%ebp),%ecx
084d884f +0x067:  mov    %edx,%eax
084d8851 +0x069:  shl    $0x2,%eax
084d8854 +0x06c:  add    %edx,%eax
084d8856 +0x06e:  shl    $0x2,%eax
084d8859 +0x071:  lea    (%ecx,%eax,1),%eax
084d885c +0x074:  add    $0x10,%eax
084d885f +0x077:  mov    0xe(%eax),%ecx
084d8862 +0x07a:  mov    -0xc(%ebp),%edx
084d8865 +0x07d:  mov    %edx,%eax
084d8867 +0x07f:  shl    $0x2,%eax
084d886a +0x082:  add    %edx,%eax
084d886c +0x084:  shl    $0x2,%eax
084d886f +0x087:  add    -0x10(%ebp),%eax
084d8872 +0x08a:  lea    0xe(%eax),%edx
084d8875 +0x08d:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%eax
084d887a +0x092:  mov    %ecx,0x8(%esp)
084d887e +0x096:  mov    %edx,0x4(%esp)
084d8882 +0x09a:  mov    %eax,(%esp)
084d8885 +0x09d:  call   084ebace <_GLOBAL__I__Z7getUserj+0x2a80>  ; global constructors keyed to getUser(unsigned int)+0x2a80
084d888a +0x0a2:  test   %al,%al
084d888c +0x0a4:  je     084d88f8 <+0x110>
084d888e +0x0a6:  mov    -0xc(%ebp),%edx
084d8891 +0x0a9:  mov    -0x10(%ebp),%ecx
084d8894 +0x0ac:  mov    %edx,%eax
084d8896 +0x0ae:  shl    $0x2,%eax
084d8899 +0x0b1:  add    %edx,%eax
084d889b +0x0b3:  shl    $0x2,%eax
084d889e +0x0b6:  lea    (%ecx,%eax,1),%eax
084d88a1 +0x0b9:  add    $0x10,%eax
084d88a4 +0x0bc:  mov    0xe(%eax),%ebx
084d88a7 +0x0bf:  mov    -0xc(%ebp),%edx
084d88aa +0x0c2:  mov    %edx,%eax
084d88ac +0x0c4:  shl    $0x2,%eax
084d88af +0x0c7:  add    %edx,%eax
084d88b1 +0x0c9:  shl    $0x2,%eax
084d88b4 +0x0cc:  add    -0x10(%ebp),%eax
084d88b7 +0x0cf:  lea    0xe(%eax),%esi
084d88ba +0x0d2:  movl   $0x0,0xc(%esp)
084d88c2 +0x0da:  movl   $0x3f76,0x8(%esp)
084d88ca +0x0e2:  movl   $&_ZZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d88d2 +0x0ea:  lea    -0x20(%ebp),%eax
084d88d5 +0x0ed:  mov    %eax,(%esp)
084d88d8 +0x0f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d88dd +0x0f5:  mov    %ebx,0xc(%esp)
084d88e1 +0x0f9:  mov    %esi,0x8(%esp)
084d88e5 +0x0fd:  movl   $"Delete IP: %s, Type: %d",0x4(%esp)
084d88ed +0x105:  lea    -0x20(%ebp),%eax
084d88f0 +0x108:  mov    %eax,(%esp)
084d88f3 +0x10b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d88f8 +0x110:  addl   $0x1,-0xc(%ebp)
084d88fc +0x114:  mov    -0x10(%ebp),%eax
084d88ff +0x117:  mov    0xa(%eax),%eax
084d8902 +0x11a:  cmp    -0xc(%ebp),%eax
084d8905 +0x11d:  seta   %al
084d8908 +0x120:  test   %al,%al
084d890a +0x122:  jne    084d8849 <+0x61>
084d8910 +0x128:  mov    $0x0,%eax
084d8915 +0x12d:  add    $0x40,%esp
084d8918 +0x130:  pop    %ebx
084d8919 +0x131:  pop    %esi
084d891a +0x132:  pop    %ebp
084d891b +0x133:  ret
```

## 反编译 C

```c
// Inter_BlackIPMonitorDeleteIP::dispatch_sig @ 0x84d87e8

/* Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  local_14 = param_3;
  local_10 = 0;
  uVar1 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)",
                     0x3f6d,0);
  cMyTrace::operator()(local_34,"Delete IP Cnt : %d",uVar1);
  for (local_10 = 0; local_10 < *(uint *)(local_14 + 10); local_10 = local_10 + 1) {
    cVar2 = WongWork::CBlackIPMonitor::deleteIP
                      (GlobalData::g_blackIPMonitor,(char *)(local_10 * 0x14 + local_14 + 0xe),
                       *(uint *)(local_14 + local_10 * 0x14 + 0x1e));
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(local_14 + local_10 * 0x14 + 0x1e);
      iVar3 = local_10 * 0x14 + local_14;
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)"
                         ,0x3f76,0);
      cMyTrace::operator()(local_24,"Delete IP: %s, Type: %d",iVar3 + 0xe,uVar1);
    }
  }
  return 0;
}
```
