# CharString

`_ZN10CharStringC1EPKc`

`CharString::CharString(char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad69ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad69ee  _ZN10CharStringC1EPKc
#           CharString::CharString(char const*)
# range [0x08ad69ee, 0x08ad6a6b]
08ad69ee +0x00:  push   %ebp
08ad69ef +0x01:  mov    %esp,%ebp
08ad69f1 +0x03:  push   %ebx
08ad69f2 +0x04:  sub    $0x24,%esp
08ad69f5 +0x07:  mov    0xc(%ebp),%eax
08ad69f8 +0x0a:  mov    %eax,(%esp)
08ad69fb +0x0d:  call   0807e3b0 <_init+0xca8>
08ad6a00 +0x12:  mov    %eax,-0x10(%ebp)
08ad6a03 +0x15:  cmpl   $0x0,-0x10(%ebp)
08ad6a07 +0x19:  jne    08ad6a1f <+0x31>
08ad6a09 +0x1b:  mov    &_ZL21s_emptyCharStringData,%eax
08ad6a0e +0x20:  mov    %eax,0x4(%esp)
08ad6a12 +0x24:  mov    0x8(%ebp),%eax
08ad6a15 +0x27:  mov    %eax,(%esp)
08ad6a18 +0x2a:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6a1d +0x2f:  jmp    08ad6a65 <+0x77>
08ad6a1f +0x31:  mov    -0x10(%ebp),%eax
08ad6a22 +0x34:  mov    %eax,(%esp)
08ad6a25 +0x37:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad6a2a +0x3c:  mov    %eax,-0xc(%ebp)
08ad6a2d +0x3f:  mov    -0x10(%ebp),%eax
08ad6a30 +0x42:  add    $0x1,%eax
08ad6a33 +0x45:  mov    %eax,%ebx
08ad6a35 +0x47:  mov    -0xc(%ebp),%eax
08ad6a38 +0x4a:  mov    %eax,(%esp)
08ad6a3b +0x4d:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6a40 +0x52:  mov    %ebx,0x8(%esp)
08ad6a44 +0x56:  mov    0xc(%ebp),%edx
08ad6a47 +0x59:  mov    %edx,0x4(%esp)
08ad6a4b +0x5d:  mov    %eax,(%esp)
08ad6a4e +0x60:  call   0807d8a0 <_init+0x198>
08ad6a53 +0x65:  mov    -0xc(%ebp),%eax
08ad6a56 +0x68:  mov    %eax,0x4(%esp)
08ad6a5a +0x6c:  mov    0x8(%ebp),%eax
08ad6a5d +0x6f:  mov    %eax,(%esp)
08ad6a60 +0x72:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6a65 +0x77:  add    $0x24,%esp
08ad6a68 +0x7a:  pop    %ebx
08ad6a69 +0x7b:  pop    %ebp
08ad6a6a +0x7c:  ret
08ad6a6b +0x7d:  nop
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad69ee

/* DWARF original prototype: void CharString(CharString * this, char * src) */

void __thiscall CharString::CharString(CharString *this,char *src)

{
  size_t length;
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * data@[???] */
  length = strlen(src);
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::create(length);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,length + 1);
    attachData(this,this_00);
  }
  return;
}
```
