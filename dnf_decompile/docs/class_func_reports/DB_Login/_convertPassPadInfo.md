# _convertPassPadInfo

`_ZN8DB_Login19_convertPassPadInfoEP14SIG_LOGIN_DATA`

`DB_Login::_convertPassPadInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08411af0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08411af0  _ZN8DB_Login19_convertPassPadInfoEP14SIG_LOGIN_DATA
#           DB_Login::_convertPassPadInfo(SIG_LOGIN_DATA*)
# range [0x08411af0, 0x08411bad]
08411af0 +0x00:  push   %ebp
08411af1 +0x01:  mov    %esp,%ebp
08411af3 +0x03:  push   %edi
08411af4 +0x04:  push   %esi
08411af5 +0x05:  push   %ebx
08411af6 +0x06:  sub    $0x5c,%esp
08411af9 +0x09:  mov    0xc(%ebp),%eax
08411afc +0x0c:  lea    0x390d(%eax),%ebx
08411b02 +0x12:  mov    0xc(%ebp),%eax
08411b05 +0x15:  lea    0x3910(%eax),%edi
08411b0b +0x1b:  mov    0xc(%ebp),%eax
08411b0e +0x1e:  add    $0x3a3a,%eax
08411b13 +0x23:  mov    %eax,-0x2c(%ebp)
08411b16 +0x26:  mov    0xc(%ebp),%eax
08411b19 +0x29:  add    $0x390e,%eax
08411b1e +0x2e:  mov    %eax,-0x28(%ebp)
08411b21 +0x31:  mov    0xc(%ebp),%eax
08411b24 +0x34:  add    $0x38e1,%eax
08411b29 +0x39:  mov    %eax,-0x24(%ebp)
08411b2c +0x3c:  mov    0xc(%ebp),%eax
08411b2f +0x3f:  add    $0x38e0,%eax
08411b34 +0x44:  mov    %eax,-0x20(%ebp)
08411b37 +0x47:  mov    0xc(%ebp),%eax
08411b3a +0x4a:  add    $0x3918,%eax
08411b3f +0x4f:  mov    %eax,-0x1c(%ebp)
08411b42 +0x52:  mov    0xc(%ebp),%eax
08411b45 +0x55:  lea    0x390c(%eax),%esi
08411b4b +0x5b:  mov    0xc(%ebp),%eax
08411b4e +0x5e:  lea    0x3914(%eax),%ecx
08411b54 +0x64:  mov    0xc(%ebp),%eax
08411b57 +0x67:  lea    0x3905(%eax),%edx
08411b5d +0x6d:  mov    0xc(%ebp),%eax
08411b60 +0x70:  mov    0xc0(%eax),%eax
08411b66 +0x76:  mov    %ebx,0x28(%esp)
08411b6a +0x7a:  mov    %edi,0x24(%esp)
08411b6e +0x7e:  mov    -0x2c(%ebp),%ebx
08411b71 +0x81:  mov    %ebx,0x20(%esp)
08411b75 +0x85:  mov    -0x28(%ebp),%ebx
08411b78 +0x88:  mov    %ebx,0x1c(%esp)
08411b7c +0x8c:  mov    -0x24(%ebp),%ebx
08411b7f +0x8f:  mov    %ebx,0x18(%esp)
08411b83 +0x93:  mov    -0x20(%ebp),%ebx
08411b86 +0x96:  mov    %ebx,0x14(%esp)
08411b8a +0x9a:  mov    -0x1c(%ebp),%ebx
08411b8d +0x9d:  mov    %ebx,0x10(%esp)
08411b91 +0xa1:  mov    %esi,0xc(%esp)
08411b95 +0xa5:  mov    %ecx,0x8(%esp)
08411b99 +0xa9:  mov    %edx,0x4(%esp)
08411b9d +0xad:  mov    %eax,(%esp)
08411ba0 +0xb0:  call   08422e6a <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_>  ; DB_MouseRegister::convertPassPadInfo(unsigned int, char*, int&, char&, int&, bool&, char*, bool&, char*, long&, bool&)
08411ba5 +0xb5:  add    $0x5c,%esp
08411ba8 +0xb8:  pop    %ebx
08411ba9 +0xb9:  pop    %esi
08411baa +0xba:  pop    %edi
08411bab +0xbb:  pop    %ebp
08411bac +0xbc:  ret
08411bad +0xbd:  nop
```

## 反编译 C

```c
// DB_Login::_convertPassPadInfo @ 0x8411af0

/* DB_Login::_convertPassPadInfo(SIG_LOGIN_DATA*) */

void __thiscall DB_Login::_convertPassPadInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  DB_MouseRegister::convertPassPadInfo
            (*(uint *)(param_1 + 0xc0),(char *)(param_1 + 0x3905),(int *)(param_1 + 0x3914),
             (char *)(param_1 + 0x390c),(int *)(param_1 + 0x3918),(bool *)(param_1 + 0x38e0),
             (char *)(param_1 + 0x38e1),(bool *)(param_1 + 0x390e),(char *)(param_1 + 0x3a3a),
             (long *)(param_1 + 0x3910),(bool *)(param_1 + 0x390d));
  return;
}
```
