# GetUserList

`_ZN18online_preliminary18COnlinePreliminary11GetUserListEPv`

`online_preliminary::COnlinePreliminary::GetUserList(void*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08562104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562104  _ZN18online_preliminary18COnlinePreliminary11GetUserListEPv
#           online_preliminary::COnlinePreliminary::GetUserList(void*)
# range [0x08562104, 0x08562149]
08562104 +0x00:  push   %ebp
08562105 +0x01:  mov    %esp,%ebp
08562107 +0x03:  mov    0xc(%ebp),%eax
0856210a +0x06:  mov    0x8(%ebp),%edx
0856210d +0x09:  mov    0x1c(%edx),%ecx
08562110 +0x0c:  mov    %ecx,(%eax)
08562112 +0x0e:  mov    0x20(%edx),%ecx
08562115 +0x11:  mov    %ecx,0x4(%eax)
08562118 +0x14:  mov    0x24(%edx),%ecx
0856211b +0x17:  mov    %ecx,0x8(%eax)
0856211e +0x1a:  mov    0x28(%edx),%ecx
08562121 +0x1d:  mov    %ecx,0xc(%eax)
08562124 +0x20:  mov    0x2c(%edx),%ecx
08562127 +0x23:  mov    %ecx,0x10(%eax)
0856212a +0x26:  mov    0x30(%edx),%ecx
0856212d +0x29:  mov    %ecx,0x14(%eax)
08562130 +0x2c:  mov    0x34(%edx),%ecx
08562133 +0x2f:  mov    %ecx,0x18(%eax)
08562136 +0x32:  mov    0x38(%edx),%ecx
08562139 +0x35:  mov    %ecx,0x1c(%eax)
0856213c +0x38:  mov    0x3c(%edx),%ecx
0856213f +0x3b:  mov    %ecx,0x20(%eax)
08562142 +0x3e:  mov    0x40(%edx),%edx
08562145 +0x41:  mov    %edx,0x24(%eax)
08562148 +0x44:  pop    %ebp
08562149 +0x45:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::GetUserList @ 0x8562104

/* online_preliminary::COnlinePreliminary::GetUserList(void*) */

void __thiscall
online_preliminary::COnlinePreliminary::GetUserList(COnlinePreliminary *this,void *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)(this + 0x40);
  return;
}
```
