# dispatch_sig

`_ZN22Inter_LoadPowerWarInfo12dispatch_sigEP5CUserPci`

`Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPowerWarInfo` | `0x084dcf4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dcf4a  _ZN22Inter_LoadPowerWarInfo12dispatch_sigEP5CUserPci
#           Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int)
# range [0x084dcf4a, 0x084dcfeb]
084dcf4a +0x00:  push   %ebp
084dcf4b +0x01:  mov    %esp,%ebp
084dcf4d +0x03:  push   %edi
084dcf4e +0x04:  push   %esi
084dcf4f +0x05:  push   %ebx
084dcf50 +0x06:  sub    $0x4c,%esp
084dcf53 +0x09:  mov    0x10(%ebp),%eax
084dcf56 +0x0c:  mov    %eax,-0x1c(%ebp)
084dcf59 +0x0f:  mov    -0x1c(%ebp),%eax
084dcf5c +0x12:  mov    0x4(%eax),%edi
084dcf5f +0x15:  mov    -0x1c(%ebp),%eax
084dcf62 +0x18:  mov    (%eax),%esi
084dcf64 +0x1a:  mov    -0x1c(%ebp),%eax
084dcf67 +0x1d:  movzbl 0x8(%eax),%eax
084dcf6b +0x21:  movsbl %al,%ebx
084dcf6e +0x24:  movl   $0x0,0xc(%esp)
084dcf76 +0x2c:  movl   $0x483a,0x8(%esp)
084dcf7e +0x34:  movl   $&_ZZN22Inter_LoadPowerWarInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084dcf86 +0x3c:  lea    -0x2c(%ebp),%eax
084dcf89 +0x3f:  mov    %eax,(%esp)
084dcf8c +0x42:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084dcf91 +0x47:  mov    %edi,0x10(%esp)
084dcf95 +0x4b:  mov    %esi,0xc(%esp)
084dcf99 +0x4f:  mov    %ebx,0x8(%esp)
084dcf9d +0x53:  movl   $"Receive SIG_LOAD_POWER_WAR_INFO(Winner:%d, A:%d, B:%d)",0x4(%esp)
084dcfa5 +0x5b:  lea    -0x2c(%ebp),%eax
084dcfa8 +0x5e:  mov    %eax,(%esp)
084dcfab +0x61:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084dcfb0 +0x66:  mov    -0x1c(%ebp),%eax
084dcfb3 +0x69:  mov    0x4(%eax),%ebx
084dcfb6 +0x6c:  mov    -0x1c(%ebp),%eax
084dcfb9 +0x6f:  mov    (%eax),%ecx
084dcfbb +0x71:  mov    -0x1c(%ebp),%eax
084dcfbe +0x74:  movzbl 0x8(%eax),%eax
084dcfc2 +0x78:  movsbl %al,%edx
084dcfc5 +0x7b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084dcfca +0x80:  mov    %ebx,0xc(%esp)
084dcfce +0x84:  mov    %ecx,0x8(%esp)
084dcfd2 +0x88:  mov    %edx,0x4(%esp)
084dcfd6 +0x8c:  mov    %eax,(%esp)
084dcfd9 +0x8f:  call   0847eb76 <_ZN13CPowerManager12SetPowerInfoEcii>  ; CPowerManager::SetPowerInfo(char, int, int)
084dcfde +0x94:  mov    $0x0,%eax
084dcfe3 +0x99:  add    $0x4c,%esp
084dcfe6 +0x9c:  pop    %ebx
084dcfe7 +0x9d:  pop    %esi
084dcfe8 +0x9e:  pop    %edi
084dcfe9 +0x9f:  pop    %ebp
084dcfea +0xa0:  ret
084dcfeb +0xa1:  nop
```

## 反编译 C

```c
// Inter_LoadPowerWarInfo::dispatch_sig @ 0x84dcf4a

/* Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  int *local_20;
  
  local_20 = (int *)param_3;
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)param_3;
  cVar1 = *(char *)(param_3 + 8);
  cMyTrace::cMyTrace(local_30,"virtual int Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int)"
                     ,0x483a,0);
  cMyTrace::operator()
            (local_30,"Receive SIG_LOAD_POWER_WAR_INFO(Winner:%d, A:%d, B:%d)",(int)cVar1,uVar3,
             uVar2);
  CPowerManager::SetPowerInfo(GlobalData::s_power_manager,(char)local_20[2],*local_20,local_20[1]);
  return 0;
}
```
