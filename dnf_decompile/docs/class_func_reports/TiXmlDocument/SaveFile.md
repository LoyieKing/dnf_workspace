# SaveFile

`_ZNK13TiXmlDocument8SaveFileEP8_IO_FILE`

`TiXmlDocument::SaveFile(_IO_FILE*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e0960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0960  _ZNK13TiXmlDocument8SaveFileEP8_IO_FILE
#           TiXmlDocument::SaveFile(_IO_FILE*) const
# range [0x087e0960, 0x087e09da]
087e0960 +0x00:  push   %ebp
087e0961 +0x01:  mov    %esp,%ebp
087e0963 +0x03:  sub    $0x18,%esp
087e0966 +0x06:  mov    %esi,-0x4(%ebp)
087e0969 +0x09:  mov    0x8(%ebp),%esi
087e096c +0x0c:  mov    %ebx,-0x8(%ebp)
087e096f +0x0f:  mov    0xc(%ebp),%ebx
087e0972 +0x12:  cmpb   $0x0,0x44(%esi)
087e0976 +0x16:  je     087e09a8 <+0x48>
087e0978 +0x18:  mov    %ebx,0x4(%esp)
087e097c +0x1c:  movl   $0xef,(%esp)
087e0983 +0x23:  call   0807e4c0 <_init+0xdb8>
087e0988 +0x28:  mov    %ebx,0x4(%esp)
087e098c +0x2c:  movl   $0xbb,(%esp)
087e0993 +0x33:  call   0807e4c0 <_init+0xdb8>
087e0998 +0x38:  mov    %ebx,0x4(%esp)
087e099c +0x3c:  movl   $0xbf,(%esp)
087e09a3 +0x43:  call   0807e4c0 <_init+0xdb8>
087e09a8 +0x48:  mov    (%esi),%eax
087e09aa +0x4a:  mov    %ebx,0x4(%esp)
087e09ae +0x4e:  mov    %esi,(%esp)
087e09b1 +0x51:  movl   $0x0,0x8(%esp)
087e09b9 +0x59:  call   *0x8(%eax)
087e09bc +0x5c:  mov    %ebx,(%esp)
087e09bf +0x5f:  call   0807e6c0 <_init+0xfb8>
087e09c4 +0x64:  mov    -0x8(%ebp),%ebx
087e09c7 +0x67:  mov    -0x4(%ebp),%esi
087e09ca +0x6a:  test   %eax,%eax
087e09cc +0x6c:  sete   %al
087e09cf +0x6f:  mov    %ebp,%esp
087e09d1 +0x71:  pop    %ebp
087e09d2 +0x72:  ret
087e09d3 +0x73:  nop
087e09d4 +0x74:  lea    0x0(%esi),%esi
087e09da +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlDocument::SaveFile @ 0x87e0960

/* TiXmlDocument::SaveFile(_IO_FILE*) const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this,_IO_FILE *param_1)

{
  int iVar1;
  
  if (this[0x44] != (TiXmlDocument)0x0) {
    fputc(0xef,param_1);
    fputc(0xbb,param_1);
    fputc(0xbf,param_1);
  }
  (**(code **)(*(int *)this + 8))(this,param_1,0);
  iVar1 = ferror(param_1);
  return iVar1 == 0;
}
```
