# EncryptBlock

`_ZN4CTEA12EncryptBlockEPKhPh`

`CTEA::EncryptBlock(unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c3724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c3724  _ZN4CTEA12EncryptBlockEPKhPh
#           CTEA::EncryptBlock(unsigned char const*, unsigned char*)
# range [0x080c3724, 0x080c3803]
080c3724 +0x00:  push   %ebp
080c3725 +0x01:  mov    %esp,%ebp
080c3727 +0x03:  push   %edi
080c3728 +0x04:  push   %esi
080c3729 +0x05:  push   %ebx
080c372a +0x06:  sub    $0x3c,%esp
080c372d +0x09:  lea    -0x20(%ebp),%eax
080c3730 +0x0c:  mov    %eax,0x4(%esp)
080c3734 +0x10:  mov    0xc(%ebp),%eax
080c3737 +0x13:  mov    %eax,(%esp)
080c373a +0x16:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c373f +0x1b:  mov    0xc(%ebp),%eax
080c3742 +0x1e:  add    $0x4,%eax
080c3745 +0x21:  lea    -0x20(%ebp),%edx
080c3748 +0x24:  add    $0x4,%edx
080c374b +0x27:  mov    %edx,0x4(%esp)
080c374f +0x2b:  mov    %eax,(%esp)
080c3752 +0x2e:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c3757 +0x33:  mov    -0x20(%ebp),%esi
080c375a +0x36:  mov    -0x1c(%ebp),%ebx
080c375d +0x39:  mov    $0x0,%edi
080c3762 +0x3e:  movl   $0x9e3779b9,-0x30(%ebp)
080c3769 +0x45:  movl   $0x20,-0x2c(%ebp)
080c3770 +0x4c:  jmp    080c37c0 <+0x9c>
080c3772 +0x4e:  mov    %ebx,%edx
080c3774 +0x50:  shl    $0x4,%edx
080c3777 +0x53:  mov    %ebx,%eax
080c3779 +0x55:  shr    $0x5,%eax
080c377c +0x58:  xor    %edx,%eax
080c377e +0x5a:  lea    (%eax,%ebx,1),%ecx
080c3781 +0x5d:  mov    %edi,%eax
080c3783 +0x5f:  and    $0x3,%eax
080c3786 +0x62:  mov    0x8(%ebp),%edx
080c3789 +0x65:  add    $0x8,%eax
080c378c +0x68:  mov    0x8(%edx,%eax,4),%eax
080c3790 +0x6c:  add    %edi,%eax
080c3792 +0x6e:  xor    %ecx,%eax
080c3794 +0x70:  add    %eax,%esi
080c3796 +0x72:  add    -0x30(%ebp),%edi
080c3799 +0x75:  mov    %esi,%edx
080c379b +0x77:  shl    $0x4,%edx
080c379e +0x7a:  mov    %esi,%eax
080c37a0 +0x7c:  shr    $0x5,%eax
080c37a3 +0x7f:  xor    %edx,%eax
080c37a5 +0x81:  lea    (%eax,%esi,1),%ecx
080c37a8 +0x84:  mov    %edi,%eax
080c37aa +0x86:  shr    $0xb,%eax
080c37ad +0x89:  and    $0x3,%eax
080c37b0 +0x8c:  mov    0x8(%ebp),%edx
080c37b3 +0x8f:  add    $0x8,%eax
080c37b6 +0x92:  mov    0x8(%edx,%eax,4),%eax
080c37ba +0x96:  add    %edi,%eax
080c37bc +0x98:  xor    %ecx,%eax
080c37be +0x9a:  add    %eax,%ebx
080c37c0 +0x9c:  cmpl   $0x0,-0x2c(%ebp)
080c37c4 +0xa0:  setne  %al
080c37c7 +0xa3:  subl   $0x1,-0x2c(%ebp)
080c37cb +0xa7:  test   %al,%al
080c37cd +0xa9:  jne    080c3772 <+0x4e>
080c37cf +0xab:  mov    %esi,-0x28(%ebp)
080c37d2 +0xae:  mov    %ebx,-0x24(%ebp)
080c37d5 +0xb1:  mov    -0x28(%ebp),%eax
080c37d8 +0xb4:  mov    0x10(%ebp),%edx
080c37db +0xb7:  mov    %edx,0x4(%esp)
080c37df +0xbb:  mov    %eax,(%esp)
080c37e2 +0xbe:  call   080b4616 <_ZN7IMethod11WordToBytesEjPh>  ; IMethod::WordToBytes(unsigned int, unsigned char*)
080c37e7 +0xc3:  mov    0x10(%ebp),%eax
080c37ea +0xc6:  lea    0x4(%eax),%edx
080c37ed +0xc9:  mov    -0x24(%ebp),%eax
080c37f0 +0xcc:  mov    %edx,0x4(%esp)
080c37f4 +0xd0:  mov    %eax,(%esp)
080c37f7 +0xd3:  call   080b4616 <_ZN7IMethod11WordToBytesEjPh>  ; IMethod::WordToBytes(unsigned int, unsigned char*)
080c37fc +0xd8:  add    $0x3c,%esp
080c37ff +0xdb:  pop    %ebx
080c3800 +0xdc:  pop    %esi
080c3801 +0xdd:  pop    %edi
080c3802 +0xde:  pop    %ebp
080c3803 +0xdf:  ret
```

## 反编译 C

```c
// CTEA::EncryptBlock @ 0x80c3724

/* CTEA::EncryptBlock(unsigned char const*, unsigned char*) */

void __thiscall CTEA::EncryptBlock(CTEA *this,uchar *param_1,uchar *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_30;
  uint local_24;
  uint local_20 [4];
  
  IMethod::BytesToWord(param_1,&local_24);
  IMethod::BytesToWord(param_1 + 4,local_20);
  uVar1 = 0;
  local_30 = 0x20;
  while (bVar2 = local_30 != 0, local_30 = local_30 + -1, bVar2) {
    local_24 = local_24 +
               (*(int *)(this + ((uVar1 & 3) + 8) * 4 + 8) + uVar1 ^
               (local_20[0] >> 5 ^ local_20[0] << 4) + local_20[0]);
    uVar1 = uVar1 + 0x9e3779b9;
    local_20[0] = local_20[0] +
                  (*(int *)(this + ((uVar1 >> 0xb & 3) + 8) * 4 + 8) + uVar1 ^
                  (local_24 >> 5 ^ local_24 * 0x10) + local_24);
  }
  IMethod::WordToBytes(local_24,param_2);
  IMethod::WordToBytes(local_20[0],param_2 + 4);
  return;
}
```
