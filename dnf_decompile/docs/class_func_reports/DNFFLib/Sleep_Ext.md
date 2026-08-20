# Sleep_Ext

`_ZN7DNFFLib9Sleep_ExtEii`

`DNFFLib::Sleep_Ext(int, int)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108a98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108a98  _ZN7DNFFLib9Sleep_ExtEii
#           DNFFLib::Sleep_Ext(int, int)
# range [0x08108a98, 0x08108ad6]
08108a98 +0x00:  push   %ebp
08108a99 +0x01:  mov    %esp,%ebp
08108a9b +0x03:  sub    $0x38,%esp
08108a9e +0x06:  mov    0x8(%ebp),%eax
08108aa1 +0x09:  mov    %eax,-0x10(%ebp)
08108aa4 +0x0c:  mov    0xc(%ebp),%eax
08108aa7 +0x0f:  mov    %eax,-0xc(%ebp)
08108aaa +0x12:  lea    -0x10(%ebp),%eax
08108aad +0x15:  mov    %eax,0x10(%esp)
08108ab1 +0x19:  movl   $0x0,0xc(%esp)
08108ab9 +0x21:  movl   $0x0,0x8(%esp)
08108ac1 +0x29:  movl   $0x0,0x4(%esp)
08108ac9 +0x31:  movl   $0x0,(%esp)
08108ad0 +0x38:  call   0807e840 <_init+0x1138>
08108ad5 +0x3d:  leave
08108ad6 +0x3e:  ret
```

## 反编译 C

```c
// DNFFLib::Sleep_Ext @ 0x8108a98

/* DNFFLib::Sleep_Ext(int, int) */

void DNFFLib::Sleep_Ext(int param_1,int param_2)

{
  timeval local_14 [2];
  
  local_14[0].tv_sec = param_1;
  local_14[0].tv_usec = param_2;
  select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,local_14);
  return;
}
```
