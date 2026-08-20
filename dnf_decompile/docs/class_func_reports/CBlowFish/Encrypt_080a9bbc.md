# Encrypt

`_ZN9CBlowFish7EncryptEPhji`

`CBlowFish::Encrypt(unsigned char*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a9bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a9bbc  _ZN9CBlowFish7EncryptEPhji
#           CBlowFish::Encrypt(unsigned char*, unsigned int, int)
# range [0x080a9bbc, 0x080a9d5d]
080a9bbc +0x000:  push   %ebp
080a9bbd +0x001:  mov    %esp,%ebp
080a9bbf +0x003:  sub    $0x38,%esp
080a9bc2 +0x006:  cmpl   $0x0,0x10(%ebp)
080a9bc6 +0x00a:  je     080a9bd2 <+0x16>
080a9bc8 +0x00c:  mov    0x10(%ebp),%eax
080a9bcb +0x00f:  and    $0x7,%eax
080a9bce +0x012:  test   %eax,%eax
080a9bd0 +0x014:  je     080a9bdc <+0x20>
080a9bd2 +0x016:  mov    $0x70000006,%eax
080a9bd7 +0x01b:  jmp    080a9d5c <+0x1a0>
080a9bdc +0x020:  movl   $0x0,0x8(%esp)
080a9be4 +0x028:  movl   $0x0,0x4(%esp)
080a9bec +0x030:  lea    -0x10(%ebp),%eax
080a9bef +0x033:  mov    %eax,(%esp)
080a9bf2 +0x036:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a9bf7 +0x03b:  cmpl   $0x1,0x14(%ebp)
080a9bfb +0x03f:  jne    080a9c84 <+0xc8>
080a9c01 +0x045:  mov    0x8(%ebp),%eax
080a9c04 +0x048:  add    $0x8,%eax
080a9c07 +0x04b:  mov    %eax,0x4(%esp)
080a9c0b +0x04f:  lea    -0x18(%ebp),%eax
080a9c0e +0x052:  mov    %eax,(%esp)
080a9c11 +0x055:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9c16 +0x05a:  jmp    080a9c74 <+0xb8>
080a9c18 +0x05c:  lea    -0x10(%ebp),%eax
080a9c1b +0x05f:  mov    %eax,0x4(%esp)
080a9c1f +0x063:  mov    0xc(%ebp),%eax
080a9c22 +0x066:  mov    %eax,(%esp)
080a9c25 +0x069:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9c2a +0x06e:  lea    -0x18(%ebp),%eax
080a9c2d +0x071:  mov    %eax,0x4(%esp)
080a9c31 +0x075:  lea    -0x10(%ebp),%eax
080a9c34 +0x078:  mov    %eax,(%esp)
080a9c37 +0x07b:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080a9c3c +0x080:  lea    -0x10(%ebp),%eax
080a9c3f +0x083:  mov    %eax,0x4(%esp)
080a9c43 +0x087:  mov    0x8(%ebp),%eax
080a9c46 +0x08a:  mov    %eax,(%esp)
080a9c49 +0x08d:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9c4e +0x092:  mov    -0x10(%ebp),%eax
080a9c51 +0x095:  mov    %eax,-0x18(%ebp)
080a9c54 +0x098:  mov    -0xc(%ebp),%eax
080a9c57 +0x09b:  mov    %eax,-0x14(%ebp)
080a9c5a +0x09e:  addl   $0x8,0xc(%ebp)
080a9c5e +0x0a2:  mov    0xc(%ebp),%eax
080a9c61 +0x0a5:  mov    %eax,0x4(%esp)
080a9c65 +0x0a9:  lea    -0x10(%ebp),%eax
080a9c68 +0x0ac:  mov    %eax,(%esp)
080a9c6b +0x0af:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9c70 +0x0b4:  subl   $0x8,0x10(%ebp)
080a9c74 +0x0b8:  cmpl   $0x7,0x10(%ebp)
080a9c78 +0x0bc:  seta   %al
080a9c7b +0x0bf:  test   %al,%al
080a9c7d +0x0c1:  jne    080a9c18 <+0x5c>
080a9c7f +0x0c3:  jmp    080a9d57 <+0x19b>
080a9c84 +0x0c8:  cmpl   $0x2,0x14(%ebp)
080a9c88 +0x0cc:  jne    080a9d4c <+0x190>
080a9c8e +0x0d2:  mov    0x8(%ebp),%eax
080a9c91 +0x0d5:  add    $0x8,%eax
080a9c94 +0x0d8:  mov    %eax,0x4(%esp)
080a9c98 +0x0dc:  lea    -0x20(%ebp),%eax
080a9c9b +0x0df:  mov    %eax,(%esp)
080a9c9e +0x0e2:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9ca3 +0x0e7:  jmp    080a9d01 <+0x145>
080a9ca5 +0x0e9:  lea    -0x20(%ebp),%eax
080a9ca8 +0x0ec:  mov    %eax,0x4(%esp)
080a9cac +0x0f0:  mov    0x8(%ebp),%eax
080a9caf +0x0f3:  mov    %eax,(%esp)
080a9cb2 +0x0f6:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9cb7 +0x0fb:  lea    -0x10(%ebp),%eax
080a9cba +0x0fe:  mov    %eax,0x4(%esp)
080a9cbe +0x102:  mov    0xc(%ebp),%eax
080a9cc1 +0x105:  mov    %eax,(%esp)
080a9cc4 +0x108:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9cc9 +0x10d:  lea    -0x20(%ebp),%eax
080a9ccc +0x110:  mov    %eax,0x4(%esp)
080a9cd0 +0x114:  lea    -0x10(%ebp),%eax
080a9cd3 +0x117:  mov    %eax,(%esp)
080a9cd6 +0x11a:  call   080aa314 <_ZN9CBlowFish7DecryptEPKhPhji+0x218>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x218
080a9cdb +0x11f:  mov    -0x10(%ebp),%eax
080a9cde +0x122:  mov    %eax,-0x20(%ebp)
080a9ce1 +0x125:  mov    -0xc(%ebp),%eax
080a9ce4 +0x128:  mov    %eax,-0x1c(%ebp)
080a9ce7 +0x12b:  addl   $0x8,0xc(%ebp)
080a9ceb +0x12f:  mov    0xc(%ebp),%eax
080a9cee +0x132:  mov    %eax,0x4(%esp)
080a9cf2 +0x136:  lea    -0x10(%ebp),%eax
080a9cf5 +0x139:  mov    %eax,(%esp)
080a9cf8 +0x13c:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9cfd +0x141:  subl   $0x8,0x10(%ebp)
080a9d01 +0x145:  cmpl   $0x7,0x10(%ebp)
080a9d05 +0x149:  seta   %al
080a9d08 +0x14c:  test   %al,%al
080a9d0a +0x14e:  jne    080a9ca5 <+0xe9>
080a9d0c +0x150:  jmp    080a9d57 <+0x19b>
080a9d0e +0x152:  lea    -0x10(%ebp),%eax
080a9d11 +0x155:  mov    %eax,0x4(%esp)
080a9d15 +0x159:  mov    0xc(%ebp),%eax
080a9d18 +0x15c:  mov    %eax,(%esp)
080a9d1b +0x15f:  call   080aa3d0 <_ZN9CBlowFish7DecryptEPKhPhji+0x2d4>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x2d4
080a9d20 +0x164:  lea    -0x10(%ebp),%eax
080a9d23 +0x167:  mov    %eax,0x4(%esp)
080a9d27 +0x16b:  mov    0x8(%ebp),%eax
080a9d2a +0x16e:  mov    %eax,(%esp)
080a9d2d +0x171:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9d32 +0x176:  addl   $0x8,0xc(%ebp)
080a9d36 +0x17a:  mov    0xc(%ebp),%eax
080a9d39 +0x17d:  mov    %eax,0x4(%esp)
080a9d3d +0x181:  lea    -0x10(%ebp),%eax
080a9d40 +0x184:  mov    %eax,(%esp)
080a9d43 +0x187:  call   080aa503 <_ZN9CBlowFish7DecryptEPKhPhji+0x407>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x407
080a9d48 +0x18c:  subl   $0x8,0x10(%ebp)
080a9d4c +0x190:  cmpl   $0x7,0x10(%ebp)
080a9d50 +0x194:  seta   %al
080a9d53 +0x197:  test   %al,%al
080a9d55 +0x199:  jne    080a9d0e <+0x152>
080a9d57 +0x19b:  mov    $0x6fffffff,%eax
080a9d5c +0x1a0:  leave
080a9d5d +0x1a1:  ret
```

## 反编译 C

```c
// CBlowFish::Encrypt @ 0x80a9bbc

/* CBlowFish::Encrypt(unsigned char*, unsigned int, int) */

undefined4 __thiscall CBlowFish::Encrypt(CBlowFish *this,uchar *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
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
      SBlock::SBlock((SBlock *)&local_1c,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_1c);
        Encrypt(this,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else if (param_3 == 2) {
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        Encrypt(this,(SBlock *)&local_24);
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_14;
        local_20 = local_10;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else {
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_14);
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
