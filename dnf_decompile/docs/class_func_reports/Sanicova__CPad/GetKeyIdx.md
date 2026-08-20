# GetKeyIdx

`_ZN8Sanicova4CPad9GetKeyIdxEi`

`Sanicova::CPad::GetKeyIdx(int)`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599872` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599872  _ZN8Sanicova4CPad9GetKeyIdxEi
#           Sanicova::CPad::GetKeyIdx(int)
# range [0x08599872, 0x085998a5]
08599872 +0x00:  push   %ebp
08599873 +0x01:  mov    %esp,%ebp
08599875 +0x03:  cmpl   $0x0,0xc(%ebp)
08599879 +0x07:  jne    08599890 <+0x1e>
0859987b +0x09:  mov    0x8(%ebp),%eax
0859987e +0x0c:  movzwl 0x2e(%eax),%eax
08599882 +0x10:  movzwl %ax,%eax
08599885 +0x13:  shl    $0x4,%eax
08599888 +0x16:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E+0x4(%eax),%eax
0859988e +0x1c:  jmp    085998a3 <+0x31>
08599890 +0x1e:  mov    0x8(%ebp),%eax
08599893 +0x21:  movzwl 0x2e(%eax),%eax
08599897 +0x25:  movzwl %ax,%eax
0859989a +0x28:  shl    $0x4,%eax
0859989d +0x2b:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E+0x8(%eax),%eax
085998a3 +0x31:  pop    %ebp
085998a4 +0x32:  ret
085998a5 +0x33:  nop
```

## 反编译 C

```c
// Sanicova::CPad::GetKeyIdx @ 0x8599872

/* Sanicova::CPad::GetKeyIdx(int) */

undefined4 __thiscall Sanicova::CPad::GetKeyIdx(CPad *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(&DAT_0940be84 + (uint)*(ushort *)(this + 0x2e) * 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0940be88 + (uint)*(ushort *)(this + 0x2e) * 0x10);
  }
  return uVar1;
}
```
