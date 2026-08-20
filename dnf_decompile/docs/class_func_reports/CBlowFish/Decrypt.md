# Decrypt

`_ZN9CBlowFish7DecryptER6SBlock`

`CBlowFish::Decrypt(SBlock&)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a99b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a99b0  _ZN9CBlowFish7DecryptER6SBlock
#           CBlowFish::Decrypt(SBlock&)
# range [0x080a99b0, 0x080a9bbb]
080a99b0 +0x000:  push   %ebp
080a99b1 +0x001:  mov    %esp,%ebp
080a99b3 +0x003:  sub    $0x28,%esp
080a99b6 +0x006:  mov    0xc(%ebp),%eax
080a99b9 +0x009:  mov    (%eax),%eax
080a99bb +0x00b:  mov    %eax,-0x10(%ebp)
080a99be +0x00e:  mov    0xc(%ebp),%eax
080a99c1 +0x011:  mov    0x4(%eax),%eax
080a99c4 +0x014:  mov    %eax,-0xc(%ebp)
080a99c7 +0x017:  mov    0x8(%ebp),%eax
080a99ca +0x01a:  mov    0x54(%eax),%eax
080a99cd +0x01d:  xor    %eax,-0x10(%ebp)
080a99d0 +0x020:  mov    -0x10(%ebp),%eax
080a99d3 +0x023:  mov    %eax,0x4(%esp)
080a99d7 +0x027:  mov    0x8(%ebp),%eax
080a99da +0x02a:  mov    %eax,(%esp)
080a99dd +0x02d:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a99e2 +0x032:  mov    0x8(%ebp),%edx
080a99e5 +0x035:  mov    0x50(%edx),%edx
080a99e8 +0x038:  xor    %edx,%eax
080a99ea +0x03a:  xor    %eax,-0xc(%ebp)
080a99ed +0x03d:  mov    -0xc(%ebp),%eax
080a99f0 +0x040:  mov    %eax,0x4(%esp)
080a99f4 +0x044:  mov    0x8(%ebp),%eax
080a99f7 +0x047:  mov    %eax,(%esp)
080a99fa +0x04a:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a99ff +0x04f:  mov    0x8(%ebp),%edx
080a9a02 +0x052:  mov    0x4c(%edx),%edx
080a9a05 +0x055:  xor    %edx,%eax
080a9a07 +0x057:  xor    %eax,-0x10(%ebp)
080a9a0a +0x05a:  mov    -0x10(%ebp),%eax
080a9a0d +0x05d:  mov    %eax,0x4(%esp)
080a9a11 +0x061:  mov    0x8(%ebp),%eax
080a9a14 +0x064:  mov    %eax,(%esp)
080a9a17 +0x067:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9a1c +0x06c:  mov    0x8(%ebp),%edx
080a9a1f +0x06f:  mov    0x48(%edx),%edx
080a9a22 +0x072:  xor    %edx,%eax
080a9a24 +0x074:  xor    %eax,-0xc(%ebp)
080a9a27 +0x077:  mov    -0xc(%ebp),%eax
080a9a2a +0x07a:  mov    %eax,0x4(%esp)
080a9a2e +0x07e:  mov    0x8(%ebp),%eax
080a9a31 +0x081:  mov    %eax,(%esp)
080a9a34 +0x084:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9a39 +0x089:  mov    0x8(%ebp),%edx
080a9a3c +0x08c:  mov    0x44(%edx),%edx
080a9a3f +0x08f:  xor    %edx,%eax
080a9a41 +0x091:  xor    %eax,-0x10(%ebp)
080a9a44 +0x094:  mov    -0x10(%ebp),%eax
080a9a47 +0x097:  mov    %eax,0x4(%esp)
080a9a4b +0x09b:  mov    0x8(%ebp),%eax
080a9a4e +0x09e:  mov    %eax,(%esp)
080a9a51 +0x0a1:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9a56 +0x0a6:  mov    0x8(%ebp),%edx
080a9a59 +0x0a9:  mov    0x40(%edx),%edx
080a9a5c +0x0ac:  xor    %edx,%eax
080a9a5e +0x0ae:  xor    %eax,-0xc(%ebp)
080a9a61 +0x0b1:  mov    -0xc(%ebp),%eax
080a9a64 +0x0b4:  mov    %eax,0x4(%esp)
080a9a68 +0x0b8:  mov    0x8(%ebp),%eax
080a9a6b +0x0bb:  mov    %eax,(%esp)
080a9a6e +0x0be:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9a73 +0x0c3:  mov    0x8(%ebp),%edx
080a9a76 +0x0c6:  mov    0x3c(%edx),%edx
080a9a79 +0x0c9:  xor    %edx,%eax
080a9a7b +0x0cb:  xor    %eax,-0x10(%ebp)
080a9a7e +0x0ce:  mov    -0x10(%ebp),%eax
080a9a81 +0x0d1:  mov    %eax,0x4(%esp)
080a9a85 +0x0d5:  mov    0x8(%ebp),%eax
080a9a88 +0x0d8:  mov    %eax,(%esp)
080a9a8b +0x0db:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9a90 +0x0e0:  mov    0x8(%ebp),%edx
080a9a93 +0x0e3:  mov    0x38(%edx),%edx
080a9a96 +0x0e6:  xor    %edx,%eax
080a9a98 +0x0e8:  xor    %eax,-0xc(%ebp)
080a9a9b +0x0eb:  mov    -0xc(%ebp),%eax
080a9a9e +0x0ee:  mov    %eax,0x4(%esp)
080a9aa2 +0x0f2:  mov    0x8(%ebp),%eax
080a9aa5 +0x0f5:  mov    %eax,(%esp)
080a9aa8 +0x0f8:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9aad +0x0fd:  mov    0x8(%ebp),%edx
080a9ab0 +0x100:  mov    0x34(%edx),%edx
080a9ab3 +0x103:  xor    %edx,%eax
080a9ab5 +0x105:  xor    %eax,-0x10(%ebp)
080a9ab8 +0x108:  mov    -0x10(%ebp),%eax
080a9abb +0x10b:  mov    %eax,0x4(%esp)
080a9abf +0x10f:  mov    0x8(%ebp),%eax
080a9ac2 +0x112:  mov    %eax,(%esp)
080a9ac5 +0x115:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9aca +0x11a:  mov    0x8(%ebp),%edx
080a9acd +0x11d:  mov    0x30(%edx),%edx
080a9ad0 +0x120:  xor    %edx,%eax
080a9ad2 +0x122:  xor    %eax,-0xc(%ebp)
080a9ad5 +0x125:  mov    -0xc(%ebp),%eax
080a9ad8 +0x128:  mov    %eax,0x4(%esp)
080a9adc +0x12c:  mov    0x8(%ebp),%eax
080a9adf +0x12f:  mov    %eax,(%esp)
080a9ae2 +0x132:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9ae7 +0x137:  mov    0x8(%ebp),%edx
080a9aea +0x13a:  mov    0x2c(%edx),%edx
080a9aed +0x13d:  xor    %edx,%eax
080a9aef +0x13f:  xor    %eax,-0x10(%ebp)
080a9af2 +0x142:  mov    -0x10(%ebp),%eax
080a9af5 +0x145:  mov    %eax,0x4(%esp)
080a9af9 +0x149:  mov    0x8(%ebp),%eax
080a9afc +0x14c:  mov    %eax,(%esp)
080a9aff +0x14f:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b04 +0x154:  mov    0x8(%ebp),%edx
080a9b07 +0x157:  mov    0x28(%edx),%edx
080a9b0a +0x15a:  xor    %edx,%eax
080a9b0c +0x15c:  xor    %eax,-0xc(%ebp)
080a9b0f +0x15f:  mov    -0xc(%ebp),%eax
080a9b12 +0x162:  mov    %eax,0x4(%esp)
080a9b16 +0x166:  mov    0x8(%ebp),%eax
080a9b19 +0x169:  mov    %eax,(%esp)
080a9b1c +0x16c:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b21 +0x171:  mov    0x8(%ebp),%edx
080a9b24 +0x174:  mov    0x24(%edx),%edx
080a9b27 +0x177:  xor    %edx,%eax
080a9b29 +0x179:  xor    %eax,-0x10(%ebp)
080a9b2c +0x17c:  mov    -0x10(%ebp),%eax
080a9b2f +0x17f:  mov    %eax,0x4(%esp)
080a9b33 +0x183:  mov    0x8(%ebp),%eax
080a9b36 +0x186:  mov    %eax,(%esp)
080a9b39 +0x189:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b3e +0x18e:  mov    0x8(%ebp),%edx
080a9b41 +0x191:  mov    0x20(%edx),%edx
080a9b44 +0x194:  xor    %edx,%eax
080a9b46 +0x196:  xor    %eax,-0xc(%ebp)
080a9b49 +0x199:  mov    -0xc(%ebp),%eax
080a9b4c +0x19c:  mov    %eax,0x4(%esp)
080a9b50 +0x1a0:  mov    0x8(%ebp),%eax
080a9b53 +0x1a3:  mov    %eax,(%esp)
080a9b56 +0x1a6:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b5b +0x1ab:  mov    0x8(%ebp),%edx
080a9b5e +0x1ae:  mov    0x1c(%edx),%edx
080a9b61 +0x1b1:  xor    %edx,%eax
080a9b63 +0x1b3:  xor    %eax,-0x10(%ebp)
080a9b66 +0x1b6:  mov    -0x10(%ebp),%eax
080a9b69 +0x1b9:  mov    %eax,0x4(%esp)
080a9b6d +0x1bd:  mov    0x8(%ebp),%eax
080a9b70 +0x1c0:  mov    %eax,(%esp)
080a9b73 +0x1c3:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b78 +0x1c8:  mov    0x8(%ebp),%edx
080a9b7b +0x1cb:  mov    0x18(%edx),%edx
080a9b7e +0x1ce:  xor    %edx,%eax
080a9b80 +0x1d0:  xor    %eax,-0xc(%ebp)
080a9b83 +0x1d3:  mov    -0xc(%ebp),%eax
080a9b86 +0x1d6:  mov    %eax,0x4(%esp)
080a9b8a +0x1da:  mov    0x8(%ebp),%eax
080a9b8d +0x1dd:  mov    %eax,(%esp)
080a9b90 +0x1e0:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9b95 +0x1e5:  mov    0x8(%ebp),%edx
080a9b98 +0x1e8:  mov    0x14(%edx),%edx
080a9b9b +0x1eb:  xor    %edx,%eax
080a9b9d +0x1ed:  xor    %eax,-0x10(%ebp)
080a9ba0 +0x1f0:  mov    0x8(%ebp),%eax
080a9ba3 +0x1f3:  mov    0x10(%eax),%eax
080a9ba6 +0x1f6:  xor    %eax,-0xc(%ebp)
080a9ba9 +0x1f9:  mov    0xc(%ebp),%eax
080a9bac +0x1fc:  mov    -0xc(%ebp),%edx
080a9baf +0x1ff:  mov    %edx,(%eax)
080a9bb1 +0x201:  mov    0xc(%ebp),%eax
080a9bb4 +0x204:  mov    -0x10(%ebp),%edx
080a9bb7 +0x207:  mov    %edx,0x4(%eax)
080a9bba +0x20a:  leave
080a9bbb +0x20b:  ret
```

## 反编译 C

```c
// CBlowFish::Decrypt @ 0x80a99b0

/* CBlowFish::Decrypt(SBlock&) */

void __thiscall CBlowFish::Decrypt(CBlowFish *this,SBlock *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(this + 0x54);
  uVar3 = F(this,uVar1 ^ uVar4);
  uVar2 = uVar2 ^ uVar3 ^ *(uint *)(this + 0x50);
  uVar3 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ uVar3 ^ *(uint *)(this + 0x4c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x48);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x44);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x40);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x3c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x38);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x34);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x30);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x2c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x28);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x24);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x20);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x1c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x18);
  uVar3 = F(this,uVar2);
  uVar4 = *(uint *)(this + 0x14);
  *(uint *)param_1 = uVar2 ^ *(uint *)(this + 0x10);
  *(uint *)(param_1 + 4) = uVar1 ^ uVar3 ^ uVar4;
  return;
}
```
