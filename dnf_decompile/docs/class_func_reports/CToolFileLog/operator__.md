# operator()

`_ZN12CToolFileLogclEPKciS1_z`

`CToolFileLog::operator()(char const*, int, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CToolFileLog` | `0x08107946` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08107946  _ZN12CToolFileLogclEPKciS1_z
#           CToolFileLog::operator()(char const*, int, char const*, ...)
# range [0x08107946, 0x08107a8f]
08107946 +0x000:  push   %ebp
08107947 +0x001:  mov    %esp,%ebp
08107949 +0x003:  push   %edi
0810794a +0x004:  push   %ebx
0810794b +0x005:  sub    $0xe120,%esp
08107951 +0x00b:  lea    -0x710c(%ebp),%eax
08107957 +0x011:  mov    $0x7000,%edx
0810795c +0x016:  mov    %edx,0x8(%esp)
08107960 +0x01a:  movl   $0x0,0x4(%esp)
08107968 +0x022:  mov    %eax,(%esp)
0810796b +0x025:  call   0807dcc0 <_init+0x5b8>
08107970 +0x02a:  lea    -0xe10c(%ebp),%eax
08107976 +0x030:  mov    $0x7000,%edx
0810797b +0x035:  mov    %edx,0x8(%esp)
0810797f +0x039:  movl   $0x0,0x4(%esp)
08107987 +0x041:  mov    %eax,(%esp)
0810798a +0x044:  call   0807dcc0 <_init+0x5b8>
0810798f +0x049:  lea    -0x10c(%ebp),%ebx
08107995 +0x04f:  mov    $0x0,%eax
0810799a +0x054:  mov    $0x40,%edx
0810799f +0x059:  mov    %ebx,%edi
081079a1 +0x05b:  mov    %edx,%ecx
081079a3 +0x05d:  rep stos %eax,%es:(%edi)
081079a5 +0x05f:  mov    0x8(%ebp),%eax
081079a8 +0x062:  mov    0x4(%eax),%edx
081079ab +0x065:  mov    0x8(%ebp),%eax
081079ae +0x068:  mov    (%eax),%eax
081079b0 +0x06a:  mov    %edx,0xc(%esp)
081079b4 +0x06e:  mov    %eax,0x8(%esp)
081079b8 +0x072:  movl   $"%s(%d): ",0x4(%esp)
081079c0 +0x07a:  lea    -0x710c(%ebp),%eax
081079c6 +0x080:  mov    %eax,(%esp)
081079c9 +0x083:  call   0807e440 <_init+0xd38>
081079ce +0x088:  lea    0x18(%ebp),%eax
081079d1 +0x08b:  mov    %eax,-0xc(%ebp)
081079d4 +0x08e:  mov    -0xc(%ebp),%eax
081079d7 +0x091:  mov    %eax,0x8(%esp)
081079db +0x095:  mov    0x14(%ebp),%eax
081079de +0x098:  mov    %eax,0x4(%esp)
081079e2 +0x09c:  lea    -0xe10c(%ebp),%eax
081079e8 +0x0a2:  mov    %eax,(%esp)
081079eb +0x0a5:  call   0807d7d0 <_init+0xc8>
081079f0 +0x0aa:  lea    -0x710c(%ebp),%eax
081079f6 +0x0b0:  mov    %eax,(%esp)
081079f9 +0x0b3:  call   0807e3b0 <_init+0xca8>
081079fe +0x0b8:  mov    %eax,%edx
08107a00 +0x0ba:  lea    -0x710c(%ebp),%eax
08107a06 +0x0c0:  add    %edx,%eax
08107a08 +0x0c2:  lea    -0xe10c(%ebp),%edx
08107a0e +0x0c8:  mov    %edx,0x4(%esp)
08107a12 +0x0cc:  mov    %eax,(%esp)
08107a15 +0x0cf:  call   0807dd60 <_init+0x658>
08107a1a +0x0d4:  cmpl   $0xffffffff,0x10(%ebp)
08107a1e +0x0d8:  je     08107a67 <+0x121>
08107a20 +0x0da:  mov    0x10(%ebp),%eax
08107a23 +0x0dd:  mov    %eax,0xc(%esp)
08107a27 +0x0e1:  mov    0xc(%ebp),%eax
08107a2a +0x0e4:  mov    %eax,0x8(%esp)
08107a2e +0x0e8:  movl   $"%s_%02d_",0x4(%esp)
08107a36 +0x0f0:  lea    -0x10c(%ebp),%eax
08107a3c +0x0f6:  mov    %eax,(%esp)
08107a3f +0x0f9:  call   0807e440 <_init+0xd38>
08107a44 +0x0fe:  call   08106d30 <_Z22CFileLogWriterInstancev>  ; CFileLogWriterInstance()
08107a49 +0x103:  lea    -0x710c(%ebp),%edx
08107a4f +0x109:  mov    %edx,0x8(%esp)
08107a53 +0x10d:  lea    -0x10c(%ebp),%edx
08107a59 +0x113:  mov    %edx,0x4(%esp)
08107a5d +0x117:  mov    %eax,(%esp)
08107a60 +0x11a:  call   0810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>  ; CFileLogWriter::writeLog(char const*, char const*, ...)
08107a65 +0x11f:  jmp    08107a85 <+0x13f>
08107a67 +0x121:  call   08106d30 <_Z22CFileLogWriterInstancev>  ; CFileLogWriterInstance()
08107a6c +0x126:  lea    -0x710c(%ebp),%edx
08107a72 +0x12c:  mov    %edx,0x8(%esp)
08107a76 +0x130:  mov    0xc(%ebp),%edx
08107a79 +0x133:  mov    %edx,0x4(%esp)
08107a7d +0x137:  mov    %eax,(%esp)
08107a80 +0x13a:  call   0810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>  ; CFileLogWriter::writeLog(char const*, char const*, ...)
08107a85 +0x13f:  add    $0xe120,%esp
08107a8b +0x145:  pop    %ebx
08107a8c +0x146:  pop    %edi
08107a8d +0x147:  pop    %ebp
08107a8e +0x148:  ret
08107a8f +0x149:  nop
```

## 反编译 C

```c
// CToolFileLog::operator @ 0x8107946

/* CToolFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, int, char const*, ...) */

void __thiscall
CToolFileLog::operator()(CToolFileLog *this,char *param_1,int param_2,char *param_3,...)

{
  size_t sVar1;
  CFileLogWriter *pCVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_e110 [28672];
  char local_7110 [28672];
  char local_110 [256];
  undefined1 *local_10;
  
  bVar5 = 0;
  memset(local_7110,0,0x7000);
  memset(local_e110,0,0x7000);
  pcVar4 = local_110;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  sprintf(local_7110,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000014;
  vsprintf(local_e110,param_3,local_10);
  sVar1 = strlen(local_7110);
  strcat(local_7110 + sVar1,local_e110);
  if (param_2 == -1) {
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,param_1,local_7110);
  }
  else {
    sprintf(local_110,"%s_%02d_",param_1,param_2);
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,local_110,local_7110);
  }
  return;
}
```
