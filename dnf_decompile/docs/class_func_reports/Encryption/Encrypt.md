# Encrypt

`_ZN10Encryption7EncryptEPviRj`

`Encryption::Encrypt(void*, int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848da70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848da70  _ZN10Encryption7EncryptEPviRj
#           Encryption::Encrypt(void*, int, unsigned int&)
# range [0x0848da70, 0x0848db5d]
0848da70 +0x00:  push   %ebp
0848da71 +0x01:  mov    %esp,%ebp
0848da73 +0x03:  push   %edi
0848da74 +0x04:  push   %esi
0848da75 +0x05:  push   %ebx
0848da76 +0x06:  sub    $0x2c,%esp
0848da79 +0x09:  movl   $0x4453eb5,-0x20(%ebp)
0848da80 +0x10:  mov    0x10(%ebp),%eax
0848da83 +0x13:  mov    (%eax),%eax
0848da85 +0x15:  test   %eax,%eax
0848da87 +0x17:  je     0848da97 <+0x27>
0848da89 +0x19:  mov    0x10(%ebp),%eax
0848da8c +0x1c:  mov    %eax,(%esp)
0848da8f +0x1f:  call   0848d51a <_ZN10Encryption8SeedRandERj>  ; Encryption::SeedRand(unsigned int&)
0848da94 +0x24:  mov    %eax,-0x20(%ebp)
0848da97 +0x27:  movl   $0x0,-0x1c(%ebp)
0848da9e +0x2e:  lea    -0x20(%ebp),%eax
0848daa1 +0x31:  add    $0x1,%eax
0848daa4 +0x34:  movl   $0x1,0x8(%esp)
0848daac +0x3c:  mov    %eax,0x4(%esp)
0848dab0 +0x40:  lea    -0x21(%ebp),%eax
0848dab3 +0x43:  mov    %eax,(%esp)
0848dab6 +0x46:  call   0807d8a0 <_init+0x198>
0848dabb +0x4b:  movzbl -0x21(%ebp),%eax
0848dabf +0x4f:  and    $0x7,%eax
0848dac2 +0x52:  mov    %al,-0x21(%ebp)
0848dac5 +0x55:  movl   $0x0,-0x1c(%ebp)
0848dacc +0x5c:  jmp    0848db44 <+0xd4>
0848dace +0x5e:  mov    0x8(%ebp),%edx
0848dad1 +0x61:  mov    -0x1c(%ebp),%eax
0848dad4 +0x64:  add    %eax,%edx
0848dad6 +0x66:  mov    0x8(%ebp),%ecx
0848dad9 +0x69:  mov    -0x1c(%ebp),%eax
0848dadc +0x6c:  lea    (%ecx,%eax,1),%eax
0848dadf +0x6f:  movzbl (%eax),%eax
0848dae2 +0x72:  mov    %eax,%ecx
0848dae4 +0x74:  mov    -0x20(%ebp),%eax
0848dae7 +0x77:  xor    %ecx,%eax
0848dae9 +0x79:  mov    %al,(%edx)
0848daeb +0x7b:  mov    0x8(%ebp),%edx
0848daee +0x7e:  mov    -0x1c(%ebp),%eax
0848daf1 +0x81:  add    %eax,%edx
0848daf3 +0x83:  mov    0x8(%ebp),%ecx
0848daf6 +0x86:  mov    -0x1c(%ebp),%eax
0848daf9 +0x89:  lea    (%ecx,%eax,1),%eax
0848dafc +0x8c:  movzbl (%eax),%eax
0848daff +0x8f:  movzbl %al,%ebx
0848db02 +0x92:  movzbl -0x21(%ebp),%eax
0848db06 +0x96:  movzbl %al,%eax
0848db09 +0x99:  mov    %ebx,%esi
0848db0b +0x9b:  mov    %eax,%ecx
0848db0d +0x9d:  sar    %cl,%esi
0848db0f +0x9f:  mov    %esi,%eax
0848db11 +0xa1:  mov    %eax,%ebx
0848db13 +0xa3:  mov    0x8(%ebp),%ecx
0848db16 +0xa6:  mov    -0x1c(%ebp),%eax
0848db19 +0xa9:  lea    (%ecx,%eax,1),%eax
0848db1c +0xac:  movzbl (%eax),%eax
0848db1f +0xaf:  movzbl %al,%esi
0848db22 +0xb2:  movzbl -0x21(%ebp),%eax
0848db26 +0xb6:  movzbl %al,%eax
0848db29 +0xb9:  mov    $0x8,%ecx
0848db2e +0xbe:  mov    %ecx,%edi
0848db30 +0xc0:  sub    %eax,%edi
0848db32 +0xc2:  mov    %edi,%eax
0848db34 +0xc4:  mov    %esi,%edi
0848db36 +0xc6:  mov    %eax,%ecx
0848db38 +0xc8:  shl    %cl,%edi
0848db3a +0xca:  mov    %edi,%eax
0848db3c +0xcc:  or     %ebx,%eax
0848db3e +0xce:  mov    %al,(%edx)
0848db40 +0xd0:  addl   $0x1,-0x1c(%ebp)
0848db44 +0xd4:  mov    -0x1c(%ebp),%eax
0848db47 +0xd7:  cmp    0xc(%ebp),%eax
0848db4a +0xda:  setl   %al
0848db4d +0xdd:  test   %al,%al
0848db4f +0xdf:  jne    0848dace <+0x5e>
0848db55 +0xe5:  add    $0x2c,%esp
0848db58 +0xe8:  pop    %ebx
0848db59 +0xe9:  pop    %esi
0848db5a +0xea:  pop    %edi
0848db5b +0xeb:  pop    %ebp
0848db5c +0xec:  ret
0848db5d +0xed:  nop
```

## 反编译 C

```c
// Encryption::Encrypt @ 0x848da70

/* Encryption::Encrypt(void*, int, unsigned int&) */

void Encryption::Encrypt(void *param_1,int param_2,uint *param_3)

{
  byte local_25;
  undefined4 local_24;
  int local_20;
  
  local_24 = 0x4453eb5;
  if (*param_3 != 0) {
    local_24 = SeedRand(param_3);
  }
  local_20 = 0;
  memcpy(&local_25,(void *)((int)&local_24 + 1),1);
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    *(byte *)((int)param_1 + local_20) = (byte)local_24 ^ *(byte *)((int)param_1 + local_20);
    *(byte *)((int)param_1 + local_20) =
         *(char *)((int)param_1 + local_20) << (8 - (local_25 & 7) & 0x1f) |
         (byte)((int)(uint)*(byte *)((int)param_1 + local_20) >> (local_25 & 7));
  }
  return;
}
```
