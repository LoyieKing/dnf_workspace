# dispatch_sig

`_ZN16Inter_SetIPCount12dispatch_sigEP5CUserPci`

`Inter_SetIPCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetIPCount` | `0x084dcb18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dcb18  _ZN16Inter_SetIPCount12dispatch_sigEP5CUserPci
#           Inter_SetIPCount::dispatch_sig(CUser*, char*, int)
# range [0x084dcb18, 0x084dcbe9]
084dcb18 +0x00:  push   %ebp
084dcb19 +0x01:  mov    %esp,%ebp
084dcb1b +0x03:  push   %edi
084dcb1c +0x04:  push   %esi
084dcb1d +0x05:  push   %ebx
084dcb1e +0x06:  sub    $0x3c,%esp
084dcb21 +0x09:  mov    0x10(%ebp),%eax
084dcb24 +0x0c:  mov    %eax,-0x20(%ebp)
084dcb27 +0x0f:  mov    -0x20(%ebp),%eax
084dcb2a +0x12:  movzbl 0xa(%eax),%eax
084dcb2e +0x16:  test   %al,%al
084dcb30 +0x18:  jne    084dcb3f <+0x27>
084dcb32 +0x1a:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084dcb37 +0x1f:  mov    %eax,(%esp)
084dcb3a +0x22:  call   084eba00 <_GLOBAL__I__Z7getUserj+0x29b2>  ; global constructors keyed to getUser(unsigned int)+0x29b2
084dcb3f +0x27:  movl   $0x0,-0x1c(%ebp)
084dcb46 +0x2e:  jmp    084dcbc5 <+0xad>
084dcb48 +0x30:  mov    -0x1c(%ebp),%edx
084dcb4b +0x33:  mov    -0x20(%ebp),%ecx
084dcb4e +0x36:  mov    %edx,%eax
084dcb50 +0x38:  shl    $0x2,%eax
084dcb53 +0x3b:  add    %edx,%eax
084dcb55 +0x3d:  shl    $0x2,%eax
084dcb58 +0x40:  lea    (%ecx,%eax,1),%eax
084dcb5b +0x43:  add    $0x10,%eax
084dcb5e +0x46:  mov    0xc(%eax),%ebx
084dcb61 +0x49:  mov    -0x1c(%ebp),%edx
084dcb64 +0x4c:  mov    %edx,%eax
084dcb66 +0x4e:  shl    $0x2,%eax
084dcb69 +0x51:  add    %edx,%eax
084dcb6b +0x53:  shl    $0x2,%eax
084dcb6e +0x56:  add    -0x20(%ebp),%eax
084dcb71 +0x59:  lea    0x10(%eax),%edi
084dcb74 +0x5c:  mov    -0x1c(%ebp),%edx
084dcb77 +0x5f:  mov    -0x20(%ebp),%ecx
084dcb7a +0x62:  mov    %edx,%eax
084dcb7c +0x64:  shl    $0x2,%eax
084dcb7f +0x67:  add    %edx,%eax
084dcb81 +0x69:  shl    $0x2,%eax
084dcb84 +0x6c:  movzwl 0xe(%eax,%ecx,1),%eax
084dcb89 +0x71:  movzwl %ax,%ecx
084dcb8c +0x74:  mov    -0x1c(%ebp),%edx
084dcb8f +0x77:  mov    -0x20(%ebp),%esi
084dcb92 +0x7a:  mov    %edx,%eax
084dcb94 +0x7c:  shl    $0x2,%eax
084dcb97 +0x7f:  add    %edx,%eax
084dcb99 +0x81:  shl    $0x2,%eax
084dcb9c +0x84:  movzwl 0xc(%eax,%esi,1),%eax
084dcba1 +0x89:  movzwl %ax,%edx
084dcba4 +0x8c:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084dcba9 +0x91:  mov    %ebx,0x10(%esp)
084dcbad +0x95:  mov    %edi,0xc(%esp)
084dcbb1 +0x99:  mov    %ecx,0x8(%esp)
084dcbb5 +0x9d:  mov    %edx,0x4(%esp)
084dcbb9 +0xa1:  mov    %eax,(%esp)
084dcbbc +0xa4:  call   080f9218 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16setIPCounterDataEjjPcj>  ; WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData(unsigned int, unsigned int, char*, unsigned int)
084dcbc1 +0xa9:  addl   $0x1,-0x1c(%ebp)
084dcbc5 +0xad:  mov    -0x20(%ebp),%eax
084dcbc8 +0xb0:  movzbl 0xb(%eax),%eax
084dcbcc +0xb4:  movzbl %al,%eax
084dcbcf +0xb7:  cmp    -0x1c(%ebp),%eax
084dcbd2 +0xba:  setg   %al
084dcbd5 +0xbd:  test   %al,%al
084dcbd7 +0xbf:  jne    084dcb48 <+0x30>
084dcbdd +0xc5:  mov    $0x0,%eax
084dcbe2 +0xca:  add    $0x3c,%esp
084dcbe5 +0xcd:  pop    %ebx
084dcbe6 +0xce:  pop    %esi
084dcbe7 +0xcf:  pop    %edi
084dcbe8 +0xd0:  pop    %ebp
084dcbe9 +0xd1:  ret
```

## 反编译 C

```c
// Inter_SetIPCount::dispatch_sig @ 0x84dcb18

/* Inter_SetIPCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetIPCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_20;
  
  if (*(char *)(param_3 + 10) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::ResetIpCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(param_3 + 0xb); local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr,
               (uint)*(ushort *)(local_20 * 0x14 + 0xc + param_3),
               (uint)*(ushort *)(local_20 * 0x14 + 0xe + param_3),
               (char *)(local_20 * 0x14 + param_3 + 0x10),
               *(uint *)(param_3 + local_20 * 0x14 + 0x1c));
  }
  return 0;
}
```
