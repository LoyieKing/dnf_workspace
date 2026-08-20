# Stream

`_ZN6StreamC1EPc`

`Stream::Stream(char*)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bcda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bcda  _ZN6StreamC1EPc
#           Stream::Stream(char*)
# range [0x0861bcda, 0x0861bd13]
0861bcda +0x00:  push   %ebp
0861bcdb +0x01:  mov    %esp,%ebp
0861bcdd +0x03:  sub    $0x48,%esp
0861bce0 +0x06:  mov    0x8(%ebp),%eax
0861bce3 +0x09:  movl   $&_ZTV6Stream+0x8,(%eax)
0861bce9 +0x0f:  lea    -0x30(%ebp),%eax
0861bcec +0x12:  mov    %eax,(%esp)
0861bcef +0x15:  call   0861bc08 <_ZN6StreamC1Ev>  ; Stream::Stream()
0861bcf4 +0x1a:  lea    -0x30(%ebp),%eax
0861bcf7 +0x1d:  mov    %eax,(%esp)
0861bcfa +0x20:  call   0861bd6c <_ZN6StreamD1Ev>  ; Stream::~Stream()
0861bcff +0x25:  mov    0xc(%ebp),%eax
0861bd02 +0x28:  mov    %eax,0x4(%esp)
0861bd06 +0x2c:  mov    0x8(%ebp),%eax
0861bd09 +0x2f:  mov    %eax,(%esp)
0861bd0c +0x32:  call   0861c2c8 <_ZN6StreamlsEPc>  ; Stream::operator<<(char*)
0861bd11 +0x37:  leave
0861bd12 +0x38:  ret
0861bd13 +0x39:  nop
```

## 反编译 C

```c
// Stream::Stream @ 0x861bcda

/* Stream::Stream(char*) */

void __thiscall Stream::Stream(Stream *this,char *param_1)

{
  Stream local_34 [48];
  
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  Stream(local_34);
  ~Stream(local_34);
  operator<<(this,param_1);
  return;
}
```
