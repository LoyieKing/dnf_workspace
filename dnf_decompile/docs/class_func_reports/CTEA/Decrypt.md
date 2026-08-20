# Decrypt

`_ZN4CTEA7DecryptEPKcPcj`

`CTEA::Decrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c3afe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c3afe  _ZN4CTEA7DecryptEPKcPcj
#           CTEA::Decrypt(char const*, char*, unsigned int)
# range [0x080c3afe, 0x080c3d13]
080c3afe +0x000:  push   %ebp
080c3aff +0x001:  mov    %esp,%ebp
080c3b01 +0x003:  sub    $0x38,%esp
080c3b04 +0x006:  mov    0x8(%ebp),%eax
080c3b07 +0x009:  movzbl 0x4(%eax),%eax
080c3b0b +0x00d:  xor    $0x1,%eax
080c3b0e +0x010:  test   %al,%al
080c3b10 +0x012:  je     080c3b1c <+0x1e>
080c3b12 +0x014:  mov    $0x70000005,%eax
080c3b17 +0x019:  jmp    080c3d12 <+0x214>
080c3b1c +0x01e:  cmpl   $0x0,0x14(%ebp)
080c3b20 +0x022:  je     080c3b3a <+0x3c>
080c3b22 +0x024:  mov    0x8(%ebp),%eax
080c3b25 +0x027:  mov    0x8(%eax),%eax
080c3b28 +0x02a:  mov    %eax,%ecx
080c3b2a +0x02c:  mov    0x14(%ebp),%eax
080c3b2d +0x02f:  mov    $0x0,%edx
080c3b32 +0x034:  div    %ecx
080c3b34 +0x036:  mov    %edx,%eax
080c3b36 +0x038:  test   %eax,%eax
080c3b38 +0x03a:  je     080c3b44 <+0x46>
080c3b3a +0x03c:  mov    $0x7000000a,%eax
080c3b3f +0x041:  jmp    080c3d12 <+0x214>
080c3b44 +0x046:  mov    0x8(%ebp),%eax
080c3b47 +0x049:  mov    0x10(%eax),%eax
080c3b4a +0x04c:  cmp    $0x1,%eax
080c3b4d +0x04f:  jne    080c3bf9 <+0xfb>
080c3b53 +0x055:  movl   $0x0,-0x14(%ebp)
080c3b5a +0x05c:  mov    0xc(%ebp),%eax
080c3b5d +0x05f:  mov    %eax,-0x10(%ebp)
080c3b60 +0x062:  mov    0x10(%ebp),%eax
080c3b63 +0x065:  mov    %eax,-0xc(%ebp)
080c3b66 +0x068:  jmp    080c3bd2 <+0xd4>
080c3b68 +0x06a:  mov    -0xc(%ebp),%edx
080c3b6b +0x06d:  mov    -0x10(%ebp),%eax
080c3b6e +0x070:  mov    %edx,0x8(%esp)
080c3b72 +0x074:  mov    %eax,0x4(%esp)
080c3b76 +0x078:  mov    0x8(%ebp),%eax
080c3b79 +0x07b:  mov    %eax,(%esp)
080c3b7c +0x07e:  call   080c3804 <_ZN4CTEA12DecryptBlockEPKhPh>  ; CTEA::DecryptBlock(unsigned char const*, unsigned char*)
080c3b81 +0x083:  mov    0x8(%ebp),%eax
080c3b84 +0x086:  lea    0x40(%eax),%edx
080c3b87 +0x089:  mov    0x8(%ebp),%eax
080c3b8a +0x08c:  mov    %edx,0x8(%esp)
080c3b8e +0x090:  mov    -0xc(%ebp),%edx
080c3b91 +0x093:  mov    %edx,0x4(%esp)
080c3b95 +0x097:  mov    %eax,(%esp)
080c3b98 +0x09a:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080c3b9d +0x09f:  mov    0x8(%ebp),%eax
080c3ba0 +0x0a2:  mov    0x8(%eax),%eax
080c3ba3 +0x0a5:  mov    0x8(%ebp),%edx
080c3ba6 +0x0a8:  add    $0x40,%edx
080c3ba9 +0x0ab:  mov    %eax,0x8(%esp)
080c3bad +0x0af:  mov    -0x10(%ebp),%eax
080c3bb0 +0x0b2:  mov    %eax,0x4(%esp)
080c3bb4 +0x0b6:  mov    %edx,(%esp)
080c3bb7 +0x0b9:  call   0807d8a0 <_init+0x198>
080c3bbc +0x0be:  mov    0x8(%ebp),%eax
080c3bbf +0x0c1:  mov    0x8(%eax),%eax
080c3bc2 +0x0c4:  add    %eax,-0x10(%ebp)
080c3bc5 +0x0c7:  mov    0x8(%ebp),%eax
080c3bc8 +0x0ca:  mov    0x8(%eax),%eax
080c3bcb +0x0cd:  add    %eax,-0xc(%ebp)
080c3bce +0x0d0:  addl   $0x1,-0x14(%ebp)
080c3bd2 +0x0d4:  mov    0x8(%ebp),%eax
080c3bd5 +0x0d7:  mov    0x8(%eax),%eax
080c3bd8 +0x0da:  mov    %eax,-0x1c(%ebp)
080c3bdb +0x0dd:  mov    0x14(%ebp),%eax
080c3bde +0x0e0:  mov    $0x0,%edx
080c3be3 +0x0e5:  divl   -0x1c(%ebp)
080c3be6 +0x0e8:  cmp    -0x14(%ebp),%eax
080c3be9 +0x0eb:  seta   %al
080c3bec +0x0ee:  test   %al,%al
080c3bee +0x0f0:  jne    080c3b68 <+0x6a>
080c3bf4 +0x0f6:  jmp    080c3d0d <+0x20f>
080c3bf9 +0x0fb:  mov    0x8(%ebp),%eax
080c3bfc +0x0fe:  mov    0x10(%eax),%eax
080c3bff +0x101:  cmp    $0x2,%eax
080c3c02 +0x104:  jne    080c3cab <+0x1ad>
080c3c08 +0x10a:  movl   $0x0,-0x14(%ebp)
080c3c0f +0x111:  mov    0xc(%ebp),%eax
080c3c12 +0x114:  mov    %eax,-0x10(%ebp)
080c3c15 +0x117:  mov    0x10(%ebp),%eax
080c3c18 +0x11a:  mov    %eax,-0xc(%ebp)
080c3c1b +0x11d:  jmp    080c3c87 <+0x189>
080c3c1d +0x11f:  mov    -0xc(%ebp),%edx
080c3c20 +0x122:  mov    0x8(%ebp),%eax
080c3c23 +0x125:  add    $0x40,%eax
080c3c26 +0x128:  mov    %edx,0x8(%esp)
080c3c2a +0x12c:  mov    %eax,0x4(%esp)
080c3c2e +0x130:  mov    0x8(%ebp),%eax
080c3c31 +0x133:  mov    %eax,(%esp)
080c3c34 +0x136:  call   080c3724 <_ZN4CTEA12EncryptBlockEPKhPh>  ; CTEA::EncryptBlock(unsigned char const*, unsigned char*)
080c3c39 +0x13b:  mov    0x8(%ebp),%eax
080c3c3c +0x13e:  mov    -0x10(%ebp),%edx
080c3c3f +0x141:  mov    %edx,0x8(%esp)
080c3c43 +0x145:  mov    -0xc(%ebp),%edx
080c3c46 +0x148:  mov    %edx,0x4(%esp)
080c3c4a +0x14c:  mov    %eax,(%esp)
080c3c4d +0x14f:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080c3c52 +0x154:  mov    0x8(%ebp),%eax
080c3c55 +0x157:  mov    0x8(%eax),%eax
080c3c58 +0x15a:  mov    0x8(%ebp),%edx
080c3c5b +0x15d:  add    $0x40,%edx
080c3c5e +0x160:  mov    %eax,0x8(%esp)
080c3c62 +0x164:  mov    -0x10(%ebp),%eax
080c3c65 +0x167:  mov    %eax,0x4(%esp)
080c3c69 +0x16b:  mov    %edx,(%esp)
080c3c6c +0x16e:  call   0807d8a0 <_init+0x198>
080c3c71 +0x173:  mov    0x8(%ebp),%eax
080c3c74 +0x176:  mov    0x8(%eax),%eax
080c3c77 +0x179:  add    %eax,-0x10(%ebp)
080c3c7a +0x17c:  mov    0x8(%ebp),%eax
080c3c7d +0x17f:  mov    0x8(%eax),%eax
080c3c80 +0x182:  add    %eax,-0xc(%ebp)
080c3c83 +0x185:  addl   $0x1,-0x14(%ebp)
080c3c87 +0x189:  mov    0x8(%ebp),%eax
080c3c8a +0x18c:  mov    0x8(%eax),%eax
080c3c8d +0x18f:  mov    %eax,-0x1c(%ebp)
080c3c90 +0x192:  mov    0x14(%ebp),%eax
080c3c93 +0x195:  mov    $0x0,%edx
080c3c98 +0x19a:  divl   -0x1c(%ebp)
080c3c9b +0x19d:  cmp    -0x14(%ebp),%eax
080c3c9e +0x1a0:  seta   %al
080c3ca1 +0x1a3:  test   %al,%al
080c3ca3 +0x1a5:  jne    080c3c1d <+0x11f>
080c3ca9 +0x1ab:  jmp    080c3d0d <+0x20f>
080c3cab +0x1ad:  movl   $0x0,-0x14(%ebp)
080c3cb2 +0x1b4:  mov    0xc(%ebp),%eax
080c3cb5 +0x1b7:  mov    %eax,-0x10(%ebp)
080c3cb8 +0x1ba:  mov    0x10(%ebp),%eax
080c3cbb +0x1bd:  mov    %eax,-0xc(%ebp)
080c3cbe +0x1c0:  jmp    080c3cef <+0x1f1>
080c3cc0 +0x1c2:  mov    -0xc(%ebp),%edx
080c3cc3 +0x1c5:  mov    -0x10(%ebp),%eax
080c3cc6 +0x1c8:  mov    %edx,0x8(%esp)
080c3cca +0x1cc:  mov    %eax,0x4(%esp)
080c3cce +0x1d0:  mov    0x8(%ebp),%eax
080c3cd1 +0x1d3:  mov    %eax,(%esp)
080c3cd4 +0x1d6:  call   080c3804 <_ZN4CTEA12DecryptBlockEPKhPh>  ; CTEA::DecryptBlock(unsigned char const*, unsigned char*)
080c3cd9 +0x1db:  mov    0x8(%ebp),%eax
080c3cdc +0x1de:  mov    0x8(%eax),%eax
080c3cdf +0x1e1:  add    %eax,-0x10(%ebp)
080c3ce2 +0x1e4:  mov    0x8(%ebp),%eax
080c3ce5 +0x1e7:  mov    0x8(%eax),%eax
080c3ce8 +0x1ea:  add    %eax,-0xc(%ebp)
080c3ceb +0x1ed:  addl   $0x1,-0x14(%ebp)
080c3cef +0x1f1:  mov    0x8(%ebp),%eax
080c3cf2 +0x1f4:  mov    0x8(%eax),%eax
080c3cf5 +0x1f7:  mov    %eax,-0x1c(%ebp)
080c3cf8 +0x1fa:  mov    0x14(%ebp),%eax
080c3cfb +0x1fd:  mov    $0x0,%edx
080c3d00 +0x202:  divl   -0x1c(%ebp)
080c3d03 +0x205:  cmp    -0x14(%ebp),%eax
080c3d06 +0x208:  seta   %al
080c3d09 +0x20b:  test   %al,%al
080c3d0b +0x20d:  jne    080c3cc0 <+0x1c2>
080c3d0d +0x20f:  mov    $0x6fffffff,%eax
080c3d12 +0x214:  leave
080c3d13 +0x215:  ret
```

## 反编译 C

```c
// CTEA::Decrypt @ 0x80c3afe

/* CTEA::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CTEA::Decrypt(CTEA *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  uchar *local_14;
  uchar *local_10;
  
  if (this[4] == (CTEA)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          IMethod::Xor((IMethod *)this,(char *)local_10,(char *)(this + 0x40));
          memcpy(this + 0x40,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(uchar *)(this + 0x40),local_10);
          IMethod::Xor((IMethod *)this,(char *)local_10,(char *)local_14);
          memcpy(this + 0x40,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
