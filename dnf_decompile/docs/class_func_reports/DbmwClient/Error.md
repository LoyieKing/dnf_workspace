# Error

`_ZN10DbmwClient5ErrorEiiPcz`

`DbmwClient::Error(int, int, char*, ...)`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120c18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120c18  _ZN10DbmwClient5ErrorEiiPcz
#           DbmwClient::Error(int, int, char*, ...)
# range [0x08120c18, 0x08120ccf]
08120c18 +0x00:  push   %ebp
08120c19 +0x01:  mov    %esp,%ebp
08120c1b +0x03:  push   %ebx
08120c1c +0x04:  sub    $0xe4,%esp
08120c22 +0x0a:  lea    0x18(%ebp),%eax
08120c25 +0x0d:  mov    %eax,-0x10(%ebp)
08120c28 +0x10:  call   0807dd70 <_init+0x668>
08120c2d +0x15:  mov    (%eax),%eax
08120c2f +0x17:  mov    %eax,-0xc(%ebp)
08120c32 +0x1a:  mov    -0x10(%ebp),%eax
08120c35 +0x1d:  mov    %eax,0x8(%esp)
08120c39 +0x21:  mov    0x14(%ebp),%eax
08120c3c +0x24:  mov    %eax,0x4(%esp)
08120c40 +0x28:  lea    -0xd8(%ebp),%eax
08120c46 +0x2e:  mov    %eax,(%esp)
08120c49 +0x31:  call   0807d7d0 <_init+0xc8>
08120c4e +0x36:  cmpl   $0x0,0x10(%ebp)
08120c52 +0x3a:  je     08120c8f <+0x77>
08120c54 +0x3c:  mov    -0xc(%ebp),%eax
08120c57 +0x3f:  mov    %eax,(%esp)
08120c5a +0x42:  call   0807d730 <_init+0x28>
08120c5f +0x47:  mov    %eax,%ebx
08120c61 +0x49:  lea    -0xd8(%ebp),%eax
08120c67 +0x4f:  mov    %eax,(%esp)
08120c6a +0x52:  call   0807e3b0 <_init+0xca8>
08120c6f +0x57:  mov    %eax,%edx
08120c71 +0x59:  lea    -0xd8(%ebp),%eax
08120c77 +0x5f:  add    %edx,%eax
08120c79 +0x61:  mov    %ebx,0x8(%esp)
08120c7d +0x65:  movl   $": %s\n",0x4(%esp)
08120c85 +0x6d:  mov    %eax,(%esp)
08120c88 +0x70:  call   0807e440 <_init+0xd38>
08120c8d +0x75:  jmp    08120ca5 <+0x8d>
08120c8f +0x77:  movl   $"\n",0x4(%esp)
08120c97 +0x7f:  lea    -0xd8(%ebp),%eax
08120c9d +0x85:  mov    %eax,(%esp)
08120ca0 +0x88:  call   0807dd60 <_init+0x658>
08120ca5 +0x8d:  mov    &stderr,%eax
08120caa +0x92:  mov    %eax,0x4(%esp)
08120cae +0x96:  lea    -0xd8(%ebp),%eax
08120cb4 +0x9c:  mov    %eax,(%esp)
08120cb7 +0x9f:  call   0807e720 <_init+0x1018>
08120cbc +0xa4:  call   0807dd70 <_init+0x668>
08120cc1 +0xa9:  mov    -0xc(%ebp),%edx
08120cc4 +0xac:  mov    %edx,(%eax)
08120cc6 +0xae:  add    $0xe4,%esp
08120ccc +0xb4:  pop    %ebx
08120ccd +0xb5:  pop    %ebp
08120cce +0xb6:  ret
08120ccf +0xb7:  nop
```

## 反编译 C

```c
// DbmwClient::Error @ 0x8120c18

/* DbmwClient::Error(int, int, char*, ...) */

void __thiscall DbmwClient::Error(DbmwClient *this,int param_1,int param_2,char *param_3,...)

{
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  char local_dc [200];
  undefined1 *local_14;
  int local_10;
  
  local_14 = &stack0x00000014;
  piVar1 = __errno_location();
  local_10 = *piVar1;
  vsprintf(local_dc,param_3,local_14);
  if (param_2 == 0) {
    strcat(local_dc,"\n");
  }
  else {
    pcVar2 = strerror(local_10);
    sVar3 = strlen(local_dc);
    sprintf(local_dc + sVar3,": %s\n",pcVar2);
  }
  fputs(local_dc,stderr);
  piVar1 = __errno_location();
  *piVar1 = local_10;
  return;
}
```
