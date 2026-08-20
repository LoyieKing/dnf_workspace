# addFont

`_ZN10CaptchaGen7addFontEPKci`

`CaptchaGen::addFont(char const*, int)`

| 类 | 地址 |
|---|---|
| `CaptchaGen` | `0x080de794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de794  _ZN10CaptchaGen7addFontEPKci
#           CaptchaGen::addFont(char const*, int)
# range [0x080de794, 0x080de83b]
080de794 +0x00:  push   %ebp
080de795 +0x01:  mov    %esp,%ebp
080de797 +0x03:  sub    $0x28,%esp
080de79a +0x06:  mov    0x8(%ebp),%eax
080de79d +0x09:  mov    (%eax),%eax
080de79f +0x0b:  lea    -0x14(%ebp),%edx
080de7a2 +0x0e:  mov    %edx,0xc(%esp)
080de7a6 +0x12:  movl   $0x0,0x8(%esp)
080de7ae +0x1a:  mov    0xc(%ebp),%edx
080de7b1 +0x1d:  mov    %edx,0x4(%esp)
080de7b5 +0x21:  mov    %eax,(%esp)
080de7b8 +0x24:  call   087c4730 <FT_New_Face>
080de7bd +0x29:  mov    %eax,-0xc(%ebp)
080de7c0 +0x2c:  cmpl   $0x0,-0xc(%ebp)
080de7c4 +0x30:  je     080de7cd <+0x39>
080de7c6 +0x32:  mov    $0x0,%eax
080de7cb +0x37:  jmp    080de83a <+0xa6>
080de7cd +0x39:  mov    0x10(%ebp),%edx
080de7d0 +0x3c:  mov    -0x14(%ebp),%eax
080de7d3 +0x3f:  mov    %edx,0x8(%esp)
080de7d7 +0x43:  movl   $0x0,0x4(%esp)
080de7df +0x4b:  mov    %eax,(%esp)
080de7e2 +0x4e:  call   087c2f20 <FT_Set_Pixel_Sizes>
080de7e7 +0x53:  mov    %eax,-0xc(%ebp)
080de7ea +0x56:  cmpl   $0x0,-0xc(%ebp)
080de7ee +0x5a:  je     080de7f7 <+0x63>
080de7f0 +0x5c:  mov    $0x0,%eax
080de7f5 +0x61:  jmp    080de83a <+0xa6>
080de7f7 +0x63:  mov    -0x14(%ebp),%eax
080de7fa +0x66:  movl   $0x756e6963,0x4(%esp)
080de802 +0x6e:  mov    %eax,(%esp)
080de805 +0x71:  call   087bdd80 <FT_Select_Charmap>
080de80a +0x76:  mov    %eax,-0xc(%ebp)
080de80d +0x79:  cmpl   $0x0,-0xc(%ebp)
080de811 +0x7d:  je     080de81a <+0x86>
080de813 +0x7f:  mov    $0x0,%eax
080de818 +0x84:  jmp    080de83a <+0xa6>
080de81a +0x86:  mov    -0x14(%ebp),%eax
080de81d +0x89:  mov    %eax,-0x10(%ebp)
080de820 +0x8c:  mov    0x8(%ebp),%eax
080de823 +0x8f:  lea    0x4(%eax),%edx
080de826 +0x92:  lea    -0x10(%ebp),%eax
080de829 +0x95:  mov    %eax,0x4(%esp)
080de82d +0x99:  mov    %edx,(%esp)
080de830 +0x9c:  call   080df8a0 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0xbc>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0xbc
080de835 +0xa1:  mov    $0x1,%eax
080de83a +0xa6:  leave
080de83b +0xa7:  ret
```

## 反编译 C

```c
// CaptchaGen::addFont @ 0x80de794

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::addFont(char const*, int) */

undefined4 __thiscall CaptchaGen::addFont(CaptchaGen *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  FT_Face_conflict local_18;
  FT_Face_conflict local_14;
  FT_Error local_10;
  
  local_10 = FT_New_Face(*(FT_Library *)this,param_1,0,&local_18);
  if (local_10 == 0) {
    local_10 = FT_Set_Pixel_Sizes(local_18,0,param_2);
    if (local_10 == 0) {
      local_10 = FT_Select_Charmap(local_18,FT_ENCODING_UNICODE);
      if (local_10 == 0) {
        local_14 = local_18;
        std::vector<void*,std::allocator<void*>>::push_back
                  ((vector<void*,std::allocator<void*>> *)(this + 4),&local_14);
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
