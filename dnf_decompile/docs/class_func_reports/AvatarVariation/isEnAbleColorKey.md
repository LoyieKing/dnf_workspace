# isEnAbleColorKey

`_ZN15AvatarVariation16isEnAbleColorKeyERNS_8colorRGBE`

`AvatarVariation::isEnAbleColorKey(AvatarVariation::colorRGB&)`

| 类 | 地址 |
|---|---|
| `AvatarVariation` | `0x088d4856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d4856  _ZN15AvatarVariation16isEnAbleColorKeyERNS_8colorRGBE
#           AvatarVariation::isEnAbleColorKey(AvatarVariation::colorRGB&)
# range [0x088d4856, 0x088d4895]
088d4856 +0x00:  push   %ebp
088d4857 +0x01:  mov    %esp,%ebp
088d4859 +0x03:  sub    $0x28,%esp
088d485c +0x06:  lea    -0xb(%ebp),%eax
088d485f +0x09:  movl   $0x0,0x4(%esp)
088d4867 +0x11:  mov    %eax,(%esp)
088d486a +0x14:  call   088d4782 <_ZN15AvatarVariation19getAvatarColorValueEi>  ; AvatarVariation::getAvatarColorValue(int)
088d486f +0x19:  sub    $0x4,%esp
088d4872 +0x1c:  lea    -0xb(%ebp),%eax
088d4875 +0x1f:  mov    %eax,0x4(%esp)
088d4879 +0x23:  mov    0x8(%ebp),%eax
088d487c +0x26:  mov    %eax,(%esp)
088d487f +0x29:  call   088d440a <_ZN15AvatarVariation8colorRGBeqERKS0_>  ; AvatarVariation::colorRGB::operator==(AvatarVariation::colorRGB const&)
088d4884 +0x2e:  test   %al,%al
088d4886 +0x30:  je     088d488f <+0x39>
088d4888 +0x32:  mov    $0x0,%eax
088d488d +0x37:  jmp    088d4894 <+0x3e>
088d488f +0x39:  mov    $0x1,%eax
088d4894 +0x3e:  leave
088d4895 +0x3f:  ret
```

## 反编译 C

```c
// AvatarVariation::isEnAbleColorKey @ 0x88d4856

/* AvatarVariation::isEnAbleColorKey(AvatarVariation::colorRGB&) */

bool AvatarVariation::isEnAbleColorKey(colorRGB *param_1)

{
  char cVar1;
  colorRGB local_f [11];
  
  getAvatarColorValue((int)local_f);
  cVar1 = colorRGB::operator==(param_1,local_f);
  return cVar1 == '\0';
}
```
