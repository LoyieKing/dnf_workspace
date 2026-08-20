# DecryptBlock

`_ZN4CTEA12DecryptBlockEPKhPh`

`CTEA::DecryptBlock(unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c3804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c3804  _ZN4CTEA12DecryptBlockEPKhPh
#           CTEA::DecryptBlock(unsigned char const*, unsigned char*)
# range [0x080c3804, 0x080c38e3]
080c3804 +0x00:  push   %ebp
080c3805 +0x01:  mov    %esp,%ebp
080c3807 +0x03:  push   %edi
080c3808 +0x04:  push   %esi
080c3809 +0x05:  push   %ebx
080c380a +0x06:  sub    $0x3c,%esp
080c380d +0x09:  lea    -0x20(%ebp),%eax
080c3810 +0x0c:  mov    %eax,0x4(%esp)
080c3814 +0x10:  mov    0xc(%ebp),%eax
080c3817 +0x13:  mov    %eax,(%esp)
080c381a +0x16:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c381f +0x1b:  mov    0xc(%ebp),%eax
080c3822 +0x1e:  add    $0x4,%eax
080c3825 +0x21:  lea    -0x20(%ebp),%edx
080c3828 +0x24:  add    $0x4,%edx
080c382b +0x27:  mov    %edx,0x4(%esp)
080c382f +0x2b:  mov    %eax,(%esp)
080c3832 +0x2e:  call   080b459e <_ZN7IMethod11BytesToWordEPKhRj>  ; IMethod::BytesToWord(unsigned char const*, unsigned int&)
080c3837 +0x33:  mov    -0x20(%ebp),%esi
080c383a +0x36:  mov    -0x1c(%ebp),%ebx
080c383d +0x39:  mov    $0xc6ef3720,%edi
080c3842 +0x3e:  movl   $0x9e3779b9,-0x30(%ebp)
080c3849 +0x45:  movl   $0x20,-0x2c(%ebp)
080c3850 +0x4c:  jmp    080c38a0 <+0x9c>
080c3852 +0x4e:  mov    %esi,%edx
080c3854 +0x50:  shl    $0x4,%edx
080c3857 +0x53:  mov    %esi,%eax
080c3859 +0x55:  shr    $0x5,%eax
080c385c +0x58:  xor    %edx,%eax
080c385e +0x5a:  lea    (%eax,%esi,1),%ecx
080c3861 +0x5d:  mov    %edi,%eax
080c3863 +0x5f:  shr    $0xb,%eax
080c3866 +0x62:  and    $0x3,%eax
080c3869 +0x65:  mov    0x8(%ebp),%edx
080c386c +0x68:  add    $0x8,%eax
080c386f +0x6b:  mov    0x8(%edx,%eax,4),%eax
080c3873 +0x6f:  add    %edi,%eax
080c3875 +0x71:  xor    %ecx,%eax
080c3877 +0x73:  sub    %eax,%ebx
080c3879 +0x75:  sub    -0x30(%ebp),%edi
080c387c +0x78:  mov    %ebx,%edx
080c387e +0x7a:  shl    $0x4,%edx
080c3881 +0x7d:  mov    %ebx,%eax
080c3883 +0x7f:  shr    $0x5,%eax
080c3886 +0x82:  xor    %edx,%eax
080c3888 +0x84:  lea    (%eax,%ebx,1),%ecx
080c388b +0x87:  mov    %edi,%eax
080c388d +0x89:  and    $0x3,%eax
080c3890 +0x8c:  mov    0x8(%ebp),%edx
080c3893 +0x8f:  add    $0x8,%eax
080c3896 +0x92:  mov    0x8(%edx,%eax,4),%eax
080c389a +0x96:  add    %edi,%eax
080c389c +0x98:  xor    %ecx,%eax
080c389e +0x9a:  sub    %eax,%esi
080c38a0 +0x9c:  cmpl   $0x0,-0x2c(%ebp)
080c38a4 +0xa0:  setne  %al
080c38a7 +0xa3:  subl   $0x1,-0x2c(%ebp)
080c38ab +0xa7:  test   %al,%al
080c38ad +0xa9:  jne    080c3852 <+0x4e>
080c38af +0xab:  mov    %esi,-0x28(%ebp)
080c38b2 +0xae:  mov    %ebx,-0x24(%ebp)
080c38b5 +0xb1:  mov    -0x28(%ebp),%eax
080c38b8 +0xb4:  mov    0x10(%ebp),%edx
080c38bb +0xb7:  mov    %edx,0x4(%esp)
080c38bf +0xbb:  mov    %eax,(%esp)
080c38c2 +0xbe:  call   080b4616 <_ZN7IMethod11WordToBytesEjPh>  ; IMethod::WordToBytes(unsigned int, unsigned char*)
080c38c7 +0xc3:  mov    0x10(%ebp),%eax
080c38ca +0xc6:  lea    0x4(%eax),%edx
080c38cd +0xc9:  mov    -0x24(%ebp),%eax
080c38d0 +0xcc:  mov    %edx,0x4(%esp)
080c38d4 +0xd0:  mov    %eax,(%esp)
080c38d7 +0xd3:  call   080b4616 <_ZN7IMethod11WordToBytesEjPh>  ; IMethod::WordToBytes(unsigned int, unsigned char*)
080c38dc +0xd8:  add    $0x3c,%esp
080c38df +0xdb:  pop    %ebx
080c38e0 +0xdc:  pop    %esi
080c38e1 +0xdd:  pop    %edi
080c38e2 +0xde:  pop    %ebp
080c38e3 +0xdf:  ret
```

## 反编译 C

```c
// CTEA::DecryptBlock @ 0x80c3804

/* CTEA::DecryptBlock(unsigned char const*, unsigned char*) */

void __thiscall CTEA::DecryptBlock(CTEA *this,uchar *param_1,uchar *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_30;
  uint local_24;
  uint local_20 [4];
  
  IMethod::BytesToWord(param_1,&local_24);
  IMethod::BytesToWord(param_1 + 4,local_20);
  uVar1 = 0xc6ef3720;
  local_30 = 0x20;
  while (bVar2 = local_30 != 0, local_30 = local_30 + -1, bVar2) {
    local_20[0] = local_20[0] -
                  (*(int *)(this + ((uVar1 >> 0xb & 3) + 8) * 4 + 8) + uVar1 ^
                  (local_24 >> 5 ^ local_24 << 4) + local_24);
    uVar1 = uVar1 + 0x61c88647;
    local_24 = local_24 -
               (*(int *)(this + ((uVar1 & 3) + 8) * 4 + 8) + uVar1 ^
               (local_20[0] >> 5 ^ local_20[0] * 0x10) + local_20[0]);
  }
  IMethod::WordToBytes(local_24,param_2);
  IMethod::WordToBytes(local_20[0],param_2 + 4);
  return;
}
```
