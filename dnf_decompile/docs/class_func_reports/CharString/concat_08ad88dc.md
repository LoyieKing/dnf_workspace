# concat

`_ZN10CharString6concatEPKciRKS_`

`CharString::concat(char const*, int, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad88dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad88dc  _ZN10CharString6concatEPKciRKS_
#           CharString::concat(char const*, int, CharString const&)
# range [0x08ad88dc, 0x08ad897b]
08ad88dc +0x00:  push   %ebp
08ad88dd +0x01:  mov    %esp,%ebp
08ad88df +0x03:  push   %edi
08ad88e0 +0x04:  push   %esi
08ad88e1 +0x05:  push   %ebx
08ad88e2 +0x06:  sub    $0x2c,%esp
08ad88e5 +0x09:  mov    0x8(%ebp),%ebx
08ad88e8 +0x0c:  cmpl   $0x0,0x10(%ebp)
08ad88ec +0x10:  jne    08ad8901 <+0x25>
08ad88ee +0x12:  mov    %ebx,%eax
08ad88f0 +0x14:  mov    0x14(%ebp),%edx
08ad88f3 +0x17:  mov    %edx,0x4(%esp)
08ad88f7 +0x1b:  mov    %eax,(%esp)
08ad88fa +0x1e:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad88ff +0x23:  jmp    08ad896a <+0x8e>
08ad8901 +0x25:  mov    0x14(%ebp),%eax
08ad8904 +0x28:  mov    %eax,(%esp)
08ad8907 +0x2b:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad890c +0x30:  test   %eax,%eax
08ad890e +0x32:  sete   %al
08ad8911 +0x35:  test   %al,%al
08ad8913 +0x37:  je     08ad892f <+0x53>
08ad8915 +0x39:  mov    %ebx,%eax
08ad8917 +0x3b:  mov    0x10(%ebp),%edx
08ad891a +0x3e:  mov    %edx,0x8(%esp)
08ad891e +0x42:  mov    0xc(%ebp),%edx
08ad8921 +0x45:  mov    %edx,0x4(%esp)
08ad8925 +0x49:  mov    %eax,(%esp)
08ad8928 +0x4c:  call   08ad6a6c <_ZN10CharStringC1EPKci>  ; CharString::CharString(char const*, int)
08ad892d +0x51:  jmp    08ad896a <+0x8e>
08ad892f +0x53:  mov    %ebx,%edi
08ad8931 +0x55:  mov    0x14(%ebp),%eax
08ad8934 +0x58:  mov    %eax,(%esp)
08ad8937 +0x5b:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad893c +0x60:  mov    %eax,%esi
08ad893e +0x62:  mov    0x14(%ebp),%eax
08ad8941 +0x65:  mov    %eax,(%esp)
08ad8944 +0x68:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8949 +0x6d:  mov    %esi,0x10(%esp)
08ad894d +0x71:  mov    %eax,0xc(%esp)
08ad8951 +0x75:  mov    0x10(%ebp),%eax
08ad8954 +0x78:  mov    %eax,0x8(%esp)
08ad8958 +0x7c:  mov    0xc(%ebp),%eax
08ad895b +0x7f:  mov    %eax,0x4(%esp)
08ad895f +0x83:  mov    %edi,(%esp)
08ad8962 +0x86:  call   08ad8568 <_ZN10CharString6concatEPKciS1_i>  ; CharString::concat(char const*, int, char const*, int)
08ad8967 +0x8b:  sub    $0x4,%esp
08ad896a +0x8e:  mov    %ebx,%eax
08ad896c +0x90:  mov    %ebx,%eax
08ad896e +0x92:  lea    -0xc(%ebp),%esp
08ad8971 +0x95:  add    $0x0,%esp
08ad8974 +0x98:  pop    %ebx
08ad8975 +0x99:  pop    %esi
08ad8976 +0x9a:  pop    %edi
08ad8977 +0x9b:  pop    %ebp
08ad8978 +0x9c:  ret    $0x4
08ad897b +0x9f:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad88dc

CharString *
CharString::concat(CharString *__return_storage_ptr__,char *src1,int32 len1,CharString *src2)

{
  int32 iVar1;
  char *src2_00;
  
  if (len1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1,len1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      concat(__return_storage_ptr__,src1,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}
```
