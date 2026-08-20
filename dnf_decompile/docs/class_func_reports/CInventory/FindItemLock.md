# FindItemLock

`_ZNK10CInventory12FindItemLockEhR14ENUM_ITEMSPACERi`

`CInventory::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fac70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fac70  _ZNK10CInventory12FindItemLockEhR14ENUM_ITEMSPACERi
#           CInventory::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
# range [0x084fac70, 0x084fae09]
084fac70 +0x000:  push   %ebp
084fac71 +0x001:  mov    %esp,%ebp
084fac73 +0x003:  sub    $0x28,%esp
084fac76 +0x006:  mov    0xc(%ebp),%eax
084fac79 +0x009:  mov    %al,-0xc(%ebp)
084fac7c +0x00c:  mov    0x10(%ebp),%eax
084fac7f +0x00f:  movl   $0x3,(%eax)
084fac85 +0x015:  mov    0x14(%ebp),%eax
084fac88 +0x018:  movl   $0x0,(%eax)
084fac8e +0x01e:  jmp    084facca <+0x5a>
084fac90 +0x020:  mov    0x14(%ebp),%eax
084fac93 +0x023:  mov    (%eax),%eax
084fac95 +0x025:  imul   $0x3d,%eax,%eax
084fac98 +0x028:  add    $0x20,%eax
084fac9b +0x02b:  add    0x8(%ebp),%eax
084fac9e +0x02e:  add    $0xd,%eax
084faca1 +0x031:  mov    %eax,(%esp)
084faca4 +0x034:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084faca9 +0x039:  cmp    -0xc(%ebp),%al
084facac +0x03c:  sete   %al
084facaf +0x03f:  test   %al,%al
084facb1 +0x041:  je     084facbd <+0x4d>
084facb3 +0x043:  mov    $0x1,%eax
084facb8 +0x048:  jmp    084fae08 <+0x198>
084facbd +0x04d:  mov    0x14(%ebp),%eax
084facc0 +0x050:  mov    (%eax),%eax
084facc2 +0x052:  lea    0x1(%eax),%edx
084facc5 +0x055:  mov    0x14(%ebp),%eax
084facc8 +0x058:  mov    %edx,(%eax)
084facca +0x05a:  mov    0x14(%ebp),%eax
084faccd +0x05d:  mov    (%eax),%eax
084faccf +0x05f:  cmp    $0x15,%eax
084facd2 +0x062:  setle  %al
084facd5 +0x065:  test   %al,%al
084facd7 +0x067:  jne    084fac90 <+0x20>
084facd9 +0x069:  mov    0x10(%ebp),%eax
084facdc +0x06c:  movl   $0x0,(%eax)
084face2 +0x072:  mov    0x14(%ebp),%eax
084face5 +0x075:  movl   $0x0,(%eax)
084faceb +0x07b:  jmp    084fad2d <+0xbd>
084faced +0x07d:  mov    0x8(%ebp),%eax
084facf0 +0x080:  mov    0x650(%eax),%edx
084facf6 +0x086:  mov    0x14(%ebp),%eax
084facf9 +0x089:  mov    (%eax),%eax
084facfb +0x08b:  imul   $0x3d,%eax,%eax
084facfe +0x08e:  lea    (%edx,%eax,1),%eax
084fad01 +0x091:  add    $0x11,%eax
084fad04 +0x094:  mov    %eax,(%esp)
084fad07 +0x097:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084fad0c +0x09c:  cmp    -0xc(%ebp),%al
084fad0f +0x09f:  sete   %al
084fad12 +0x0a2:  test   %al,%al
084fad14 +0x0a4:  je     084fad20 <+0xb0>
084fad16 +0x0a6:  mov    $0x1,%eax
084fad1b +0x0ab:  jmp    084fae08 <+0x198>
084fad20 +0x0b0:  mov    0x14(%ebp),%eax
084fad23 +0x0b3:  mov    (%eax),%eax
084fad25 +0x0b5:  lea    0x1(%eax),%edx
084fad28 +0x0b8:  mov    0x14(%ebp),%eax
084fad2b +0x0bb:  mov    %edx,(%eax)
084fad2d +0x0bd:  mov    0x14(%ebp),%eax
084fad30 +0x0c0:  mov    (%eax),%eax
084fad32 +0x0c2:  cmp    $0x137,%eax
084fad37 +0x0c7:  setle  %al
084fad3a +0x0ca:  test   %al,%al
084fad3c +0x0cc:  jne    084faced <+0x7d>
084fad3e +0x0ce:  mov    0x10(%ebp),%eax
084fad41 +0x0d1:  movl   $0x7,(%eax)
084fad47 +0x0d7:  mov    0x14(%ebp),%eax
084fad4a +0x0da:  movl   $0x0,(%eax)
084fad50 +0x0e0:  jmp    084fad92 <+0x122>
084fad52 +0x0e2:  mov    0x8(%ebp),%eax
084fad55 +0x0e5:  mov    0x6e4(%eax),%edx
084fad5b +0x0eb:  mov    0x14(%ebp),%eax
084fad5e +0x0ee:  mov    (%eax),%eax
084fad60 +0x0f0:  imul   $0x3d,%eax,%eax
084fad63 +0x0f3:  lea    (%edx,%eax,1),%eax
084fad66 +0x0f6:  add    $0x11,%eax
084fad69 +0x0f9:  mov    %eax,(%esp)
084fad6c +0x0fc:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084fad71 +0x101:  cmp    -0xc(%ebp),%al
084fad74 +0x104:  sete   %al
084fad77 +0x107:  test   %al,%al
084fad79 +0x109:  je     084fad85 <+0x115>
084fad7b +0x10b:  mov    $0x1,%eax
084fad80 +0x110:  jmp    084fae08 <+0x198>
084fad85 +0x115:  mov    0x14(%ebp),%eax
084fad88 +0x118:  mov    (%eax),%eax
084fad8a +0x11a:  lea    0x1(%eax),%edx
084fad8d +0x11d:  mov    0x14(%ebp),%eax
084fad90 +0x120:  mov    %edx,(%eax)
084fad92 +0x122:  mov    0x14(%ebp),%eax
084fad95 +0x125:  mov    (%eax),%eax
084fad97 +0x127:  cmp    $0xf1,%eax
084fad9c +0x12c:  setle  %al
084fad9f +0x12f:  test   %al,%al
084fada1 +0x131:  jne    084fad52 <+0xe2>
084fada3 +0x133:  mov    0x10(%ebp),%eax
084fada6 +0x136:  movl   $0x1,(%eax)
084fadac +0x13c:  mov    0x14(%ebp),%eax
084fadaf +0x13f:  movl   $0x0,(%eax)
084fadb5 +0x145:  jmp    084fadf4 <+0x184>
084fadb7 +0x147:  mov    0x8(%ebp),%eax
084fadba +0x14a:  mov    0x654(%eax),%edx
084fadc0 +0x150:  mov    0x14(%ebp),%eax
084fadc3 +0x153:  mov    (%eax),%eax
084fadc5 +0x155:  imul   $0x3d,%eax,%eax
084fadc8 +0x158:  lea    (%edx,%eax,1),%eax
084fadcb +0x15b:  add    $0x11,%eax
084fadce +0x15e:  mov    %eax,(%esp)
084fadd1 +0x161:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084fadd6 +0x166:  cmp    -0xc(%ebp),%al
084fadd9 +0x169:  sete   %al
084faddc +0x16c:  test   %al,%al
084fadde +0x16e:  je     084fade7 <+0x177>
084fade0 +0x170:  mov    $0x1,%eax
084fade5 +0x175:  jmp    084fae08 <+0x198>
084fade7 +0x177:  mov    0x14(%ebp),%eax
084fadea +0x17a:  mov    (%eax),%eax
084fadec +0x17c:  lea    0x1(%eax),%edx
084fadef +0x17f:  mov    0x14(%ebp),%eax
084fadf2 +0x182:  mov    %edx,(%eax)
084fadf4 +0x184:  mov    0x14(%ebp),%eax
084fadf7 +0x187:  mov    (%eax),%eax
084fadf9 +0x189:  cmp    $0x68,%eax
084fadfc +0x18c:  setle  %al
084fadff +0x18f:  test   %al,%al
084fae01 +0x191:  jne    084fadb7 <+0x147>
084fae03 +0x193:  mov    $0x0,%eax
084fae08 +0x198:  leave
084fae09 +0x199:  ret
```

## 反编译 C

```c
// CInventory::FindItemLock @ 0x84fac70

/* CInventory::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CInventory::FindItemLock(CInventory *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  
  *(undefined4 *)param_2 = 3;
  *param_3 = 0;
  while (*param_3 < 0x16) {
    uVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(this + *param_3 * 0x3d + 0x2d));
    if (uVar1 == param_1) {
      return 1;
    }
    *param_3 = *param_3 + 1;
  }
  *(undefined4 *)param_2 = 0;
  *param_3 = 0;
  while (*param_3 < 0x138) {
    uVar1 = stAmplifyOption_t::GetLock
                      ((stAmplifyOption_t *)(*(int *)(this + 0x650) + *param_3 * 0x3d + 0x11));
    if (uVar1 == param_1) {
      return 1;
    }
    *param_3 = *param_3 + 1;
  }
  *(undefined4 *)param_2 = 7;
  *param_3 = 0;
  while (*param_3 < 0xf2) {
    uVar1 = stAmplifyOption_t::GetLock
                      ((stAmplifyOption_t *)(*(int *)(this + 0x6e4) + *param_3 * 0x3d + 0x11));
    if (uVar1 == param_1) {
      return 1;
    }
    *param_3 = *param_3 + 1;
  }
  *(undefined4 *)param_2 = 1;
  *param_3 = 0;
  while( true ) {
    if (0x68 < *param_3) {
      return 0;
    }
    uVar1 = stAmplifyOption_t::GetLock
                      ((stAmplifyOption_t *)(*(int *)(this + 0x654) + *param_3 * 0x3d + 0x11));
    if (uVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}
```
