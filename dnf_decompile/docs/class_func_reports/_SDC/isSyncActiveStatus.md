# isSyncActiveStatus

`_ZN4_SDC18isSyncActiveStatusEi`

`_SDC::isSyncActiveStatus(int)`

| 类 | 地址 |
|---|---|
| `_SDC` | `0x0808d074` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d074  _ZN4_SDC18isSyncActiveStatusEi
#           _SDC::isSyncActiveStatus(int)
# range [0x0808d074, 0x0808d0a5]
0808d074 +0x00:  push   %ebp
0808d075 +0x01:  mov    %esp,%ebp
0808d077 +0x03:  push   %ebx
0808d078 +0x04:  cmpl   $0xb,0x8(%ebp)
0808d07c +0x08:  ja     0808d09e <+0x2a>
0808d07e +0x0a:  mov    0x8(%ebp),%eax
0808d081 +0x0d:  mov    $0x1,%edx
0808d086 +0x12:  mov    %edx,%ebx
0808d088 +0x14:  mov    %eax,%ecx
0808d08a +0x16:  shl    %cl,%ebx
0808d08c +0x18:  mov    %ebx,%eax
0808d08e +0x1a:  and    $0xac4,%eax
0808d093 +0x1f:  test   %eax,%eax
0808d095 +0x21:  je     0808d09e <+0x2a>
0808d097 +0x23:  mov    $0x1,%eax
0808d09c +0x28:  jmp    0808d0a3 <+0x2f>
0808d09e +0x2a:  mov    $0x0,%eax
0808d0a3 +0x2f:  pop    %ebx
0808d0a4 +0x30:  pop    %ebp
0808d0a5 +0x31:  ret
```

## 反编译 C

```c
// _SDC::isSyncActiveStatus @ 0x808d074

/* _SDC::isSyncActiveStatus(int) */

undefined4 _SDC::isSyncActiveStatus(int param_1)

{
  undefined4 uVar1;
  
  if (((uint)param_1 < 0xc) && ((1 << ((byte)param_1 & 0x1f) & 0xac4U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
