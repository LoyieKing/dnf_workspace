# concat

`_ZN10CharString6concatERKS_c`

`CharString::concat(CharString const&, char)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad87ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad87ae  _ZN10CharString6concatERKS_c
#           CharString::concat(CharString const&, char)
# range [0x08ad87ae, 0x08ad8895]
08ad87ae +0x00:  push   %ebp
08ad87af +0x01:  mov    %esp,%ebp
08ad87b1 +0x03:  push   %edi
08ad87b2 +0x04:  push   %esi
08ad87b3 +0x05:  push   %ebx
08ad87b4 +0x06:  sub    $0x3c,%esp
08ad87b7 +0x09:  mov    0x8(%ebp),%ebx
08ad87ba +0x0c:  mov    0x10(%ebp),%eax
08ad87bd +0x0f:  mov    %al,-0x2c(%ebp)
08ad87c0 +0x12:  mov    0xc(%ebp),%eax
08ad87c3 +0x15:  mov    %eax,(%esp)
08ad87c6 +0x18:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad87cb +0x1d:  test   %eax,%eax
08ad87cd +0x1f:  sete   %al
08ad87d0 +0x22:  test   %al,%al
08ad87d2 +0x24:  je     08ad87eb <+0x3d>
08ad87d4 +0x26:  mov    %ebx,%eax
08ad87d6 +0x28:  movsbl -0x2c(%ebp),%edx
08ad87da +0x2c:  mov    %edx,0x4(%esp)
08ad87de +0x30:  mov    %eax,(%esp)
08ad87e1 +0x33:  call   08ad6b60 <_ZN10CharStringC1Ec>  ; CharString::CharString(char)
08ad87e6 +0x38:  jmp    08ad8887 <+0xd9>
08ad87eb +0x3d:  cmpb   $0x0,-0x2c(%ebp)
08ad87ef +0x41:  jne    08ad8807 <+0x59>
08ad87f1 +0x43:  mov    %ebx,%eax
08ad87f3 +0x45:  mov    0xc(%ebp),%edx
08ad87f6 +0x48:  mov    %edx,0x4(%esp)
08ad87fa +0x4c:  mov    %eax,(%esp)
08ad87fd +0x4f:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad8802 +0x54:  jmp    08ad8887 <+0xd9>
08ad8807 +0x59:  mov    0xc(%ebp),%eax
08ad880a +0x5c:  mov    %eax,(%esp)
08ad880d +0x5f:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8812 +0x64:  add    $0x1,%eax
08ad8815 +0x67:  mov    %eax,(%esp)
08ad8818 +0x6a:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad881d +0x6f:  mov    %eax,-0x1c(%ebp)
08ad8820 +0x72:  mov    0xc(%ebp),%eax
08ad8823 +0x75:  mov    %eax,(%esp)
08ad8826 +0x78:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad882b +0x7d:  mov    %eax,%edi
08ad882d +0x7f:  mov    0xc(%ebp),%eax
08ad8830 +0x82:  mov    %eax,(%esp)
08ad8833 +0x85:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8838 +0x8a:  mov    %eax,%esi
08ad883a +0x8c:  mov    -0x1c(%ebp),%eax
08ad883d +0x8f:  mov    %eax,(%esp)
08ad8840 +0x92:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8845 +0x97:  mov    %edi,0x8(%esp)
08ad8849 +0x9b:  mov    %esi,0x4(%esp)
08ad884d +0x9f:  mov    %eax,(%esp)
08ad8850 +0xa2:  call   0807d8a0 <_init+0x198>
08ad8855 +0xa7:  mov    -0x1c(%ebp),%eax
08ad8858 +0xaa:  mov    %eax,(%esp)
08ad885b +0xad:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8860 +0xb2:  mov    %eax,%esi
08ad8862 +0xb4:  mov    0xc(%ebp),%eax
08ad8865 +0xb7:  mov    %eax,(%esp)
08ad8868 +0xba:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad886d +0xbf:  lea    (%esi,%eax,1),%edx
08ad8870 +0xc2:  movzbl -0x2c(%ebp),%eax
08ad8874 +0xc6:  mov    %al,(%edx)
08ad8876 +0xc8:  mov    %ebx,%eax
08ad8878 +0xca:  mov    -0x1c(%ebp),%edx
08ad887b +0xcd:  mov    %edx,0x4(%esp)
08ad887f +0xd1:  mov    %eax,(%esp)
08ad8882 +0xd4:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad8887 +0xd9:  mov    %ebx,%eax
08ad8889 +0xdb:  mov    %ebx,%eax
08ad888b +0xdd:  add    $0x3c,%esp
08ad888e +0xe0:  pop    %ebx
08ad888f +0xe1:  pop    %esi
08ad8890 +0xe2:  pop    %edi
08ad8891 +0xe3:  pop    %ebp
08ad8892 +0xe4:  ret    $0x4
08ad8895 +0xe7:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad87ae

CharString * CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char src2)

{
  int32 iVar1;
  CharStringData *this;
  size_t __n;
  char *pcVar2;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else if (src2 == '\0') {
    CharString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    this = CharStringData::createTerminated(iVar1 + 1);
    __n = length(src1);
    pcVar2 = c_str(src1);
    __dest = CharStringData::getBuffer(this);
    memcpy(__dest,pcVar2,__n);
    pcVar2 = CharStringData::getBuffer(this);
    iVar1 = length(src1);
    pcVar2[iVar1] = src2;
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
