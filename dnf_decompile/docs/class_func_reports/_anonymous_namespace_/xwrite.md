# xwrite

`_ZN12_GLOBAL__N_1L6xwriteEiPKci`

`(anonymous namespace)::xwrite(int, char const*, int)`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)` | `0x08722640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722640  _ZN12_GLOBAL__N_1L6xwriteEiPKci
#           (anonymous namespace)::xwrite(int, char const*, int)
# range [0x08722640, 0x0872268f]
08722640 +0x00:  push   %ebp
08722641 +0x01:  mov    %esp,%ebp
08722643 +0x03:  push   %edi
08722644 +0x04:  mov    %ecx,%edi
08722646 +0x06:  push   %esi
08722647 +0x07:  mov    %edx,%esi
08722649 +0x09:  push   %ebx
0872264a +0x0a:  mov    %eax,%ebx
0872264c +0x0c:  sub    $0x2c,%esp
0872264f +0x0f:  mov    %ecx,-0x1c(%ebp)
08722652 +0x12:  jmp    0872265e <+0x1e>
08722654 +0x14:  lea    0x0(%esi,%eiz,1),%esi
08722658 +0x18:  sub    %eax,%edi
0872265a +0x1a:  je     0872267d <+0x3d>
0872265c +0x1c:  add    %eax,%esi
0872265e +0x1e:  mov    %edi,0x8(%esp)
08722662 +0x22:  mov    %esi,0x4(%esp)
08722666 +0x26:  mov    %ebx,(%esp)
08722669 +0x29:  call   0807e830 <_init+0x1128>
0872266e +0x2e:  cmp    $0xffffffff,%eax
08722671 +0x31:  jne    08722658 <+0x18>
08722673 +0x33:  call   0807dd70 <_init+0x668>
08722678 +0x38:  cmpl   $0x4,(%eax)
0872267b +0x3b:  je     0872265e <+0x1e>
0872267d +0x3d:  mov    -0x1c(%ebp),%eax
08722680 +0x40:  add    $0x2c,%esp
08722683 +0x43:  pop    %ebx
08722684 +0x44:  pop    %esi
08722685 +0x45:  sub    %edi,%eax
08722687 +0x47:  pop    %edi
08722688 +0x48:  pop    %ebp
08722689 +0x49:  ret
0872268a +0x4a:  nop
0872268b +0x4b:  nop
0872268c +0x4c:  nop
0872268d +0x4d:  nop
0872268e +0x4e:  nop
0872268f +0x4f:  nop
```

## 反编译 C

```c
// xwrite @ 0x8722640

/* (anonymous namespace)::xwrite(int, char const*, int) */

int __regparm3 (anonymous_namespace)::xwrite(int param_1,char *param_2,int param_3)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  
  __n = param_3;
  do {
    while( true ) {
      sVar1 = write(param_1,param_2,__n);
      if (sVar1 == -1) break;
      __n = __n - sVar1;
      if (__n == 0) goto LAB_0872267d;
      param_2 = param_2 + sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
LAB_0872267d:
  return param_3 - __n;
}
```
