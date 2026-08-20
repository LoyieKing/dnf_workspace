# dispatch_sig

`_ZN28Inter_UpdateSecuServiceState12dispatch_sigEP5CUserPci`

`Inter_UpdateSecuServiceState::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateSecuServiceState` | `0x084e4e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4e84  _ZN28Inter_UpdateSecuServiceState12dispatch_sigEP5CUserPci
#           Inter_UpdateSecuServiceState::dispatch_sig(CUser*, char*, int)
# range [0x084e4e84, 0x084e4ee3]
084e4e84 +0x00:  push   %ebp
084e4e85 +0x01:  mov    %esp,%ebp
084e4e87 +0x03:  push   %ebx
084e4e88 +0x04:  sub    $0x34,%esp
084e4e8b +0x07:  mov    0x10(%ebp),%eax
084e4e8e +0x0a:  mov    %eax,-0xc(%ebp)
084e4e91 +0x0d:  cmpl   $0x0,0xc(%ebp)
084e4e95 +0x11:  je     084e4ed8 <+0x54>
084e4e97 +0x13:  mov    -0xc(%ebp),%eax
084e4e9a +0x16:  movb   $0x0,0x14(%eax)
084e4e9e +0x1a:  mov    -0xc(%ebp),%eax
084e4ea1 +0x1d:  lea    0x10(%eax),%ebx
084e4ea4 +0x20:  mov    -0xc(%ebp),%eax
084e4ea7 +0x23:  movzbl 0xf(%eax),%eax
084e4eab +0x27:  movzbl %al,%ecx
084e4eae +0x2a:  mov    -0xc(%ebp),%eax
084e4eb1 +0x2d:  movzbl 0xe(%eax),%eax
084e4eb5 +0x31:  movzbl %al,%edx
084e4eb8 +0x34:  mov    &_ZN10GlobalData18s_pSecuDataControlE,%eax
084e4ebd +0x39:  mov    %ebx,0x10(%esp)
084e4ec1 +0x3d:  mov    %ecx,0xc(%esp)
084e4ec5 +0x41:  mov    %edx,0x8(%esp)
084e4ec9 +0x45:  mov    0xc(%ebp),%edx
084e4ecc +0x48:  mov    %edx,0x4(%esp)
084e4ed0 +0x4c:  mov    %eax,(%esp)
084e4ed3 +0x4f:  call   08286e40 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc>  ; Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*)
084e4ed8 +0x54:  mov    $0x0,%eax
084e4edd +0x59:  add    $0x34,%esp
084e4ee0 +0x5c:  pop    %ebx
084e4ee1 +0x5d:  pop    %ebp
084e4ee2 +0x5e:  ret
084e4ee3 +0x5f:  nop
```

## 反编译 C

```c
// Inter_UpdateSecuServiceState::dispatch_sig @ 0x84e4e84

/* Inter_UpdateSecuServiceState::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateSecuServiceState::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    *(undefined1 *)(param_3 + 0x14) = 0;
    Secu_DataControl::UpdateSecurityServiceState
              (GlobalData::s_pSecuDataControl,(CUser *)param_2,*(uchar *)(param_3 + 0xe),
               *(uchar *)(param_3 + 0xf),(char *)(param_3 + 0x10));
  }
  return 0;
}
```
