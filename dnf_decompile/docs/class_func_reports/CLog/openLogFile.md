# openLogFile

`_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci`

`CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854ec70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ec70  _ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci
#           CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
# range [0x0854ec70, 0x0854edaf]
0854ec70 +0x000:  push   %ebp
0854ec71 +0x001:  mov    %esp,%ebp
0854ec73 +0x003:  push   %esi
0854ec74 +0x004:  push   %ebx
0854ec75 +0x005:  sub    $0x2020,%esp
0854ec7b +0x00b:  cmpl   $0x0,0x1c(%ebp)
0854ec7f +0x00f:  je     0854ecd0 <+0x60>
0854ec81 +0x011:  movzbl 0x10(%ebp),%eax
0854ec85 +0x015:  movsbl %al,%ebx
0854ec88 +0x018:  movzbl 0xf(%ebp),%eax
0854ec8c +0x01c:  movsbl %al,%ecx
0854ec8f +0x01f:  movzbl 0xe(%ebp),%eax
0854ec93 +0x023:  movsbl %al,%edx
0854ec96 +0x026:  movzwl 0xc(%ebp),%eax
0854ec9a +0x02a:  cwtl
0854ec9b +0x02b:  mov    0x8(%ebp),%esi
0854ec9e +0x02e:  add    $0x258,%esi
0854eca4 +0x034:  mov    %ebx,0x18(%esp)
0854eca8 +0x038:  mov    %ecx,0x14(%esp)
0854ecac +0x03c:  mov    %edx,0x10(%esp)
0854ecb0 +0x040:  mov    %eax,0xc(%esp)
0854ecb4 +0x044:  mov    %esi,0x8(%esp)
0854ecb8 +0x048:  movl   $"%s%04d%02d%02d-%02d",0x4(%esp)
0854ecc0 +0x050:  lea    -0x2008(%ebp),%eax
0854ecc6 +0x056:  mov    %eax,(%esp)
0854ecc9 +0x059:  call   0807e440 <_init+0xd38>
0854ecce +0x05e:  jmp    0854ed12 <+0xa2>
0854ecd0 +0x060:  movzbl 0xf(%ebp),%eax
0854ecd4 +0x064:  movsbl %al,%ecx
0854ecd7 +0x067:  movzbl 0xe(%ebp),%eax
0854ecdb +0x06b:  movsbl %al,%edx
0854ecde +0x06e:  movzwl 0xc(%ebp),%eax
0854ece2 +0x072:  cwtl
0854ece3 +0x073:  mov    0x8(%ebp),%ebx
0854ece6 +0x076:  add    $0x258,%ebx
0854ecec +0x07c:  mov    %ecx,0x14(%esp)
0854ecf0 +0x080:  mov    %edx,0x10(%esp)
0854ecf4 +0x084:  mov    %eax,0xc(%esp)
0854ecf8 +0x088:  mov    %ebx,0x8(%esp)
0854ecfc +0x08c:  movl   $"%s%04d%02d%02d",0x4(%esp)
0854ed04 +0x094:  lea    -0x2008(%ebp),%eax
0854ed0a +0x09a:  mov    %eax,(%esp)
0854ed0d +0x09d:  call   0807e440 <_init+0xd38>
0854ed12 +0x0a2:  mov    0x8(%ebp),%eax
0854ed15 +0x0a5:  add    $0x110,%eax
0854ed1a +0x0aa:  movl   $0x1000,0x8(%esp)
0854ed22 +0x0b2:  mov    %eax,0x4(%esp)
0854ed26 +0x0b6:  lea    -0x1008(%ebp),%eax
0854ed2c +0x0bc:  mov    %eax,(%esp)
0854ed2f +0x0bf:  call   0807d8d0 <_init+0x1c8>
0854ed34 +0x0c4:  movl   $0x1000,0x8(%esp)
0854ed3c +0x0cc:  lea    -0x2008(%ebp),%eax
0854ed42 +0x0d2:  mov    %eax,0x4(%esp)
0854ed46 +0x0d6:  lea    -0x1008(%ebp),%eax
0854ed4c +0x0dc:  mov    %eax,(%esp)
0854ed4f +0x0df:  call   0807e1a0 <_init+0xa98>
0854ed54 +0x0e4:  movl   $0x1000,0x8(%esp)
0854ed5c +0x0ec:  mov    0x18(%ebp),%eax
0854ed5f +0x0ef:  mov    %eax,0x4(%esp)
0854ed63 +0x0f3:  lea    -0x1008(%ebp),%eax
0854ed69 +0x0f9:  mov    %eax,(%esp)
0854ed6c +0x0fc:  call   0807e1a0 <_init+0xa98>
0854ed71 +0x101:  movl   $"ab",0x4(%esp)
0854ed79 +0x109:  lea    -0x1008(%ebp),%eax
0854ed7f +0x10f:  mov    %eax,(%esp)
0854ed82 +0x112:  call   0807e770 <_init+0x1068>
0854ed87 +0x117:  mov    0x14(%ebp),%edx
0854ed8a +0x11a:  mov    %eax,(%edx)
0854ed8c +0x11c:  mov    0x14(%ebp),%eax
0854ed8f +0x11f:  mov    (%eax),%eax
0854ed91 +0x121:  test   %eax,%eax
0854ed93 +0x123:  sete   %al
0854ed96 +0x126:  test   %al,%al
0854ed98 +0x128:  je     0854eda5 <+0x135>
0854ed9a +0x12a:  mov    &stdout,%edx
0854eda0 +0x130:  mov    0x14(%ebp),%eax
0854eda3 +0x133:  mov    %edx,(%eax)
0854eda5 +0x135:  add    $0x2020,%esp
0854edab +0x13b:  pop    %ebx
0854edac +0x13c:  pop    %esi
0854edad +0x13d:  pop    %ebp
0854edae +0x13e:  ret
0854edaf +0x13f:  nop
```

## 反编译 C

```c
// CLog::openLogFile @ 0x854ec70

/* CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int) */

void CLog::openLogFile(int param_1,undefined4 param_2,char param_3,int *param_4,char *param_5,
                      int param_6)

{
  FILE *pFVar1;
  char local_200c [4096];
  char local_100c [4096];
  
  if (param_6 == 0) {
    sprintf(local_200c,"%s%04d%02d%02d",param_1 + 600,(int)(short)param_2,(int)param_2._2_1_,
            (int)param_2._3_1_);
  }
  else {
    sprintf(local_200c,"%s%04d%02d%02d-%02d",param_1 + 600,(int)(short)param_2,(int)param_2._2_1_,
            (int)param_2._3_1_,(int)param_3);
  }
  strncpy(local_100c,(char *)(param_1 + 0x110),0x1000);
  strncat(local_100c,local_200c,0x1000);
  strncat(local_100c,param_5,0x1000);
  pFVar1 = fopen(local_100c,"ab");
  *param_4 = (int)pFVar1;
  if (*param_4 == 0) {
    *param_4 = stdout;
  }
  return;
}
```
