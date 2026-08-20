# concat

`_ZN10CharString6concatERKS_PKci`

`CharString::concat(CharString const&, char const*, int)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad864c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad864c  _ZN10CharString6concatERKS_PKci
#           CharString::concat(CharString const&, char const*, int)
# range [0x08ad864c, 0x08ad86eb]
08ad864c +0x00:  push   %ebp
08ad864d +0x01:  mov    %esp,%ebp
08ad864f +0x03:  push   %edi
08ad8650 +0x04:  push   %esi
08ad8651 +0x05:  push   %ebx
08ad8652 +0x06:  sub    $0x2c,%esp
08ad8655 +0x09:  mov    0x8(%ebp),%ebx
08ad8658 +0x0c:  mov    0xc(%ebp),%eax
08ad865b +0x0f:  mov    %eax,(%esp)
08ad865e +0x12:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8663 +0x17:  test   %eax,%eax
08ad8665 +0x19:  sete   %al
08ad8668 +0x1c:  test   %al,%al
08ad866a +0x1e:  je     08ad8686 <+0x3a>
08ad866c +0x20:  mov    %ebx,%eax
08ad866e +0x22:  mov    0x14(%ebp),%edx
08ad8671 +0x25:  mov    %edx,0x8(%esp)
08ad8675 +0x29:  mov    0x10(%ebp),%edx
08ad8678 +0x2c:  mov    %edx,0x4(%esp)
08ad867c +0x30:  mov    %eax,(%esp)
08ad867f +0x33:  call   08ad6a6c <_ZN10CharStringC1EPKci>  ; CharString::CharString(char const*, int)
08ad8684 +0x38:  jmp    08ad86da <+0x8e>
08ad8686 +0x3a:  cmpl   $0x0,0x14(%ebp)
08ad868a +0x3e:  jne    08ad869f <+0x53>
08ad868c +0x40:  mov    %ebx,%eax
08ad868e +0x42:  mov    0xc(%ebp),%edx
08ad8691 +0x45:  mov    %edx,0x4(%esp)
08ad8695 +0x49:  mov    %eax,(%esp)
08ad8698 +0x4c:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad869d +0x51:  jmp    08ad86da <+0x8e>
08ad869f +0x53:  mov    %ebx,%edi
08ad86a1 +0x55:  mov    0xc(%ebp),%eax
08ad86a4 +0x58:  mov    %eax,(%esp)
08ad86a7 +0x5b:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad86ac +0x60:  mov    %eax,%esi
08ad86ae +0x62:  mov    0xc(%ebp),%eax
08ad86b1 +0x65:  mov    %eax,(%esp)
08ad86b4 +0x68:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad86b9 +0x6d:  mov    0x14(%ebp),%edx
08ad86bc +0x70:  mov    %edx,0x10(%esp)
08ad86c0 +0x74:  mov    0x10(%ebp),%edx
08ad86c3 +0x77:  mov    %edx,0xc(%esp)
08ad86c7 +0x7b:  mov    %esi,0x8(%esp)
08ad86cb +0x7f:  mov    %eax,0x4(%esp)
08ad86cf +0x83:  mov    %edi,(%esp)
08ad86d2 +0x86:  call   08ad8568 <_ZN10CharString6concatEPKciS1_i>  ; CharString::concat(char const*, int, char const*, int)
08ad86d7 +0x8b:  sub    $0x4,%esp
08ad86da +0x8e:  mov    %ebx,%eax
08ad86dc +0x90:  mov    %ebx,%eax
08ad86de +0x92:  lea    -0xc(%ebp),%esp
08ad86e1 +0x95:  add    $0x0,%esp
08ad86e4 +0x98:  pop    %ebx
08ad86e5 +0x99:  pop    %esi
08ad86e6 +0x9a:  pop    %edi
08ad86e7 +0x9b:  pop    %ebp
08ad86e8 +0x9c:  ret    $0x4
08ad86eb +0x9f:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad864c

CharString *
CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char *src2,int32 len2)

{
  int32 iVar1;
  char *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2,len2);
  }
  else if (len2 == 0) {
    CharString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    src1_00 = c_str(src1);
    concat(__return_storage_ptr__,src1_00,iVar1,src2,len2);
  }
  return __return_storage_ptr__;
}
```
