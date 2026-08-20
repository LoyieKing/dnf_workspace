# WriteLastSig

`_ZN6OS_API12WriteLastSigEPKcS1_jiiPKviiiiii`

`OS_API::WriteLastSig(char const*, char const*, unsigned int, int, int, void const*, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c5f4  _ZN6OS_API12WriteLastSigEPKcS1_jiiPKviiiiii
#           OS_API::WriteLastSig(char const*, char const*, unsigned int, int, int, void const*, int, int, int, int, int, int)
# range [0x0858c5f4, 0x0858c6d3]
0858c5f4 +0x00:  push   %ebp
0858c5f5 +0x01:  mov    %esp,%ebp
0858c5f7 +0x03:  push   %edi
0858c5f8 +0x04:  push   %ebx
0858c5f9 +0x05:  sub    $0x250,%esp
0858c5ff +0x0b:  lea    -0x210(%ebp),%ebx
0858c605 +0x11:  mov    $0x0,%eax
0858c60a +0x16:  mov    $0x80,%edx
0858c60f +0x1b:  mov    %ebx,%edi
0858c611 +0x1d:  mov    %edx,%ecx
0858c613 +0x1f:  rep stos %eax,%es:(%edi)
0858c615 +0x21:  mov    0xc(%ebp),%eax
0858c618 +0x24:  mov    %eax,0xc(%esp)
0858c61c +0x28:  mov    0x8(%ebp),%eax
0858c61f +0x2b:  mov    %eax,0x8(%esp)
0858c623 +0x2f:  movl   $"./log/%s/%s",0x4(%esp)
0858c62b +0x37:  lea    -0x210(%ebp),%eax
0858c631 +0x3d:  mov    %eax,(%esp)
0858c634 +0x40:  call   0807e440 <_init+0xd38>
0858c639 +0x45:  movl   $0x0,0x4(%esp)
0858c641 +0x4d:  mov    0x10(%ebp),%eax
0858c644 +0x50:  mov    %eax,(%esp)
0858c647 +0x53:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858c64c +0x58:  mov    %eax,%ebx
0858c64e +0x5a:  movl   $0x4e,0x8(%esp)
0858c656 +0x62:  movl   $&_ZZN6OS_API12WriteLastSigEPKcS1_jiiPKviiiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0858c65e +0x6a:  lea    -0x10(%ebp),%eax
0858c661 +0x6d:  mov    %eax,(%esp)
0858c664 +0x70:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
0858c669 +0x75:  mov    0x34(%ebp),%eax
0858c66c +0x78:  mov    %eax,0x30(%esp)
0858c670 +0x7c:  mov    0x30(%ebp),%eax
0858c673 +0x7f:  mov    %eax,0x2c(%esp)
0858c677 +0x83:  mov    0x2c(%ebp),%eax
0858c67a +0x86:  mov    %eax,0x28(%esp)
0858c67e +0x8a:  mov    0x28(%ebp),%eax
0858c681 +0x8d:  mov    %eax,0x24(%esp)
0858c685 +0x91:  mov    0x24(%ebp),%eax
0858c688 +0x94:  mov    %eax,0x20(%esp)
0858c68c +0x98:  mov    0x20(%ebp),%eax
0858c68f +0x9b:  mov    %eax,0x1c(%esp)
0858c693 +0x9f:  mov    0x1c(%ebp),%eax
0858c696 +0xa2:  mov    %eax,0x18(%esp)
0858c69a +0xa6:  mov    0x18(%ebp),%eax
0858c69d +0xa9:  mov    %eax,0x14(%esp)
0858c6a1 +0xad:  mov    0x14(%ebp),%eax
0858c6a4 +0xb0:  mov    %eax,0x10(%esp)
0858c6a8 +0xb4:  mov    %ebx,0xc(%esp)
0858c6ac +0xb8:  movl   $"U:%s K:%d C:%d P:%p SZ:%d TimerQ:%d DispatchQ:%d NetworkQ:%d DBQ:%d, LOGDBQ:%d\n",0x8(%esp)
0858c6b4 +0xc0:  lea    -0x210(%ebp),%eax
0858c6ba +0xc6:  mov    %eax,0x4(%esp)
0858c6be +0xca:  lea    -0x10(%ebp),%eax
0858c6c1 +0xcd:  mov    %eax,(%esp)
0858c6c4 +0xd0:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0858c6c9 +0xd5:  add    $0x250,%esp
0858c6cf +0xdb:  pop    %ebx
0858c6d0 +0xdc:  pop    %edi
0858c6d1 +0xdd:  pop    %ebp
0858c6d2 +0xde:  ret
0858c6d3 +0xdf:  nop
```

## 反编译 C

```c
// OS_API::WriteLastSig @ 0x858c5f4

/* OS_API::WriteLastSig(char const*, char const*, unsigned int, int, int, void const*, int, int,
   int, int, int, int) */

void OS_API::WriteLastSig
               (char *param_1,char *param_2,uint param_3,int param_4,int param_5,void *param_6,
               int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char local_214 [512];
  CMyFileLog local_14 [8];
  
  pcVar3 = local_214;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  sprintf(local_214,"./log/%s/%s",param_1,param_2);
  uVar1 = NumberToString(param_3,0);
  CMyFileLog::CMyFileLog
            (local_14,
             "static void OS_API::WriteLastSig(const char*, const char*, memberIdentificationNumber_t, int, int, const void*, int, int, int, int, int, int)"
             ,0x4e);
  CMyFileLog::operator()
            (local_14,local_214,
             "U:%s K:%d C:%d P:%p SZ:%d TimerQ:%d DispatchQ:%d NetworkQ:%d DBQ:%d, LOGDBQ:%d\n",
             uVar1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}
```
