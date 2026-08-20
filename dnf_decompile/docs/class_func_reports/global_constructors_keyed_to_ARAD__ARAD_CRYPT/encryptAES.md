# encryptAES

`_GLOBAL__I__ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_`

`global constructors keyed to ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::ARAD_CRYPT` | `0x08184c49` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184c49  _GLOBAL__I__ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_
#           global constructors keyed to ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*)
# range [0x08184c49, 0x08184c67]
08184c49 +0x00:  push   %ebp
08184c4a +0x01:  mov    %esp,%ebp
08184c4c +0x03:  sub    $0x18,%esp
08184c4f +0x06:  movl   $0xffff,0x4(%esp)
08184c57 +0x0e:  movl   $0x1,(%esp)
08184c5e +0x15:  call   08184c09 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08184c63 +0x1a:  leave
08184c64 +0x1b:  ret
08184c65 +0x1c:  nop
08184c66 +0x1d:  nop
08184c67 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8184c49

/* ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*) */

void ARAD::ARAD_CRYPT::_GLOBAL__I_encryptAES(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
