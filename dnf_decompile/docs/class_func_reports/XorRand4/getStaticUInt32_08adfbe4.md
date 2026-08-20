# getStaticUInt32

`_ZN8XorRand415getStaticUInt32Ev`

`XorRand4::getStaticUInt32()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfbe4  _ZN8XorRand415getStaticUInt32Ev
#           XorRand4::getStaticUInt32()
# range [0x08adfbe4, 0x08adfc91]
08adfbe4 +0x00:  push   %ebp
08adfbe5 +0x01:  mov    %esp,%ebp
08adfbe7 +0x03:  push   %ebx
08adfbe8 +0x04:  sub    $0x24,%esp
08adfbeb +0x07:  movzbl %gs:0xfffffff8,%eax
08adfbf3 +0x0f:  xor    $0x1,%eax
08adfbf6 +0x12:  test   %al,%al
08adfbf8 +0x14:  je     08adfc25 <+0x41>
08adfbfa +0x16:  call   0807de30 <_init+0x728>
08adfbff +0x1b:  mov    %eax,%ebx
08adfc01 +0x1d:  call   0807e740 <_init+0x1038>
08adfc06 +0x22:  lea    (%ebx,%eax,1),%eax
08adfc09 +0x25:  mov    %eax,-0xc(%ebp)
08adfc0c +0x28:  mov    -0xc(%ebp),%eax
08adfc0f +0x2b:  mov    %eax,(%esp)
08adfc12 +0x2e:  call   08adfb78 <_ZN8XorRand415getStaticUInt32Ej>  ; XorRand4::getStaticUInt32(unsigned int)
08adfc17 +0x33:  mov    %eax,%gs:0xfffffffc
08adfc1d +0x39:  movb   $0x1,%gs:0xfffffff8
08adfc25 +0x41:  mov    %gs:0xfffffffc,%eax
08adfc2b +0x47:  mov    %eax,-0x14(%ebp)
08adfc2e +0x4a:  add    $0x1,%eax
08adfc31 +0x4d:  mov    %eax,%gs:0xfffffffc
08adfc37 +0x53:  lea    -0x14(%ebp),%eax
08adfc3a +0x56:  mov    %eax,-0x10(%ebp)
08adfc3d +0x59:  mov    -0x10(%ebp),%eax
08adfc40 +0x5c:  movzbl (%eax),%eax
08adfc43 +0x5f:  movzbl %al,%eax
08adfc46 +0x62:  mov    &_ZN8XorRand49ms_table0E(,%eax,4),%edx
08adfc4d +0x69:  mov    -0x10(%ebp),%eax
08adfc50 +0x6c:  add    $0x1,%eax
08adfc53 +0x6f:  movzbl (%eax),%eax
08adfc56 +0x72:  movzbl %al,%eax
08adfc59 +0x75:  mov    &_ZN8XorRand49ms_table1E(,%eax,4),%eax
08adfc60 +0x7c:  xor    %eax,%edx
08adfc62 +0x7e:  mov    -0x10(%ebp),%eax
08adfc65 +0x81:  add    $0x2,%eax
08adfc68 +0x84:  movzbl (%eax),%eax
08adfc6b +0x87:  movzbl %al,%eax
08adfc6e +0x8a:  mov    &_ZN8XorRand49ms_table2E(,%eax,4),%eax
08adfc75 +0x91:  xor    %eax,%edx
08adfc77 +0x93:  mov    -0x10(%ebp),%eax
08adfc7a +0x96:  add    $0x3,%eax
08adfc7d +0x99:  movzbl (%eax),%eax
08adfc80 +0x9c:  movzbl %al,%eax
08adfc83 +0x9f:  mov    &_ZN8XorRand49ms_table3E(,%eax,4),%eax
08adfc8a +0xa6:  xor    %edx,%eax
08adfc8c +0xa8:  add    $0x24,%esp
08adfc8f +0xab:  pop    %ebx
08adfc90 +0xac:  pop    %ebp
08adfc91 +0xad:  ret
```

## 反编译 C

```c
// XorRand4::getStaticUInt32 @ 0x8adfbe4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32 XorRand4::getStaticUInt32(void)

{
  uint uVar1;
  clock_t cVar2;
  pthread_t pVar3;
  uint32 uVar4;
  int in_GS_OFFSET;
  
                    /* Unresolved local var: uint32 s_counter@[???]
                       Unresolved local var: bool s_isCounterInited@[???]
                       Unresolved local var: uint32 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  if (*(char *)(in_GS_OFFSET + -8) != '\x01') {
                    /* Unresolved local var: uint32 seed@[???] */
    cVar2 = clock();
    pVar3 = pthread_self();
    uVar4 = getStaticUInt32(cVar2 + pVar3);
    *(uint32 *)(in_GS_OFFSET + -4) = uVar4;
    *(undefined1 *)(in_GS_OFFSET + -8) = 1;
  }
  uVar1 = *(uint *)(in_GS_OFFSET + -4);
  *(uint *)(in_GS_OFFSET + -4) = uVar1 + 1;
  return ms_table3[uVar1 >> 0x18] ^
         ms_table0[uVar1 & 0xff] ^ ms_table1[uVar1 >> 8 & 0xff] ^ ms_table2[uVar1 >> 0x10 & 0xff];
}
```
