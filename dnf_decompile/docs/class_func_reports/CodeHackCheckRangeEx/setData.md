# setData

`_ZN20CodeHackCheckRangeEx7setDataEPKc`

`CodeHackCheckRangeEx::setData(char const*)`

| 类 | 地址 |
|---|---|
| `CodeHackCheckRangeEx` | `0x0808a9cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a9cc  _ZN20CodeHackCheckRangeEx7setDataEPKc
#           CodeHackCheckRangeEx::setData(char const*)
# range [0x0808a9cc, 0x0808aa36]
0808a9cc +0x00:  push   %ebp
0808a9cd +0x01:  mov    %esp,%ebp
0808a9cf +0x03:  push   %ebx
0808a9d0 +0x04:  sub    $0x24,%esp
0808a9d3 +0x07:  mov    0xc(%ebp),%eax
0808a9d6 +0x0a:  movzbl (%eax),%eax
0808a9d9 +0x0d:  movsbl %al,%eax
0808a9dc +0x10:  mov    %eax,-0xc(%ebp)
0808a9df +0x13:  addl   $0x4,0xc(%ebp)
0808a9e3 +0x17:  mov    -0xc(%ebp),%ebx
0808a9e6 +0x1a:  mov    0xc(%ebp),%eax
0808a9e9 +0x1d:  mov    %eax,(%esp)
0808a9ec +0x20:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
0808a9f1 +0x25:  mov    0x8(%ebp),%edx
0808a9f4 +0x28:  mov    %ebx,0x8(%esp)
0808a9f8 +0x2c:  mov    %eax,0x4(%esp)
0808a9fc +0x30:  mov    %edx,(%esp)
0808a9ff +0x33:  call   0807d8d0 <_init+0x1c8>
0808aa04 +0x38:  mov    -0xc(%ebp),%eax
0808aa07 +0x3b:  add    %eax,0xc(%ebp)
0808aa0a +0x3e:  mov    0x8(%ebp),%eax
0808aa0d +0x41:  lea    0x104(%eax),%edx
0808aa13 +0x47:  movl   $0x8,0x8(%esp)
0808aa1b +0x4f:  mov    0xc(%ebp),%eax
0808aa1e +0x52:  mov    %eax,0x4(%esp)
0808aa22 +0x56:  mov    %edx,(%esp)
0808aa25 +0x59:  call   0807d8a0 <_init+0x198>
0808aa2a +0x5e:  addl   $0x8,0xc(%ebp)
0808aa2e +0x62:  mov    0xc(%ebp),%eax
0808aa31 +0x65:  add    $0x24,%esp
0808aa34 +0x68:  pop    %ebx
0808aa35 +0x69:  pop    %ebp
0808aa36 +0x6a:  ret
```

## 反编译 C

```c
// CodeHackCheckRangeEx::setData @ 0x808a9cc

/* CodeHackCheckRangeEx::setData(char const*) */

char * __thiscall CodeHackCheckRangeEx::setData(CodeHackCheckRangeEx *this,char *param_1)

{
  char *pszSrc;
  char cVar1;
  TCHAR *__src;
  
  cVar1 = *param_1;
  pszSrc = param_1 + 4;
  __src = toTString(pszSrc);
  strncpy((char *)this,__src,(int)cVar1);
  memcpy(this + 0x104,pszSrc + cVar1,8);
  return pszSrc + cVar1 + 8;
}
```
