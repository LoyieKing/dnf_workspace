# Encrypt

`_ZN9CRijndael7EncryptEPKcPcj`

`CRijndael::Encrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b7e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b7e00  _ZN9CRijndael7EncryptEPKcPcj
#           CRijndael::Encrypt(char const*, char*, unsigned int)
# range [0x080b7e00, 0x080b8027]
080b7e00 +0x000:  push   %ebp
080b7e01 +0x001:  mov    %esp,%ebp
080b7e03 +0x003:  sub    $0x38,%esp
080b7e06 +0x006:  mov    0x8(%ebp),%eax
080b7e09 +0x009:  movzbl 0x4(%eax),%eax
080b7e0d +0x00d:  xor    $0x1,%eax
080b7e10 +0x010:  test   %al,%al
080b7e12 +0x012:  je     080b7e1e <+0x1e>
080b7e14 +0x014:  mov    $0x70000005,%eax
080b7e19 +0x019:  jmp    080b8026 <+0x226>
080b7e1e +0x01e:  cmpl   $0x0,0x14(%ebp)
080b7e22 +0x022:  je     080b7e3c <+0x3c>
080b7e24 +0x024:  mov    0x8(%ebp),%eax
080b7e27 +0x027:  mov    0x8(%eax),%eax
080b7e2a +0x02a:  mov    %eax,%ecx
080b7e2c +0x02c:  mov    0x14(%ebp),%eax
080b7e2f +0x02f:  mov    $0x0,%edx
080b7e34 +0x034:  div    %ecx
080b7e36 +0x036:  mov    %edx,%eax
080b7e38 +0x038:  test   %eax,%eax
080b7e3a +0x03a:  je     080b7e46 <+0x46>
080b7e3c +0x03c:  mov    $0x7000000a,%eax
080b7e41 +0x041:  jmp    080b8026 <+0x226>
080b7e46 +0x046:  mov    0x8(%ebp),%eax
080b7e49 +0x049:  mov    0x10(%eax),%eax
080b7e4c +0x04c:  cmp    $0x1,%eax
080b7e4f +0x04f:  jne    080b7f07 <+0x107>
080b7e55 +0x055:  movl   $0x0,-0x14(%ebp)
080b7e5c +0x05c:  mov    0xc(%ebp),%eax
080b7e5f +0x05f:  mov    %eax,-0x10(%ebp)
080b7e62 +0x062:  mov    0x10(%ebp),%eax
080b7e65 +0x065:  mov    %eax,-0xc(%ebp)
080b7e68 +0x068:  jmp    080b7ee0 <+0xe0>
080b7e6a +0x06a:  mov    0x8(%ebp),%eax
080b7e6d +0x06d:  lea    0x3fc(%eax),%ecx
080b7e73 +0x073:  mov    0x8(%ebp),%eax
080b7e76 +0x076:  mov    -0x10(%ebp),%edx
080b7e79 +0x079:  mov    %edx,0x8(%esp)
080b7e7d +0x07d:  mov    %ecx,0x4(%esp)
080b7e81 +0x081:  mov    %eax,(%esp)
080b7e84 +0x084:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080b7e89 +0x089:  mov    0x8(%ebp),%eax
080b7e8c +0x08c:  lea    0x3fc(%eax),%edx
080b7e92 +0x092:  mov    -0xc(%ebp),%eax
080b7e95 +0x095:  mov    %eax,0x8(%esp)
080b7e99 +0x099:  mov    %edx,0x4(%esp)
080b7e9d +0x09d:  mov    0x8(%ebp),%eax
080b7ea0 +0x0a0:  mov    %eax,(%esp)
080b7ea3 +0x0a3:  call   080b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>  ; CRijndael::EncryptBlock(char const*, char*)
080b7ea8 +0x0a8:  mov    0x8(%ebp),%eax
080b7eab +0x0ab:  mov    0x8(%eax),%eax
080b7eae +0x0ae:  mov    0x8(%ebp),%edx
080b7eb1 +0x0b1:  add    $0x3fc,%edx
080b7eb7 +0x0b7:  mov    %eax,0x8(%esp)
080b7ebb +0x0bb:  mov    -0xc(%ebp),%eax
080b7ebe +0x0be:  mov    %eax,0x4(%esp)
080b7ec2 +0x0c2:  mov    %edx,(%esp)
080b7ec5 +0x0c5:  call   0807d8a0 <_init+0x198>
080b7eca +0x0ca:  mov    0x8(%ebp),%eax
080b7ecd +0x0cd:  mov    0x8(%eax),%eax
080b7ed0 +0x0d0:  add    %eax,-0x10(%ebp)
080b7ed3 +0x0d3:  mov    0x8(%ebp),%eax
080b7ed6 +0x0d6:  mov    0x8(%eax),%eax
080b7ed9 +0x0d9:  add    %eax,-0xc(%ebp)
080b7edc +0x0dc:  addl   $0x1,-0x14(%ebp)
080b7ee0 +0x0e0:  mov    0x8(%ebp),%eax
080b7ee3 +0x0e3:  mov    0x8(%eax),%eax
080b7ee6 +0x0e6:  mov    %eax,-0x1c(%ebp)
080b7ee9 +0x0e9:  mov    0x14(%ebp),%eax
080b7eec +0x0ec:  mov    $0x0,%edx
080b7ef1 +0x0f1:  divl   -0x1c(%ebp)
080b7ef4 +0x0f4:  cmp    -0x14(%ebp),%eax
080b7ef7 +0x0f7:  seta   %al
080b7efa +0x0fa:  test   %al,%al
080b7efc +0x0fc:  jne    080b7e6a <+0x6a>
080b7f02 +0x102:  jmp    080b8021 <+0x221>
080b7f07 +0x107:  mov    0x8(%ebp),%eax
080b7f0a +0x10a:  mov    0x10(%eax),%eax
080b7f0d +0x10d:  cmp    $0x2,%eax
080b7f10 +0x110:  jne    080b7fbf <+0x1bf>
080b7f16 +0x116:  movl   $0x0,-0x14(%ebp)
080b7f1d +0x11d:  mov    0xc(%ebp),%eax
080b7f20 +0x120:  mov    %eax,-0x10(%ebp)
080b7f23 +0x123:  mov    0x10(%ebp),%eax
080b7f26 +0x126:  mov    %eax,-0xc(%ebp)
080b7f29 +0x129:  jmp    080b7f9b <+0x19b>
080b7f2b +0x12b:  mov    0x8(%ebp),%eax
080b7f2e +0x12e:  lea    0x3fc(%eax),%edx
080b7f34 +0x134:  mov    -0xc(%ebp),%eax
080b7f37 +0x137:  mov    %eax,0x8(%esp)
080b7f3b +0x13b:  mov    %edx,0x4(%esp)
080b7f3f +0x13f:  mov    0x8(%ebp),%eax
080b7f42 +0x142:  mov    %eax,(%esp)
080b7f45 +0x145:  call   080b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>  ; CRijndael::EncryptBlock(char const*, char*)
080b7f4a +0x14a:  mov    0x8(%ebp),%eax
080b7f4d +0x14d:  mov    -0x10(%ebp),%edx
080b7f50 +0x150:  mov    %edx,0x8(%esp)
080b7f54 +0x154:  mov    -0xc(%ebp),%edx
080b7f57 +0x157:  mov    %edx,0x4(%esp)
080b7f5b +0x15b:  mov    %eax,(%esp)
080b7f5e +0x15e:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080b7f63 +0x163:  mov    0x8(%ebp),%eax
080b7f66 +0x166:  mov    0x8(%eax),%eax
080b7f69 +0x169:  mov    0x8(%ebp),%edx
080b7f6c +0x16c:  add    $0x3fc,%edx
080b7f72 +0x172:  mov    %eax,0x8(%esp)
080b7f76 +0x176:  mov    -0xc(%ebp),%eax
080b7f79 +0x179:  mov    %eax,0x4(%esp)
080b7f7d +0x17d:  mov    %edx,(%esp)
080b7f80 +0x180:  call   0807d8a0 <_init+0x198>
080b7f85 +0x185:  mov    0x8(%ebp),%eax
080b7f88 +0x188:  mov    0x8(%eax),%eax
080b7f8b +0x18b:  add    %eax,-0x10(%ebp)
080b7f8e +0x18e:  mov    0x8(%ebp),%eax
080b7f91 +0x191:  mov    0x8(%eax),%eax
080b7f94 +0x194:  add    %eax,-0xc(%ebp)
080b7f97 +0x197:  addl   $0x1,-0x14(%ebp)
080b7f9b +0x19b:  mov    0x8(%ebp),%eax
080b7f9e +0x19e:  mov    0x8(%eax),%eax
080b7fa1 +0x1a1:  mov    %eax,-0x1c(%ebp)
080b7fa4 +0x1a4:  mov    0x14(%ebp),%eax
080b7fa7 +0x1a7:  mov    $0x0,%edx
080b7fac +0x1ac:  divl   -0x1c(%ebp)
080b7faf +0x1af:  cmp    -0x14(%ebp),%eax
080b7fb2 +0x1b2:  seta   %al
080b7fb5 +0x1b5:  test   %al,%al
080b7fb7 +0x1b7:  jne    080b7f2b <+0x12b>
080b7fbd +0x1bd:  jmp    080b8021 <+0x221>
080b7fbf +0x1bf:  movl   $0x0,-0x14(%ebp)
080b7fc6 +0x1c6:  mov    0xc(%ebp),%eax
080b7fc9 +0x1c9:  mov    %eax,-0x10(%ebp)
080b7fcc +0x1cc:  mov    0x10(%ebp),%eax
080b7fcf +0x1cf:  mov    %eax,-0xc(%ebp)
080b7fd2 +0x1d2:  jmp    080b8003 <+0x203>
080b7fd4 +0x1d4:  mov    -0xc(%ebp),%eax
080b7fd7 +0x1d7:  mov    %eax,0x8(%esp)
080b7fdb +0x1db:  mov    -0x10(%ebp),%eax
080b7fde +0x1de:  mov    %eax,0x4(%esp)
080b7fe2 +0x1e2:  mov    0x8(%ebp),%eax
080b7fe5 +0x1e5:  mov    %eax,(%esp)
080b7fe8 +0x1e8:  call   080b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>  ; CRijndael::EncryptBlock(char const*, char*)
080b7fed +0x1ed:  mov    0x8(%ebp),%eax
080b7ff0 +0x1f0:  mov    0x8(%eax),%eax
080b7ff3 +0x1f3:  add    %eax,-0x10(%ebp)
080b7ff6 +0x1f6:  mov    0x8(%ebp),%eax
080b7ff9 +0x1f9:  mov    0x8(%eax),%eax
080b7ffc +0x1fc:  add    %eax,-0xc(%ebp)
080b7fff +0x1ff:  addl   $0x1,-0x14(%ebp)
080b8003 +0x203:  mov    0x8(%ebp),%eax
080b8006 +0x206:  mov    0x8(%eax),%eax
080b8009 +0x209:  mov    %eax,-0x1c(%ebp)
080b800c +0x20c:  mov    0x14(%ebp),%eax
080b800f +0x20f:  mov    $0x0,%edx
080b8014 +0x214:  divl   -0x1c(%ebp)
080b8017 +0x217:  cmp    -0x14(%ebp),%eax
080b801a +0x21a:  seta   %al
080b801d +0x21d:  test   %al,%al
080b801f +0x21f:  jne    080b7fd4 <+0x1d4>
080b8021 +0x221:  mov    $0x6fffffff,%eax
080b8026 +0x226:  leave
080b8027 +0x227:  ret
```

## 反编译 C

```c
// CRijndael::Encrypt @ 0x80b7e00

/* CRijndael::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CRijndael::Encrypt(CRijndael *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  char *local_14;
  char *local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          IMethod::Xor((IMethod *)this,(char *)(this + 0x3fc),local_14);
          EncryptBlock(this,(char *)(this + 0x3fc),local_10);
          memcpy(this + 0x3fc,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(char *)(this + 0x3fc),local_10);
          IMethod::Xor((IMethod *)this,local_10,local_14);
          memcpy(this + 0x3fc,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = param_1;
        local_10 = param_2;
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
