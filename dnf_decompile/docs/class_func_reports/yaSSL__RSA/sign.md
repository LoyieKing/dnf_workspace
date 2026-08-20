# sign

`_ZN5yaSSL3RSA4signEPhPKhjRKNS_10RandomPoolE`

`yaSSL::RSA::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x0879afc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879afc0  _ZN5yaSSL3RSA4signEPhPKhjRKNS_10RandomPoolE
#           yaSSL::RSA::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
# range [0x0879afc0, 0x0879b0a9]
0879afc0 +0x00:  push   %ebp
0879afc1 +0x01:  mov    %esp,%ebp
0879afc3 +0x03:  push   %edi
0879afc4 +0x04:  push   %esi
0879afc5 +0x05:  push   %ebx
0879afc6 +0x06:  sub    $0x6c,%esp
0879afc9 +0x09:  mov    0x8(%ebp),%eax
0879afcc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879afd1 +0x11:  add    $0xbd1bc7,%ebx
0879afd7 +0x17:  lea    -0x40(%ebp),%esi
0879afda +0x1a:  lea    -0x30(%ebp),%edi
0879afdd +0x1d:  mov    0x4(%eax),%eax
0879afe0 +0x20:  mov    %eax,-0x4c(%ebp)
0879afe3 +0x23:  mov    0x18(%ebp),%eax
0879afe6 +0x26:  mov    (%eax),%edx
0879afe8 +0x28:  mov    %esi,(%esp)
0879afeb +0x2b:  mov    %edx,-0x50(%ebp)
0879afee +0x2e:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879aff3 +0x33:  mov    %edi,(%esp)
0879aff6 +0x36:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879affb +0x3b:  mov    -0x4c(%ebp),%eax
0879affe +0x3e:  mov    %esi,(%esp)
0879b001 +0x41:  add    $0x20,%eax
0879b004 +0x44:  mov    %eax,0x4(%esp)
0879b008 +0x48:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879b00d +0x4d:  mov    -0x4c(%ebp),%eax
0879b010 +0x50:  mov    %edi,(%esp)
0879b013 +0x53:  add    $0x40,%eax
0879b016 +0x56:  mov    %eax,0x4(%esp)
0879b01a +0x5a:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879b01f +0x5f:  mov    0xc(%ebp),%eax
0879b022 +0x62:  mov    -0x50(%ebp),%edx
0879b025 +0x65:  mov    %esi,-0x20(%ebp)
0879b028 +0x68:  mov    %eax,0xc(%esp)
0879b02c +0x6c:  mov    0x14(%ebp),%eax
0879b02f +0x6f:  mov    %edx,0x10(%esp)
0879b033 +0x73:  mov    %eax,0x8(%esp)
0879b037 +0x77:  mov    0x10(%ebp),%eax
0879b03a +0x7a:  mov    %eax,0x4(%esp)
0879b03e +0x7e:  lea    -0x20(%ebp),%eax
0879b041 +0x81:  mov    %eax,(%esp)
0879b044 +0x84:  call   0879c630 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x980>  ; yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)+0x980
0879b049 +0x89:  mov    -0x30(%ebp),%eax
0879b04c +0x8c:  mov    -0x2c(%ebp),%esi
0879b04f +0x8f:  movl   $0x0,0x4(%esp)
0879b057 +0x97:  shl    $0x2,%eax
0879b05a +0x9a:  mov    %esi,(%esp)
0879b05d +0x9d:  mov    %eax,0x8(%esp)
0879b061 +0xa1:  call   0807dcc0 <_init+0x5b8>
0879b066 +0xa6:  mov    %esi,(%esp)
0879b069 +0xa9:  movb   $0x0,0x4(%esp)
0879b06e +0xae:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b073 +0xb3:  mov    -0x40(%ebp),%eax
0879b076 +0xb6:  mov    -0x3c(%ebp),%esi
0879b079 +0xb9:  movl   $0x0,0x4(%esp)
0879b081 +0xc1:  shl    $0x2,%eax
0879b084 +0xc4:  mov    %esi,(%esp)
0879b087 +0xc7:  mov    %eax,0x8(%esp)
0879b08b +0xcb:  call   0807dcc0 <_init+0x5b8>
0879b090 +0xd0:  mov    %esi,(%esp)
0879b093 +0xd3:  movb   $0x0,0x4(%esp)
0879b098 +0xd8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b09d +0xdd:  add    $0x6c,%esp
0879b0a0 +0xe0:  pop    %ebx
0879b0a1 +0xe1:  pop    %esi
0879b0a2 +0xe2:  pop    %edi
0879b0a3 +0xe3:  pop    %ebp
0879b0a4 +0xe4:  ret
0879b0a5 +0xe5:  nop
0879b0a6 +0xe6:  lea    0x0(%esi),%esi
0879b0a9 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RSA::sign @ 0x879afc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::RSA::sign(RSA *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  int iVar1;
  RandomNumberGenerator *pRVar2;
  uint uVar3;
  int local_44;
  void *local_40;
  int local_34;
  void *local_30;
  Integer *local_24 [5];
  
  iVar1 = *(int *)(this + 4);
  pRVar2 = *(RandomNumberGenerator **)param_4;
  TaoCrypt::Integer::Integer((Integer *)&local_44);
  TaoCrypt::Integer::Integer((Integer *)&local_34);
  TaoCrypt::Integer::operator=((Integer *)&local_44,(Integer *)(iVar1 + 0x20));
  TaoCrypt::Integer::operator=((Integer *)&local_34,(Integer *)(iVar1 + 0x40));
  local_24[0] = (Integer *)&local_44;
  TaoCrypt::RSA_Encryptor<TaoCrypt::RSA_BlockType1>::Encrypt
            ((RSA_Encryptor<TaoCrypt::RSA_BlockType1> *)local_24,param_2,param_3,param_1,pRVar2);
  uVar3 = 0;
  memset(local_30,0,local_34 << 2);
  operator_delete__(local_30,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_40,0,local_44 << 2);
  operator_delete__(local_40,uVar3 & 0xffffff00);
  return;
}
```
