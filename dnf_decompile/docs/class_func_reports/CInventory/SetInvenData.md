# SetInvenData

`_ZN10CInventory12SetInvenDataEiPvi`

`CInventory::SetInvenData(int, void*, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb11a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb11a  _ZN10CInventory12SetInvenDataEiPvi
#           CInventory::SetInvenData(int, void*, int)
# range [0x084fb11a, 0x084fb221]
084fb11a +0x000:  push   %ebp
084fb11b +0x001:  mov    %esp,%ebp
084fb11d +0x003:  sub    $0x18,%esp
084fb120 +0x006:  cmpl   $0x5,0xc(%ebp)
084fb124 +0x00a:  ja     084fb21f <+0x105>
084fb12a +0x010:  mov    0xc(%ebp),%eax
084fb12d +0x013:  shl    $0x2,%eax
084fb130 +0x016:  mov    &data#685f190c(.rodata)(%eax),%eax
084fb136 +0x01c:  jmp    *%eax
084fb138 +0x01e:  cmpl   $0x632,0x14(%ebp)
084fb13f +0x025:  jne    084fb215 <+0xfb>
084fb145 +0x02b:  mov    0x14(%ebp),%eax
084fb148 +0x02e:  mov    0x8(%ebp),%edx
084fb14b +0x031:  add    $0x1c,%edx
084fb14e +0x034:  mov    %eax,0x8(%esp)
084fb152 +0x038:  mov    0x10(%ebp),%eax
084fb155 +0x03b:  mov    %eax,0x4(%esp)
084fb159 +0x03f:  mov    %edx,(%esp)
084fb15c +0x042:  call   0807d8a0 <_init+0x198>
084fb161 +0x047:  jmp    084fb21f <+0x105>
084fb166 +0x04c:  cmpl   $0x4a58,0x14(%ebp)
084fb16d +0x053:  jne    084fb218 <+0xfe>
084fb173 +0x059:  mov    0x14(%ebp),%edx
084fb176 +0x05c:  mov    0x8(%ebp),%eax
084fb179 +0x05f:  mov    0x650(%eax),%eax
084fb17f +0x065:  mov    %edx,0x8(%esp)
084fb183 +0x069:  mov    0x10(%ebp),%edx
084fb186 +0x06c:  mov    %edx,0x4(%esp)
084fb18a +0x070:  mov    %eax,(%esp)
084fb18d +0x073:  call   0807d8a0 <_init+0x198>
084fb192 +0x078:  jmp    084fb21f <+0x105>
084fb197 +0x07d:  cmpl   $0x1905,0x14(%ebp)
084fb19e +0x084:  jne    084fb21b <+0x101>
084fb1a0 +0x086:  mov    0x14(%ebp),%edx
084fb1a3 +0x089:  mov    0x8(%ebp),%eax
084fb1a6 +0x08c:  mov    0x654(%eax),%eax
084fb1ac +0x092:  mov    %edx,0x8(%esp)
084fb1b0 +0x096:  mov    0x10(%ebp),%edx
084fb1b3 +0x099:  mov    %edx,0x4(%esp)
084fb1b7 +0x09d:  mov    %eax,(%esp)
084fb1ba +0x0a0:  call   0807d8a0 <_init+0x198>
084fb1bf +0x0a5:  jmp    084fb21f <+0x105>
084fb1c1 +0x0a7:  cmpl   $0x39aa,0x14(%ebp)
084fb1c8 +0x0ae:  jne    084fb21e <+0x104>
084fb1ca +0x0b0:  mov    0x14(%ebp),%edx
084fb1cd +0x0b3:  mov    0x8(%ebp),%eax
084fb1d0 +0x0b6:  mov    0x6e4(%eax),%eax
084fb1d6 +0x0bc:  mov    %edx,0x8(%esp)
084fb1da +0x0c0:  mov    0x10(%ebp),%edx
084fb1dd +0x0c3:  mov    %edx,0x4(%esp)
084fb1e1 +0x0c7:  mov    %eax,(%esp)
084fb1e4 +0x0ca:  call   0807d8a0 <_init+0x198>
084fb1e9 +0x0cf:  jmp    084fb21f <+0x105>
084fb1eb +0x0d1:  cmpl   $0x2dc,0x14(%ebp)
084fb1f2 +0x0d8:  jne    084fb21f <+0x105>
084fb1f4 +0x0da:  mov    0x14(%ebp),%eax
084fb1f7 +0x0dd:  mov    0x8(%ebp),%edx
084fb1fa +0x0e0:  add    $0x27e,%edx
084fb200 +0x0e6:  mov    %eax,0x8(%esp)
084fb204 +0x0ea:  mov    0x10(%ebp),%eax
084fb207 +0x0ed:  mov    %eax,0x4(%esp)
084fb20b +0x0f1:  mov    %edx,(%esp)
084fb20e +0x0f4:  call   0807d8a0 <_init+0x198>
084fb213 +0x0f9:  jmp    084fb21f <+0x105>
084fb215 +0x0fb:  nop
084fb216 +0x0fc:  jmp    084fb21f <+0x105>
084fb218 +0x0fe:  nop
084fb219 +0x0ff:  jmp    084fb21f <+0x105>
084fb21b +0x101:  nop
084fb21c +0x102:  jmp    084fb21f <+0x105>
084fb21e +0x104:  nop
084fb21f +0x105:  leave
084fb220 +0x106:  ret
084fb221 +0x107:  nop
```

## 反编译 C

```c
// CInventory::SetInvenData @ 0x84fb11a

/* CInventory::SetInvenData(int, void*, int) */

void __thiscall CInventory::SetInvenData(CInventory *this,int param_1,void *param_2,int param_3)

{
  switch(param_1) {
  case 0:
    if (param_3 == 0x632) {
      memcpy(this + 0x1c,param_2,0x632);
    }
    break;
  case 1:
    if (param_3 == 0x4a58) {
      memcpy(*(void **)(this + 0x650),param_2,0x4a58);
    }
    break;
  case 2:
    if (param_3 == 0x1905) {
      memcpy(*(void **)(this + 0x654),param_2,0x1905);
    }
    break;
  case 3:
    if (param_3 == 0x39aa) {
      memcpy(*(void **)(this + 0x6e4),param_2,0x39aa);
    }
    break;
  case 5:
    if (param_3 == 0x2dc) {
      memcpy(this + 0x27e,param_2,0x2dc);
    }
  }
  return;
}
```
