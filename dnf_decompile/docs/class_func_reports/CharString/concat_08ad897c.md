# concat

`_ZN10CharString6concatEcRKS_`

`CharString::concat(char, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad897c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad897c  _ZN10CharString6concatEcRKS_
#           CharString::concat(char, CharString const&)
# range [0x08ad897c, 0x08ad8a53]
08ad897c +0x00:  push   %ebp
08ad897d +0x01:  mov    %esp,%ebp
08ad897f +0x03:  push   %edi
08ad8980 +0x04:  push   %esi
08ad8981 +0x05:  push   %ebx
08ad8982 +0x06:  sub    $0x3c,%esp
08ad8985 +0x09:  mov    0x8(%ebp),%ebx
08ad8988 +0x0c:  mov    0xc(%ebp),%eax
08ad898b +0x0f:  mov    %al,-0x2c(%ebp)
08ad898e +0x12:  cmpb   $0x0,-0x2c(%ebp)
08ad8992 +0x16:  jne    08ad89aa <+0x2e>
08ad8994 +0x18:  mov    %ebx,%eax
08ad8996 +0x1a:  mov    0x10(%ebp),%edx
08ad8999 +0x1d:  mov    %edx,0x4(%esp)
08ad899d +0x21:  mov    %eax,(%esp)
08ad89a0 +0x24:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad89a5 +0x29:  jmp    08ad8a45 <+0xc9>
08ad89aa +0x2e:  mov    0x10(%ebp),%eax
08ad89ad +0x31:  mov    %eax,(%esp)
08ad89b0 +0x34:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad89b5 +0x39:  test   %eax,%eax
08ad89b7 +0x3b:  sete   %al
08ad89ba +0x3e:  test   %al,%al
08ad89bc +0x40:  je     08ad89d2 <+0x56>
08ad89be +0x42:  mov    %ebx,%eax
08ad89c0 +0x44:  movsbl -0x2c(%ebp),%edx
08ad89c4 +0x48:  mov    %edx,0x4(%esp)
08ad89c8 +0x4c:  mov    %eax,(%esp)
08ad89cb +0x4f:  call   08ad6b60 <_ZN10CharStringC1Ec>  ; CharString::CharString(char)
08ad89d0 +0x54:  jmp    08ad8a45 <+0xc9>
08ad89d2 +0x56:  mov    0x10(%ebp),%eax
08ad89d5 +0x59:  mov    %eax,(%esp)
08ad89d8 +0x5c:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad89dd +0x61:  add    $0x1,%eax
08ad89e0 +0x64:  mov    %eax,(%esp)
08ad89e3 +0x67:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad89e8 +0x6c:  mov    %eax,-0x1c(%ebp)
08ad89eb +0x6f:  mov    -0x1c(%ebp),%eax
08ad89ee +0x72:  mov    %eax,(%esp)
08ad89f1 +0x75:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad89f6 +0x7a:  movzbl -0x2c(%ebp),%edx
08ad89fa +0x7e:  mov    %dl,(%eax)
08ad89fc +0x80:  mov    0x10(%ebp),%eax
08ad89ff +0x83:  mov    %eax,(%esp)
08ad8a02 +0x86:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8a07 +0x8b:  mov    %eax,%edi
08ad8a09 +0x8d:  mov    0x10(%ebp),%eax
08ad8a0c +0x90:  mov    %eax,(%esp)
08ad8a0f +0x93:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8a14 +0x98:  mov    %eax,%esi
08ad8a16 +0x9a:  mov    -0x1c(%ebp),%eax
08ad8a19 +0x9d:  mov    %eax,(%esp)
08ad8a1c +0xa0:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8a21 +0xa5:  add    $0x1,%eax
08ad8a24 +0xa8:  mov    %edi,0x8(%esp)
08ad8a28 +0xac:  mov    %esi,0x4(%esp)
08ad8a2c +0xb0:  mov    %eax,(%esp)
08ad8a2f +0xb3:  call   0807d8a0 <_init+0x198>
08ad8a34 +0xb8:  mov    %ebx,%eax
08ad8a36 +0xba:  mov    -0x1c(%ebp),%edx
08ad8a39 +0xbd:  mov    %edx,0x4(%esp)
08ad8a3d +0xc1:  mov    %eax,(%esp)
08ad8a40 +0xc4:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad8a45 +0xc9:  mov    %ebx,%eax
08ad8a47 +0xcb:  mov    %ebx,%eax
08ad8a49 +0xcd:  add    $0x3c,%esp
08ad8a4c +0xd0:  pop    %ebx
08ad8a4d +0xd1:  pop    %esi
08ad8a4e +0xd2:  pop    %edi
08ad8a4f +0xd3:  pop    %ebp
08ad8a50 +0xd4:  ret    $0x4
08ad8a53 +0xd7:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad897c

CharString * CharString::concat(CharString *__return_storage_ptr__,char src1,CharString *src2)

{
  int32 iVar1;
  CharStringData *this;
  char *pcVar2;
  size_t __n;
  char *pcVar3;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (src1 == '\0') {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      this = CharStringData::createTerminated(iVar1 + 1);
      pcVar2 = CharStringData::getBuffer(this);
      *pcVar2 = src1;
      __n = length(src2);
      pcVar2 = c_str(src2);
      pcVar3 = CharStringData::getBuffer(this);
      memcpy(pcVar3 + 1,pcVar2,__n);
      CharString(__return_storage_ptr__,this);
    }
  }
  return __return_storage_ptr__;
}
```
