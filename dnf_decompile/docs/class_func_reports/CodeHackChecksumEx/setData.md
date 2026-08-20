# setData

`_ZN18CodeHackChecksumEx7setDataEPKc`

`CodeHackChecksumEx::setData(char const*)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a802  _ZN18CodeHackChecksumEx7setDataEPKc
#           CodeHackChecksumEx::setData(char const*)
# range [0x0808a802, 0x0808a8c7]
0808a802 +0x00:  push   %ebp
0808a803 +0x01:  mov    %esp,%ebp
0808a805 +0x03:  push   %ebx
0808a806 +0x04:  sub    $0x44,%esp
0808a809 +0x07:  mov    0xc(%ebp),%eax
0808a80c +0x0a:  movzbl (%eax),%eax
0808a80f +0x0d:  movsbl %al,%eax
0808a812 +0x10:  mov    %eax,-0x14(%ebp)
0808a815 +0x13:  addl   $0x4,0xc(%ebp)
0808a819 +0x17:  mov    -0x14(%ebp),%ebx
0808a81c +0x1a:  mov    0xc(%ebp),%eax
0808a81f +0x1d:  mov    %eax,(%esp)
0808a822 +0x20:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
0808a827 +0x25:  mov    0x8(%ebp),%edx
0808a82a +0x28:  add    $0xc,%edx
0808a82d +0x2b:  mov    %ebx,0x8(%esp)
0808a831 +0x2f:  mov    %eax,0x4(%esp)
0808a835 +0x33:  mov    %edx,(%esp)
0808a838 +0x36:  call   0807d8d0 <_init+0x1c8>
0808a83d +0x3b:  mov    -0x14(%ebp),%eax
0808a840 +0x3e:  add    %eax,0xc(%ebp)
0808a843 +0x41:  mov    0x8(%ebp),%eax
0808a846 +0x44:  lea    0x110(%eax),%edx
0808a84c +0x4a:  movl   $0x8,0x8(%esp)
0808a854 +0x52:  mov    0xc(%ebp),%eax
0808a857 +0x55:  mov    %eax,0x4(%esp)
0808a85b +0x59:  mov    %edx,(%esp)
0808a85e +0x5c:  call   0807d8a0 <_init+0x198>
0808a863 +0x61:  addl   $0x8,0xc(%ebp)
0808a867 +0x65:  mov    0xc(%ebp),%eax
0808a86a +0x68:  movzbl (%eax),%eax
0808a86d +0x6b:  movsbl %al,%eax
0808a870 +0x6e:  mov    %eax,-0x10(%ebp)
0808a873 +0x71:  addl   $0x4,0xc(%ebp)
0808a877 +0x75:  movl   $0x0,-0xc(%ebp)
0808a87e +0x7c:  jmp    0808a8b4 <+0xb2>
0808a880 +0x7e:  movl   $0x20,0x8(%esp)
0808a888 +0x86:  mov    0xc(%ebp),%eax
0808a88b +0x89:  mov    %eax,0x4(%esp)
0808a88f +0x8d:  lea    -0x34(%ebp),%eax
0808a892 +0x90:  mov    %eax,(%esp)
0808a895 +0x93:  call   0807d8a0 <_init+0x198>
0808a89a +0x98:  addl   $0x20,0xc(%ebp)
0808a89e +0x9c:  mov    0x8(%ebp),%eax
0808a8a1 +0x9f:  lea    -0x34(%ebp),%edx
0808a8a4 +0xa2:  mov    %edx,0x4(%esp)
0808a8a8 +0xa6:  mov    %eax,(%esp)
0808a8ab +0xa9:  call   0808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>  ; CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&)
0808a8b0 +0xae:  addl   $0x1,-0xc(%ebp)
0808a8b4 +0xb2:  mov    -0xc(%ebp),%eax
0808a8b7 +0xb5:  cmp    -0x10(%ebp),%eax
0808a8ba +0xb8:  setl   %al
0808a8bd +0xbb:  test   %al,%al
0808a8bf +0xbd:  jne    0808a880 <+0x7e>
0808a8c1 +0xbf:  add    $0x44,%esp
0808a8c4 +0xc2:  pop    %ebx
0808a8c5 +0xc3:  pop    %ebp
0808a8c6 +0xc4:  ret
0808a8c7 +0xc5:  nop
```

## 反编译 C

```c
// CodeHackChecksumEx::setData @ 0x808a802

/* CodeHackChecksumEx::setData(char const*) */

void __thiscall CodeHackChecksumEx::setData(CodeHackChecksumEx *this,char *param_1)

{
  char *__src;
  char cVar1;
  TCHAR *__src_00;
  CodeHackChecksum local_38 [32];
  size_t local_18;
  int local_14;
  int local_10;
  
  cVar1 = *param_1;
  local_18 = (int)cVar1;
  __src_00 = toTString(param_1 + 4);
  strncpy((char *)(this + 0xc),__src_00,(int)cVar1);
  __src = param_1 + 4 + local_18;
  memcpy(this + 0x110,__src,8);
  local_14 = (int)__src[8];
  param_1 = __src + 0xc;
  for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
    memcpy(local_38,param_1,0x20);
    param_1 = param_1 + 0x20;
    CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)this,local_38);
  }
  return;
}
```
