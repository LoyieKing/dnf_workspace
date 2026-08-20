# open_log

`_ZN13AradAppSystem8open_logEPc`

`AradAppSystem::open_log(char*)`

| 类 | 地址 |
|---|---|
| `AradAppSystem` | `0x0817deea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817deea  _ZN13AradAppSystem8open_logEPc
#           AradAppSystem::open_log(char*)
# range [0x0817deea, 0x0817df8f]
0817deea +0x00:  push   %ebp
0817deeb +0x01:  mov    %esp,%ebp
0817deed +0x03:  push   %edi
0817deee +0x04:  push   %ebx
0817deef +0x05:  sub    $0xe0,%esp
0817def5 +0x0b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0817defa +0x10:  mov    0x8(%ebp),%edx
0817defd +0x13:  mov    %edx,0x4(%esp)
0817df01 +0x17:  mov    %eax,(%esp)
0817df04 +0x1a:  call   0817dff6 <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x26>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x26
0817df09 +0x1f:  lea    -0xd0(%ebp),%ebx
0817df0f +0x25:  mov    $0x0,%eax
0817df14 +0x2a:  mov    $0x32,%edx
0817df19 +0x2f:  mov    %ebx,%edi
0817df1b +0x31:  mov    %edx,%ecx
0817df1d +0x33:  rep stos %eax,%es:(%edi)
0817df1f +0x35:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0817df24 +0x3a:  mov    %eax,(%esp)
0817df27 +0x3d:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0817df2c +0x42:  mov    %eax,0x8(%esp)
0817df30 +0x46:  movl   $"./log/%s/",0x4(%esp)
0817df38 +0x4e:  lea    -0xd0(%ebp),%eax
0817df3e +0x54:  mov    %eax,(%esp)
0817df41 +0x57:  call   0807e440 <_init+0xd38>
0817df46 +0x5c:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0817df4b +0x61:  movl   $0x0,0xc(%esp)
0817df53 +0x69:  movl   $0x0,0x8(%esp)
0817df5b +0x71:  lea    -0xd0(%ebp),%edx
0817df61 +0x77:  mov    %edx,0x4(%esp)
0817df65 +0x7b:  mov    %eax,(%esp)
0817df68 +0x7e:  call   0854e88c <_ZN4CLog8initiateEPcS0_i>  ; CLog::initiate(char*, char*, int)
0817df6d +0x83:  movl   $"[!] Log file init Sucess!!\n",0x4(%esp)
0817df75 +0x8b:  movl   $&_ZSt4cerr,(%esp)
0817df7c +0x92:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0817df81 +0x97:  mov    $0x1,%eax
0817df86 +0x9c:  add    $0xe0,%esp
0817df8c +0xa2:  pop    %ebx
0817df8d +0xa3:  pop    %edi
0817df8e +0xa4:  pop    %ebp
0817df8f +0xa5:  ret
```

## 反编译 C

```c
// AradAppSystem::open_log @ 0x817deea

/* AradAppSystem::open_log(char*) */

undefined4 AradAppSystem::open_log(char *param_1)

{
  CEnvironment *pCVar1;
  undefined4 uVar2;
  CLog *this;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_d4 [200];
  
  bVar5 = 0;
  pCVar1 = (CEnvironment *)G_CEnvironment();
  CEnvironment::set_file_name(pCVar1,param_1);
  pcVar4 = local_d4;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  pCVar1 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_file_name(pCVar1);
  sprintf(local_d4,"./log/%s/",uVar2);
  this = (CLog *)CLog::instance();
  CLog::initiate(this,local_d4,(char *)0x0,0);
  std::operator<<((ostream *)&std::cerr,"[!] Log file init Sucess!!\n");
  return 1;
}
```
