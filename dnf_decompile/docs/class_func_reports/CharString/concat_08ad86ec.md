# concat

`_ZN10CharString6concatERKS_S1_`

`CharString::concat(CharString const&, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad86ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad86ec  _ZN10CharString6concatERKS_S1_
#           CharString::concat(CharString const&, CharString const&)
# range [0x08ad86ec, 0x08ad87ab]
08ad86ec +0x00:  push   %ebp
08ad86ed +0x01:  mov    %esp,%ebp
08ad86ef +0x03:  push   %edi
08ad86f0 +0x04:  push   %esi
08ad86f1 +0x05:  push   %ebx
08ad86f2 +0x06:  sub    $0x3c,%esp
08ad86f5 +0x09:  mov    0x8(%ebp),%ebx
08ad86f8 +0x0c:  mov    0xc(%ebp),%eax
08ad86fb +0x0f:  mov    %eax,(%esp)
08ad86fe +0x12:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8703 +0x17:  test   %eax,%eax
08ad8705 +0x19:  sete   %al
08ad8708 +0x1c:  test   %al,%al
08ad870a +0x1e:  je     08ad871f <+0x33>
08ad870c +0x20:  mov    %ebx,%eax
08ad870e +0x22:  mov    0x10(%ebp),%edx
08ad8711 +0x25:  mov    %edx,0x4(%esp)
08ad8715 +0x29:  mov    %eax,(%esp)
08ad8718 +0x2c:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad871d +0x31:  jmp    08ad879d <+0xb1>
08ad871f +0x33:  mov    0x10(%ebp),%eax
08ad8722 +0x36:  mov    %eax,(%esp)
08ad8725 +0x39:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad872a +0x3e:  test   %eax,%eax
08ad872c +0x40:  sete   %al
08ad872f +0x43:  test   %al,%al
08ad8731 +0x45:  je     08ad8746 <+0x5a>
08ad8733 +0x47:  mov    %ebx,%eax
08ad8735 +0x49:  mov    0xc(%ebp),%edx
08ad8738 +0x4c:  mov    %edx,0x4(%esp)
08ad873c +0x50:  mov    %eax,(%esp)
08ad873f +0x53:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad8744 +0x58:  jmp    08ad879d <+0xb1>
08ad8746 +0x5a:  mov    %ebx,-0x20(%ebp)
08ad8749 +0x5d:  mov    0x10(%ebp),%eax
08ad874c +0x60:  mov    %eax,(%esp)
08ad874f +0x63:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8754 +0x68:  mov    %eax,-0x1c(%ebp)
08ad8757 +0x6b:  mov    0x10(%ebp),%eax
08ad875a +0x6e:  mov    %eax,(%esp)
08ad875d +0x71:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8762 +0x76:  mov    %eax,%edi
08ad8764 +0x78:  mov    0xc(%ebp),%eax
08ad8767 +0x7b:  mov    %eax,(%esp)
08ad876a +0x7e:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad876f +0x83:  mov    %eax,%esi
08ad8771 +0x85:  mov    0xc(%ebp),%eax
08ad8774 +0x88:  mov    %eax,(%esp)
08ad8777 +0x8b:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad877c +0x90:  mov    -0x1c(%ebp),%edx
08ad877f +0x93:  mov    %edx,0x10(%esp)
08ad8783 +0x97:  mov    %edi,0xc(%esp)
08ad8787 +0x9b:  mov    %esi,0x8(%esp)
08ad878b +0x9f:  mov    %eax,0x4(%esp)
08ad878f +0xa3:  mov    -0x20(%ebp),%eax
08ad8792 +0xa6:  mov    %eax,(%esp)
08ad8795 +0xa9:  call   08ad8568 <_ZN10CharString6concatEPKciS1_i>  ; CharString::concat(char const*, int, char const*, int)
08ad879a +0xae:  sub    $0x4,%esp
08ad879d +0xb1:  mov    %ebx,%eax
08ad879f +0xb3:  mov    %ebx,%eax
08ad87a1 +0xb5:  lea    -0xc(%ebp),%esp
08ad87a4 +0xb8:  add    $0x0,%esp
08ad87a7 +0xbb:  pop    %ebx
08ad87a8 +0xbc:  pop    %esi
08ad87a9 +0xbd:  pop    %edi
08ad87aa +0xbe:  pop    %ebp
08ad87ab +0xbf:  ret    $0x4
```

## 反编译 C

```c
// CharString::concat @ 0x8ad86ec

CharString *
CharString::concat(CharString *__return_storage_ptr__,CharString *src1,CharString *src2)

{
  int32 iVar1;
  char *src2_00;
  int32 len1;
  char *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      len1 = length(src1);
      src1_00 = c_str(src1);
      concat(__return_storage_ptr__,src1_00,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}
```
