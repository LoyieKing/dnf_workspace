# Decrypt

`_ZN9CRijndael7DecryptEPKcPcj`

`CRijndael::Decrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b8028` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b8028  _ZN9CRijndael7DecryptEPKcPcj
#           CRijndael::Decrypt(char const*, char*, unsigned int)
# range [0x080b8028, 0x080b824b]
080b8028 +0x000:  push   %ebp
080b8029 +0x001:  mov    %esp,%ebp
080b802b +0x003:  sub    $0x38,%esp
080b802e +0x006:  mov    0x8(%ebp),%eax
080b8031 +0x009:  movzbl 0x4(%eax),%eax
080b8035 +0x00d:  xor    $0x1,%eax
080b8038 +0x010:  test   %al,%al
080b803a +0x012:  je     080b8046 <+0x1e>
080b803c +0x014:  mov    $0x70000005,%eax
080b8041 +0x019:  jmp    080b8248 <+0x220>
080b8046 +0x01e:  cmpl   $0x0,0x14(%ebp)
080b804a +0x022:  je     080b8064 <+0x3c>
080b804c +0x024:  mov    0x8(%ebp),%eax
080b804f +0x027:  mov    0x8(%eax),%eax
080b8052 +0x02a:  mov    %eax,%ecx
080b8054 +0x02c:  mov    0x14(%ebp),%eax
080b8057 +0x02f:  mov    $0x0,%edx
080b805c +0x034:  div    %ecx
080b805e +0x036:  mov    %edx,%eax
080b8060 +0x038:  test   %eax,%eax
080b8062 +0x03a:  je     080b806e <+0x46>
080b8064 +0x03c:  mov    $0x7000000a,%eax
080b8069 +0x041:  jmp    080b8248 <+0x220>
080b806e +0x046:  mov    0x8(%ebp),%eax
080b8071 +0x049:  mov    0x10(%eax),%eax
080b8074 +0x04c:  cmp    $0x1,%eax
080b8077 +0x04f:  jne    080b8129 <+0x101>
080b807d +0x055:  movl   $0x0,-0x14(%ebp)
080b8084 +0x05c:  mov    0xc(%ebp),%eax
080b8087 +0x05f:  mov    %eax,-0x10(%ebp)
080b808a +0x062:  mov    0x10(%ebp),%eax
080b808d +0x065:  mov    %eax,-0xc(%ebp)
080b8090 +0x068:  jmp    080b8102 <+0xda>
080b8092 +0x06a:  mov    -0xc(%ebp),%eax
080b8095 +0x06d:  mov    %eax,0x8(%esp)
080b8099 +0x071:  mov    -0x10(%ebp),%eax
080b809c +0x074:  mov    %eax,0x4(%esp)
080b80a0 +0x078:  mov    0x8(%ebp),%eax
080b80a3 +0x07b:  mov    %eax,(%esp)
080b80a6 +0x07e:  call   080b7a20 <_ZN9CRijndael12DecryptBlockEPKcPc>  ; CRijndael::DecryptBlock(char const*, char*)
080b80ab +0x083:  mov    0x8(%ebp),%eax
080b80ae +0x086:  lea    0x3fc(%eax),%edx
080b80b4 +0x08c:  mov    0x8(%ebp),%eax
080b80b7 +0x08f:  mov    %edx,0x8(%esp)
080b80bb +0x093:  mov    -0xc(%ebp),%edx
080b80be +0x096:  mov    %edx,0x4(%esp)
080b80c2 +0x09a:  mov    %eax,(%esp)
080b80c5 +0x09d:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080b80ca +0x0a2:  mov    0x8(%ebp),%eax
080b80cd +0x0a5:  mov    0x8(%eax),%eax
080b80d0 +0x0a8:  mov    0x8(%ebp),%edx
080b80d3 +0x0ab:  add    $0x3fc,%edx
080b80d9 +0x0b1:  mov    %eax,0x8(%esp)
080b80dd +0x0b5:  mov    -0x10(%ebp),%eax
080b80e0 +0x0b8:  mov    %eax,0x4(%esp)
080b80e4 +0x0bc:  mov    %edx,(%esp)
080b80e7 +0x0bf:  call   0807d8a0 <_init+0x198>
080b80ec +0x0c4:  mov    0x8(%ebp),%eax
080b80ef +0x0c7:  mov    0x8(%eax),%eax
080b80f2 +0x0ca:  add    %eax,-0x10(%ebp)
080b80f5 +0x0cd:  mov    0x8(%ebp),%eax
080b80f8 +0x0d0:  mov    0x8(%eax),%eax
080b80fb +0x0d3:  add    %eax,-0xc(%ebp)
080b80fe +0x0d6:  addl   $0x1,-0x14(%ebp)
080b8102 +0x0da:  mov    0x8(%ebp),%eax
080b8105 +0x0dd:  mov    0x8(%eax),%eax
080b8108 +0x0e0:  mov    %eax,-0x1c(%ebp)
080b810b +0x0e3:  mov    0x14(%ebp),%eax
080b810e +0x0e6:  mov    $0x0,%edx
080b8113 +0x0eb:  divl   -0x1c(%ebp)
080b8116 +0x0ee:  cmp    -0x14(%ebp),%eax
080b8119 +0x0f1:  seta   %al
080b811c +0x0f4:  test   %al,%al
080b811e +0x0f6:  jne    080b8092 <+0x6a>
080b8124 +0x0fc:  jmp    080b8243 <+0x21b>
080b8129 +0x101:  mov    0x8(%ebp),%eax
080b812c +0x104:  mov    0x10(%eax),%eax
080b812f +0x107:  cmp    $0x2,%eax
080b8132 +0x10a:  jne    080b81e1 <+0x1b9>
080b8138 +0x110:  movl   $0x0,-0x14(%ebp)
080b813f +0x117:  mov    0xc(%ebp),%eax
080b8142 +0x11a:  mov    %eax,-0x10(%ebp)
080b8145 +0x11d:  mov    0x10(%ebp),%eax
080b8148 +0x120:  mov    %eax,-0xc(%ebp)
080b814b +0x123:  jmp    080b81bd <+0x195>
080b814d +0x125:  mov    0x8(%ebp),%eax
080b8150 +0x128:  lea    0x3fc(%eax),%edx
080b8156 +0x12e:  mov    -0xc(%ebp),%eax
080b8159 +0x131:  mov    %eax,0x8(%esp)
080b815d +0x135:  mov    %edx,0x4(%esp)
080b8161 +0x139:  mov    0x8(%ebp),%eax
080b8164 +0x13c:  mov    %eax,(%esp)
080b8167 +0x13f:  call   080b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>  ; CRijndael::EncryptBlock(char const*, char*)
080b816c +0x144:  mov    0x8(%ebp),%eax
080b816f +0x147:  mov    -0x10(%ebp),%edx
080b8172 +0x14a:  mov    %edx,0x8(%esp)
080b8176 +0x14e:  mov    -0xc(%ebp),%edx
080b8179 +0x151:  mov    %edx,0x4(%esp)
080b817d +0x155:  mov    %eax,(%esp)
080b8180 +0x158:  call   080b4316 <_ZN7IMethod3XorEPcPKc>  ; IMethod::Xor(char*, char const*)
080b8185 +0x15d:  mov    0x8(%ebp),%eax
080b8188 +0x160:  mov    0x8(%eax),%eax
080b818b +0x163:  mov    0x8(%ebp),%edx
080b818e +0x166:  add    $0x3fc,%edx
080b8194 +0x16c:  mov    %eax,0x8(%esp)
080b8198 +0x170:  mov    -0x10(%ebp),%eax
080b819b +0x173:  mov    %eax,0x4(%esp)
080b819f +0x177:  mov    %edx,(%esp)
080b81a2 +0x17a:  call   0807d8a0 <_init+0x198>
080b81a7 +0x17f:  mov    0x8(%ebp),%eax
080b81aa +0x182:  mov    0x8(%eax),%eax
080b81ad +0x185:  add    %eax,-0x10(%ebp)
080b81b0 +0x188:  mov    0x8(%ebp),%eax
080b81b3 +0x18b:  mov    0x8(%eax),%eax
080b81b6 +0x18e:  add    %eax,-0xc(%ebp)
080b81b9 +0x191:  addl   $0x1,-0x14(%ebp)
080b81bd +0x195:  mov    0x8(%ebp),%eax
080b81c0 +0x198:  mov    0x8(%eax),%eax
080b81c3 +0x19b:  mov    %eax,-0x1c(%ebp)
080b81c6 +0x19e:  mov    0x14(%ebp),%eax
080b81c9 +0x1a1:  mov    $0x0,%edx
080b81ce +0x1a6:  divl   -0x1c(%ebp)
080b81d1 +0x1a9:  cmp    -0x14(%ebp),%eax
080b81d4 +0x1ac:  seta   %al
080b81d7 +0x1af:  test   %al,%al
080b81d9 +0x1b1:  jne    080b814d <+0x125>
080b81df +0x1b7:  jmp    080b8243 <+0x21b>
080b81e1 +0x1b9:  movl   $0x0,-0x14(%ebp)
080b81e8 +0x1c0:  mov    0xc(%ebp),%eax
080b81eb +0x1c3:  mov    %eax,-0x10(%ebp)
080b81ee +0x1c6:  mov    0x10(%ebp),%eax
080b81f1 +0x1c9:  mov    %eax,-0xc(%ebp)
080b81f4 +0x1cc:  jmp    080b8225 <+0x1fd>
080b81f6 +0x1ce:  mov    -0xc(%ebp),%eax
080b81f9 +0x1d1:  mov    %eax,0x8(%esp)
080b81fd +0x1d5:  mov    -0x10(%ebp),%eax
080b8200 +0x1d8:  mov    %eax,0x4(%esp)
080b8204 +0x1dc:  mov    0x8(%ebp),%eax
080b8207 +0x1df:  mov    %eax,(%esp)
080b820a +0x1e2:  call   080b7a20 <_ZN9CRijndael12DecryptBlockEPKcPc>  ; CRijndael::DecryptBlock(char const*, char*)
080b820f +0x1e7:  mov    0x8(%ebp),%eax
080b8212 +0x1ea:  mov    0x8(%eax),%eax
080b8215 +0x1ed:  add    %eax,-0x10(%ebp)
080b8218 +0x1f0:  mov    0x8(%ebp),%eax
080b821b +0x1f3:  mov    0x8(%eax),%eax
080b821e +0x1f6:  add    %eax,-0xc(%ebp)
080b8221 +0x1f9:  addl   $0x1,-0x14(%ebp)
080b8225 +0x1fd:  mov    0x8(%ebp),%eax
080b8228 +0x200:  mov    0x8(%eax),%eax
080b822b +0x203:  mov    %eax,-0x1c(%ebp)
080b822e +0x206:  mov    0x14(%ebp),%eax
080b8231 +0x209:  mov    $0x0,%edx
080b8236 +0x20e:  divl   -0x1c(%ebp)
080b8239 +0x211:  cmp    -0x14(%ebp),%eax
080b823c +0x214:  seta   %al
080b823f +0x217:  test   %al,%al
080b8241 +0x219:  jne    080b81f6 <+0x1ce>
080b8243 +0x21b:  mov    $0x6fffffff,%eax
080b8248 +0x220:  leave
080b8249 +0x221:  ret
080b824a +0x222:  nop
080b824b +0x223:  nop
```

## 反编译 C

```c
// CRijndael::Decrypt @ 0x80b8028

/* CRijndael::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CRijndael::Decrypt(CRijndael *this,char *param_1,char *param_2,uint param_3)

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
          DecryptBlock(this,local_14,local_10);
          IMethod::Xor((IMethod *)this,local_10,(char *)(this + 0x3fc));
          memcpy(this + 0x3fc,local_14,*(size_t *)(this + 8));
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
          memcpy(this + 0x3fc,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = param_1;
        local_10 = param_2;
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
