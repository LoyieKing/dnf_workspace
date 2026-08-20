# ~CaptchaGen

`_ZN10CaptchaGenD1Ev`

`CaptchaGen::~CaptchaGen()`

| 类 | 地址 |
|---|---|
| `CaptchaGen` | `0x080de706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de706  _ZN10CaptchaGenD1Ev
#           CaptchaGen::~CaptchaGen()
# range [0x080de706, 0x080de793]
080de706 +0x00:  push   %ebp
080de707 +0x01:  mov    %esp,%ebp
080de709 +0x03:  push   %esi
080de70a +0x04:  push   %ebx
080de70b +0x05:  sub    $0x20,%esp
080de70e +0x08:  movl   $0x0,-0xc(%ebp)
080de715 +0x0f:  jmp    080de73a <+0x34>
080de717 +0x11:  mov    -0xc(%ebp),%eax
080de71a +0x14:  mov    0x8(%ebp),%edx
080de71d +0x17:  add    $0x4,%edx
080de720 +0x1a:  mov    %eax,0x4(%esp)
080de724 +0x1e:  mov    %edx,(%esp)
080de727 +0x21:  call   080df88e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0xaa>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0xaa
080de72c +0x26:  mov    (%eax),%eax
080de72e +0x28:  mov    %eax,(%esp)
080de731 +0x2b:  call   087c14b0 <FT_Done_Face>
080de736 +0x30:  addl   $0x1,-0xc(%ebp)
080de73a +0x34:  mov    0x8(%ebp),%eax
080de73d +0x37:  add    $0x4,%eax
080de740 +0x3a:  mov    %eax,(%esp)
080de743 +0x3d:  call   080df872 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x8e>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x8e
080de748 +0x42:  cmp    -0xc(%ebp),%eax
080de74b +0x45:  setg   %al
080de74e +0x48:  test   %al,%al
080de750 +0x4a:  jne    080de717 <+0x11>
080de752 +0x4c:  mov    0x8(%ebp),%eax
080de755 +0x4f:  mov    (%eax),%eax
080de757 +0x51:  mov    %eax,(%esp)
080de75a +0x54:  call   087bca50 <FT_Done_FreeType>
080de75f +0x59:  jmp    080de77f <+0x79>
080de761 +0x5b:  mov    %edx,%ebx
080de763 +0x5d:  mov    %eax,%esi
080de765 +0x5f:  mov    0x8(%ebp),%eax
080de768 +0x62:  add    $0x4,%eax
080de76b +0x65:  mov    %eax,(%esp)
080de76e +0x68:  call   080df814 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x30>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x30
080de773 +0x6d:  mov    %esi,%eax
080de775 +0x6f:  mov    %ebx,%edx
080de777 +0x71:  mov    %eax,(%esp)
080de77a +0x74:  call   08ae3750 <_Unwind_Resume>
080de77f +0x79:  mov    0x8(%ebp),%eax
080de782 +0x7c:  add    $0x4,%eax
080de785 +0x7f:  mov    %eax,(%esp)
080de788 +0x82:  call   080df814 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x30>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x30
080de78d +0x87:  add    $0x20,%esp
080de790 +0x8a:  pop    %ebx
080de791 +0x8b:  pop    %esi
080de792 +0x8c:  pop    %ebp
080de793 +0x8d:  ret
```

## 反编译 C

```c
// CaptchaGen::~CaptchaGen @ 0x80de706

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::~CaptchaGen() */

void __thiscall CaptchaGen::~CaptchaGen(CaptchaGen *this)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar2 = std::vector<void*,std::allocator<void*>>::size
                      ((vector<void*,std::allocator<void*>> *)(this + 4));
    if (iVar2 <= (int)local_10) break;
    puVar1 = (undefined4 *)
             std::vector<void*,std::allocator<void*>>::operator[]
                       ((vector<void*,std::allocator<void*>> *)(this + 4),local_10);
                    /* try { // try from 080de731 to 080de75e has its CatchHandler @ 080de761 */
    FT_Done_Face((FT_Face_conflict)*puVar1);
    local_10 = local_10 + 1;
  }
  FT_Done_FreeType(*(FT_Library_conflict *)this);
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 4));
  return;
}
```
