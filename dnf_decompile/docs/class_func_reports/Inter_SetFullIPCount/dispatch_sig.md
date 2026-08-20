# dispatch_sig

`_ZN20Inter_SetFullIPCount12dispatch_sigEP5CUserPci`

`Inter_SetFullIPCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetFullIPCount` | `0x084dcbea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dcbea  _ZN20Inter_SetFullIPCount12dispatch_sigEP5CUserPci
#           Inter_SetFullIPCount::dispatch_sig(CUser*, char*, int)
# range [0x084dcbea, 0x084dccb7]
084dcbea +0x00:  push   %ebp
084dcbeb +0x01:  mov    %esp,%ebp
084dcbed +0x03:  push   %edi
084dcbee +0x04:  push   %esi
084dcbef +0x05:  push   %ebx
084dcbf0 +0x06:  sub    $0x3c,%esp
084dcbf3 +0x09:  mov    0x10(%ebp),%eax
084dcbf6 +0x0c:  mov    %eax,-0x20(%ebp)
084dcbf9 +0x0f:  mov    -0x20(%ebp),%eax
084dcbfc +0x12:  movzbl 0xa(%eax),%eax
084dcc00 +0x16:  test   %al,%al
084dcc02 +0x18:  jne    084dcc11 <+0x27>
084dcc04 +0x1a:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084dcc09 +0x1f:  mov    %eax,(%esp)
084dcc0c +0x22:  call   084eba16 <_GLOBAL__I__Z7getUserj+0x29c8>  ; global constructors keyed to getUser(unsigned int)+0x29c8
084dcc11 +0x27:  movl   $0x0,-0x1c(%ebp)
084dcc18 +0x2e:  jmp    084dcc93 <+0xa9>
084dcc1a +0x30:  mov    -0x1c(%ebp),%edx
084dcc1d +0x33:  mov    -0x20(%ebp),%ecx
084dcc20 +0x36:  mov    %edx,%eax
084dcc22 +0x38:  add    %eax,%eax
084dcc24 +0x3a:  add    %edx,%eax
084dcc26 +0x3c:  shl    $0x3,%eax
084dcc29 +0x3f:  lea    (%ecx,%eax,1),%eax
084dcc2c +0x42:  add    $0x10,%eax
084dcc2f +0x45:  mov    0x10(%eax),%ebx
084dcc32 +0x48:  mov    -0x1c(%ebp),%edx
084dcc35 +0x4b:  mov    %edx,%eax
084dcc37 +0x4d:  add    %eax,%eax
084dcc39 +0x4f:  add    %edx,%eax
084dcc3b +0x51:  shl    $0x3,%eax
084dcc3e +0x54:  add    -0x20(%ebp),%eax
084dcc41 +0x57:  lea    0x10(%eax),%edi
084dcc44 +0x5a:  mov    -0x1c(%ebp),%edx
084dcc47 +0x5d:  mov    -0x20(%ebp),%ecx
084dcc4a +0x60:  mov    %edx,%eax
084dcc4c +0x62:  add    %eax,%eax
084dcc4e +0x64:  add    %edx,%eax
084dcc50 +0x66:  shl    $0x3,%eax
084dcc53 +0x69:  movzwl 0xe(%eax,%ecx,1),%eax
084dcc58 +0x6e:  movzwl %ax,%ecx
084dcc5b +0x71:  mov    -0x1c(%ebp),%edx
084dcc5e +0x74:  mov    -0x20(%ebp),%esi
084dcc61 +0x77:  mov    %edx,%eax
084dcc63 +0x79:  add    %eax,%eax
084dcc65 +0x7b:  add    %edx,%eax
084dcc67 +0x7d:  shl    $0x3,%eax
084dcc6a +0x80:  movzwl 0xc(%eax,%esi,1),%eax
084dcc6f +0x85:  movzwl %ax,%edx
084dcc72 +0x88:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084dcc77 +0x8d:  mov    %ebx,0x10(%esp)
084dcc7b +0x91:  mov    %edi,0xc(%esp)
084dcc7f +0x95:  mov    %ecx,0x8(%esp)
084dcc83 +0x99:  mov    %edx,0x4(%esp)
084dcc87 +0x9d:  mov    %eax,(%esp)
084dcc8a +0xa0:  call   080f946a <_ZN8WongWork26CAutoPunishRuleHackTypeMgr20setFullIPCounterDataEjjPcj>  ; WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData(unsigned int, unsigned int, char*, unsigned int)
084dcc8f +0xa5:  addl   $0x1,-0x1c(%ebp)
084dcc93 +0xa9:  mov    -0x20(%ebp),%eax
084dcc96 +0xac:  movzbl 0xb(%eax),%eax
084dcc9a +0xb0:  movzbl %al,%eax
084dcc9d +0xb3:  cmp    -0x1c(%ebp),%eax
084dcca0 +0xb6:  setg   %al
084dcca3 +0xb9:  test   %al,%al
084dcca5 +0xbb:  jne    084dcc1a <+0x30>
084dccab +0xc1:  mov    $0x0,%eax
084dccb0 +0xc6:  add    $0x3c,%esp
084dccb3 +0xc9:  pop    %ebx
084dccb4 +0xca:  pop    %esi
084dccb5 +0xcb:  pop    %edi
084dccb6 +0xcc:  pop    %ebp
084dccb7 +0xcd:  ret
```

## 反编译 C

```c
// Inter_SetFullIPCount::dispatch_sig @ 0x84dcbea

/* Inter_SetFullIPCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFullIPCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_20;
  
  if (*(char *)(param_3 + 10) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::ResetFullIpCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(param_3 + 0xb); local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr,
               (uint)*(ushort *)(local_20 * 0x18 + 0xc + param_3),
               (uint)*(ushort *)(local_20 * 0x18 + 0xe + param_3),
               (char *)(local_20 * 0x18 + param_3 + 0x10),
               *(uint *)(param_3 + local_20 * 0x18 + 0x20));
  }
  return 0;
}
```
