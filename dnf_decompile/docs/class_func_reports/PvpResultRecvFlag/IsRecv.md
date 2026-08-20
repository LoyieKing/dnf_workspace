# IsRecv

`_ZNK17PvpResultRecvFlag6IsRecvEi`

`PvpResultRecvFlag::IsRecv(int) const`

| 类 | 地址 |
|---|---|
| `PvpResultRecvFlag` | `0x085d5ff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5ff0  _ZNK17PvpResultRecvFlag6IsRecvEi
#           PvpResultRecvFlag::IsRecv(int) const
# range [0x085d5ff0, 0x085d6011]
085d5ff0 +0x00:  push   %ebp
085d5ff1 +0x01:  mov    %esp,%ebp
085d5ff3 +0x03:  cmpl   $0x0,0xc(%ebp)
085d5ff7 +0x07:  js     085d5fff <+0xf>
085d5ff9 +0x09:  cmpl   $0x7,0xc(%ebp)
085d5ffd +0x0d:  jle    085d6006 <+0x16>
085d5fff +0x0f:  mov    $0x0,%eax
085d6004 +0x14:  jmp    085d6010 <+0x20>
085d6006 +0x16:  mov    0xc(%ebp),%eax
085d6009 +0x19:  mov    0x8(%ebp),%edx
085d600c +0x1c:  movzbl (%edx,%eax,1),%eax
085d6010 +0x20:  pop    %ebp
085d6011 +0x21:  ret
```

## 反编译 C

```c
// PvpResultRecvFlag::IsRecv @ 0x85d5ff0

/* PvpResultRecvFlag::IsRecv(int) const */

PvpResultRecvFlag __thiscall PvpResultRecvFlag::IsRecv(PvpResultRecvFlag *this,int param_1)

{
  PvpResultRecvFlag PVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    PVar1 = (PvpResultRecvFlag)0x0;
  }
  else {
    PVar1 = this[param_1];
  }
  return PVar1;
}
```
