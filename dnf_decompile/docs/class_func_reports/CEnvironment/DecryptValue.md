# DecryptValue

`_ZN12CEnvironment12DecryptValueEPKcPc`

`CEnvironment::DecryptValue(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08292fd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08292fd4  _ZN12CEnvironment12DecryptValueEPKcPc
#           CEnvironment::DecryptValue(char const*, char*)
# range [0x08292fd4, 0x08293083]
08292fd4 +0x00:  push   %ebp
08292fd5 +0x01:  mov    %esp,%ebp
08292fd7 +0x03:  push   %edi
08292fd8 +0x04:  push   %ebx
08292fd9 +0x05:  sub    $0x90,%esp
08292fdf +0x0b:  lea    -0x48(%ebp),%ebx
08292fe2 +0x0e:  mov    $0x0,%eax
08292fe7 +0x13:  mov    $0x10,%edx
08292fec +0x18:  mov    %ebx,%edi
08292fee +0x1a:  mov    %edx,%ecx
08292ff0 +0x1c:  rep stos %eax,%es:(%edi)
08292ff2 +0x1e:  lea    -0x88(%ebp),%ebx
08292ff8 +0x24:  mov    $0x0,%eax
08292ffd +0x29:  mov    $0x10,%edx
08293002 +0x2e:  mov    %ebx,%edi
08293004 +0x30:  mov    %edx,%ecx
08293006 +0x32:  rep stos %eax,%es:(%edi)
08293008 +0x34:  movl   $0x18,0x8(%esp)
08293010 +0x3c:  lea    -0x88(%ebp),%eax
08293016 +0x42:  mov    %eax,0x4(%esp)
0829301a +0x46:  mov    0xc(%ebp),%eax
0829301d +0x49:  mov    %eax,(%esp)
08293020 +0x4c:  call   081088cf <_ZN7DNFFLib10Hex2BinaryEPKcPhi>  ; DNFFLib::Hex2Binary(char const*, unsigned char*, int)
08293025 +0x51:  xor    $0x1,%eax
08293028 +0x54:  test   %al,%al
0829302a +0x56:  je     08293033 <+0x5f>
0829302c +0x58:  mov    $0x0,%eax
08293031 +0x5d:  jmp    08293079 <+0xa5>
08293033 +0x5f:  lea    -0x88(%ebp),%eax
08293039 +0x65:  mov    0x8(%ebp),%edx
0829303c +0x68:  lea    0x4(%edx),%ecx
0829303f +0x6b:  movl   $0x18,0xc(%esp)
08293047 +0x73:  lea    -0x48(%ebp),%edx
0829304a +0x76:  mov    %edx,0x8(%esp)
0829304e +0x7a:  mov    %eax,0x4(%esp)
08293052 +0x7e:  mov    %ecx,(%esp)
08293055 +0x81:  call   080c3afe <_ZN4CTEA7DecryptEPKcPcj>  ; CTEA::Decrypt(char const*, char*, unsigned int)
0829305a +0x86:  movl   $0x14,0x8(%esp)
08293062 +0x8e:  lea    -0x48(%ebp),%eax
08293065 +0x91:  mov    %eax,0x4(%esp)
08293069 +0x95:  mov    0x10(%ebp),%eax
0829306c +0x98:  mov    %eax,(%esp)
0829306f +0x9b:  call   0807d8d0 <_init+0x1c8>
08293074 +0xa0:  mov    $0x1,%eax
08293079 +0xa5:  add    $0x90,%esp
0829307f +0xab:  pop    %ebx
08293080 +0xac:  pop    %edi
08293081 +0xad:  pop    %ebp
08293082 +0xae:  ret
08293083 +0xaf:  nop
```

## 反编译 C

```c
// CEnvironment::DecryptValue @ 0x8292fd4

/* CEnvironment::DecryptValue(char const*, char*) */

bool __thiscall CEnvironment::DecryptValue(CEnvironment *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uchar *puVar4;
  uchar local_8c [64];
  char local_4c [64];
  
  pcVar3 = local_4c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  puVar4 = local_8c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  cVar1 = DNFFLib::Hex2Binary(param_1,local_8c,0x18);
  if (cVar1 == '\x01') {
    CTEA::Decrypt((CTEA *)(this + 4),(char *)local_8c,local_4c,0x18);
    strncpy(param_2,local_4c,0x14);
  }
  return cVar1 == '\x01';
}
```
