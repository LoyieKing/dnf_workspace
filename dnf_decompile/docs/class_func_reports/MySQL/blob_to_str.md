# blob_to_str

`_ZN5MySQL11blob_to_strEiPvi`

`MySQL::blob_to_str(int, void*, int)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f452a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f452a  _ZN5MySQL11blob_to_strEiPvi
#           MySQL::blob_to_str(int, void*, int)
# range [0x083f452a, 0x083f460b]
083f452a +0x00:  push   %ebp
083f452b +0x01:  mov    %esp,%ebp
083f452d +0x03:  sub    $0x38,%esp
083f4530 +0x06:  cmpl   $0x0,0xc(%ebp)
083f4534 +0x0a:  js     083f454b <+0x21>
083f4536 +0x0c:  cmpl   $0x9,0xc(%ebp)
083f453a +0x10:  jg     083f454b <+0x21>
083f453c +0x12:  cmpl   $0x0,0x10(%ebp)
083f4540 +0x16:  je     083f454b <+0x21>
083f4542 +0x18:  cmpl   $0x5fff,0x14(%ebp)
083f4549 +0x1f:  jle    083f4591 <+0x67>
083f454b +0x21:  movl   $0x5,0xc(%esp)
083f4553 +0x29:  movl   $0x267,0x8(%esp)
083f455b +0x31:  movl   $&_ZZN5MySQL11blob_to_strEiPviE19__PRETTY_FUNCTION__,0x4(%esp)
083f4563 +0x39:  lea    -0x1c(%ebp),%eax
083f4566 +0x3c:  mov    %eax,(%esp)
083f4569 +0x3f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f456e +0x44:  movl   $0x267,0xc(%esp)
083f4576 +0x4c:  movl   $&_ZZN5MySQL11blob_to_strEiPviE19__PRETTY_FUNCTION__,0x8(%esp)
083f457e +0x54:  movl   $"[%s][%d]",0x4(%esp)
083f4586 +0x5c:  lea    -0x1c(%ebp),%eax
083f4589 +0x5f:  mov    %eax,(%esp)
083f458c +0x62:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f4591 +0x67:  mov    0xc(%ebp),%eax
083f4594 +0x6a:  mov    0x8(%ebp),%edx
083f4597 +0x6d:  imul   $0x6001,%eax,%eax
083f459d +0x73:  lea    (%edx,%eax,1),%eax
083f45a0 +0x76:  add    $0x6010,%eax
083f45a5 +0x7b:  movb   $0x0,0xd(%eax)
083f45a9 +0x7f:  cmpl   $0x0,0x14(%ebp)
083f45ad +0x83:  jle    083f45f6 <+0xcc>
083f45af +0x85:  mov    0xc(%ebp),%eax
083f45b2 +0x88:  imul   $0x6001,%eax,%eax
083f45b8 +0x8e:  add    $0x6010,%eax
083f45bd +0x93:  add    0x8(%ebp),%eax
083f45c0 +0x96:  add    $0xd,%eax
083f45c3 +0x99:  mov    %eax,-0xc(%ebp)
083f45c6 +0x9c:  mov    0x14(%ebp),%ecx
083f45c9 +0x9f:  mov    0x10(%ebp),%edx
083f45cc +0xa2:  mov    0x8(%ebp),%eax
083f45cf +0xa5:  mov    0x4(%eax),%eax
083f45d2 +0xa8:  mov    %ecx,0xc(%esp)
083f45d6 +0xac:  mov    %edx,0x8(%esp)
083f45da +0xb0:  mov    -0xc(%ebp),%edx
083f45dd +0xb3:  mov    %edx,0x4(%esp)
083f45e1 +0xb7:  mov    %eax,(%esp)
083f45e4 +0xba:  call   0873d6f0 <mysql_real_escape_string>
083f45e9 +0xbf:  add    %eax,-0xc(%ebp)
083f45ec +0xc2:  mov    -0xc(%ebp),%eax
083f45ef +0xc5:  movb   $0x0,(%eax)
083f45f2 +0xc8:  addl   $0x1,-0xc(%ebp)
083f45f6 +0xcc:  mov    0xc(%ebp),%eax
083f45f9 +0xcf:  imul   $0x6001,%eax,%eax
083f45ff +0xd5:  add    $0x6010,%eax
083f4604 +0xda:  add    0x8(%ebp),%eax
083f4607 +0xdd:  add    $0xd,%eax
083f460a +0xe0:  leave
083f460b +0xe1:  ret
```

## 反编译 C

```c
// MySQL::blob_to_str @ 0x83f452a

/* MySQL::blob_to_str(int, void*, int) */

MySQL * __thiscall MySQL::blob_to_str(MySQL *this,int param_1,void *param_2,int param_3)

{
  int iVar1;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  if ((((param_1 < 0) || (9 < param_1)) || (param_2 == (void *)0x0)) || (0x5fff < param_3)) {
    cMyTrace::cMyTrace(local_20,"char* MySQL::blob_to_str(int, void*, int)",0x267,5);
    cMyTrace::operator()(local_20,"[%s][%d]","char* MySQL::blob_to_str(int, void*, int)",0x267);
  }
  this[param_1 * 0x6001 + 0x601d] = (MySQL)0x0;
  if (0 < param_3) {
    local_10 = this + param_1 * 0x6001 + 0x601d;
    iVar1 = mysql_real_escape_string(*(undefined4 *)(this + 4),local_10,param_2,param_3);
    local_10[iVar1] = (MySQL)0x0;
  }
  return this + param_1 * 0x6001 + 0x601d;
}
```
