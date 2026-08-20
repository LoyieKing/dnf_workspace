# set_encryptKey

`_ZN5yaSSL3DES14set_encryptKeyEPKhS2_`

`yaSSL::DES::set_encryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x087994c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087994c0  _ZN5yaSSL3DES14set_encryptKeyEPKhS2_
#           yaSSL::DES::set_encryptKey(unsigned char const*, unsigned char const*)
# range [0x087994c0, 0x08799529]
087994c0 +0x00:  push   %ebp
087994c1 +0x01:  mov    %esp,%ebp
087994c3 +0x03:  sub    $0x18,%esp
087994c6 +0x06:  mov    0x8(%ebp),%eax
087994c9 +0x09:  mov    %ebx,-0x8(%ebp)
087994cc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087994d1 +0x11:  add    $0xbd36c7,%ebx
087994d7 +0x17:  mov    %esi,-0x4(%ebp)
087994da +0x1a:  mov    0x4(%eax),%esi
087994dd +0x1d:  mov    0xc(%ebp),%eax
087994e0 +0x20:  movl   $0x0,0xc(%esp)
087994e8 +0x28:  movl   $0x8,0x8(%esp)
087994f0 +0x30:  mov    %eax,0x4(%esp)
087994f4 +0x34:  lea    0x38(%esi),%eax
087994f7 +0x37:  mov    %eax,(%esp)
087994fa +0x3a:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087994ff +0x3f:  mov    0x4(%esi),%edx
08799502 +0x42:  mov    0x8(%esi),%eax
08799505 +0x45:  mov    %edx,0x8(%esp)
08799509 +0x49:  mov    0x10(%ebp),%edx
0879950c +0x4c:  mov    %eax,(%esp)
0879950f +0x4f:  mov    %edx,0x4(%esp)
08799513 +0x53:  call   0807d8a0 <_init+0x198>
08799518 +0x58:  mov    -0x8(%ebp),%ebx
0879951b +0x5b:  mov    -0x4(%ebp),%esi
0879951e +0x5e:  mov    %ebp,%esp
08799520 +0x60:  pop    %ebp
08799521 +0x61:  ret
08799522 +0x62:  lea    0x0(%esi,%eiz,1),%esi
08799529 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DES::set_encryptKey @ 0x87994c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES::set_encryptKey(DES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::BasicDES::SetKey((BasicDES *)(iVar1 + 0x38),param_1,8,0);
  memcpy(*(void **)(iVar1 + 8),param_2,*(size_t *)(iVar1 + 4));
  return;
}
```
