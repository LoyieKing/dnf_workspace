# GetTotalScore

`_ZNK13PvpResultType13GetTotalScoreEv`

`PvpResultType::GetTotalScore() const`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d5efe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5efe  _ZNK13PvpResultType13GetTotalScoreEv
#           PvpResultType::GetTotalScore() const
# range [0x085d5efe, 0x085d5f41]
085d5efe +0x00:  push   %ebp
085d5eff +0x01:  mov    %esp,%ebp
085d5f01 +0x03:  mov    0x8(%ebp),%eax
085d5f04 +0x06:  mov    0x44(%eax),%edx
085d5f07 +0x09:  mov    0x8(%ebp),%eax
085d5f0a +0x0c:  mov    0x48(%eax),%eax
085d5f0d +0x0f:  add    %eax,%edx
085d5f0f +0x11:  mov    0x8(%ebp),%eax
085d5f12 +0x14:  mov    0x4c(%eax),%eax
085d5f15 +0x17:  add    %eax,%edx
085d5f17 +0x19:  mov    0x8(%ebp),%eax
085d5f1a +0x1c:  mov    0x50(%eax),%eax
085d5f1d +0x1f:  add    %eax,%edx
085d5f1f +0x21:  mov    0x8(%ebp),%eax
085d5f22 +0x24:  mov    0x6c(%eax),%eax
085d5f25 +0x27:  add    %eax,%edx
085d5f27 +0x29:  mov    0x8(%ebp),%eax
085d5f2a +0x2c:  mov    0x70(%eax),%eax
085d5f2d +0x2f:  add    %eax,%edx
085d5f2f +0x31:  mov    0x8(%ebp),%eax
085d5f32 +0x34:  mov    0x74(%eax),%eax
085d5f35 +0x37:  add    %eax,%edx
085d5f37 +0x39:  mov    0x8(%ebp),%eax
085d5f3a +0x3c:  mov    0x78(%eax),%eax
085d5f3d +0x3f:  lea    (%edx,%eax,1),%eax
085d5f40 +0x42:  pop    %ebp
085d5f41 +0x43:  ret
```

## 反编译 C

```c
// PvpResultType::GetTotalScore @ 0x85d5efe

/* PvpResultType::GetTotalScore() const */

int __thiscall PvpResultType::GetTotalScore(PvpResultType *this)

{
  return *(int *)(this + 0x44) + *(int *)(this + 0x48) + *(int *)(this + 0x4c) +
         *(int *)(this + 0x50) + *(int *)(this + 0x6c) + *(int *)(this + 0x70) +
         *(int *)(this + 0x74) + *(int *)(this + 0x78);
}
```
