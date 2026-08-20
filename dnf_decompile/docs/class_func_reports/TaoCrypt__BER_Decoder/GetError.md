# GetError

`_ZN8TaoCrypt11BER_Decoder8GetErrorEv`

`TaoCrypt::BER_Decoder::GetError()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x08753770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753770  _ZN8TaoCrypt11BER_Decoder8GetErrorEv
#           TaoCrypt::BER_Decoder::GetError()
# range [0x08753770, 0x08753789]
08753770 +0x00:  push   %ebp
08753771 +0x01:  mov    %esp,%ebp
08753773 +0x03:  mov    0xc(%ebp),%edx
08753776 +0x06:  mov    0x8(%ebp),%eax
08753779 +0x09:  mov    0x4(%edx),%edx
0875377c +0x0c:  mov    0x10(%edx),%edx
0875377f +0x0f:  mov    %edx,(%eax)
08753781 +0x11:  pop    %ebp
08753782 +0x12:  ret    $0x4
08753785 +0x15:  nop
08753786 +0x16:  lea    0x0(%esi),%esi
08753789 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetError @ 0x8753770

/* TaoCrypt::BER_Decoder::GetError() */

void TaoCrypt::BER_Decoder::GetError(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  *in_stack_00000004 = *(undefined4 *)(*(int *)(in_stack_00000008 + 4) + 0x10);
  return;
}
```
