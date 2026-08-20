# sampleAlpha

`_ZN9GreyImage11sampleAlphaEii`

`GreyImage::sampleAlpha(int, int)`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df676  _ZN9GreyImage11sampleAlphaEii
#           GreyImage::sampleAlpha(int, int)
# range [0x080df676, 0x080df7a3]
080df676 +0x000:  push   %ebp
080df677 +0x001:  mov    %esp,%ebp
080df679 +0x003:  sub    $0x2c,%esp
080df67c +0x006:  mov    0xc(%ebp),%eax
080df67f +0x009:  sar    $0x10,%eax
080df682 +0x00c:  mov    %eax,-0x14(%ebp)
080df685 +0x00f:  mov    0x10(%ebp),%eax
080df688 +0x012:  sar    $0x10,%eax
080df68b +0x015:  mov    %eax,-0x10(%ebp)
080df68e +0x018:  cmpl   $0x0,-0x14(%ebp)
080df692 +0x01c:  js     080df6b5 <+0x3f>
080df694 +0x01e:  cmpl   $0x0,-0x10(%ebp)
080df698 +0x022:  js     080df6b5 <+0x3f>
080df69a +0x024:  mov    0x8(%ebp),%eax
080df69d +0x027:  mov    (%eax),%eax
080df69f +0x029:  sub    $0x1,%eax
080df6a2 +0x02c:  cmp    -0x14(%ebp),%eax
080df6a5 +0x02f:  jle    080df6b5 <+0x3f>
080df6a7 +0x031:  mov    0x8(%ebp),%eax
080df6aa +0x034:  mov    0x4(%eax),%eax
080df6ad +0x037:  sub    $0x1,%eax
080df6b0 +0x03a:  cmp    -0x10(%ebp),%eax
080df6b3 +0x03d:  jg     080df6bf <+0x49>
080df6b5 +0x03f:  mov    $0x0,%eax
080df6ba +0x044:  jmp    080df7a2 <+0x12c>
080df6bf +0x049:  mov    0xc(%ebp),%eax
080df6c2 +0x04c:  and    $0xffff,%eax
080df6c7 +0x051:  mov    %eax,-0xc(%ebp)
080df6ca +0x054:  mov    0x10(%ebp),%eax
080df6cd +0x057:  and    $0xffff,%eax
080df6d2 +0x05c:  mov    %eax,-0x8(%ebp)
080df6d5 +0x05f:  mov    -0x10(%ebp),%eax
080df6d8 +0x062:  mov    %eax,0x8(%esp)
080df6dc +0x066:  mov    -0x14(%ebp),%eax
080df6df +0x069:  mov    %eax,0x4(%esp)
080df6e3 +0x06d:  mov    0x8(%ebp),%eax
080df6e6 +0x070:  mov    %eax,(%esp)
080df6e9 +0x073:  call   080df5f0 <_ZN9GreyImage8getAlphaEii>  ; GreyImage::getAlpha(int, int)
080df6ee +0x078:  mov    %al,-0x4(%ebp)
080df6f1 +0x07b:  mov    -0x14(%ebp),%eax
080df6f4 +0x07e:  lea    0x1(%eax),%edx
080df6f7 +0x081:  mov    -0x10(%ebp),%eax
080df6fa +0x084:  mov    %eax,0x8(%esp)
080df6fe +0x088:  mov    %edx,0x4(%esp)
080df702 +0x08c:  mov    0x8(%ebp),%eax
080df705 +0x08f:  mov    %eax,(%esp)
080df708 +0x092:  call   080df5f0 <_ZN9GreyImage8getAlphaEii>  ; GreyImage::getAlpha(int, int)
080df70d +0x097:  mov    %al,-0x3(%ebp)
080df710 +0x09a:  mov    -0x10(%ebp),%eax
080df713 +0x09d:  add    $0x1,%eax
080df716 +0x0a0:  mov    %eax,0x8(%esp)
080df71a +0x0a4:  mov    -0x14(%ebp),%eax
080df71d +0x0a7:  mov    %eax,0x4(%esp)
080df721 +0x0ab:  mov    0x8(%ebp),%eax
080df724 +0x0ae:  mov    %eax,(%esp)
080df727 +0x0b1:  call   080df5f0 <_ZN9GreyImage8getAlphaEii>  ; GreyImage::getAlpha(int, int)
080df72c +0x0b6:  mov    %al,-0x2(%ebp)
080df72f +0x0b9:  mov    -0x10(%ebp),%eax
080df732 +0x0bc:  lea    0x1(%eax),%edx
080df735 +0x0bf:  mov    -0x14(%ebp),%eax
080df738 +0x0c2:  add    $0x1,%eax
080df73b +0x0c5:  mov    %edx,0x8(%esp)
080df73f +0x0c9:  mov    %eax,0x4(%esp)
080df743 +0x0cd:  mov    0x8(%ebp),%eax
080df746 +0x0d0:  mov    %eax,(%esp)
080df749 +0x0d3:  call   080df5f0 <_ZN9GreyImage8getAlphaEii>  ; GreyImage::getAlpha(int, int)
080df74e +0x0d8:  mov    %al,-0x1(%ebp)
080df751 +0x0db:  movzbl -0x4(%ebp),%edx
080df755 +0x0df:  mov    $&_ZL14gUnicodeBuffer+0x5ad4,%eax
080df75a +0x0e4:  sub    -0xc(%ebp),%eax
080df75d +0x0e7:  imul   %eax,%edx
080df760 +0x0ea:  movzbl -0x3(%ebp),%eax
080df764 +0x0ee:  imul   -0xc(%ebp),%eax
080df768 +0x0f2:  lea    (%edx,%eax,1),%eax
080df76b +0x0f5:  mov    %eax,%edx
080df76d +0x0f7:  sar    $0x10,%edx
080df770 +0x0fa:  mov    $&_ZL14gUnicodeBuffer+0x5ad4,%eax
080df775 +0x0ff:  sub    -0x8(%ebp),%eax
080df778 +0x102:  imul   %eax,%edx
080df77b +0x105:  movzbl -0x2(%ebp),%ecx
080df77f +0x109:  mov    $&_ZL14gUnicodeBuffer+0x5ad4,%eax
080df784 +0x10e:  sub    -0xc(%ebp),%eax
080df787 +0x111:  imul   %eax,%ecx
080df78a +0x114:  movzbl -0x1(%ebp),%eax
080df78e +0x118:  imul   -0xc(%ebp),%eax
080df792 +0x11c:  lea    (%ecx,%eax,1),%eax
080df795 +0x11f:  sar    $0x10,%eax
080df798 +0x122:  imul   -0x8(%ebp),%eax
080df79c +0x126:  lea    (%edx,%eax,1),%eax
080df79f +0x129:  sar    $0x10,%eax
080df7a2 +0x12c:  leave
080df7a3 +0x12d:  ret
```

## 反编译 C

```c
// GreyImage::sampleAlpha @ 0x80df676

/* GreyImage::sampleAlpha(int, int) */

int __thiscall GreyImage::sampleAlpha(GreyImage *this,int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_1 >> 0x10;
  iVar6 = param_2 >> 0x10;
  if ((((iVar5 < 0) || (iVar6 < 0)) || (*(int *)this + -1 <= iVar5)) ||
     (*(int *)(this + 4) + -1 <= iVar6)) {
    iVar5 = 0;
  }
  else {
    uVar7 = param_1 & 0xffff;
    bVar1 = getAlpha(this,iVar5,iVar6);
    bVar2 = getAlpha(this,iVar5 + 1,iVar6);
    bVar3 = getAlpha(this,iVar5,iVar6 + 1);
    bVar4 = getAlpha(this,iVar5 + 1,iVar6 + 1);
    iVar5 = (int)(((int)((uint)bVar1 * (0x10000 - uVar7) + bVar2 * uVar7) >> 0x10) *
                  (0x10000 - (param_2 & 0xffffU)) +
                 ((int)((uint)bVar3 * (0x10000 - uVar7) + bVar4 * uVar7) >> 0x10) *
                 (param_2 & 0xffffU)) >> 0x10;
  }
  return iVar5;
}
```
