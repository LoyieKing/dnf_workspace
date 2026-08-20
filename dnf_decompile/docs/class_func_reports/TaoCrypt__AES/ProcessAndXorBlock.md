# ProcessAndXorBlock

`_ZNK8TaoCrypt3AES18ProcessAndXorBlockEPKhS2_Ph`

`TaoCrypt::AES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a38e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a38e0  _ZNK8TaoCrypt3AES18ProcessAndXorBlockEPKhS2_Ph
#           TaoCrypt::AES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a38e0, 0x087a3949]
087a38e0 +0x00:  push   %ebp
087a38e1 +0x01:  mov    %esp,%ebp
087a38e3 +0x03:  sub    $0x18,%esp
087a38e6 +0x06:  mov    0x8(%ebp),%eax
087a38e9 +0x09:  mov    %ebx,-0x8(%ebp)
087a38ec +0x0c:  mov    0xc(%ebp),%edx
087a38ef +0x0f:  mov    %esi,-0x4(%ebp)
087a38f2 +0x12:  mov    0x10(%ebp),%ecx
087a38f5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087a38fa +0x1a:  add    $0xbc929e,%ebx
087a3900 +0x20:  mov    0x14(%ebp),%esi
087a3903 +0x23:  cmpl   $0x0,0x30(%eax)
087a3907 +0x27:  je     087a3928 <+0x48>
087a3909 +0x29:  mov    %esi,0xc(%esp)
087a390d +0x2d:  mov    %ecx,0x8(%esp)
087a3911 +0x31:  mov    %edx,0x4(%esp)
087a3915 +0x35:  mov    %eax,(%esp)
087a3918 +0x38:  call   087a2db0 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph>  ; TaoCrypt::AES::decrypt(unsigned char const*, unsigned char const*, unsigned char*) const
087a391d +0x3d:  mov    -0x8(%ebp),%ebx
087a3920 +0x40:  mov    -0x4(%ebp),%esi
087a3923 +0x43:  mov    %ebp,%esp
087a3925 +0x45:  pop    %ebp
087a3926 +0x46:  ret
087a3927 +0x47:  nop
087a3928 +0x48:  mov    %esi,0xc(%esp)
087a392c +0x4c:  mov    %ecx,0x8(%esp)
087a3930 +0x50:  mov    %edx,0x4(%esp)
087a3934 +0x54:  mov    %eax,(%esp)
087a3937 +0x57:  call   087a3340 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph>  ; TaoCrypt::AES::encrypt(unsigned char const*, unsigned char const*, unsigned char*) const
087a393c +0x5c:  mov    -0x8(%ebp),%ebx
087a393f +0x5f:  mov    -0x4(%ebp),%esi
087a3942 +0x62:  mov    %ebp,%esp
087a3944 +0x64:  pop    %ebp
087a3945 +0x65:  ret
087a3946 +0x66:  lea    0x0(%esi),%esi
087a3949 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::AES::ProcessAndXorBlock @ 0x87a38e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*)
   const */

void __thiscall
TaoCrypt::AES::ProcessAndXorBlock(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  if (*(int *)(this + 0x30) != 0) {
    decrypt(this,param_1,param_2,param_3);
    return;
  }
  encrypt(this,param_1,param_2,param_3);
  return;
}
```
