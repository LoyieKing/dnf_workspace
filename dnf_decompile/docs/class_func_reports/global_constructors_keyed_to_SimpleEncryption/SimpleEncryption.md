# SimpleEncryption

`_GLOBAL__I__ZN16SimpleEncryptionC2Ev`

`global constructors keyed to SimpleEncryption::SimpleEncryption()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to SimpleEncryption` | `0x0808d043` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d043  _GLOBAL__I__ZN16SimpleEncryptionC2Ev
#           global constructors keyed to SimpleEncryption::SimpleEncryption()
# range [0x0808d043, 0x0808d05f]
0808d043 +0x00:  push   %ebp
0808d044 +0x01:  mov    %esp,%ebp
0808d046 +0x03:  sub    $0x18,%esp
0808d049 +0x06:  movl   $0xffff,0x4(%esp)
0808d051 +0x0e:  movl   $0x1,(%esp)
0808d058 +0x15:  call   0808d003 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0808d05d +0x1a:  leave
0808d05e +0x1b:  ret
0808d05f +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x808d043

/* SimpleEncryption::SimpleEncryption() */

void SimpleEncryption::_GLOBAL__I_SimpleEncryption(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
