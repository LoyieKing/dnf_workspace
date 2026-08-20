# WriteLoginInfo

`_ZN6OS_API14WriteLoginInfoEPKcS1_z`

`OS_API::WriteLoginInfo(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c71e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c71e  _ZN6OS_API14WriteLoginInfoEPKcS1_z
#           OS_API::WriteLoginInfo(char const*, char const*, ...)
# range [0x0858c71e, 0x0858c789]
0858c71e +0x00:  push   %ebp
0858c71f +0x01:  mov    %esp,%ebp
0858c721 +0x03:  sub    $0x428,%esp
0858c727 +0x09:  movl   $"wb",0x4(%esp)
0858c72f +0x11:  mov    0x8(%ebp),%eax
0858c732 +0x14:  mov    %eax,(%esp)
0858c735 +0x17:  call   0807e770 <_init+0x1068>
0858c73a +0x1c:  mov    %eax,-0xc(%ebp)
0858c73d +0x1f:  cmpl   $0x0,-0xc(%ebp)
0858c741 +0x23:  je     0858c787 <+0x69>
0858c743 +0x25:  lea    0x10(%ebp),%eax
0858c746 +0x28:  mov    %eax,-0x10(%ebp)
0858c749 +0x2b:  mov    -0x10(%ebp),%eax
0858c74c +0x2e:  mov    %eax,0x8(%esp)
0858c750 +0x32:  mov    0xc(%ebp),%eax
0858c753 +0x35:  mov    %eax,0x4(%esp)
0858c757 +0x39:  lea    -0x410(%ebp),%eax
0858c75d +0x3f:  mov    %eax,(%esp)
0858c760 +0x42:  call   0807d7d0 <_init+0xc8>
0858c765 +0x47:  mov    -0xc(%ebp),%eax
0858c768 +0x4a:  mov    %eax,0x4(%esp)
0858c76c +0x4e:  lea    -0x410(%ebp),%eax
0858c772 +0x54:  mov    %eax,(%esp)
0858c775 +0x57:  call   0807e720 <_init+0x1018>
0858c77a +0x5c:  mov    -0xc(%ebp),%eax
0858c77d +0x5f:  mov    %eax,(%esp)
0858c780 +0x62:  call   0807dea0 <_init+0x798>
0858c785 +0x67:  jmp    0858c788 <+0x6a>
0858c787 +0x69:  nop
0858c788 +0x6a:  leave
0858c789 +0x6b:  ret
```

## 反编译 C

```c
// OS_API::WriteLoginInfo @ 0x858c71e

/* OS_API::WriteLoginInfo(char const*, char const*, ...) */

void OS_API::WriteLoginInfo(char *param_1,char *param_2,...)

{
  char local_414 [1024];
  undefined1 *local_14;
  FILE *local_10;
  
  local_10 = fopen(param_1,"wb");
  if (local_10 != (FILE *)0x0) {
    local_14 = &stack0x0000000c;
    vsprintf(local_414,param_2,local_14);
    fputs(local_414,local_10);
    fclose(local_10);
  }
  return;
}
```
