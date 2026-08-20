# increaseLayer

`_ZN9TOD_Layer13increaseLayerEv`

`TOD_Layer::increaseLayer()`

| 类 | 地址 |
|---|---|
| `TOD_Layer` | `0x085fe824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe824  _ZN9TOD_Layer13increaseLayerEv
#           TOD_Layer::increaseLayer()
# range [0x085fe824, 0x085fe851]
085fe824 +0x00:  push   %ebp
085fe825 +0x01:  mov    %esp,%ebp
085fe827 +0x03:  sub    $0x18,%esp
085fe82a +0x06:  mov    0x8(%ebp),%eax
085fe82d +0x09:  movzwl (%eax),%eax
085fe830 +0x0c:  lea    0x1(%eax),%edx
085fe833 +0x0f:  mov    0x8(%ebp),%eax
085fe836 +0x12:  mov    %dx,(%eax)
085fe839 +0x15:  mov    0x8(%ebp),%eax
085fe83c +0x18:  movzwl (%eax),%eax
085fe83f +0x1b:  cmp    $0x64,%ax
085fe843 +0x1f:  jbe    085fe850 <+0x2c>
085fe845 +0x21:  mov    0x8(%ebp),%eax
085fe848 +0x24:  mov    %eax,(%esp)
085fe84b +0x27:  call   085fe852 <_ZN9TOD_Layer10resetLayerEv>  ; TOD_Layer::resetLayer()
085fe850 +0x2c:  leave
085fe851 +0x2d:  ret
```

## 反编译 C

```c
// TOD_Layer::increaseLayer @ 0x85fe824

/* TOD_Layer::increaseLayer() */

void __thiscall TOD_Layer::increaseLayer(TOD_Layer *this)

{
  *(short *)this = *(short *)this + 1;
  if (100 < *(ushort *)this) {
    resetLayer(this);
  }
  return;
}
```
