# isDoEnchant

`_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc`

`WongWork::CItemUpgrade::isDoEnchant(Inven_Item const&, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854977a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854977a  _ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc
#           WongWork::CItemUpgrade::isDoEnchant(Inven_Item const&, char*)
# range [0x0854977a, 0x085497e9]
0854977a +0x00:  push   %ebp
0854977b +0x01:  mov    %esp,%ebp
0854977d +0x03:  sub    $0x28,%esp
08549780 +0x06:  movl   $0x64,-0x14(%ebp)
08549787 +0x0d:  mov    0x8(%ebp),%eax
0854978a +0x10:  mov    0x4e8(%eax),%eax
08549790 +0x16:  lea    -0x14(%ebp),%edx
08549793 +0x19:  mov    %edx,0x4(%esp)
08549797 +0x1d:  mov    %eax,(%esp)
0854979a +0x20:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0854979f +0x25:  mov    %eax,-0x10(%ebp)
085497a2 +0x28:  movl   $0x0,-0xc(%ebp)
085497a9 +0x2f:  mov    0xc(%ebp),%eax
085497ac +0x32:  movzbl 0x1f(%eax),%eax
085497b0 +0x36:  and    $0x1,%eax
085497b3 +0x39:  test   %al,%al
085497b5 +0x3b:  jne    085497c5 <+0x4b>
085497b7 +0x3d:  mov    0x10(%ebp),%eax
085497ba +0x40:  movzbl (%eax),%eax
085497bd +0x43:  movsbl %al,%eax
085497c0 +0x46:  mov    %eax,-0xc(%ebp)
085497c3 +0x49:  jmp    085497d4 <+0x5a>
085497c5 +0x4b:  mov    0x10(%ebp),%eax
085497c8 +0x4e:  add    $0x1,%eax
085497cb +0x51:  movzbl (%eax),%eax
085497ce +0x54:  movsbl %al,%eax
085497d1 +0x57:  mov    %eax,-0xc(%ebp)
085497d4 +0x5a:  mov    -0x10(%ebp),%eax
085497d7 +0x5d:  cmp    -0xc(%ebp),%eax
085497da +0x60:  jg     085497e3 <+0x69>
085497dc +0x62:  mov    $0x1,%eax
085497e1 +0x67:  jmp    085497e8 <+0x6e>
085497e3 +0x69:  mov    $0x0,%eax
085497e8 +0x6e:  leave
085497e9 +0x6f:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::isDoEnchant @ 0x854977a

/* WongWork::CItemUpgrade::isDoEnchant(Inven_Item const&, char*) */

bool __thiscall
WongWork::CItemUpgrade::isDoEnchant(CItemUpgrade *this,Inven_Item *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  ulong local_18 [2];
  int local_10;
  
  local_18[0] = 100;
  iVar2 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),local_18);
  if (((byte)param_1[0x1f] & 1) == 0) {
    cVar1 = *param_2;
  }
  else {
    cVar1 = param_2[1];
  }
  local_10 = (int)cVar1;
  return iVar2 <= local_10;
}
```
