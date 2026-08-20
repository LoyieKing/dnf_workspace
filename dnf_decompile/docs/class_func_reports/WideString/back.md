# back

`_ZNK10WideString4backEv`

`WideString::back() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9f36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9f36  _ZNK10WideString4backEv
#           WideString::back() const
# range [0x08ad9f36, 0x08ad9f73]
08ad9f36 +0x00:  push   %ebp
08ad9f37 +0x01:  mov    %esp,%ebp
08ad9f39 +0x03:  push   %ebx
08ad9f3a +0x04:  sub    $0x14,%esp
08ad9f3d +0x07:  mov    0x8(%ebp),%eax
08ad9f40 +0x0a:  mov    %eax,(%esp)
08ad9f43 +0x0d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9f48 +0x12:  test   %eax,%eax
08ad9f4a +0x14:  je     08ad9f69 <+0x33>
08ad9f4c +0x16:  mov    0x8(%ebp),%eax
08ad9f4f +0x19:  mov    (%eax),%ebx
08ad9f51 +0x1b:  mov    0x8(%ebp),%eax
08ad9f54 +0x1e:  mov    %eax,(%esp)
08ad9f57 +0x21:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9f5c +0x26:  sub    $0x1,%eax
08ad9f5f +0x29:  shl    $0x2,%eax
08ad9f62 +0x2c:  lea    (%ebx,%eax,1),%eax
08ad9f65 +0x2f:  mov    (%eax),%eax
08ad9f67 +0x31:  jmp    08ad9f6e <+0x38>
08ad9f69 +0x33:  mov    $0x0,%eax
08ad9f6e +0x38:  add    $0x14,%esp
08ad9f71 +0x3b:  pop    %ebx
08ad9f72 +0x3c:  pop    %ebp
08ad9f73 +0x3d:  ret
```

## 反编译 C

```c
// WideString::back @ 0x8ad9f36

/* DWARF original prototype: wchar back(WideString * this) */

wchar __thiscall WideString::back(WideString *this)

{
  wchar *pwVar1;
  int32 iVar2;
  wchar wVar3;
  
  iVar2 = length(this);
  if (iVar2 == 0) {
    wVar3 = 0;
  }
  else {
    pwVar1 = this->buffer_;
    iVar2 = length(this);
    wVar3 = pwVar1[iVar2 + -1];
  }
  return wVar3;
}
```
