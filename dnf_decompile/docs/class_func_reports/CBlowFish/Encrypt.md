# Encrypt

`_ZN9CBlowFish7EncryptER6SBlock`

`CBlowFish::Encrypt(SBlock&)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a97a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a97a4  _ZN9CBlowFish7EncryptER6SBlock
#           CBlowFish::Encrypt(SBlock&)
# range [0x080a97a4, 0x080a99af]
080a97a4 +0x000:  push   %ebp
080a97a5 +0x001:  mov    %esp,%ebp
080a97a7 +0x003:  sub    $0x28,%esp
080a97aa +0x006:  mov    0xc(%ebp),%eax
080a97ad +0x009:  mov    (%eax),%eax
080a97af +0x00b:  mov    %eax,-0x10(%ebp)
080a97b2 +0x00e:  mov    0xc(%ebp),%eax
080a97b5 +0x011:  mov    0x4(%eax),%eax
080a97b8 +0x014:  mov    %eax,-0xc(%ebp)
080a97bb +0x017:  mov    0x8(%ebp),%eax
080a97be +0x01a:  mov    0x10(%eax),%eax
080a97c1 +0x01d:  xor    %eax,-0x10(%ebp)
080a97c4 +0x020:  mov    -0x10(%ebp),%eax
080a97c7 +0x023:  mov    %eax,0x4(%esp)
080a97cb +0x027:  mov    0x8(%ebp),%eax
080a97ce +0x02a:  mov    %eax,(%esp)
080a97d1 +0x02d:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a97d6 +0x032:  mov    0x8(%ebp),%edx
080a97d9 +0x035:  mov    0x14(%edx),%edx
080a97dc +0x038:  xor    %edx,%eax
080a97de +0x03a:  xor    %eax,-0xc(%ebp)
080a97e1 +0x03d:  mov    -0xc(%ebp),%eax
080a97e4 +0x040:  mov    %eax,0x4(%esp)
080a97e8 +0x044:  mov    0x8(%ebp),%eax
080a97eb +0x047:  mov    %eax,(%esp)
080a97ee +0x04a:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a97f3 +0x04f:  mov    0x8(%ebp),%edx
080a97f6 +0x052:  mov    0x18(%edx),%edx
080a97f9 +0x055:  xor    %edx,%eax
080a97fb +0x057:  xor    %eax,-0x10(%ebp)
080a97fe +0x05a:  mov    -0x10(%ebp),%eax
080a9801 +0x05d:  mov    %eax,0x4(%esp)
080a9805 +0x061:  mov    0x8(%ebp),%eax
080a9808 +0x064:  mov    %eax,(%esp)
080a980b +0x067:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9810 +0x06c:  mov    0x8(%ebp),%edx
080a9813 +0x06f:  mov    0x1c(%edx),%edx
080a9816 +0x072:  xor    %edx,%eax
080a9818 +0x074:  xor    %eax,-0xc(%ebp)
080a981b +0x077:  mov    -0xc(%ebp),%eax
080a981e +0x07a:  mov    %eax,0x4(%esp)
080a9822 +0x07e:  mov    0x8(%ebp),%eax
080a9825 +0x081:  mov    %eax,(%esp)
080a9828 +0x084:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a982d +0x089:  mov    0x8(%ebp),%edx
080a9830 +0x08c:  mov    0x20(%edx),%edx
080a9833 +0x08f:  xor    %edx,%eax
080a9835 +0x091:  xor    %eax,-0x10(%ebp)
080a9838 +0x094:  mov    -0x10(%ebp),%eax
080a983b +0x097:  mov    %eax,0x4(%esp)
080a983f +0x09b:  mov    0x8(%ebp),%eax
080a9842 +0x09e:  mov    %eax,(%esp)
080a9845 +0x0a1:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a984a +0x0a6:  mov    0x8(%ebp),%edx
080a984d +0x0a9:  mov    0x24(%edx),%edx
080a9850 +0x0ac:  xor    %edx,%eax
080a9852 +0x0ae:  xor    %eax,-0xc(%ebp)
080a9855 +0x0b1:  mov    -0xc(%ebp),%eax
080a9858 +0x0b4:  mov    %eax,0x4(%esp)
080a985c +0x0b8:  mov    0x8(%ebp),%eax
080a985f +0x0bb:  mov    %eax,(%esp)
080a9862 +0x0be:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9867 +0x0c3:  mov    0x8(%ebp),%edx
080a986a +0x0c6:  mov    0x28(%edx),%edx
080a986d +0x0c9:  xor    %edx,%eax
080a986f +0x0cb:  xor    %eax,-0x10(%ebp)
080a9872 +0x0ce:  mov    -0x10(%ebp),%eax
080a9875 +0x0d1:  mov    %eax,0x4(%esp)
080a9879 +0x0d5:  mov    0x8(%ebp),%eax
080a987c +0x0d8:  mov    %eax,(%esp)
080a987f +0x0db:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9884 +0x0e0:  mov    0x8(%ebp),%edx
080a9887 +0x0e3:  mov    0x2c(%edx),%edx
080a988a +0x0e6:  xor    %edx,%eax
080a988c +0x0e8:  xor    %eax,-0xc(%ebp)
080a988f +0x0eb:  mov    -0xc(%ebp),%eax
080a9892 +0x0ee:  mov    %eax,0x4(%esp)
080a9896 +0x0f2:  mov    0x8(%ebp),%eax
080a9899 +0x0f5:  mov    %eax,(%esp)
080a989c +0x0f8:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a98a1 +0x0fd:  mov    0x8(%ebp),%edx
080a98a4 +0x100:  mov    0x30(%edx),%edx
080a98a7 +0x103:  xor    %edx,%eax
080a98a9 +0x105:  xor    %eax,-0x10(%ebp)
080a98ac +0x108:  mov    -0x10(%ebp),%eax
080a98af +0x10b:  mov    %eax,0x4(%esp)
080a98b3 +0x10f:  mov    0x8(%ebp),%eax
080a98b6 +0x112:  mov    %eax,(%esp)
080a98b9 +0x115:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a98be +0x11a:  mov    0x8(%ebp),%edx
080a98c1 +0x11d:  mov    0x34(%edx),%edx
080a98c4 +0x120:  xor    %edx,%eax
080a98c6 +0x122:  xor    %eax,-0xc(%ebp)
080a98c9 +0x125:  mov    -0xc(%ebp),%eax
080a98cc +0x128:  mov    %eax,0x4(%esp)
080a98d0 +0x12c:  mov    0x8(%ebp),%eax
080a98d3 +0x12f:  mov    %eax,(%esp)
080a98d6 +0x132:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a98db +0x137:  mov    0x8(%ebp),%edx
080a98de +0x13a:  mov    0x38(%edx),%edx
080a98e1 +0x13d:  xor    %edx,%eax
080a98e3 +0x13f:  xor    %eax,-0x10(%ebp)
080a98e6 +0x142:  mov    -0x10(%ebp),%eax
080a98e9 +0x145:  mov    %eax,0x4(%esp)
080a98ed +0x149:  mov    0x8(%ebp),%eax
080a98f0 +0x14c:  mov    %eax,(%esp)
080a98f3 +0x14f:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a98f8 +0x154:  mov    0x8(%ebp),%edx
080a98fb +0x157:  mov    0x3c(%edx),%edx
080a98fe +0x15a:  xor    %edx,%eax
080a9900 +0x15c:  xor    %eax,-0xc(%ebp)
080a9903 +0x15f:  mov    -0xc(%ebp),%eax
080a9906 +0x162:  mov    %eax,0x4(%esp)
080a990a +0x166:  mov    0x8(%ebp),%eax
080a990d +0x169:  mov    %eax,(%esp)
080a9910 +0x16c:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9915 +0x171:  mov    0x8(%ebp),%edx
080a9918 +0x174:  mov    0x40(%edx),%edx
080a991b +0x177:  xor    %edx,%eax
080a991d +0x179:  xor    %eax,-0x10(%ebp)
080a9920 +0x17c:  mov    -0x10(%ebp),%eax
080a9923 +0x17f:  mov    %eax,0x4(%esp)
080a9927 +0x183:  mov    0x8(%ebp),%eax
080a992a +0x186:  mov    %eax,(%esp)
080a992d +0x189:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9932 +0x18e:  mov    0x8(%ebp),%edx
080a9935 +0x191:  mov    0x44(%edx),%edx
080a9938 +0x194:  xor    %edx,%eax
080a993a +0x196:  xor    %eax,-0xc(%ebp)
080a993d +0x199:  mov    -0xc(%ebp),%eax
080a9940 +0x19c:  mov    %eax,0x4(%esp)
080a9944 +0x1a0:  mov    0x8(%ebp),%eax
080a9947 +0x1a3:  mov    %eax,(%esp)
080a994a +0x1a6:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a994f +0x1ab:  mov    0x8(%ebp),%edx
080a9952 +0x1ae:  mov    0x48(%edx),%edx
080a9955 +0x1b1:  xor    %edx,%eax
080a9957 +0x1b3:  xor    %eax,-0x10(%ebp)
080a995a +0x1b6:  mov    -0x10(%ebp),%eax
080a995d +0x1b9:  mov    %eax,0x4(%esp)
080a9961 +0x1bd:  mov    0x8(%ebp),%eax
080a9964 +0x1c0:  mov    %eax,(%esp)
080a9967 +0x1c3:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a996c +0x1c8:  mov    0x8(%ebp),%edx
080a996f +0x1cb:  mov    0x4c(%edx),%edx
080a9972 +0x1ce:  xor    %edx,%eax
080a9974 +0x1d0:  xor    %eax,-0xc(%ebp)
080a9977 +0x1d3:  mov    -0xc(%ebp),%eax
080a997a +0x1d6:  mov    %eax,0x4(%esp)
080a997e +0x1da:  mov    0x8(%ebp),%eax
080a9981 +0x1dd:  mov    %eax,(%esp)
080a9984 +0x1e0:  call   080aa34a <_ZN9CBlowFish7DecryptEPKhPhji+0x24e>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x24e
080a9989 +0x1e5:  mov    0x8(%ebp),%edx
080a998c +0x1e8:  mov    0x50(%edx),%edx
080a998f +0x1eb:  xor    %edx,%eax
080a9991 +0x1ed:  xor    %eax,-0x10(%ebp)
080a9994 +0x1f0:  mov    0x8(%ebp),%eax
080a9997 +0x1f3:  mov    0x54(%eax),%eax
080a999a +0x1f6:  xor    %eax,-0xc(%ebp)
080a999d +0x1f9:  mov    0xc(%ebp),%eax
080a99a0 +0x1fc:  mov    -0xc(%ebp),%edx
080a99a3 +0x1ff:  mov    %edx,(%eax)
080a99a5 +0x201:  mov    0xc(%ebp),%eax
080a99a8 +0x204:  mov    -0x10(%ebp),%edx
080a99ab +0x207:  mov    %edx,0x4(%eax)
080a99ae +0x20a:  leave
080a99af +0x20b:  ret
```

## 反编译 C

```c
// CBlowFish::Encrypt @ 0x80a97a4

/* CBlowFish::Encrypt(SBlock&) */

void __thiscall CBlowFish::Encrypt(CBlowFish *this,SBlock *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(this + 0x10);
  uVar3 = F(this,uVar1 ^ uVar4);
  uVar2 = uVar2 ^ uVar3 ^ *(uint *)(this + 0x14);
  uVar3 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ uVar3 ^ *(uint *)(this + 0x18);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x1c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x20);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x24);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x28);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x2c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x30);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x34);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x38);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x3c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x40);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x44);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x48);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x4c);
  uVar3 = F(this,uVar2);
  uVar4 = *(uint *)(this + 0x50);
  *(uint *)param_1 = uVar2 ^ *(uint *)(this + 0x54);
  *(uint *)(param_1 + 4) = uVar1 ^ uVar3 ^ uVar4;
  return;
}
```
