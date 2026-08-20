# decrypt

`_ZN5yaSSL3RSA7decryptEPhPKhjRKNS_10RandomPoolE`

`yaSSL::RSA::decrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x0879bc60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879bc60  _ZN5yaSSL3RSA7decryptEPhPKhjRKNS_10RandomPoolE
#           yaSSL::RSA::decrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
# range [0x0879bc60, 0x0879bcad]
0879bc60 +0x00:  push   %ebp
0879bc61 +0x01:  mov    %esp,%ebp
0879bc63 +0x03:  push   %ebx
0879bc64 +0x04:  sub    $0x34,%esp
0879bc67 +0x07:  mov    0x8(%ebp),%eax
0879bc6a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879bc6f +0x0f:  add    $0xbd0f29,%ebx
0879bc75 +0x15:  mov    0x4(%eax),%eax
0879bc78 +0x18:  add    $0x20,%eax
0879bc7b +0x1b:  mov    %eax,-0x10(%ebp)
0879bc7e +0x1e:  mov    0x18(%ebp),%eax
0879bc81 +0x21:  mov    (%eax),%eax
0879bc83 +0x23:  mov    %eax,0x10(%esp)
0879bc87 +0x27:  mov    0xc(%ebp),%eax
0879bc8a +0x2a:  mov    %eax,0xc(%esp)
0879bc8e +0x2e:  mov    0x14(%ebp),%eax
0879bc91 +0x31:  mov    %eax,0x8(%esp)
0879bc95 +0x35:  mov    0x10(%ebp),%eax
0879bc98 +0x38:  mov    %eax,0x4(%esp)
0879bc9c +0x3c:  lea    -0x10(%ebp),%eax
0879bc9f +0x3f:  mov    %eax,(%esp)
0879bca2 +0x42:  call   0879cb40 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0xe90>  ; yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)+0xe90
0879bca7 +0x47:  add    $0x34,%esp
0879bcaa +0x4a:  pop    %ebx
0879bcab +0x4b:  pop    %ebp
0879bcac +0x4c:  ret
0879bcad +0x4d:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::RSA::decrypt @ 0x879bc60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::decrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
    */

void __thiscall
yaSSL::RSA::decrypt(RSA *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  int local_14 [3];
  
  local_14[0] = *(int *)(this + 4) + 0x20;
  TaoCrypt::RSA_Decryptor<TaoCrypt::RSA_BlockType2>::Decrypt
            ((RSA_Decryptor<TaoCrypt::RSA_BlockType2> *)local_14,param_2,param_3,param_1,
             *(RandomNumberGenerator **)param_4);
  return;
}
```
