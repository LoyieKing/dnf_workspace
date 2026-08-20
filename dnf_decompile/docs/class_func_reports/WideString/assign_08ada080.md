# assign

`_ZN10WideString6assignEw`

`WideString::assign(wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada080  _ZN10WideString6assignEw
#           WideString::assign(wchar_t)
# range [0x08ada080, 0x08ada0cb]
08ada080 +0x00:  push   %ebp
08ada081 +0x01:  mov    %esp,%ebp
08ada083 +0x03:  sub    $0x28,%esp
08ada086 +0x06:  cmpl   $0x0,0xc(%ebp)
08ada08a +0x0a:  jne    08ada099 <+0x19>
08ada08c +0x0c:  mov    0x8(%ebp),%eax
08ada08f +0x0f:  mov    %eax,(%esp)
08ada092 +0x12:  call   08ada0cc <_ZN10WideString5clearEv>  ; WideString::clear()
08ada097 +0x17:  jmp    08ada0ca <+0x4a>
08ada099 +0x19:  movl   $0x1,(%esp)
08ada0a0 +0x20:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08ada0a5 +0x25:  mov    %eax,-0xc(%ebp)
08ada0a8 +0x28:  mov    -0xc(%ebp),%eax
08ada0ab +0x2b:  mov    %eax,(%esp)
08ada0ae +0x2e:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ada0b3 +0x33:  mov    0xc(%ebp),%edx
08ada0b6 +0x36:  mov    %edx,(%eax)
08ada0b8 +0x38:  mov    -0xc(%ebp),%eax
08ada0bb +0x3b:  mov    %eax,0x4(%esp)
08ada0bf +0x3f:  mov    0x8(%ebp),%eax
08ada0c2 +0x42:  mov    %eax,(%esp)
08ada0c5 +0x45:  call   08ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>  ; WideString::replaceData(WideStringData*)
08ada0ca +0x4a:  leave
08ada0cb +0x4b:  ret
```

## 反编译 C

```c
// WideString::assign @ 0x8ada080

/* DWARF original prototype: void assign(WideString * this, wchar src) */

void __thiscall WideString::assign(WideString *this,wchar src)

{
  WideStringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (src == 0) {
    clear(this);
  }
  else {
    this_00 = WideStringData::createTerminated(1);
    pwVar1 = WideStringData::getBuffer(this_00);
    *pwVar1 = src;
    replaceData(this,this_00);
  }
  return;
}
```
