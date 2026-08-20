# checkAnswer

`_ZNK8Sanicova4CPad11checkAnswerEPc`

`Sanicova::CPad::checkAnswer(char*) const`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599712` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599712  _ZNK8Sanicova4CPad11checkAnswerEPc
#           Sanicova::CPad::checkAnswer(char*) const
# range [0x08599712, 0x0859979b]
08599712 +0x00:  push   %ebp
08599713 +0x01:  mov    %esp,%ebp
08599715 +0x03:  push   %edi
08599716 +0x04:  push   %ebx
08599717 +0x05:  sub    $0x60,%esp
0859971a +0x08:  lea    -0x2c(%ebp),%ebx
0859971d +0x0b:  mov    $0x0,%eax
08599722 +0x10:  mov    $0x9,%edx
08599727 +0x15:  mov    %ebx,%edi
08599729 +0x17:  mov    %edx,%ecx
0859972b +0x19:  rep stos %eax,%es:(%edi)
0859972d +0x1b:  lea    -0x50(%ebp),%ebx
08599730 +0x1e:  mov    $0x0,%eax
08599735 +0x23:  mov    $0x9,%edx
0859973a +0x28:  mov    %ebx,%edi
0859973c +0x2a:  mov    %edx,%ecx
0859973e +0x2c:  rep stos %eax,%es:(%edi)
08599740 +0x2e:  movl   $0x8,0x8(%esp)
08599748 +0x36:  mov    0xc(%ebp),%eax
0859974b +0x39:  mov    %eax,0x4(%esp)
0859974f +0x3d:  lea    -0x2c(%ebp),%eax
08599752 +0x40:  mov    %eax,(%esp)
08599755 +0x43:  call   0807d8d0 <_init+0x1c8>
0859975a +0x48:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
0859975f +0x4d:  lea    -0x50(%ebp),%edx
08599762 +0x50:  mov    %edx,0x8(%esp)
08599766 +0x54:  lea    -0x2c(%ebp),%edx
08599769 +0x57:  mov    %edx,0x4(%esp)
0859976d +0x5b:  mov    %eax,(%esp)
08599770 +0x5e:  call   0846c398 <_Z11encryptAES_P9CRijndaelPcS1_>  ; encryptAES_(CRijndael*, char*, char*)
08599775 +0x63:  mov    0x8(%ebp),%eax
08599778 +0x66:  movl   $0x24,0x8(%esp)
08599780 +0x6e:  lea    -0x50(%ebp),%edx
08599783 +0x71:  mov    %edx,0x4(%esp)
08599787 +0x75:  mov    %eax,(%esp)
0859978a +0x78:  call   0807e8c0 <_init+0x11b8>
0859978f +0x7d:  test   %eax,%eax
08599791 +0x7f:  sete   %al
08599794 +0x82:  add    $0x60,%esp
08599797 +0x85:  pop    %ebx
08599798 +0x86:  pop    %edi
08599799 +0x87:  pop    %ebp
0859979a +0x88:  ret
0859979b +0x89:  nop
```

## 反编译 C

```c
// Sanicova::CPad::checkAnswer @ 0x8599712

/* Sanicova::CPad::checkAnswer(char*) const */

bool __thiscall Sanicova::CPad::checkAnswer(CPad *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_54 [36];
  char local_30 [36];
  
  pcVar2 = local_30;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = local_54;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  strncpy(local_30,param_1,8);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_30,local_54);
  iVar1 = strncmp((char *)this,local_54,0x24);
  return iVar1 == 0;
}
```
