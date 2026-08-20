# writeLog

`_ZN5CFLog8writeLogEP2tmPKcPc`

`CFLog::writeLog(tm*, char const*, char*)`

| 类 | 地址 |
|---|---|
| `CFLog` | `0x08106ee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106ee2  _ZN5CFLog8writeLogEP2tmPKcPc
#           CFLog::writeLog(tm*, char const*, char*)
# range [0x08106ee2, 0x08106f8d]
08106ee2 +0x00:  push   %ebp
08106ee3 +0x01:  mov    %esp,%ebp
08106ee5 +0x03:  push   %ebx
08106ee6 +0x04:  sub    $0xe024,%esp
08106eec +0x0a:  mov    0x8(%ebp),%eax
08106eef +0x0d:  mov    0x4(%eax),%eax
08106ef2 +0x10:  test   %eax,%eax
08106ef4 +0x12:  je     08106f83 <+0xa1>
08106efa +0x18:  mov    0x14(%ebp),%eax
08106efd +0x1b:  mov    %eax,0x8(%esp)
08106f01 +0x1f:  mov    0x10(%ebp),%eax
08106f04 +0x22:  mov    %eax,0x4(%esp)
08106f08 +0x26:  lea    -0x7008(%ebp),%eax
08106f0e +0x2c:  mov    %eax,(%esp)
08106f11 +0x2f:  call   0807d7d0 <_init+0xc8>
08106f16 +0x34:  mov    0xc(%ebp),%eax
08106f19 +0x37:  mov    (%eax),%ecx
08106f1b +0x39:  mov    0xc(%ebp),%eax
08106f1e +0x3c:  mov    0x4(%eax),%edx
08106f21 +0x3f:  mov    0xc(%ebp),%eax
08106f24 +0x42:  mov    0x8(%eax),%eax
08106f27 +0x45:  lea    -0x7008(%ebp),%ebx
08106f2d +0x4b:  mov    %ebx,0x14(%esp)
08106f31 +0x4f:  mov    %ecx,0x10(%esp)
08106f35 +0x53:  mov    %edx,0xc(%esp)
08106f39 +0x57:  mov    %eax,0x8(%esp)
08106f3d +0x5b:  movl   $"[%02d:%02d:%02d] %s",0x4(%esp)
08106f45 +0x63:  lea    -0xe008(%ebp),%eax
08106f4b +0x69:  mov    %eax,(%esp)
08106f4e +0x6c:  call   0807e440 <_init+0xd38>
08106f53 +0x71:  mov    0x8(%ebp),%eax
08106f56 +0x74:  mov    0x4(%eax),%eax
08106f59 +0x77:  lea    -0xe008(%ebp),%edx
08106f5f +0x7d:  mov    %edx,0x8(%esp)
08106f63 +0x81:  movl   $"%s\r\n",0x4(%esp)
08106f6b +0x89:  mov    %eax,(%esp)
08106f6e +0x8c:  call   0807da90 <_init+0x388>
08106f73 +0x91:  mov    0x8(%ebp),%eax
08106f76 +0x94:  mov    0x4(%eax),%eax
08106f79 +0x97:  mov    %eax,(%esp)
08106f7c +0x9a:  call   0807e8d0 <_init+0x11c8>
08106f81 +0x9f:  jmp    08106f84 <+0xa2>
08106f83 +0xa1:  nop
08106f84 +0xa2:  add    $0xe024,%esp
08106f8a +0xa8:  pop    %ebx
08106f8b +0xa9:  pop    %ebp
08106f8c +0xaa:  ret
08106f8d +0xab:  nop
```

## 反编译 C

```c
// CFLog::writeLog @ 0x8106ee2

/* CFLog::writeLog(tm*, char const*, char*) */

void __thiscall CFLog::writeLog(CFLog *this,tm *param_1,char *param_2,char *param_3)

{
  char local_e00c [28672];
  char local_700c [28676];
  
  if (*(int *)(this + 4) != 0) {
    vsprintf(local_700c,param_2,param_3);
    sprintf(local_e00c,"[%02d:%02d:%02d] %s",param_1->tm_hour,param_1->tm_min,param_1->tm_sec,
            local_700c);
    fprintf(*(FILE **)(this + 4),"%s\r\n",local_e00c);
    fflush(*(FILE **)(this + 4));
  }
  return;
}
```
