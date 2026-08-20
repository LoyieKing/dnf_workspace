# _WriteLog

`_ZN10CSimpleLog9_WriteLogEPKc`

`CSimpleLog::_WriteLog(char const*)`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fbfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fbfc  _ZN10CSimpleLog9_WriteLogEPKc
#           CSimpleLog::_WriteLog(char const*)
# range [0x0854fbfc, 0x0854fcb7]
0854fbfc +0x00:  push   %ebp
0854fbfd +0x01:  mov    %esp,%ebp
0854fbff +0x03:  sub    $0x28,%esp
0854fc02 +0x06:  mov    0x8(%ebp),%eax
0854fc05 +0x09:  mov    (%eax),%eax
0854fc07 +0x0b:  test   %eax,%eax
0854fc09 +0x0d:  jne    0854fc15 <+0x19>
0854fc0b +0x0f:  mov    $0x0,%eax
0854fc10 +0x14:  jmp    0854fcb6 <+0xba>
0854fc15 +0x19:  lea    -0x10(%ebp),%eax
0854fc18 +0x1c:  mov    %eax,(%esp)
0854fc1b +0x1f:  call   0854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>  ; CSimpleLog::DateTime::DateTime()
0854fc20 +0x24:  mov    0x8(%ebp),%eax
0854fc23 +0x27:  add    $0x4,%eax
0854fc26 +0x2a:  mov    %eax,0x4(%esp)
0854fc2a +0x2e:  lea    -0x10(%ebp),%eax
0854fc2d +0x31:  mov    %eax,(%esp)
0854fc30 +0x34:  call   0854ff62 <_GLOBAL__I__ZN8TimeLog_7setTimeEv+0x1d>  ; global constructors keyed to TimeLog_::setTime()+0x1d
0854fc35 +0x39:  test   %al,%al
0854fc37 +0x3b:  je     0854fc64 <+0x68>
0854fc39 +0x3d:  mov    0x8(%ebp),%eax
0854fc3c +0x40:  mov    %eax,(%esp)
0854fc3f +0x43:  call   0854fb06 <_ZN10CSimpleLog9CloseFileEv>  ; CSimpleLog::CloseFile()
0854fc44 +0x48:  lea    -0x10(%ebp),%eax
0854fc47 +0x4b:  mov    %eax,0x4(%esp)
0854fc4b +0x4f:  mov    0x8(%ebp),%eax
0854fc4e +0x52:  mov    %eax,(%esp)
0854fc51 +0x55:  call   0854fb32 <_ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE>  ; CSimpleLog::CreateLogFile(CSimpleLog::DateTime&)
0854fc56 +0x5a:  xor    $0x1,%eax
0854fc59 +0x5d:  test   %al,%al
0854fc5b +0x5f:  je     0854fc64 <+0x68>
0854fc5d +0x61:  mov    $0x0,%eax
0854fc62 +0x66:  jmp    0854fcb6 <+0xba>
0854fc64 +0x68:  mov    0x8(%ebp),%eax
0854fc67 +0x6b:  add    $0x4,%eax
0854fc6a +0x6e:  lea    -0x10(%ebp),%edx
0854fc6d +0x71:  cmp    %edx,%eax
0854fc6f +0x73:  je     0854fc88 <+0x8c>
0854fc71 +0x75:  movl   $0x7,0x8(%esp)
0854fc79 +0x7d:  lea    -0x10(%ebp),%edx
0854fc7c +0x80:  mov    %edx,0x4(%esp)
0854fc80 +0x84:  mov    %eax,(%esp)
0854fc83 +0x87:  call   0807d8a0 <_init+0x198>
0854fc88 +0x8c:  mov    0x8(%ebp),%eax
0854fc8b +0x8f:  mov    (%eax),%eax
0854fc8d +0x91:  mov    0xc(%ebp),%edx
0854fc90 +0x94:  mov    %edx,0x8(%esp)
0854fc94 +0x98:  movl   $"%s\r\n",0x4(%esp)
0854fc9c +0xa0:  mov    %eax,(%esp)
0854fc9f +0xa3:  call   0807da90 <_init+0x388>
0854fca4 +0xa8:  mov    0x8(%ebp),%eax
0854fca7 +0xab:  mov    (%eax),%eax
0854fca9 +0xad:  mov    %eax,(%esp)
0854fcac +0xb0:  call   0807e8d0 <_init+0x11c8>
0854fcb1 +0xb5:  mov    $0x1,%eax
0854fcb6 +0xba:  leave
0854fcb7 +0xbb:  ret
```

## 反编译 C

```c
// CSimpleLog::_WriteLog @ 0x854fbfc

/* CSimpleLog::_WriteLog(char const*) */

undefined4 __thiscall CSimpleLog::_WriteLog(CSimpleLog *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  DateTime local_14 [16];
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    DateTime::DateTime(local_14);
    cVar1 = DateTime::DiffDay(local_14,(DateTime *)(this + 4));
    if (cVar1 != '\0') {
      CloseFile(this);
      cVar1 = CreateLogFile(this,local_14);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    if ((DateTime *)(this + 4) != local_14) {
      memcpy((DateTime *)(this + 4),local_14,7);
    }
    fprintf(*(FILE **)this,"%s\r\n",param_1);
    fflush(*(FILE **)this);
    uVar2 = 1;
  }
  return uVar2;
}
```
