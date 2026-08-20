# CharString

`_ZN10CharStringC1EPKci`

`CharString::CharString(char const*, int)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6a6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6a6c  _ZN10CharStringC1EPKci
#           CharString::CharString(char const*, int)
# range [0x08ad6a6c, 0x08ad6ad5]
08ad6a6c +0x00:  push   %ebp
08ad6a6d +0x01:  mov    %esp,%ebp
08ad6a6f +0x03:  push   %ebx
08ad6a70 +0x04:  sub    $0x24,%esp
08ad6a73 +0x07:  cmpl   $0x0,0x10(%ebp)
08ad6a77 +0x0b:  jne    08ad6a8f <+0x23>
08ad6a79 +0x0d:  mov    &_ZL21s_emptyCharStringData,%eax
08ad6a7e +0x12:  mov    %eax,0x4(%esp)
08ad6a82 +0x16:  mov    0x8(%ebp),%eax
08ad6a85 +0x19:  mov    %eax,(%esp)
08ad6a88 +0x1c:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6a8d +0x21:  jmp    08ad6ad0 <+0x64>
08ad6a8f +0x23:  mov    0x10(%ebp),%eax
08ad6a92 +0x26:  mov    %eax,(%esp)
08ad6a95 +0x29:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad6a9a +0x2e:  mov    %eax,-0xc(%ebp)
08ad6a9d +0x31:  mov    0x10(%ebp),%ebx
08ad6aa0 +0x34:  mov    -0xc(%ebp),%eax
08ad6aa3 +0x37:  mov    %eax,(%esp)
08ad6aa6 +0x3a:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6aab +0x3f:  mov    %ebx,0x8(%esp)
08ad6aaf +0x43:  mov    0xc(%ebp),%edx
08ad6ab2 +0x46:  mov    %edx,0x4(%esp)
08ad6ab6 +0x4a:  mov    %eax,(%esp)
08ad6ab9 +0x4d:  call   0807d8a0 <_init+0x198>
08ad6abe +0x52:  mov    -0xc(%ebp),%eax
08ad6ac1 +0x55:  mov    %eax,0x4(%esp)
08ad6ac5 +0x59:  mov    0x8(%ebp),%eax
08ad6ac8 +0x5c:  mov    %eax,(%esp)
08ad6acb +0x5f:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6ad0 +0x64:  add    $0x24,%esp
08ad6ad3 +0x67:  pop    %ebx
08ad6ad4 +0x68:  pop    %ebp
08ad6ad5 +0x69:  ret
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad6a6c

/* DWARF original prototype: void CharString(CharString * this, char * src, int32 length) */

void __thiscall CharString::CharString(CharString *this,char *src,int32 length)

{
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::createTerminated(length);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,length);
    attachData(this,this_00);
  }
  return;
}
```
