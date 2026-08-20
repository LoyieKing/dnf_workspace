# Encrypt

`_ZN9CBlowFish7EncryptEPKhPhji`

`CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a9f4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a9f4e  _ZN9CBlowFish7EncryptEPKhPhji
#           CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
# range [0x080a9f4e, 0x080aa0fb]
080a9f4e +0x000:  push   %ebp
080a9f4f +0x001:  mov    %esp,%ebp
080a9f51 +0x003:  sub    $0x38,%esp
080a9f54 +0x006:  cmpl   $0x0,0x14(%ebp)
080a9f58 +0x00a:  je     080a9f64 <+0x16>
080a9f5a +0x00c:  mov    0x14(%ebp),%eax
080a9f5d +0x00f:  and    $0x7,%eax
080a9f60 +0x012:  test   %eax,%eax
080a9f62 +0x014:  je     080a9f6e <+0x20>
080a9f64 +0x016:  mov    $0x70000006,%eax
080a9f69 +0x01b:  jmp    080aa0fa <+0x1ac>
080a9f6e +0x020:  movl   $0x0,0x8(%esp)
080a9f76 +0x028:  movl   $0x0,0x4(%esp)
080a9f7e +0x030:  lea    -0x10(%ebp),%eax
080a9f81 +0x033:  mov    %eax,(%esp)
080a9f84 +0x036:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a9f89 +0x03b:  cmpl   $0x1,0x18(%ebp)
080a9f8d +0x03f:  jne    080aa01a <+0xcc>
080a9f93 +0x045:  mov    0x8(%ebp),%eax
080a9f96 +0x048:  add    $0x8,%eax
080a9f99 +0x04b:  mov    %eax,0x4(%esp)
080a9f9d +0x04f:  lea    -0x18(%ebp),%eax
080a9fa0 +0x052:  mov    %eax,(%esp)
080a9fa3 +0x055:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9fa8 +0x05a:  jmp    080aa00a <+0xbc>
080a9faa +0x05c:  lea    -0x10(%ebp),%eax
080a9fad +0x05f:  mov    %eax,0x4(%esp)
080a9fb1 +0x063:  mov    0xc(%ebp),%eax
080a9fb4 +0x066:  mov    %eax,(%esp)
080a9fb7 +0x069:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9fbc +0x06e:  lea    -0x18(%ebp),%eax
080a9fbf +0x071:  mov    %eax,0x4(%esp)
080a9fc3 +0x075:  lea    -0x10(%ebp),%eax
080a9fc6 +0x078:  mov    %eax,(%esp)
080a9fc9 +0x07b:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080a9fce +0x080:  lea    -0x10(%ebp),%eax
080a9fd1 +0x083:  mov    %eax,0x4(%esp)
080a9fd5 +0x087:  mov    0x8(%ebp),%eax
080a9fd8 +0x08a:  mov    %eax,(%esp)
080a9fdb +0x08d:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9fe0 +0x092:  mov    -0x10(%ebp),%eax
080a9fe3 +0x095:  mov    %eax,-0x18(%ebp)
080a9fe6 +0x098:  mov    -0xc(%ebp),%eax
080a9fe9 +0x09b:  mov    %eax,-0x14(%ebp)
080a9fec +0x09e:  addl   $0x8,0x10(%ebp)
080a9ff0 +0x0a2:  mov    0x10(%ebp),%eax
080a9ff3 +0x0a5:  mov    %eax,0x4(%esp)
080a9ff7 +0x0a9:  lea    -0x10(%ebp),%eax
080a9ffa +0x0ac:  mov    %eax,(%esp)
080a9ffd +0x0af:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080aa002 +0x0b4:  subl   $0x8,0x14(%ebp)
080aa006 +0x0b8:  addl   $0x8,0xc(%ebp)
080aa00a +0x0bc:  cmpl   $0x7,0x14(%ebp)
080aa00e +0x0c0:  seta   %al
080aa011 +0x0c3:  test   %al,%al
080aa013 +0x0c5:  jne    080a9faa <+0x5c>
080aa015 +0x0c7:  jmp    080aa0f5 <+0x1a7>
080aa01a +0x0cc:  cmpl   $0x2,0x18(%ebp)
080aa01e +0x0d0:  jne    080aa0ea <+0x19c>
080aa024 +0x0d6:  mov    0x8(%ebp),%eax
080aa027 +0x0d9:  add    $0x8,%eax
080aa02a +0x0dc:  mov    %eax,0x4(%esp)
080aa02e +0x0e0:  lea    -0x20(%ebp),%eax
080aa031 +0x0e3:  mov    %eax,(%esp)
080aa034 +0x0e6:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080aa039 +0x0eb:  jmp    080aa09b <+0x14d>
080aa03b +0x0ed:  lea    -0x20(%ebp),%eax
080aa03e +0x0f0:  mov    %eax,0x4(%esp)
080aa042 +0x0f4:  mov    0x8(%ebp),%eax
080aa045 +0x0f7:  mov    %eax,(%esp)
080aa048 +0x0fa:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080aa04d +0x0ff:  lea    -0x10(%ebp),%eax
080aa050 +0x102:  mov    %eax,0x4(%esp)
080aa054 +0x106:  mov    0xc(%ebp),%eax
080aa057 +0x109:  mov    %eax,(%esp)
080aa05a +0x10c:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080aa05f +0x111:  lea    -0x20(%ebp),%eax
080aa062 +0x114:  mov    %eax,0x4(%esp)
080aa066 +0x118:  lea    -0x10(%ebp),%eax
080aa069 +0x11b:  mov    %eax,(%esp)
080aa06c +0x11e:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080aa071 +0x123:  mov    -0x10(%ebp),%eax
080aa074 +0x126:  mov    %eax,-0x20(%ebp)
080aa077 +0x129:  mov    -0xc(%ebp),%eax
080aa07a +0x12c:  mov    %eax,-0x1c(%ebp)
080aa07d +0x12f:  addl   $0x8,0x10(%ebp)
080aa081 +0x133:  mov    0x10(%ebp),%eax
080aa084 +0x136:  mov    %eax,0x4(%esp)
080aa088 +0x13a:  lea    -0x10(%ebp),%eax
080aa08b +0x13d:  mov    %eax,(%esp)
080aa08e +0x140:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080aa093 +0x145:  subl   $0x8,0x14(%ebp)
080aa097 +0x149:  addl   $0x8,0xc(%ebp)
080aa09b +0x14d:  cmpl   $0x7,0x14(%ebp)
080aa09f +0x151:  seta   %al
080aa0a2 +0x154:  test   %al,%al
080aa0a4 +0x156:  jne    080aa03b <+0xed>
080aa0a6 +0x158:  jmp    080aa0f5 <+0x1a7>
080aa0a8 +0x15a:  lea    -0x10(%ebp),%eax
080aa0ab +0x15d:  mov    %eax,0x4(%esp)
080aa0af +0x161:  mov    0xc(%ebp),%eax
080aa0b2 +0x164:  mov    %eax,(%esp)
080aa0b5 +0x167:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080aa0ba +0x16c:  lea    -0x10(%ebp),%eax
080aa0bd +0x16f:  mov    %eax,0x4(%esp)
080aa0c1 +0x173:  mov    0x8(%ebp),%eax
080aa0c4 +0x176:  mov    %eax,(%esp)
080aa0c7 +0x179:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080aa0cc +0x17e:  addl   $0x8,0x10(%ebp)
080aa0d0 +0x182:  mov    0x10(%ebp),%eax
080aa0d3 +0x185:  mov    %eax,0x4(%esp)
080aa0d7 +0x189:  lea    -0x10(%ebp),%eax
080aa0da +0x18c:  mov    %eax,(%esp)
080aa0dd +0x18f:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080aa0e2 +0x194:  subl   $0x8,0x14(%ebp)
080aa0e6 +0x198:  addl   $0x8,0xc(%ebp)
080aa0ea +0x19c:  cmpl   $0x7,0x14(%ebp)
080aa0ee +0x1a0:  seta   %al
080aa0f1 +0x1a3:  test   %al,%al
080aa0f3 +0x1a5:  jne    080aa0a8 <+0x15a>
080aa0f5 +0x1a7:  mov    $0x6fffffff,%eax
080aa0fa +0x1ac:  leave
080aa0fb +0x1ad:  ret
```

## 反编译 C

```c
// CBlowFish::Encrypt @ 0x80a9f4e

/* CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int) */

undefined4 __thiscall
CBlowFish::Encrypt(CBlowFish *this,uchar *param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_3 == 0) || ((param_3 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_4 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_1c);
        Encrypt(this,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else if (param_4 == 2) {
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        Encrypt(this,(SBlock *)&local_24);
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_14;
        local_20 = local_10;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else {
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_14);
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
