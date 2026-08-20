# Encrypt

`_ZN4CTEA7EncryptEPKcPcj`

`CTEA::Encrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c38e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c38e4  _ZN4CTEA7EncryptEPKcPcj
#           CTEA::Encrypt(char const*, char*, unsigned int)
# range [0x080c38e4, 0x080c3afd]
080c38e4 +0x000:  push   %ebp
080c38e5 +0x001:  mov    %esp,%ebp
080c38e7 +0x003:  sub    $0x38,%esp
080c38ea +0x006:  mov    0x8(%ebp),%eax
080c38ed +0x009:  movzbl 0x4(%eax),%eax
080c38f1 +0x00d:  xor    $0x1,%eax
080c38f4 +0x010:  test   %al,%al
080c38f6 +0x012:  je     080c3902 <+0x1e>
080c38f8 +0x014:  mov    $0x70000005,%eax
080c38fd +0x019:  jmp    080c3afb <+0x217>
080c3902 +0x01e:  cmpl   $0x0,0x14(%ebp)
080c3906 +0x022:  je     080c3920 <+0x3c>
080c3908 +0x024:  mov    0x8(%ebp),%eax
080c390b +0x027:  mov    0x8(%eax),%eax
080c390e +0x02a:  mov    %eax,%ecx
080c3910 +0x02c:  mov    0x14(%ebp),%eax
080c3913 +0x02f:  mov    $0x0,%edx
080c3918 +0x034:  div    %ecx
080c391a +0x036:  mov    %edx,%eax
080c391c +0x038:  test   %eax,%eax
080c391e +0x03a:  je     080c392a <+0x46>
080c3920 +0x03c:  mov    $0x7000000a,%eax
080c3925 +0x041:  jmp    080c3afb <+0x217>
080c392a +0x046:  mov    0x8(%ebp),%eax
080c392d +0x049:  mov    0x10(%eax),%eax
080c3930 +0x04c:  cmp    $0x1,%eax
080c3933 +0x04f:  jne    080c39e2 <+0xfe>
080c3939 +0x055:  movl   $0x0,-0x14(%ebp)
080c3940 +0x05c:  mov    0xc(%ebp),%eax
080c3943 +0x05f:  mov    %eax,-0x10(%ebp)
080c3946 +0x062:  mov    0x10(%ebp),%eax
080c3949 +0x065:  mov    %eax,-0xc(%ebp)
080c394c +0x068:  jmp    080c39bb <+0xd7>
080c394e +0x06a:  mov    0x8(%ebp),%eax
080c3951 +0x06d:  lea    0x40(%eax),%ecx
080c3954 +0x070:  mov    0x8(%ebp),%eax
080c3957 +0x073:  mov    -0x10(%ebp),%edx
080c395a +0x076:  mov    %edx,0x8(%esp)
080c395e +0x07a:  mov    %ecx,0x4(%esp)
080c3962 +0x07e:  mov    %eax,(%esp)
080c3965 +0x081:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080c396a +0x086:  mov    -0xc(%ebp),%edx
080c396d +0x089:  mov    0x8(%ebp),%eax
080c3970 +0x08c:  add    $0x40,%eax
080c3973 +0x08f:  mov    %edx,0x8(%esp)
080c3977 +0x093:  mov    %eax,0x4(%esp)
080c397b +0x097:  mov    0x8(%ebp),%eax
080c397e +0x09a:  mov    %eax,(%esp)
080c3981 +0x09d:  call   080c3724 <_ZN4CTEA12EncryptBlockEPKhPh>  ; CTEA::EncryptBlock(unsigned char const*, unsigned char*)
080c3986 +0x0a2:  mov    0x8(%ebp),%eax
080c3989 +0x0a5:  mov    0x8(%eax),%eax
080c398c +0x0a8:  mov    0x8(%ebp),%edx
080c398f +0x0ab:  add    $0x40,%edx
080c3992 +0x0ae:  mov    %eax,0x8(%esp)
080c3996 +0x0b2:  mov    -0xc(%ebp),%eax
080c3999 +0x0b5:  mov    %eax,0x4(%esp)
080c399d +0x0b9:  mov    %edx,(%esp)
080c39a0 +0x0bc:  call   0807d8a0 <_init+0x198>
080c39a5 +0x0c1:  mov    0x8(%ebp),%eax
080c39a8 +0x0c4:  mov    0x8(%eax),%eax
080c39ab +0x0c7:  add    %eax,-0x10(%ebp)
080c39ae +0x0ca:  mov    0x8(%ebp),%eax
080c39b1 +0x0cd:  mov    0x8(%eax),%eax
080c39b4 +0x0d0:  add    %eax,-0xc(%ebp)
080c39b7 +0x0d3:  addl   $0x1,-0x14(%ebp)
080c39bb +0x0d7:  mov    0x8(%ebp),%eax
080c39be +0x0da:  mov    0x8(%eax),%eax
080c39c1 +0x0dd:  mov    %eax,-0x1c(%ebp)
080c39c4 +0x0e0:  mov    0x14(%ebp),%eax
080c39c7 +0x0e3:  mov    $0x0,%edx
080c39cc +0x0e8:  divl   -0x1c(%ebp)
080c39cf +0x0eb:  cmp    -0x14(%ebp),%eax
080c39d2 +0x0ee:  seta   %al
080c39d5 +0x0f1:  test   %al,%al
080c39d7 +0x0f3:  jne    080c394e <+0x6a>
080c39dd +0x0f9:  jmp    080c3af6 <+0x212>
080c39e2 +0x0fe:  mov    0x8(%ebp),%eax
080c39e5 +0x101:  mov    0x10(%eax),%eax
080c39e8 +0x104:  cmp    $0x2,%eax
080c39eb +0x107:  jne    080c3a94 <+0x1b0>
080c39f1 +0x10d:  movl   $0x0,-0x14(%ebp)
080c39f8 +0x114:  mov    0xc(%ebp),%eax
080c39fb +0x117:  mov    %eax,-0x10(%ebp)
080c39fe +0x11a:  mov    0x10(%ebp),%eax
080c3a01 +0x11d:  mov    %eax,-0xc(%ebp)
080c3a04 +0x120:  jmp    080c3a70 <+0x18c>
080c3a06 +0x122:  mov    -0xc(%ebp),%edx
080c3a09 +0x125:  mov    0x8(%ebp),%eax
080c3a0c +0x128:  add    $0x40,%eax
080c3a0f +0x12b:  mov    %edx,0x8(%esp)
080c3a13 +0x12f:  mov    %eax,0x4(%esp)
080c3a17 +0x133:  mov    0x8(%ebp),%eax
080c3a1a +0x136:  mov    %eax,(%esp)
080c3a1d +0x139:  call   080c3724 <_ZN4CTEA12EncryptBlockEPKhPh>  ; CTEA::EncryptBlock(unsigned char const*, unsigned char*)
080c3a22 +0x13e:  mov    0x8(%ebp),%eax
080c3a25 +0x141:  mov    -0x10(%ebp),%edx
080c3a28 +0x144:  mov    %edx,0x8(%esp)
080c3a2c +0x148:  mov    -0xc(%ebp),%edx
080c3a2f +0x14b:  mov    %edx,0x4(%esp)
080c3a33 +0x14f:  mov    %eax,(%esp)
080c3a36 +0x152:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080c3a3b +0x157:  mov    0x8(%ebp),%eax
080c3a3e +0x15a:  mov    0x8(%eax),%eax
080c3a41 +0x15d:  mov    0x8(%ebp),%edx
080c3a44 +0x160:  add    $0x40,%edx
080c3a47 +0x163:  mov    %eax,0x8(%esp)
080c3a4b +0x167:  mov    -0xc(%ebp),%eax
080c3a4e +0x16a:  mov    %eax,0x4(%esp)
080c3a52 +0x16e:  mov    %edx,(%esp)
080c3a55 +0x171:  call   0807d8a0 <_init+0x198>
080c3a5a +0x176:  mov    0x8(%ebp),%eax
080c3a5d +0x179:  mov    0x8(%eax),%eax
080c3a60 +0x17c:  add    %eax,-0x10(%ebp)
080c3a63 +0x17f:  mov    0x8(%ebp),%eax
080c3a66 +0x182:  mov    0x8(%eax),%eax
080c3a69 +0x185:  add    %eax,-0xc(%ebp)
080c3a6c +0x188:  addl   $0x1,-0x14(%ebp)
080c3a70 +0x18c:  mov    0x8(%ebp),%eax
080c3a73 +0x18f:  mov    0x8(%eax),%eax
080c3a76 +0x192:  mov    %eax,-0x1c(%ebp)
080c3a79 +0x195:  mov    0x14(%ebp),%eax
080c3a7c +0x198:  mov    $0x0,%edx
080c3a81 +0x19d:  divl   -0x1c(%ebp)
080c3a84 +0x1a0:  cmp    -0x14(%ebp),%eax
080c3a87 +0x1a3:  seta   %al
080c3a8a +0x1a6:  test   %al,%al
080c3a8c +0x1a8:  jne    080c3a06 <+0x122>
080c3a92 +0x1ae:  jmp    080c3af6 <+0x212>
080c3a94 +0x1b0:  movl   $0x0,-0x14(%ebp)
080c3a9b +0x1b7:  mov    0xc(%ebp),%eax
080c3a9e +0x1ba:  mov    %eax,-0x10(%ebp)
080c3aa1 +0x1bd:  mov    0x10(%ebp),%eax
080c3aa4 +0x1c0:  mov    %eax,-0xc(%ebp)
080c3aa7 +0x1c3:  jmp    080c3ad8 <+0x1f4>
080c3aa9 +0x1c5:  mov    -0xc(%ebp),%edx
080c3aac +0x1c8:  mov    -0x10(%ebp),%eax
080c3aaf +0x1cb:  mov    %edx,0x8(%esp)
080c3ab3 +0x1cf:  mov    %eax,0x4(%esp)
080c3ab7 +0x1d3:  mov    0x8(%ebp),%eax
080c3aba +0x1d6:  mov    %eax,(%esp)
080c3abd +0x1d9:  call   080c3724 <_ZN4CTEA12EncryptBlockEPKhPh>  ; CTEA::EncryptBlock(unsigned char const*, unsigned char*)
080c3ac2 +0x1de:  mov    0x8(%ebp),%eax
080c3ac5 +0x1e1:  mov    0x8(%eax),%eax
080c3ac8 +0x1e4:  add    %eax,-0x10(%ebp)
080c3acb +0x1e7:  mov    0x8(%ebp),%eax
080c3ace +0x1ea:  mov    0x8(%eax),%eax
080c3ad1 +0x1ed:  add    %eax,-0xc(%ebp)
080c3ad4 +0x1f0:  addl   $0x1,-0x14(%ebp)
080c3ad8 +0x1f4:  mov    0x8(%ebp),%eax
080c3adb +0x1f7:  mov    0x8(%eax),%eax
080c3ade +0x1fa:  mov    %eax,-0x1c(%ebp)
080c3ae1 +0x1fd:  mov    0x14(%ebp),%eax
080c3ae4 +0x200:  mov    $0x0,%edx
080c3ae9 +0x205:  divl   -0x1c(%ebp)
080c3aec +0x208:  cmp    -0x14(%ebp),%eax
080c3aef +0x20b:  seta   %al
080c3af2 +0x20e:  test   %al,%al
080c3af4 +0x210:  jne    080c3aa9 <+0x1c5>
080c3af6 +0x212:  mov    $0x6fffffff,%eax
080c3afb +0x217:  leave
080c3afc +0x218:  ret
080c3afd +0x219:  nop
```

## 反编译 C

```c
// CTEA::Encrypt @ 0x80c38e4

/* CTEA::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CTEA::Encrypt(CTEA *this,char *param_1,char *param_2,uint param_3)

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
          IMethod::Xor((IMethod *)this,(char *)(this + 0x40),(char *)local_14);
          EncryptBlock(this,(uchar *)(this + 0x40),local_10);
          memcpy(this + 0x40,local_10,*(size_t *)(this + 8));
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
          memcpy(this + 0x40,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,local_14,local_10);
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
