# Transform

`_ZN8TaoCrypt6SHA3849TransformEv`

`TaoCrypt::SHA384::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA384` | `0x0876d460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876d460  _ZN8TaoCrypt6SHA3849TransformEv
#           TaoCrypt::SHA384::Transform()
# range [0x0876d460, 0x0876d479]
0876d460 +0x00:  push   %ebp
0876d461 +0x01:  mov    %esp,%ebp
0876d463 +0x03:  mov    0x8(%ebp),%eax
0876d466 +0x06:  pop    %ebp
0876d467 +0x07:  lea    0x50(%eax),%edx
0876d46a +0x0a:  add    $0x10,%eax
0876d46d +0x0d:  jmp    08769570 <_ZN8TaoCryptL12Transform512EPyS0_>  ; TaoCrypt::Transform512(unsigned long long*, unsigned long long*)
0876d472 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0876d479 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA384::Transform @ 0x876d460

/* TaoCrypt::SHA384::Transform() */

void __thiscall TaoCrypt::SHA384::Transform(SHA384 *this)

{
  Transform512((ulonglong *)(this + 0x10),(ulonglong *)(this + 0x50));
  return;
}
```
