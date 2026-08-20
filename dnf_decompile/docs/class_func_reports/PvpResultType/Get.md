# Get

`_ZNK13PvpResultType3GetERS_`

`PvpResultType::Get(PvpResultType&) const`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d5924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5924  _ZNK13PvpResultType3GetERS_
#           PvpResultType::Get(PvpResultType&) const
# range [0x085d5924, 0x085d5943]
085d5924 +0x00:  push   %ebp
085d5925 +0x01:  mov    %esp,%ebp
085d5927 +0x03:  push   %edi
085d5928 +0x04:  push   %esi
085d5929 +0x05:  push   %ebx
085d592a +0x06:  mov    0xc(%ebp),%edx
085d592d +0x09:  mov    0x8(%ebp),%eax
085d5930 +0x0c:  mov    %eax,%ebx
085d5932 +0x0e:  mov    $0x21,%eax
085d5937 +0x13:  mov    %edx,%edi
085d5939 +0x15:  mov    %ebx,%esi
085d593b +0x17:  mov    %eax,%ecx
085d593d +0x19:  rep movsl %ds:(%esi),%es:(%edi)
085d593f +0x1b:  pop    %ebx
085d5940 +0x1c:  pop    %esi
085d5941 +0x1d:  pop    %edi
085d5942 +0x1e:  pop    %ebp
085d5943 +0x1f:  ret
```

## 反编译 C

```c
// PvpResultType::Get @ 0x85d5924

/* PvpResultType::Get(PvpResultType&) const */

void __thiscall PvpResultType::Get(PvpResultType *this,PvpResultType *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)this;
    this = this + 4;
    param_1 = param_1 + 4;
  }
  return;
}
```
