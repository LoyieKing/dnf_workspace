# artifact_info

`_ZN17STEquipmentScript13artifact_infoC1Ev`

`STEquipmentScript::artifact_info::artifact_info()`

| 类 | 地址 |
|---|---|
| `STEquipmentScript::artifact_info` | `0x0898f084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898f084  _ZN17STEquipmentScript13artifact_infoC1Ev
#           STEquipmentScript::artifact_info::artifact_info()
# range [0x0898f084, 0x0898f0fd]
0898f084 +0x00:  push   %ebp
0898f085 +0x01:  mov    %esp,%ebp
0898f087 +0x03:  mov    0x8(%ebp),%eax
0898f08a +0x06:  movl   $0x0,(%eax)
0898f090 +0x0c:  mov    0x8(%ebp),%eax
0898f093 +0x0f:  movl   $0x0,0x4(%eax)
0898f09a +0x16:  mov    0x8(%ebp),%eax
0898f09d +0x19:  movl   $0x0,0x8(%eax)
0898f0a4 +0x20:  mov    0x8(%ebp),%eax
0898f0a7 +0x23:  mov    $0x0,%edx
0898f0ac +0x28:  mov    %edx,0xc(%eax)
0898f0af +0x2b:  mov    0x8(%ebp),%eax
0898f0b2 +0x2e:  mov    $0x0,%edx
0898f0b7 +0x33:  mov    %edx,0x10(%eax)
0898f0ba +0x36:  mov    0x8(%ebp),%eax
0898f0bd +0x39:  mov    $0x0,%edx
0898f0c2 +0x3e:  mov    %edx,0x14(%eax)
0898f0c5 +0x41:  mov    0x8(%ebp),%eax
0898f0c8 +0x44:  mov    $0x0,%edx
0898f0cd +0x49:  mov    %edx,0x18(%eax)
0898f0d0 +0x4c:  mov    0x8(%ebp),%eax
0898f0d3 +0x4f:  mov    $0x0,%edx
0898f0d8 +0x54:  mov    %edx,0x1c(%eax)
0898f0db +0x57:  mov    0x8(%ebp),%eax
0898f0de +0x5a:  mov    $0x0,%edx
0898f0e3 +0x5f:  mov    %edx,0x20(%eax)
0898f0e6 +0x62:  mov    0x8(%ebp),%eax
0898f0e9 +0x65:  mov    $0x0,%edx
0898f0ee +0x6a:  mov    %edx,0x24(%eax)
0898f0f1 +0x6d:  mov    0x8(%ebp),%eax
0898f0f4 +0x70:  movl   $0x0,0x28(%eax)
0898f0fb +0x77:  pop    %ebp
0898f0fc +0x78:  ret
0898f0fd +0x79:  nop
```

## 反编译 C

```c
// STEquipmentScript::artifact_info::artifact_info @ 0x898f084

/* STEquipmentScript::artifact_info::artifact_info() */

void __thiscall STEquipmentScript::artifact_info::artifact_info(artifact_info *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
