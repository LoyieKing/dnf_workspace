# Decrypt

`_ZN10Encryption7DecryptEPviRj`

`Encryption::Decrypt(void*, int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848db5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848db5e  _ZN10Encryption7DecryptEPviRj
#           Encryption::Decrypt(void*, int, unsigned int&)
# range [0x0848db5e, 0x0848dc4b]
0848db5e +0x00:  push   %ebp
0848db5f +0x01:  mov    %esp,%ebp
0848db61 +0x03:  push   %edi
0848db62 +0x04:  push   %esi
0848db63 +0x05:  push   %ebx
0848db64 +0x06:  sub    $0x2c,%esp
0848db67 +0x09:  movl   $0x4453eb5,-0x20(%ebp)
0848db6e +0x10:  mov    0x10(%ebp),%eax
0848db71 +0x13:  mov    (%eax),%eax
0848db73 +0x15:  test   %eax,%eax
0848db75 +0x17:  je     0848db85 <+0x27>
0848db77 +0x19:  mov    0x10(%ebp),%eax
0848db7a +0x1c:  mov    %eax,(%esp)
0848db7d +0x1f:  call   0848d51a <_ZN10Encryption8SeedRandERj>  ; Encryption::SeedRand(unsigned int&)
0848db82 +0x24:  mov    %eax,-0x20(%ebp)
0848db85 +0x27:  movl   $0x0,-0x1c(%ebp)
0848db8c +0x2e:  lea    -0x20(%ebp),%eax
0848db8f +0x31:  add    $0x1,%eax
0848db92 +0x34:  movl   $0x1,0x8(%esp)
0848db9a +0x3c:  mov    %eax,0x4(%esp)
0848db9e +0x40:  lea    -0x21(%ebp),%eax
0848dba1 +0x43:  mov    %eax,(%esp)
0848dba4 +0x46:  call   0807d8a0 <_init+0x198>
0848dba9 +0x4b:  movzbl -0x21(%ebp),%eax
0848dbad +0x4f:  and    $0x7,%eax
0848dbb0 +0x52:  mov    %al,-0x21(%ebp)
0848dbb3 +0x55:  movl   $0x0,-0x1c(%ebp)
0848dbba +0x5c:  jmp    0848dc32 <+0xd4>
0848dbbc +0x5e:  mov    0x8(%ebp),%edx
0848dbbf +0x61:  mov    -0x1c(%ebp),%eax
0848dbc2 +0x64:  add    %eax,%edx
0848dbc4 +0x66:  mov    0x8(%ebp),%ecx
0848dbc7 +0x69:  mov    -0x1c(%ebp),%eax
0848dbca +0x6c:  lea    (%ecx,%eax,1),%eax
0848dbcd +0x6f:  movzbl (%eax),%eax
0848dbd0 +0x72:  movzbl %al,%ebx
0848dbd3 +0x75:  movzbl -0x21(%ebp),%eax
0848dbd7 +0x79:  movzbl %al,%eax
0848dbda +0x7c:  mov    %ebx,%esi
0848dbdc +0x7e:  mov    %eax,%ecx
0848dbde +0x80:  shl    %cl,%esi
0848dbe0 +0x82:  mov    %esi,%eax
0848dbe2 +0x84:  mov    %eax,%ebx
0848dbe4 +0x86:  mov    0x8(%ebp),%ecx
0848dbe7 +0x89:  mov    -0x1c(%ebp),%eax
0848dbea +0x8c:  lea    (%ecx,%eax,1),%eax
0848dbed +0x8f:  movzbl (%eax),%eax
0848dbf0 +0x92:  movzbl %al,%esi
0848dbf3 +0x95:  movzbl -0x21(%ebp),%eax
0848dbf7 +0x99:  movzbl %al,%eax
0848dbfa +0x9c:  mov    $0x8,%ecx
0848dbff +0xa1:  mov    %ecx,%edi
0848dc01 +0xa3:  sub    %eax,%edi
0848dc03 +0xa5:  mov    %edi,%eax
0848dc05 +0xa7:  mov    %esi,%edi
0848dc07 +0xa9:  mov    %eax,%ecx
0848dc09 +0xab:  sar    %cl,%edi
0848dc0b +0xad:  mov    %edi,%eax
0848dc0d +0xaf:  or     %ebx,%eax
0848dc0f +0xb1:  mov    %al,(%edx)
0848dc11 +0xb3:  mov    0x8(%ebp),%edx
0848dc14 +0xb6:  mov    -0x1c(%ebp),%eax
0848dc17 +0xb9:  add    %eax,%edx
0848dc19 +0xbb:  mov    0x8(%ebp),%ecx
0848dc1c +0xbe:  mov    -0x1c(%ebp),%eax
0848dc1f +0xc1:  lea    (%ecx,%eax,1),%eax
0848dc22 +0xc4:  movzbl (%eax),%eax
0848dc25 +0xc7:  mov    %eax,%ecx
0848dc27 +0xc9:  mov    -0x20(%ebp),%eax
0848dc2a +0xcc:  xor    %ecx,%eax
0848dc2c +0xce:  mov    %al,(%edx)
0848dc2e +0xd0:  addl   $0x1,-0x1c(%ebp)
0848dc32 +0xd4:  mov    -0x1c(%ebp),%eax
0848dc35 +0xd7:  cmp    0xc(%ebp),%eax
0848dc38 +0xda:  setl   %al
0848dc3b +0xdd:  test   %al,%al
0848dc3d +0xdf:  jne    0848dbbc <+0x5e>
0848dc43 +0xe5:  add    $0x2c,%esp
0848dc46 +0xe8:  pop    %ebx
0848dc47 +0xe9:  pop    %esi
0848dc48 +0xea:  pop    %edi
0848dc49 +0xeb:  pop    %ebp
0848dc4a +0xec:  ret
0848dc4b +0xed:  nop
```

## 反编译 C

```c
// Encryption::Decrypt @ 0x848db5e

/* Encryption::Decrypt(void*, int, unsigned int&) */

void Encryption::Decrypt(void *param_1,int param_2,uint *param_3)

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
    *(byte *)((int)param_1 + local_20) =
         (byte)((int)(uint)*(byte *)((int)param_1 + local_20) >> (8 - (local_25 & 7) & 0x1f)) |
         *(char *)((int)param_1 + local_20) << (local_25 & 7);
    *(byte *)((int)param_1 + local_20) = (byte)local_24 ^ *(byte *)((int)param_1 + local_20);
  }
  return;
}
```
