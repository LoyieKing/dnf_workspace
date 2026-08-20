# assign

`_ZN10CharString6assignEPKci`

`CharString::assign(char const*, int)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6f6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6f6c  _ZN10CharString6assignEPKci
#           CharString::assign(char const*, int)
# range [0x08ad6f6c, 0x08ad6fcd]
08ad6f6c +0x00:  push   %ebp
08ad6f6d +0x01:  mov    %esp,%ebp
08ad6f6f +0x03:  push   %ebx
08ad6f70 +0x04:  sub    $0x24,%esp
08ad6f73 +0x07:  cmpl   $0x0,0x10(%ebp)
08ad6f77 +0x0b:  jne    08ad6f86 <+0x1a>
08ad6f79 +0x0d:  mov    0x8(%ebp),%eax
08ad6f7c +0x10:  mov    %eax,(%esp)
08ad6f7f +0x13:  call   08ad706e <_ZN10CharString5clearEv>  ; CharString::clear()
08ad6f84 +0x18:  jmp    08ad6fc7 <+0x5b>
08ad6f86 +0x1a:  mov    0x10(%ebp),%eax
08ad6f89 +0x1d:  mov    %eax,(%esp)
08ad6f8c +0x20:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad6f91 +0x25:  mov    %eax,-0xc(%ebp)
08ad6f94 +0x28:  mov    0x10(%ebp),%ebx
08ad6f97 +0x2b:  mov    -0xc(%ebp),%eax
08ad6f9a +0x2e:  mov    %eax,(%esp)
08ad6f9d +0x31:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6fa2 +0x36:  mov    %ebx,0x8(%esp)
08ad6fa6 +0x3a:  mov    0xc(%ebp),%edx
08ad6fa9 +0x3d:  mov    %edx,0x4(%esp)
08ad6fad +0x41:  mov    %eax,(%esp)
08ad6fb0 +0x44:  call   0807d8a0 <_init+0x198>
08ad6fb5 +0x49:  mov    -0xc(%ebp),%eax
08ad6fb8 +0x4c:  mov    %eax,0x4(%esp)
08ad6fbc +0x50:  mov    0x8(%ebp),%eax
08ad6fbf +0x53:  mov    %eax,(%esp)
08ad6fc2 +0x56:  call   08ad7180 <_ZN10CharString11replaceDataEP14CharStringData>  ; CharString::replaceData(CharStringData*)
08ad6fc7 +0x5b:  add    $0x24,%esp
08ad6fca +0x5e:  pop    %ebx
08ad6fcb +0x5f:  pop    %ebp
08ad6fcc +0x60:  ret
08ad6fcd +0x61:  nop
```

## 反编译 C

```c
// CharString::assign @ 0x8ad6f6c

/* DWARF original prototype: void assign(CharString * this, char * src, int32 srcLength) */

void __thiscall CharString::assign(CharString *this,char *src,int32 srcLength)

{
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (srcLength == 0) {
    clear(this);
  }
  else {
    this_00 = CharStringData::createTerminated(srcLength);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,srcLength);
    replaceData(this,this_00);
  }
  return;
}
```
