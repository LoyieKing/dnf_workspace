# Stream

`_ZN6StreamC1ERS_`

`Stream::Stream(Stream&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bd14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bd14  _ZN6StreamC1ERS_
#           Stream::Stream(Stream&)
# range [0x0861bd14, 0x0861bd6b]
0861bd14 +0x00:  push   %ebp
0861bd15 +0x01:  mov    %esp,%ebp
0861bd17 +0x03:  push   %ebx
0861bd18 +0x04:  sub    $0x44,%esp
0861bd1b +0x07:  mov    0x8(%ebp),%eax
0861bd1e +0x0a:  movl   $&_ZTV6Stream+0x8,(%eax)
0861bd24 +0x10:  lea    -0x30(%ebp),%eax
0861bd27 +0x13:  mov    %eax,(%esp)
0861bd2a +0x16:  call   0861bc08 <_ZN6StreamC1Ev>  ; Stream::Stream()
0861bd2f +0x1b:  lea    -0x30(%ebp),%eax
0861bd32 +0x1e:  mov    %eax,(%esp)
0861bd35 +0x21:  call   0861bd6c <_ZN6StreamD1Ev>  ; Stream::~Stream()
0861bd3a +0x26:  mov    0xc(%ebp),%eax
0861bd3d +0x29:  mov    %eax,(%esp)
0861bd40 +0x2c:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0861bd45 +0x31:  mov    %eax,%ebx
0861bd47 +0x33:  mov    0xc(%ebp),%eax
0861bd4a +0x36:  mov    %eax,(%esp)
0861bd4d +0x39:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
0861bd52 +0x3e:  mov    %ebx,0x8(%esp)
0861bd56 +0x42:  mov    %eax,0x4(%esp)
0861bd5a +0x46:  mov    0x8(%ebp),%eax
0861bd5d +0x49:  mov    %eax,(%esp)
0861bd60 +0x4c:  call   0861c3f4 <_ZN6Stream10put_binaryEPvi>  ; Stream::put_binary(void*, int)
0861bd65 +0x51:  add    $0x44,%esp
0861bd68 +0x54:  pop    %ebx
0861bd69 +0x55:  pop    %ebp
0861bd6a +0x56:  ret
0861bd6b +0x57:  nop
```

## 反编译 C

```c
// Stream::Stream @ 0x861bd14

/* Stream::Stream(Stream&) */

void __thiscall Stream::Stream(Stream *this,Stream *param_1)

{
  int iVar1;
  void *pvVar2;
  Stream local_34 [44];
  
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  Stream(local_34);
  ~Stream(local_34);
  iVar1 = length(param_1);
  pvVar2 = (void *)get_buffer(param_1);
  put_binary(this,pvVar2,iVar1);
  return;
}
```
