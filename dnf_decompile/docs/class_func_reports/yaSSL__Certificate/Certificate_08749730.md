# Certificate

`_ZN5yaSSL11CertificateC1EPKNS_4x509E`

`yaSSL::Certificate::Certificate(yaSSL::x509 const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08749730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749730  _ZN5yaSSL11CertificateC1EPKNS_4x509E
#           yaSSL::Certificate::Certificate(yaSSL::x509 const*)
# range [0x08749730, 0x0874977c]
08749730 +0x00:  push   %ebp
08749731 +0x01:  mov    %esp,%ebp
08749733 +0x03:  sub    $0x18,%esp
08749736 +0x06:  mov    %ebx,-0x8(%ebp)
08749739 +0x09:  mov    0xc(%ebp),%eax
0874973c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08749741 +0x11:  add    $0xc23457,%ebx
08749747 +0x17:  mov    %esi,-0x4(%ebp)
0874974a +0x1a:  mov    0x8(%ebp),%esi
0874974d +0x1d:  mov    %eax,0x8(%esi)
08749750 +0x20:  mov    -0x368(%ebx),%edx
08749756 +0x26:  add    $0x8,%edx
08749759 +0x29:  mov    %edx,(%esi)
0874975b +0x2b:  mov    %eax,(%esp)
0874975e +0x2e:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08749763 +0x33:  mov    %esi,(%esp)
08749766 +0x36:  add    $0x6,%eax
08749769 +0x39:  mov    %eax,0x4(%esp)
0874976d +0x3d:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
08749772 +0x42:  mov    -0x8(%ebp),%ebx
08749775 +0x45:  mov    -0x4(%ebp),%esi
08749778 +0x48:  mov    %ebp,%esp
0874977a +0x4a:  pop    %ebp
0874977b +0x4b:  ret
0874977c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Certificate::Certificate @ 0x8749730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::Certificate(yaSSL::x509 const*) */

void __thiscall yaSSL::Certificate::Certificate(Certificate *this,x509 *param_1)

{
  int iVar1;
  
  *(x509 **)(this + 8) = param_1;
  *(undefined **)this = PTR_vtable_0936c830 + 8;
  iVar1 = yaSSL::x509::get_length(param_1);
  HandShakeBase::set_length((HandShakeBase *)this,iVar1 + 6);
  return;
}
```
