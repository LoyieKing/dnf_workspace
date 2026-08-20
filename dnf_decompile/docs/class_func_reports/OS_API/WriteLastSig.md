# WriteLastSig

`_ZN6OS_API12WriteLastSigEPKcS1_iiPKvi`

`OS_API::WriteLastSig(char const*, char const*, int, int, void const*, int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c54c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c54c  _ZN6OS_API12WriteLastSigEPKcS1_iiPKvi
#           OS_API::WriteLastSig(char const*, char const*, int, int, void const*, int)
# range [0x0858c54c, 0x0858c5f3]
0858c54c +0x00:  push   %ebp
0858c54d +0x01:  mov    %esp,%ebp
0858c54f +0x03:  push   %edi
0858c550 +0x04:  push   %ebx
0858c551 +0x05:  sub    $0x130,%esp
0858c557 +0x0b:  lea    -0x10c(%ebp),%ebx
0858c55d +0x11:  mov    $0x0,%eax
0858c562 +0x16:  mov    $0x40,%edx
0858c567 +0x1b:  mov    %ebx,%edi
0858c569 +0x1d:  mov    %edx,%ecx
0858c56b +0x1f:  rep stos %eax,%es:(%edi)
0858c56d +0x21:  mov    0xc(%ebp),%eax
0858c570 +0x24:  mov    %eax,0xc(%esp)
0858c574 +0x28:  mov    0x8(%ebp),%eax
0858c577 +0x2b:  mov    %eax,0x8(%esp)
0858c57b +0x2f:  movl   $"./log/%s/%s",0x4(%esp)
0858c583 +0x37:  lea    -0x10c(%ebp),%eax
0858c589 +0x3d:  mov    %eax,(%esp)
0858c58c +0x40:  call   0807e440 <_init+0xd38>
0858c591 +0x45:  movl   $"wb",0x4(%esp)
0858c599 +0x4d:  lea    -0x10c(%ebp),%eax
0858c59f +0x53:  mov    %eax,(%esp)
0858c5a2 +0x56:  call   0807e770 <_init+0x1068>
0858c5a7 +0x5b:  mov    %eax,-0xc(%ebp)
0858c5aa +0x5e:  cmpl   $0x0,-0xc(%ebp)
0858c5ae +0x62:  je     0858c5ea <+0x9e>
0858c5b0 +0x64:  mov    0x1c(%ebp),%eax
0858c5b3 +0x67:  mov    %eax,0x14(%esp)
0858c5b7 +0x6b:  mov    0x18(%ebp),%eax
0858c5ba +0x6e:  mov    %eax,0x10(%esp)
0858c5be +0x72:  mov    0x14(%ebp),%eax
0858c5c1 +0x75:  mov    %eax,0xc(%esp)
0858c5c5 +0x79:  mov    0x10(%ebp),%eax
0858c5c8 +0x7c:  mov    %eax,0x8(%esp)
0858c5cc +0x80:  movl   $"K:%d C:%d P:%p SZ:%d\n",0x4(%esp)
0858c5d4 +0x88:  mov    -0xc(%ebp),%eax
0858c5d7 +0x8b:  mov    %eax,(%esp)
0858c5da +0x8e:  call   0807da90 <_init+0x388>
0858c5df +0x93:  mov    -0xc(%ebp),%eax
0858c5e2 +0x96:  mov    %eax,(%esp)
0858c5e5 +0x99:  call   0807dea0 <_init+0x798>
0858c5ea +0x9e:  add    $0x130,%esp
0858c5f0 +0xa4:  pop    %ebx
0858c5f1 +0xa5:  pop    %edi
0858c5f2 +0xa6:  pop    %ebp
0858c5f3 +0xa7:  ret
```

## 反编译 C

```c
// OS_API::WriteLastSig @ 0x858c54c

/* OS_API::WriteLastSig(char const*, char const*, int, int, void const*, int) */

void OS_API::WriteLastSig
               (char *param_1,char *param_2,int param_3,int param_4,void *param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  char local_110 [256];
  FILE *local_10;
  
  pcVar2 = local_110;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  sprintf(local_110,"./log/%s/%s",param_1,param_2);
  local_10 = fopen(local_110,"wb");
  if (local_10 != (FILE *)0x0) {
    fprintf(local_10,"K:%d C:%d P:%p SZ:%d\n",param_3,param_4,param_5,param_6);
    fclose(local_10);
  }
  return;
}
```
