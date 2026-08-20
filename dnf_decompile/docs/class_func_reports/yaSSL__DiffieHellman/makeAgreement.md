# makeAgreement

`_ZN5yaSSL13DiffieHellman13makeAgreementEPKhj`

`yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x08798eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798eb0  _ZN5yaSSL13DiffieHellman13makeAgreementEPKhj
#           yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int)
# range [0x08798eb0, 0x08798ef9]
08798eb0 +0x00:  push   %ebp
08798eb1 +0x01:  mov    %esp,%ebp
08798eb3 +0x03:  push   %ebx
08798eb4 +0x04:  sub    $0x24,%esp
08798eb7 +0x07:  mov    0x10(%ebp),%edx
08798eba +0x0a:  mov    0x8(%ebp),%eax
08798ebd +0x0d:  call   08722df8 <__i686.get_pc_thunk.bx>
08798ec2 +0x12:  add    $0xbd3cd6,%ebx
08798ec8 +0x18:  mov    (%eax),%eax
08798eca +0x1a:  mov    %edx,0x10(%esp)
08798ece +0x1e:  mov    0xc(%ebp),%edx
08798ed1 +0x21:  mov    %edx,0xc(%esp)
08798ed5 +0x25:  mov    0x28(%eax),%edx
08798ed8 +0x28:  mov    %edx,0x8(%esp)
08798edc +0x2c:  mov    0x2c(%eax),%edx
08798edf +0x2f:  mov    %eax,(%esp)
08798ee2 +0x32:  mov    %edx,0x4(%esp)
08798ee6 +0x36:  call   087a8820 <_ZN8TaoCrypt2DH5AgreeEPhPKhS3_j>  ; TaoCrypt::DH::Agree(unsigned char*, unsigned char const*, unsigned char const*, unsigned int)
08798eeb +0x3b:  add    $0x24,%esp
08798eee +0x3e:  pop    %ebx
08798eef +0x3f:  pop    %ebp
08798ef0 +0x40:  ret
08798ef1 +0x41:  nop
08798ef2 +0x42:  lea    0x0(%esi,%eiz,1),%esi
08798ef9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::makeAgreement @ 0x8798eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DiffieHellman::makeAgreement(DiffieHellman *this,uchar *param_1,uint param_2)

{
  DH *this_00;
  
  this_00 = *(DH **)this;
  TaoCrypt::DH::Agree(this_00,*(uchar **)(this_00 + 0x2c),*(uchar **)(this_00 + 0x28),param_1,
                      param_2);
  return;
}
```
