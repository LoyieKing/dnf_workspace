# WideString

`_ZN10WideStringC1Ew`

`WideString::WideString(wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9bc0  _ZN10WideStringC1Ew
#           WideString::WideString(wchar_t)
# range [0x08ad9bc0, 0x08ad9bf9]
08ad9bc0 +0x00:  push   %ebp
08ad9bc1 +0x01:  mov    %esp,%ebp
08ad9bc3 +0x03:  sub    $0x28,%esp
08ad9bc6 +0x06:  movl   $0x1,(%esp)
08ad9bcd +0x0d:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08ad9bd2 +0x12:  mov    %eax,-0xc(%ebp)
08ad9bd5 +0x15:  mov    -0xc(%ebp),%eax
08ad9bd8 +0x18:  mov    %eax,(%esp)
08ad9bdb +0x1b:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9be0 +0x20:  mov    0xc(%ebp),%edx
08ad9be3 +0x23:  mov    %edx,(%eax)
08ad9be5 +0x25:  mov    -0xc(%ebp),%eax
08ad9be8 +0x28:  mov    %eax,0x4(%esp)
08ad9bec +0x2c:  mov    0x8(%ebp),%eax
08ad9bef +0x2f:  mov    %eax,(%esp)
08ad9bf2 +0x32:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9bf7 +0x37:  leave
08ad9bf8 +0x38:  ret
08ad9bf9 +0x39:  nop
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9bc0

/* DWARF original prototype: void WideString(WideString * this, wchar src) */

void __thiscall WideString::WideString(WideString *this,wchar src)

{
  WideStringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  this_00 = WideStringData::createTerminated(1);
  pwVar1 = WideStringData::getBuffer(this_00);
  *pwVar1 = src;
  attachData(this,this_00);
  return;
}
```
