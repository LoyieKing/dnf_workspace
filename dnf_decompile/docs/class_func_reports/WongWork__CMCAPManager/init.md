# init

`_ZN8WongWork12CMCAPManager4initEv`

`WongWork::CMCAPManager::init()`

| 类 | 地址 |
|---|---|
| `WongWork::CMCAPManager` | `0x080f8aba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8aba  _ZN8WongWork12CMCAPManager4initEv
#           WongWork::CMCAPManager::init()
# range [0x080f8aba, 0x080f8bdf]
080f8aba +0x000:  push   %ebp
080f8abb +0x001:  mov    %esp,%ebp
080f8abd +0x003:  sub    $0x18,%esp
080f8ac0 +0x006:  movl   $0x3cf0,0x8(%esp)
080f8ac8 +0x00e:  movl   $0x0,0x4(%esp)
080f8ad0 +0x016:  movl   $&_ZN8WongWork12CMCAPManager17pointPerHackType_E,(%esp)
080f8ad7 +0x01d:  call   0807dcc0 <_init+0x5b8>
080f8adc +0x022:  movl   $0x1f4,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x330
080f8ae6 +0x02c:  movl   $0xfa,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x1bc
080f8af0 +0x036:  movl   $0xfa,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x1b4
080f8afa +0x040:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0xee8
080f8b04 +0x04a:  movl   $0x3e8,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x7dc
080f8b0e +0x054:  movl   $0x14,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x64c
080f8b18 +0x05e:  movl   $0xc8,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0xc98
080f8b22 +0x068:  movl   $0xfa,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x33c
080f8b2c +0x072:  movl   $0xfa,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x4b4
080f8b36 +0x07c:  movl   $0xfa,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x7d8
080f8b40 +0x086:  movl   $0x1f4,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x4b8
080f8b4a +0x090:  movl   $0x3e8,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x4bc
080f8b54 +0x09a:  movl   $0x14,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x650
080f8b5e +0x0a4:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x19c
080f8b68 +0x0ae:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x1a0
080f8b72 +0x0b8:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x1a4
080f8b7c +0x0c2:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x194
080f8b86 +0x0cc:  movl   $0x3,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x198
080f8b90 +0x0d6:  movl   $0x1f4,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x324
080f8b9a +0x0e0:  movl   $0x0,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x7e4
080f8ba4 +0x0ea:  movl   $0x0,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x4c8
080f8bae +0x0f4:  movl   $0x2710,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0xca0
080f8bb8 +0x0fe:  movl   $0x1f4,&_ZN8WongWork12CMCAPManager17pointPerHackType_E+0x1c0
080f8bc2 +0x108:  movl   $0x3cf0,0x8(%esp)
080f8bca +0x110:  movl   $0x0,0x4(%esp)
080f8bd2 +0x118:  movl   $&_ZN8WongWork12CMCAPManager17pointPerHackType_E,(%esp)
080f8bd9 +0x11f:  call   0807dcc0 <_init+0x5b8>
080f8bde +0x124:  leave
080f8bdf +0x125:  ret
```

## 反编译 C

```c
// WongWork::CMCAPManager::init @ 0x80f8aba

/* WongWork::CMCAPManager::init() */

void WongWork::CMCAPManager::init(void)

{
  memset(pointPerHackType_,0,0x3cf0);
  pointPerHackType_._816_4_ = 500;
  pointPerHackType_._444_4_ = 0xfa;
  pointPerHackType_._436_4_ = 0xfa;
  pointPerHackType_._3816_4_ = 3;
  pointPerHackType_._2012_4_ = 1000;
  pointPerHackType_._1612_4_ = 0x14;
  pointPerHackType_._3224_4_ = 200;
  pointPerHackType_._828_4_ = 0xfa;
  pointPerHackType_._1204_4_ = 0xfa;
  pointPerHackType_._2008_4_ = 0xfa;
  pointPerHackType_._1208_4_ = 500;
  pointPerHackType_._1212_4_ = 1000;
  pointPerHackType_._1616_4_ = 0x14;
  pointPerHackType_._412_4_ = 3;
  pointPerHackType_._416_4_ = 3;
  pointPerHackType_._420_4_ = 3;
  pointPerHackType_._404_4_ = 3;
  pointPerHackType_._408_4_ = 3;
  pointPerHackType_._804_4_ = 500;
  pointPerHackType_._2020_4_ = 0;
  pointPerHackType_._1224_4_ = 0;
  pointPerHackType_._3232_4_ = 10000;
  pointPerHackType_._448_4_ = 500;
  memset(pointPerHackType_,0,0x3cf0);
  return;
}
```
