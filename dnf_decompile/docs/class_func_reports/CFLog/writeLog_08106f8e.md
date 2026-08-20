# writeLog

`_ZN5CFLog8writeLogEPKcPc`

`CFLog::writeLog(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CFLog` | `0x08106f8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106f8e  _ZN5CFLog8writeLogEPKcPc
#           CFLog::writeLog(char const*, char*)
# range [0x08106f8e, 0x08106fef]
08106f8e +0x00:  push   %ebp
08106f8f +0x01:  mov    %esp,%ebp
08106f91 +0x03:  sub    $0x7018,%esp
08106f97 +0x09:  mov    0x8(%ebp),%eax
08106f9a +0x0c:  mov    0x4(%eax),%eax
08106f9d +0x0f:  test   %eax,%eax
08106f9f +0x11:  je     08106fed <+0x5f>
08106fa1 +0x13:  mov    0x10(%ebp),%eax
08106fa4 +0x16:  mov    %eax,0x8(%esp)
08106fa8 +0x1a:  mov    0xc(%ebp),%eax
08106fab +0x1d:  mov    %eax,0x4(%esp)
08106faf +0x21:  lea    -0x7008(%ebp),%eax
08106fb5 +0x27:  mov    %eax,(%esp)
08106fb8 +0x2a:  call   0807d7d0 <_init+0xc8>
08106fbd +0x2f:  mov    0x8(%ebp),%eax
08106fc0 +0x32:  mov    0x4(%eax),%eax
08106fc3 +0x35:  lea    -0x7008(%ebp),%edx
08106fc9 +0x3b:  mov    %edx,0x8(%esp)
08106fcd +0x3f:  movl   $"%s\r\n",0x4(%esp)
08106fd5 +0x47:  mov    %eax,(%esp)
08106fd8 +0x4a:  call   0807da90 <_init+0x388>
08106fdd +0x4f:  mov    0x8(%ebp),%eax
08106fe0 +0x52:  mov    0x4(%eax),%eax
08106fe3 +0x55:  mov    %eax,(%esp)
08106fe6 +0x58:  call   0807e8d0 <_init+0x11c8>
08106feb +0x5d:  jmp    08106fee <+0x60>
08106fed +0x5f:  nop
08106fee +0x60:  leave
08106fef +0x61:  ret
```

## 反编译 C

```c
// CFLog::writeLog @ 0x8106f8e

/* CFLog::writeLog(char const*, char*) */

void __thiscall CFLog::writeLog(CFLog *this,char *param_1,char *param_2)

{
  char local_700c [28680];
  
  if (*(int *)(this + 4) != 0) {
    vsprintf(local_700c,param_1,param_2);
    fprintf(*(FILE **)(this + 4),"%s\r\n",local_700c);
    fflush(*(FILE **)(this + 4));
  }
  return;
}
```
