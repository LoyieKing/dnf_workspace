# set_decryptKey

`_ZN5yaSSL7DES_EDE14set_decryptKeyEPKhS2_`

`yaSSL::DES_EDE::set_decryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x08799380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799380  _ZN5yaSSL7DES_EDE14set_decryptKeyEPKhS2_
#           yaSSL::DES_EDE::set_decryptKey(unsigned char const*, unsigned char const*)
# range [0x08799380, 0x087993e9]
08799380 +0x00:  push   %ebp
08799381 +0x01:  mov    %esp,%ebp
08799383 +0x03:  sub    $0x28,%esp
08799386 +0x06:  mov    0x8(%ebp),%eax
08799389 +0x09:  mov    %ebx,-0xc(%ebp)
0879938c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08799391 +0x11:  add    $0xbd3807,%ebx
08799397 +0x17:  mov    %edi,-0x4(%ebp)
0879939a +0x1a:  mov    0x10(%ebp),%edi
0879939d +0x1d:  mov    %esi,-0x8(%ebp)
087993a0 +0x20:  mov    0x4(%eax),%esi
087993a3 +0x23:  mov    0xc(%ebp),%eax
087993a6 +0x26:  movl   $0x1,0xc(%esp)
087993ae +0x2e:  movl   $0x18,0x8(%esp)
087993b6 +0x36:  mov    %eax,0x4(%esp)
087993ba +0x3a:  lea    0x1b8(%esi),%eax
087993c0 +0x40:  mov    %eax,(%esp)
087993c3 +0x43:  call   087a7c70 <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087993c8 +0x48:  mov    (%edi),%eax
087993ca +0x4a:  mov    %eax,0x1c8(%esi)
087993d0 +0x50:  mov    0x4(%edi),%eax
087993d3 +0x53:  mov    %eax,0x1cc(%esi)
087993d9 +0x59:  mov    -0xc(%ebp),%ebx
087993dc +0x5c:  mov    -0x8(%ebp),%esi
087993df +0x5f:  mov    -0x4(%ebp),%edi
087993e2 +0x62:  mov    %ebp,%esp
087993e4 +0x64:  pop    %ebp
087993e5 +0x65:  ret
087993e6 +0x66:  lea    0x0(%esi),%esi
087993e9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DES_EDE::set_decryptKey @ 0x8799380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES_EDE::set_decryptKey(DES_EDE *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::DES_EDE3::SetKey((DES_EDE3 *)(iVar1 + 0x1b8),param_1,0x18,1);
  *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(param_2 + 4);
  return;
}
```
