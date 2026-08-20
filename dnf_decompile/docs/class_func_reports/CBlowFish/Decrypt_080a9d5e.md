# Decrypt

`_ZN9CBlowFish7DecryptEPhji`

`CBlowFish::Decrypt(unsigned char*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a9d5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a9d5e  _ZN9CBlowFish7DecryptEPhji
#           CBlowFish::Decrypt(unsigned char*, unsigned int, int)
# range [0x080a9d5e, 0x080a9f4d]
080a9d5e +0x000:  push   %ebp
080a9d5f +0x001:  mov    %esp,%ebp
080a9d61 +0x003:  sub    $0x48,%esp
080a9d64 +0x006:  cmpl   $0x0,0x10(%ebp)
080a9d68 +0x00a:  je     080a9d74 <+0x16>
080a9d6a +0x00c:  mov    0x10(%ebp),%eax
080a9d6d +0x00f:  and    $0x7,%eax
080a9d70 +0x012:  test   %eax,%eax
080a9d72 +0x014:  je     080a9d7e <+0x20>
080a9d74 +0x016:  mov    $0x70000006,%eax
080a9d79 +0x01b:  jmp    080a9f4c <+0x1ee>
080a9d7e +0x020:  movl   $0x0,0x8(%esp)
080a9d86 +0x028:  movl   $0x0,0x4(%esp)
080a9d8e +0x030:  lea    -0x10(%ebp),%eax
080a9d91 +0x033:  mov    %eax,(%esp)
080a9d94 +0x036:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a9d99 +0x03b:  cmpl   $0x1,0x14(%ebp)
080a9d9d +0x03f:  jne    080a9e4d <+0xef>
080a9da3 +0x045:  movl   $0x0,0x8(%esp)
080a9dab +0x04d:  movl   $0x0,0x4(%esp)
080a9db3 +0x055:  lea    -0x18(%ebp),%eax
080a9db6 +0x058:  mov    %eax,(%esp)
080a9db9 +0x05b:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a9dbe +0x060:  mov    0x8(%ebp),%eax
080a9dc1 +0x063:  add    $0x8,%eax
080a9dc4 +0x066:  mov    %eax,0x4(%esp)
080a9dc8 +0x06a:  lea    -0x20(%ebp),%eax
080a9dcb +0x06d:  mov    %eax,(%esp)
080a9dce +0x070:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9dd3 +0x075:  jmp    080a9e3d <+0xdf>
080a9dd5 +0x077:  lea    -0x10(%ebp),%eax
080a9dd8 +0x07a:  mov    %eax,0x4(%esp)
080a9ddc +0x07e:  mov    0xc(%ebp),%eax
080a9ddf +0x081:  mov    %eax,(%esp)
080a9de2 +0x084:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9de7 +0x089:  mov    -0x10(%ebp),%eax
080a9dea +0x08c:  mov    %eax,-0x18(%ebp)
080a9ded +0x08f:  mov    -0xc(%ebp),%eax
080a9df0 +0x092:  mov    %eax,-0x14(%ebp)
080a9df3 +0x095:  lea    -0x10(%ebp),%eax
080a9df6 +0x098:  mov    %eax,0x4(%esp)
080a9dfa +0x09c:  mov    0x8(%ebp),%eax
080a9dfd +0x09f:  mov    %eax,(%esp)
080a9e00 +0x0a2:  call   080a99b0 <_ZN9CBlowFish7DecryptER6SBlock>  ; CBlowFish::Decrypt(SBlock&)
080a9e05 +0x0a7:  lea    -0x20(%ebp),%eax
080a9e08 +0x0aa:  mov    %eax,0x4(%esp)
080a9e0c +0x0ae:  lea    -0x10(%ebp),%eax
080a9e0f +0x0b1:  mov    %eax,(%esp)
080a9e12 +0x0b4:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080a9e17 +0x0b9:  mov    -0x18(%ebp),%eax
080a9e1a +0x0bc:  mov    %eax,-0x20(%ebp)
080a9e1d +0x0bf:  mov    -0x14(%ebp),%eax
080a9e20 +0x0c2:  mov    %eax,-0x1c(%ebp)
080a9e23 +0x0c5:  addl   $0x8,0xc(%ebp)
080a9e27 +0x0c9:  mov    0xc(%ebp),%eax
080a9e2a +0x0cc:  mov    %eax,0x4(%esp)
080a9e2e +0x0d0:  lea    -0x10(%ebp),%eax
080a9e31 +0x0d3:  mov    %eax,(%esp)
080a9e34 +0x0d6:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9e39 +0x0db:  subl   $0x8,0x10(%ebp)
080a9e3d +0x0df:  cmpl   $0x7,0x10(%ebp)
080a9e41 +0x0e3:  seta   %al
080a9e44 +0x0e6:  test   %al,%al
080a9e46 +0x0e8:  jne    080a9dd5 <+0x77>
080a9e48 +0x0ea:  jmp    080a9f47 <+0x1e9>
080a9e4d +0x0ef:  cmpl   $0x2,0x14(%ebp)
080a9e51 +0x0f3:  jne    080a9f3c <+0x1de>
080a9e57 +0x0f9:  movl   $0x0,0x8(%esp)
080a9e5f +0x101:  movl   $0x0,0x4(%esp)
080a9e67 +0x109:  lea    -0x28(%ebp),%eax
080a9e6a +0x10c:  mov    %eax,(%esp)
080a9e6d +0x10f:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a9e72 +0x114:  mov    0x8(%ebp),%eax
080a9e75 +0x117:  add    $0x8,%eax
080a9e78 +0x11a:  mov    %eax,0x4(%esp)
080a9e7c +0x11e:  lea    -0x30(%ebp),%eax
080a9e7f +0x121:  mov    %eax,(%esp)
080a9e82 +0x124:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9e87 +0x129:  jmp    080a9ef1 <+0x193>
080a9e89 +0x12b:  lea    -0x10(%ebp),%eax
080a9e8c +0x12e:  mov    %eax,0x4(%esp)
080a9e90 +0x132:  mov    0xc(%ebp),%eax
080a9e93 +0x135:  mov    %eax,(%esp)
080a9e96 +0x138:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9e9b +0x13d:  lea    -0x30(%ebp),%eax
080a9e9e +0x140:  mov    %eax,0x4(%esp)
080a9ea2 +0x144:  mov    0x8(%ebp),%eax
080a9ea5 +0x147:  mov    %eax,(%esp)
080a9ea8 +0x14a:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9ead +0x14f:  mov    -0x10(%ebp),%eax
080a9eb0 +0x152:  mov    %eax,-0x28(%ebp)
080a9eb3 +0x155:  mov    -0xc(%ebp),%eax
080a9eb6 +0x158:  mov    %eax,-0x24(%ebp)
080a9eb9 +0x15b:  lea    -0x30(%ebp),%eax
080a9ebc +0x15e:  mov    %eax,0x4(%esp)
080a9ec0 +0x162:  lea    -0x10(%ebp),%eax
080a9ec3 +0x165:  mov    %eax,(%esp)
080a9ec6 +0x168:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080a9ecb +0x16d:  mov    -0x28(%ebp),%eax
080a9ece +0x170:  mov    %eax,-0x30(%ebp)
080a9ed1 +0x173:  mov    -0x24(%ebp),%eax
080a9ed4 +0x176:  mov    %eax,-0x2c(%ebp)
080a9ed7 +0x179:  addl   $0x8,0xc(%ebp)
080a9edb +0x17d:  mov    0xc(%ebp),%eax
080a9ede +0x180:  mov    %eax,0x4(%esp)
080a9ee2 +0x184:  lea    -0x10(%ebp),%eax
080a9ee5 +0x187:  mov    %eax,(%esp)
080a9ee8 +0x18a:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9eed +0x18f:  subl   $0x8,0x10(%ebp)
080a9ef1 +0x193:  cmpl   $0x7,0x10(%ebp)
080a9ef5 +0x197:  seta   %al
080a9ef8 +0x19a:  test   %al,%al
080a9efa +0x19c:  jne    080a9e89 <+0x12b>
080a9efc +0x19e:  jmp    080a9f47 <+0x1e9>
080a9efe +0x1a0:  lea    -0x10(%ebp),%eax
080a9f01 +0x1a3:  mov    %eax,0x4(%esp)
080a9f05 +0x1a7:  mov    0xc(%ebp),%eax
080a9f08 +0x1aa:  mov    %eax,(%esp)
080a9f0b +0x1ad:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9f10 +0x1b2:  lea    -0x10(%ebp),%eax
080a9f13 +0x1b5:  mov    %eax,0x4(%esp)
080a9f17 +0x1b9:  mov    0x8(%ebp),%eax
080a9f1a +0x1bc:  mov    %eax,(%esp)
080a9f1d +0x1bf:  call   080a99b0 <_ZN9CBlowFish7DecryptER6SBlock>  ; CBlowFish::Decrypt(SBlock&)
080a9f22 +0x1c4:  addl   $0x8,0xc(%ebp)
080a9f26 +0x1c8:  mov    0xc(%ebp),%eax
080a9f29 +0x1cb:  mov    %eax,0x4(%esp)
080a9f2d +0x1cf:  lea    -0x10(%ebp),%eax
080a9f30 +0x1d2:  mov    %eax,(%esp)
080a9f33 +0x1d5:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9f38 +0x1da:  subl   $0x8,0x10(%ebp)
080a9f3c +0x1de:  cmpl   $0x7,0x10(%ebp)
080a9f40 +0x1e2:  seta   %al
080a9f43 +0x1e5:  test   %al,%al
080a9f45 +0x1e7:  jne    080a9efe <+0x1a0>
080a9f47 +0x1e9:  mov    $0x6fffffff,%eax
080a9f4c +0x1ee:  leave
080a9f4d +0x1ef:  ret
```

## 反编译 C

```c
// CBlowFish::Decrypt @ 0x80a9d5e

/* CBlowFish::Decrypt(unsigned char*, unsigned int, int) */

undefined4 __thiscall CBlowFish::Decrypt(CBlowFish *this,uchar *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_2 == 0) || ((param_2 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_3 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,0,0);
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        Decrypt(this,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_1c;
        local_20 = local_18;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else if (param_3 == 2) {
      SBlock::SBlock((SBlock *)&local_2c,0,0);
      SBlock::SBlock((SBlock *)&local_34,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_34);
        local_2c = local_14;
        local_28 = local_10;
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_34);
        local_34 = local_2c;
        local_30 = local_28;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else {
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Decrypt(this,(SBlock *)&local_14);
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
