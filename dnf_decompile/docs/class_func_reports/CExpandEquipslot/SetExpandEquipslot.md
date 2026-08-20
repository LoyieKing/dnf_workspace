# SetExpandEquipslot

`_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi`

`CExpandEquipslot::SetExpandEquipslot(int, void*, int)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499986  _ZN16CExpandEquipslot18SetExpandEquipslotEiPvi
#           CExpandEquipslot::SetExpandEquipslot(int, void*, int)
# range [0x08499986, 0x08499a47]
08499986 +0x00:  push   %ebp
08499987 +0x01:  mov    %esp,%ebp
08499989 +0x03:  sub    $0x18,%esp
0849998c +0x06:  mov    0xc(%ebp),%eax
0849998f +0x09:  cmp    $0x2,%eax
08499992 +0x0c:  je     084999d8 <+0x52>
08499994 +0x0e:  cmp    $0x3,%eax
08499997 +0x11:  je     08499a0d <+0x87>
08499999 +0x13:  cmp    $0x1,%eax
0849999c +0x16:  jne    08499a46 <+0xc0>
084999a2 +0x1c:  cmpl   $0x2dc,0x14(%ebp)
084999a9 +0x23:  jne    08499a42 <+0xbc>
084999af +0x29:  mov    0x14(%ebp),%eax
084999b2 +0x2c:  mov    0x8(%ebp),%edx
084999b5 +0x2f:  add    $0x5,%edx
084999b8 +0x32:  mov    %eax,0x8(%esp)
084999bc +0x36:  mov    0x10(%ebp),%eax
084999bf +0x39:  mov    %eax,0x4(%esp)
084999c3 +0x3d:  mov    %edx,(%esp)
084999c6 +0x40:  call   0807d8a0 <_init+0x198>
084999cb +0x45:  mov    0x8(%ebp),%eax
084999ce +0x48:  mov    %eax,(%esp)
084999d1 +0x4b:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
084999d6 +0x50:  jmp    08499a46 <+0xc0>
084999d8 +0x52:  cmpl   $0x2dc,0x14(%ebp)
084999df +0x59:  jne    08499a45 <+0xbf>
084999e1 +0x5b:  mov    0x14(%ebp),%eax
084999e4 +0x5e:  mov    0x8(%ebp),%edx
084999e7 +0x61:  add    $0x2e1,%edx
084999ed +0x67:  mov    %eax,0x8(%esp)
084999f1 +0x6b:  mov    0x10(%ebp),%eax
084999f4 +0x6e:  mov    %eax,0x4(%esp)
084999f8 +0x72:  mov    %edx,(%esp)
084999fb +0x75:  call   0807d8a0 <_init+0x198>
08499a00 +0x7a:  mov    0x8(%ebp),%eax
08499a03 +0x7d:  mov    %eax,(%esp)
08499a06 +0x80:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08499a0b +0x85:  jmp    08499a46 <+0xc0>
08499a0d +0x87:  cmpl   $0x2dc,0x14(%ebp)
08499a14 +0x8e:  jne    08499a46 <+0xc0>
08499a16 +0x90:  mov    0x14(%ebp),%eax
08499a19 +0x93:  mov    0x8(%ebp),%edx
08499a1c +0x96:  add    $0x5bd,%edx
08499a22 +0x9c:  mov    %eax,0x8(%esp)
08499a26 +0xa0:  mov    0x10(%ebp),%eax
08499a29 +0xa3:  mov    %eax,0x4(%esp)
08499a2d +0xa7:  mov    %edx,(%esp)
08499a30 +0xaa:  call   0807d8a0 <_init+0x198>
08499a35 +0xaf:  mov    0x8(%ebp),%eax
08499a38 +0xb2:  mov    %eax,(%esp)
08499a3b +0xb5:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08499a40 +0xba:  jmp    08499a46 <+0xc0>
08499a42 +0xbc:  nop
08499a43 +0xbd:  jmp    08499a46 <+0xc0>
08499a45 +0xbf:  nop
08499a46 +0xc0:  leave
08499a47 +0xc1:  ret
```

## 反编译 C

```c
// CExpandEquipslot::SetExpandEquipslot @ 0x8499986

/* CExpandEquipslot::SetExpandEquipslot(int, void*, int) */

void __thiscall
CExpandEquipslot::SetExpandEquipslot(CExpandEquipslot *this,int param_1,void *param_2,int param_3)

{
  if (param_1 == 2) {
    if (param_3 == 0x2dc) {
      memcpy(this + 0x2e1,param_2,0x2dc);
      charac_expand::CData::alter((CData *)this);
    }
  }
  else if (param_1 == 3) {
    if (param_3 == 0x2dc) {
      memcpy(this + 0x5bd,param_2,0x2dc);
      charac_expand::CData::alter((CData *)this);
    }
  }
  else if ((param_1 == 1) && (param_3 == 0x2dc)) {
    memcpy(this + 5,param_2,0x2dc);
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```
