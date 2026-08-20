# GetInvenData

`_ZNK10CInventory12GetInvenDataEiPvi`

`CInventory::GetInvenData(int, void*, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb222  _ZNK10CInventory12GetInvenDataEiPvi
#           CInventory::GetInvenData(int, void*, int) const
# range [0x084fb222, 0x084fb329]
084fb222 +0x000:  push   %ebp
084fb223 +0x001:  mov    %esp,%ebp
084fb225 +0x003:  sub    $0x18,%esp
084fb228 +0x006:  cmpl   $0x5,0xc(%ebp)
084fb22c +0x00a:  ja     084fb327 <+0x105>
084fb232 +0x010:  mov    0xc(%ebp),%eax
084fb235 +0x013:  shl    $0x2,%eax
084fb238 +0x016:  mov    &data#2a502c14(.rodata)(%eax),%eax
084fb23e +0x01c:  jmp    *%eax
084fb240 +0x01e:  cmpl   $0x632,0x14(%ebp)
084fb247 +0x025:  jne    084fb31d <+0xfb>
084fb24d +0x02b:  mov    0x14(%ebp),%eax
084fb250 +0x02e:  mov    0x8(%ebp),%edx
084fb253 +0x031:  add    $0x1c,%edx
084fb256 +0x034:  mov    %eax,0x8(%esp)
084fb25a +0x038:  mov    %edx,0x4(%esp)
084fb25e +0x03c:  mov    0x10(%ebp),%eax
084fb261 +0x03f:  mov    %eax,(%esp)
084fb264 +0x042:  call   0807d8a0 <_init+0x198>
084fb269 +0x047:  jmp    084fb327 <+0x105>
084fb26e +0x04c:  cmpl   $0x4a58,0x14(%ebp)
084fb275 +0x053:  jne    084fb320 <+0xfe>
084fb27b +0x059:  mov    0x14(%ebp),%edx
084fb27e +0x05c:  mov    0x8(%ebp),%eax
084fb281 +0x05f:  mov    0x650(%eax),%eax
084fb287 +0x065:  mov    %edx,0x8(%esp)
084fb28b +0x069:  mov    %eax,0x4(%esp)
084fb28f +0x06d:  mov    0x10(%ebp),%eax
084fb292 +0x070:  mov    %eax,(%esp)
084fb295 +0x073:  call   0807d8a0 <_init+0x198>
084fb29a +0x078:  jmp    084fb327 <+0x105>
084fb29f +0x07d:  cmpl   $0x1905,0x14(%ebp)
084fb2a6 +0x084:  jne    084fb323 <+0x101>
084fb2a8 +0x086:  mov    0x14(%ebp),%edx
084fb2ab +0x089:  mov    0x8(%ebp),%eax
084fb2ae +0x08c:  mov    0x654(%eax),%eax
084fb2b4 +0x092:  mov    %edx,0x8(%esp)
084fb2b8 +0x096:  mov    %eax,0x4(%esp)
084fb2bc +0x09a:  mov    0x10(%ebp),%eax
084fb2bf +0x09d:  mov    %eax,(%esp)
084fb2c2 +0x0a0:  call   0807d8a0 <_init+0x198>
084fb2c7 +0x0a5:  jmp    084fb327 <+0x105>
084fb2c9 +0x0a7:  cmpl   $0x39aa,0x14(%ebp)
084fb2d0 +0x0ae:  jne    084fb326 <+0x104>
084fb2d2 +0x0b0:  mov    0x14(%ebp),%edx
084fb2d5 +0x0b3:  mov    0x8(%ebp),%eax
084fb2d8 +0x0b6:  mov    0x6e4(%eax),%eax
084fb2de +0x0bc:  mov    %edx,0x8(%esp)
084fb2e2 +0x0c0:  mov    %eax,0x4(%esp)
084fb2e6 +0x0c4:  mov    0x10(%ebp),%eax
084fb2e9 +0x0c7:  mov    %eax,(%esp)
084fb2ec +0x0ca:  call   0807d8a0 <_init+0x198>
084fb2f1 +0x0cf:  jmp    084fb327 <+0x105>
084fb2f3 +0x0d1:  cmpl   $0x2dc,0x14(%ebp)
084fb2fa +0x0d8:  jne    084fb327 <+0x105>
084fb2fc +0x0da:  mov    0x14(%ebp),%eax
084fb2ff +0x0dd:  mov    0x8(%ebp),%edx
084fb302 +0x0e0:  add    $0x27e,%edx
084fb308 +0x0e6:  mov    %eax,0x8(%esp)
084fb30c +0x0ea:  mov    %edx,0x4(%esp)
084fb310 +0x0ee:  mov    0x10(%ebp),%eax
084fb313 +0x0f1:  mov    %eax,(%esp)
084fb316 +0x0f4:  call   0807d8a0 <_init+0x198>
084fb31b +0x0f9:  jmp    084fb327 <+0x105>
084fb31d +0x0fb:  nop
084fb31e +0x0fc:  jmp    084fb327 <+0x105>
084fb320 +0x0fe:  nop
084fb321 +0x0ff:  jmp    084fb327 <+0x105>
084fb323 +0x101:  nop
084fb324 +0x102:  jmp    084fb327 <+0x105>
084fb326 +0x104:  nop
084fb327 +0x105:  leave
084fb328 +0x106:  ret
084fb329 +0x107:  nop
```

## 反编译 C

```c
// CInventory::GetInvenData @ 0x84fb222

/* CInventory::GetInvenData(int, void*, int) const */

void __thiscall CInventory::GetInvenData(CInventory *this,int param_1,void *param_2,int param_3)

{
  switch(param_1) {
  case 0:
    if (param_3 == 0x632) {
      memcpy(param_2,this + 0x1c,0x632);
    }
    break;
  case 1:
    if (param_3 == 0x4a58) {
      memcpy(param_2,*(void **)(this + 0x650),0x4a58);
    }
    break;
  case 2:
    if (param_3 == 0x1905) {
      memcpy(param_2,*(void **)(this + 0x654),0x1905);
    }
    break;
  case 3:
    if (param_3 == 0x39aa) {
      memcpy(param_2,*(void **)(this + 0x6e4),0x39aa);
    }
    break;
  case 5:
    if (param_3 == 0x2dc) {
      memcpy(param_2,this + 0x27e,0x2dc);
    }
  }
  return;
}
```
