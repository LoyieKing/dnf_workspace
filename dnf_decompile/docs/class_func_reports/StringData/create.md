# create

`_ZN10StringData6createEi`

`StringData::create(int)`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad68f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad68f8  _ZN10StringData6createEi
#           StringData::create(int)
# range [0x08ad68f8, 0x08ad6933]
08ad68f8 +0x00:  push   %ebp
08ad68f9 +0x01:  mov    %esp,%ebp
08ad68fb +0x03:  sub    $0x28,%esp
08ad68fe +0x06:  mov    0x8(%ebp),%eax
08ad6901 +0x09:  add    $0x8,%eax
08ad6904 +0x0c:  mov    %eax,(%esp)
08ad6907 +0x0f:  call   0807df80 <_init+0x878>
08ad690c +0x14:  mov    %eax,-0xc(%ebp)
08ad690f +0x17:  cmpl   $0x0,-0xc(%ebp)
08ad6913 +0x1b:  jne    08ad691c <+0x24>
08ad6915 +0x1d:  mov    $0x0,%eax
08ad691a +0x22:  jmp    08ad6931 <+0x39>
08ad691c +0x24:  mov    -0xc(%ebp),%eax
08ad691f +0x27:  movl   $0x0,(%eax)
08ad6925 +0x2d:  mov    -0xc(%ebp),%eax
08ad6928 +0x30:  mov    0x8(%ebp),%edx
08ad692b +0x33:  mov    %edx,0x4(%eax)
08ad692e +0x36:  mov    -0xc(%ebp),%eax
08ad6931 +0x39:  leave
08ad6932 +0x3a:  ret
08ad6933 +0x3b:  nop
```

## 反编译 C

```c
// StringData::create @ 0x8ad68f8

StringData * StringData::create(int32 size)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: StringData * data@[???] */
  pSVar1 = malloc(size + 8);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  else {
    pSVar1->refCount_ = 0;
    pSVar1->size_ = size;
  }
  return pSVar1;
}
```
