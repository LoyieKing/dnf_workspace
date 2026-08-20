# matchSuite

`_ZN5yaSSL3SSL10matchSuiteEPKhj`

`yaSSL::SSL::matchSuite(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874eeb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874eeb0  _ZN5yaSSL3SSL10matchSuiteEPKhj
#           yaSSL::SSL::matchSuite(unsigned char const*, unsigned int)
# range [0x0874eeb0, 0x0874efaa]
0874eeb0 +0x00:  push   %ebp
0874eeb1 +0x01:  mov    %esp,%ebp
0874eeb3 +0x03:  push   %edi
0874eeb4 +0x04:  push   %esi
0874eeb5 +0x05:  push   %ebx
0874eeb6 +0x06:  sub    $0x2c,%esp
0874eeb9 +0x09:  mov    0x10(%ebp),%edx
0874eebc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874eec1 +0x11:  add    $0xc1dcd7,%ebx
0874eec7 +0x17:  mov    0xc(%ebp),%edi
0874eeca +0x1a:  test   %edx,%edx
0874eecc +0x1c:  je     0874ef68 <+0xb8>
0874eed2 +0x22:  testb  $0x1,0x10(%ebp)
0874eed6 +0x26:  jne    0874ef68 <+0xb8>
0874eedc +0x2c:  mov    0x8(%ebp),%eax
0874eedf +0x2f:  movl   $0x1,-0x1c(%ebp)
0874eee6 +0x36:  add    $0x68,%eax
0874eee9 +0x39:  mov    %eax,-0x20(%ebp)
0874eeec +0x3c:  mov    %eax,(%esp)
0874eeef +0x3f:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874eef4 +0x44:  movzbl 0x2e(%eax),%eax
0874eef8 +0x48:  cmp    %eax,-0x1c(%ebp)
0874eefb +0x4b:  jae    0874ef94 <+0xe4>
0874ef01 +0x51:  cmpl   $0x1,0x10(%ebp)
0874ef05 +0x55:  mov    $0x1,%esi
0874ef0a +0x5a:  ja     0874ef18 <+0x68>
0874ef0c +0x5c:  jmp    0874ef88 <+0xd8>
0874ef0e +0x5e:  xchg   %ax,%ax
0874ef10 +0x60:  add    $0x2,%esi
0874ef13 +0x63:  cmp    %esi,0x10(%ebp)
0874ef16 +0x66:  jbe    0874ef88 <+0xd8>
0874ef18 +0x68:  mov    -0x20(%ebp),%eax
0874ef1b +0x6b:  mov    %eax,(%esp)
0874ef1e +0x6e:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0874ef23 +0x73:  mov    -0x1c(%ebp),%ecx
0874ef26 +0x76:  lea    (%edi,%esi,1),%edx
0874ef29 +0x79:  movzbl 0x2f(%eax,%ecx,1),%eax
0874ef2e +0x7e:  cmp    (%edi,%esi,1),%al
0874ef31 +0x81:  jne    0874ef10 <+0x60>
0874ef33 +0x83:  mov    -0x20(%ebp),%eax
0874ef36 +0x86:  mov    %edx,-0x24(%ebp)
0874ef39 +0x89:  mov    %eax,(%esp)
0874ef3c +0x8c:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0874ef41 +0x91:  movb   $0x0,0x2c(%eax)
0874ef45 +0x95:  mov    -0x20(%ebp),%ecx
0874ef48 +0x98:  mov    %ecx,(%esp)
0874ef4b +0x9b:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0874ef50 +0xa0:  mov    -0x24(%ebp),%edx
0874ef53 +0xa3:  movzbl (%edx),%edx
0874ef56 +0xa6:  mov    %dl,0x2d(%eax)
0874ef59 +0xa9:  add    $0x2c,%esp
0874ef5c +0xac:  pop    %ebx
0874ef5d +0xad:  pop    %esi
0874ef5e +0xae:  pop    %edi
0874ef5f +0xaf:  pop    %ebp
0874ef60 +0xb0:  ret
0874ef61 +0xb1:  lea    0x0(%esi,%eiz,1),%esi
0874ef68 +0xb8:  mov    0x8(%ebp),%ecx
0874ef6b +0xbb:  movl   $0x6d,0x4(%esp)
0874ef73 +0xc3:  mov    %ecx,(%esp)
0874ef76 +0xc6:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874ef7b +0xcb:  add    $0x2c,%esp
0874ef7e +0xce:  pop    %ebx
0874ef7f +0xcf:  pop    %esi
0874ef80 +0xd0:  pop    %edi
0874ef81 +0xd1:  pop    %ebp
0874ef82 +0xd2:  ret
0874ef83 +0xd3:  nop
0874ef84 +0xd4:  lea    0x0(%esi,%eiz,1),%esi
0874ef88 +0xd8:  addl   $0x2,-0x1c(%ebp)
0874ef8c +0xdc:  mov    -0x20(%ebp),%eax
0874ef8f +0xdf:  jmp    0874eeec <+0x3c>
0874ef94 +0xe4:  mov    0x8(%ebp),%ecx
0874ef97 +0xe7:  movl   $0x6e,0x4(%esp)
0874ef9f +0xef:  mov    %ecx,(%esp)
0874efa2 +0xf2:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874efa7 +0xf7:  jmp    0874ef7b <+0xcb>
0874efa9 +0xf9:  nop
0874efaa +0xfa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::matchSuite @ 0x874eeb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::matchSuite(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::matchSuite(SSL *this,uchar *param_1,uint param_2)

{
  Security *this_00;
  int iVar1;
  uint uVar2;
  uint local_20;
  
  if ((param_2 == 0) || ((param_2 & 1) != 0)) {
    SetError(this,0x6d);
  }
  else {
    this_00 = (Security *)(this + 0x68);
    for (local_20 = 1; iVar1 = Security::get_parms(this_00), local_20 < *(byte *)(iVar1 + 0x2e);
        local_20 = local_20 + 2) {
      uVar2 = 1;
      if (1 < param_2) {
        do {
          iVar1 = Security::use_parms(this_00);
          if (*(uchar *)(iVar1 + 0x2f + local_20) == param_1[uVar2]) {
            iVar1 = Security::use_parms(this_00);
            *(undefined1 *)(iVar1 + 0x2c) = 0;
            iVar1 = Security::use_parms(this_00);
            *(uchar *)(iVar1 + 0x2d) = param_1[uVar2];
            return;
          }
          uVar2 = uVar2 + 2;
        } while (uVar2 < param_2);
      }
    }
    SetError(this,0x6e);
  }
  return;
}
```
