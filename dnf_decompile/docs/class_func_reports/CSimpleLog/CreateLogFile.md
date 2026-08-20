# CreateLogFile

`_ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE`

`CSimpleLog::CreateLogFile(CSimpleLog::DateTime&)`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fb32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fb32  _ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE
#           CSimpleLog::CreateLogFile(CSimpleLog::DateTime&)
# range [0x0854fb32, 0x0854fbb9]
0854fb32 +0x00:  push   %ebp
0854fb33 +0x01:  mov    %esp,%ebp
0854fb35 +0x03:  push   %edi
0854fb36 +0x04:  push   %ebx
0854fb37 +0x05:  sub    $0x420,%esp
0854fb3d +0x0b:  lea    -0x408(%ebp),%ebx
0854fb43 +0x11:  mov    $0x0,%eax
0854fb48 +0x16:  mov    $0x100,%edx
0854fb4d +0x1b:  mov    %ebx,%edi
0854fb4f +0x1d:  mov    %edx,%ecx
0854fb51 +0x1f:  rep stos %eax,%es:(%edi)
0854fb53 +0x21:  mov    0xc(%ebp),%eax
0854fb56 +0x24:  movzbl 0x3(%eax),%eax
0854fb5a +0x28:  movsbl %al,%ecx
0854fb5d +0x2b:  mov    0xc(%ebp),%eax
0854fb60 +0x2e:  movzbl 0x2(%eax),%eax
0854fb64 +0x32:  movsbl %al,%edx
0854fb67 +0x35:  mov    0xc(%ebp),%eax
0854fb6a +0x38:  movzwl (%eax),%eax
0854fb6d +0x3b:  cwtl
0854fb6e +0x3c:  mov    0x8(%ebp),%ebx
0854fb71 +0x3f:  add    $0xc,%ebx
0854fb74 +0x42:  mov    %ecx,0x14(%esp)
0854fb78 +0x46:  mov    %edx,0x10(%esp)
0854fb7c +0x4a:  mov    %eax,0xc(%esp)
0854fb80 +0x4e:  mov    %ebx,0x8(%esp)
0854fb84 +0x52:  movl   $"%s%04d%02d%02d.%s",0x4(%esp)
0854fb8c +0x5a:  lea    -0x408(%ebp),%eax
0854fb92 +0x60:  mov    %eax,(%esp)
0854fb95 +0x63:  call   0807e440 <_init+0xd38>
0854fb9a +0x68:  lea    -0x408(%ebp),%eax
0854fba0 +0x6e:  mov    %eax,0x4(%esp)
0854fba4 +0x72:  mov    0x8(%ebp),%eax
0854fba7 +0x75:  mov    %eax,(%esp)
0854fbaa +0x78:  call   0854fabc <_ZN10CSimpleLog8OpenFileEPKc>  ; CSimpleLog::OpenFile(char const*)
0854fbaf +0x7d:  add    $0x420,%esp
0854fbb5 +0x83:  pop    %ebx
0854fbb6 +0x84:  pop    %edi
0854fbb7 +0x85:  pop    %ebp
0854fbb8 +0x86:  ret
0854fbb9 +0x87:  nop
```

## 反编译 C

```c
// CSimpleLog::CreateLogFile @ 0x854fb32

/* CSimpleLog::CreateLogFile(CSimpleLog::DateTime&) */

void __thiscall CSimpleLog::CreateLogFile(CSimpleLog *this,DateTime *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_40c [1024];
  
  pcVar2 = local_40c;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  sprintf(local_40c,"%s%04d%02d%02d.%s",this + 0xc,(int)*(short *)param_1,(int)(char)param_1[2],
          (int)(char)param_1[3]);
  OpenFile(this,local_40c);
  return;
}
```
