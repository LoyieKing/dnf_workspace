# dispatch_sig

`_ZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPci`

`Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_BlackIPMonitor` | `0x084d8650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d8650  _ZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPci
#           Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int)
# range [0x084d8650, 0x084d879f]
084d8650 +0x000:  push   %ebp
084d8651 +0x001:  mov    %esp,%ebp
084d8653 +0x003:  push   %edi
084d8654 +0x004:  push   %esi
084d8655 +0x005:  push   %ebx
084d8656 +0x006:  sub    $0x5c,%esp
084d8659 +0x009:  mov    0x10(%ebp),%eax
084d865c +0x00c:  mov    %eax,-0x20(%ebp)
084d865f +0x00f:  movl   $0x0,-0x1c(%ebp)
084d8666 +0x016:  mov    -0x20(%ebp),%eax
084d8669 +0x019:  movzbl 0xc84(%eax),%eax
084d8670 +0x020:  test   %al,%al
084d8672 +0x022:  je     084d8681 <+0x31>
084d8674 +0x024:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%eax
084d8679 +0x029:  mov    %eax,(%esp)
084d867c +0x02c:  call   082a6512 <_GLOBAL__I__ZN4CLog5this_E+0x2939>  ; global constructors keyed to CLog::this_+0x2939
084d8681 +0x031:  movl   $0x0,-0x1c(%ebp)
084d8688 +0x038:  jmp    084d8723 <+0xd3>
084d868d +0x03d:  mov    -0x1c(%ebp),%edx
084d8690 +0x040:  mov    -0x20(%ebp),%eax
084d8693 +0x043:  add    %edx,%edx
084d8695 +0x045:  add    $0x1,%edx
084d8698 +0x048:  shl    $0x4,%edx
084d869b +0x04b:  add    %edx,%eax
084d869d +0x04d:  add    $0x10,%eax
084d86a0 +0x050:  mov    (%eax),%eax
084d86a2 +0x052:  mov    %eax,-0x3c(%ebp)
084d86a5 +0x055:  mov    -0x1c(%ebp),%edx
084d86a8 +0x058:  mov    -0x20(%ebp),%eax
084d86ab +0x05b:  add    %edx,%edx
084d86ad +0x05d:  add    $0x1,%edx
084d86b0 +0x060:  shl    $0x4,%edx
084d86b3 +0x063:  add    %edx,%eax
084d86b5 +0x065:  add    $0xc,%eax
084d86b8 +0x068:  mov    (%eax),%edi
084d86ba +0x06a:  mov    -0x1c(%ebp),%edx
084d86bd +0x06d:  mov    -0x20(%ebp),%eax
084d86c0 +0x070:  add    %edx,%edx
084d86c2 +0x072:  add    $0x1,%edx
084d86c5 +0x075:  shl    $0x4,%edx
084d86c8 +0x078:  add    %edx,%eax
084d86ca +0x07a:  add    $0x8,%eax
084d86cd +0x07d:  mov    (%eax),%esi
084d86cf +0x07f:  mov    -0x1c(%ebp),%edx
084d86d2 +0x082:  mov    -0x20(%ebp),%eax
084d86d5 +0x085:  add    %edx,%edx
084d86d7 +0x087:  add    $0x1,%edx
084d86da +0x08a:  shl    $0x4,%edx
084d86dd +0x08d:  add    %edx,%eax
084d86df +0x08f:  add    $0x4,%eax
084d86e2 +0x092:  mov    (%eax),%eax
084d86e4 +0x094:  mov    %eax,%ebx
084d86e6 +0x096:  mov    -0x1c(%ebp),%eax
084d86e9 +0x099:  shl    $0x5,%eax
084d86ec +0x09c:  add    -0x20(%ebp),%eax
084d86ef +0x09f:  add    $0x4,%eax
084d86f2 +0x0a2:  mov    %eax,(%esp)
084d86f5 +0x0a5:  call   0807e530 <_init+0xe28>
084d86fa +0x0aa:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%edx
084d8700 +0x0b0:  mov    -0x3c(%ebp),%ecx
084d8703 +0x0b3:  mov    %ecx,0x14(%esp)
084d8707 +0x0b7:  mov    %edi,0x10(%esp)
084d870b +0x0bb:  mov    %esi,0xc(%esp)
084d870f +0x0bf:  mov    %ebx,0x8(%esp)
084d8713 +0x0c3:  mov    %eax,0x4(%esp)
084d8717 +0x0c7:  mov    %edx,(%esp)
084d871a +0x0ca:  call   084eba54 <_GLOBAL__I__Z7getUserj+0x2a06>  ; global constructors keyed to getUser(unsigned int)+0x2a06
084d871f +0x0cf:  addl   $0x1,-0x1c(%ebp)
084d8723 +0x0d3:  mov    -0x20(%ebp),%eax
084d8726 +0x0d6:  mov    (%eax),%eax
084d8728 +0x0d8:  cmp    -0x1c(%ebp),%eax
084d872b +0x0db:  setg   %al
084d872e +0x0de:  test   %al,%al
084d8730 +0x0e0:  jne    084d868d <+0x3d>
084d8736 +0x0e6:  mov    -0x1c(%ebp),%eax
084d8739 +0x0e9:  lea    -0x1(%eax),%edx
084d873c +0x0ec:  mov    -0x20(%ebp),%eax
084d873f +0x0ef:  add    %edx,%edx
084d8741 +0x0f1:  add    $0x1,%edx
084d8744 +0x0f4:  shl    $0x4,%edx
084d8747 +0x0f7:  add    %edx,%eax
084d8749 +0x0f9:  add    $0xc,%eax
084d874c +0x0fc:  mov    (%eax),%eax
084d874e +0x0fe:  mov    %eax,&_ZN10GlobalData27g_IPMonitorLastDBAccessTimeE
084d8753 +0x103:  mov    &_ZN10GlobalData27g_IPMonitorLastDBAccessTimeE,%ebx
084d8759 +0x109:  movl   $0x0,0xc(%esp)
084d8761 +0x111:  movl   $0x3f5b,0x8(%esp)
084d8769 +0x119:  movl   $&_ZZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d8771 +0x121:  lea    -0x30(%ebp),%eax
084d8774 +0x124:  mov    %eax,(%esp)
084d8777 +0x127:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d877c +0x12c:  mov    %ebx,0x8(%esp)
084d8780 +0x130:  movl   $"IPMonitorPunish LAST LOAD TIME : %d",0x4(%esp)
084d8788 +0x138:  lea    -0x30(%ebp),%eax
084d878b +0x13b:  mov    %eax,(%esp)
084d878e +0x13e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d8793 +0x143:  mov    $0x0,%eax
084d8798 +0x148:  add    $0x5c,%esp
084d879b +0x14b:  pop    %ebx
084d879c +0x14c:  pop    %esi
084d879d +0x14d:  pop    %edi
084d879e +0x14e:  pop    %ebp
084d879f +0x14f:  ret
```

## 反编译 C

```c
// Inter_BlackIPMonitor::dispatch_sig @ 0x84d8650

/* Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitor::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  in_addr_t iVar5;
  cMyTrace local_34 [16];
  int *local_24;
  int local_20;
  
  local_24 = (int *)param_3;
  local_20 = 0;
  if (*(char *)(param_3 + 0xc84) != '\0') {
    WongWork::CBlackIPMonitor::reset(GlobalData::g_blackIPMonitor);
  }
  for (local_20 = 0; local_20 < *local_24; local_20 = local_20 + 1) {
    iVar4 = local_24[(local_20 * 2 + 1) * 4 + 4];
    iVar1 = local_24[(local_20 * 2 + 1) * 4 + 3];
    iVar2 = local_24[(local_20 * 2 + 1) * 4 + 2];
    iVar3 = local_24[(local_20 * 2 + 1) * 4 + 1];
    iVar5 = inet_addr((char *)(local_24 + local_20 * 8 + 1));
    WongWork::CBlackIPMonitor::insertNewIP
              (GlobalData::g_blackIPMonitor,iVar5,iVar3,iVar2,iVar1,iVar4);
  }
  iVar4 = local_24[((local_20 + -1) * 2 + 1) * 4 + 3];
  GlobalData::g_IPMonitorLastDBAccessTime = iVar4;
  cMyTrace::cMyTrace(local_34,"virtual int Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int)",
                     0x3f5b,0);
  cMyTrace::operator()(local_34,"IPMonitorPunish LAST LOAD TIME : %d",iVar4);
  return 0;
}
```
