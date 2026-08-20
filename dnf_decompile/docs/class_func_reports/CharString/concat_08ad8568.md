# concat

`_ZN10CharString6concatEPKciS1_i`

`CharString::concat(char const*, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8568` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8568  _ZN10CharString6concatEPKciS1_i
#           CharString::concat(char const*, int, char const*, int)
# range [0x08ad8568, 0x08ad8603]
08ad8568 +0x00:  push   %ebp
08ad8569 +0x01:  mov    %esp,%ebp
08ad856b +0x03:  push   %esi
08ad856c +0x04:  push   %ebx
08ad856d +0x05:  sub    $0x20,%esp
08ad8570 +0x08:  mov    0x8(%ebp),%ebx
08ad8573 +0x0b:  mov    0x18(%ebp),%eax
08ad8576 +0x0e:  mov    0x10(%ebp),%edx
08ad8579 +0x11:  lea    (%edx,%eax,1),%eax
08ad857c +0x14:  test   %eax,%eax
08ad857e +0x16:  jne    08ad858c <+0x24>
08ad8580 +0x18:  mov    %ebx,%eax
08ad8582 +0x1a:  mov    %eax,(%esp)
08ad8585 +0x1d:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad858a +0x22:  jmp    08ad85f9 <+0x91>
08ad858c +0x24:  mov    0x18(%ebp),%eax
08ad858f +0x27:  mov    0x10(%ebp),%edx
08ad8592 +0x2a:  lea    (%edx,%eax,1),%eax
08ad8595 +0x2d:  mov    %eax,(%esp)
08ad8598 +0x30:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad859d +0x35:  mov    %eax,-0xc(%ebp)
08ad85a0 +0x38:  mov    0x10(%ebp),%esi
08ad85a3 +0x3b:  mov    -0xc(%ebp),%eax
08ad85a6 +0x3e:  mov    %eax,(%esp)
08ad85a9 +0x41:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad85ae +0x46:  mov    %esi,0x8(%esp)
08ad85b2 +0x4a:  mov    0xc(%ebp),%edx
08ad85b5 +0x4d:  mov    %edx,0x4(%esp)
08ad85b9 +0x51:  mov    %eax,(%esp)
08ad85bc +0x54:  call   0807d8a0 <_init+0x198>
08ad85c1 +0x59:  mov    0x18(%ebp),%esi
08ad85c4 +0x5c:  mov    -0xc(%ebp),%eax
08ad85c7 +0x5f:  mov    %eax,(%esp)
08ad85ca +0x62:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad85cf +0x67:  mov    0x10(%ebp),%edx
08ad85d2 +0x6a:  lea    (%eax,%edx,1),%edx
08ad85d5 +0x6d:  mov    %esi,0x8(%esp)
08ad85d9 +0x71:  mov    0x14(%ebp),%eax
08ad85dc +0x74:  mov    %eax,0x4(%esp)
08ad85e0 +0x78:  mov    %edx,(%esp)
08ad85e3 +0x7b:  call   0807d8a0 <_init+0x198>
08ad85e8 +0x80:  mov    %ebx,%eax
08ad85ea +0x82:  mov    -0xc(%ebp),%edx
08ad85ed +0x85:  mov    %edx,0x4(%esp)
08ad85f1 +0x89:  mov    %eax,(%esp)
08ad85f4 +0x8c:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad85f9 +0x91:  mov    %ebx,%eax
08ad85fb +0x93:  mov    %ebx,%eax
08ad85fd +0x95:  add    $0x20,%esp
08ad8600 +0x98:  pop    %ebx
08ad8601 +0x99:  pop    %esi
08ad8602 +0x9a:  pop    %ebp
08ad8603 +0x9b:  ret    $0x4
```

## 反编译 C

```c
// CharString::concat @ 0x8ad8568

CharString *
CharString::concat(CharString *__return_storage_ptr__,char *src1,int32 len1,char *src2,int32 len2)

{
  CharStringData *this;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (len1 + len2 == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::createTerminated(len1 + len2);
    pcVar1 = CharStringData::getBuffer(this);
    memcpy(pcVar1,src1,len1);
    pcVar1 = CharStringData::getBuffer(this);
    memcpy(pcVar1 + len1,src2,len2);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
