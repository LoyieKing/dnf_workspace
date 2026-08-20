# GenerateCleanPadVeriData

`_ZN5CUser24GenerateCleanPadVeriDataERtRhS0_`

`CUser::GenerateCleanPadVeriData(unsigned short&, unsigned char&, unsigned short&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649ac4  _ZN5CUser24GenerateCleanPadVeriDataERtRhS0_
#           CUser::GenerateCleanPadVeriData(unsigned short&, unsigned char&, unsigned short&)
# range [0x08649ac4, 0x08649b43]
08649ac4 +0x00:  push   %ebp
08649ac5 +0x01:  mov    %esp,%ebp
08649ac7 +0x03:  sub    $0x18,%esp
08649aca +0x06:  movl   $0xffff,(%esp)
08649ad1 +0x0d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08649ad6 +0x12:  lea    0x1(%eax),%edx
08649ad9 +0x15:  mov    0x8(%ebp),%eax
08649adc +0x18:  mov    %dx,0x8e93e(%eax)
08649ae3 +0x1f:  movl   $0x6,(%esp)
08649aea +0x26:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08649aef +0x2b:  mov    %eax,%edx
08649af1 +0x2d:  mov    0x8(%ebp),%eax
08649af4 +0x30:  mov    %dl,0x8e940(%eax)
08649afa +0x36:  movl   $0xffff,(%esp)
08649b01 +0x3d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08649b06 +0x42:  lea    0x1(%eax),%edx
08649b09 +0x45:  mov    0x8(%ebp),%eax
08649b0c +0x48:  mov    %dx,0x8e942(%eax)
08649b13 +0x4f:  mov    0x8(%ebp),%eax
08649b16 +0x52:  movzwl 0x8e93e(%eax),%edx
08649b1d +0x59:  mov    0xc(%ebp),%eax
08649b20 +0x5c:  mov    %dx,(%eax)
08649b23 +0x5f:  mov    0x8(%ebp),%eax
08649b26 +0x62:  movzbl 0x8e940(%eax),%edx
08649b2d +0x69:  mov    0x10(%ebp),%eax
08649b30 +0x6c:  mov    %dl,(%eax)
08649b32 +0x6e:  mov    0x8(%ebp),%eax
08649b35 +0x71:  movzwl 0x8e942(%eax),%edx
08649b3c +0x78:  mov    0x14(%ebp),%eax
08649b3f +0x7b:  mov    %dx,(%eax)
08649b42 +0x7e:  leave
08649b43 +0x7f:  ret
```

## 反编译 C

```c
// CUser::GenerateCleanPadVeriData @ 0x8649ac4

/* CUser::GenerateCleanPadVeriData(unsigned short&, unsigned char&, unsigned short&) */

void __thiscall
CUser::GenerateCleanPadVeriData(CUser *this,ushort *param_1,uchar *param_2,ushort *param_3)

{
  CUser CVar1;
  short sVar2;
  
  sVar2 = get_rand_int(0xffff);
  *(short *)(this + 0x8e93e) = sVar2 + 1;
  CVar1 = (CUser)get_rand_int(6);
  this[0x8e940] = CVar1;
  sVar2 = get_rand_int(0xffff);
  *(short *)(this + 0x8e942) = sVar2 + 1;
  *param_1 = *(ushort *)(this + 0x8e93e);
  *param_2 = (uchar)this[0x8e940];
  *param_3 = *(ushort *)(this + 0x8e942);
  return;
}
```
