# WriteDisJoint

`_ZN10HistoryLog13WriteDisJointEP8_IO_FILEi`

`HistoryLog::WriteDisJoint(_IO_FILE*, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba1b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba1b4  _ZN10HistoryLog13WriteDisJointEP8_IO_FILEi
#           HistoryLog::WriteDisJoint(_IO_FILE*, int)
# range [0x084ba1b4, 0x084ba1f3]
084ba1b4 +0x00:  push   %ebp
084ba1b5 +0x01:  mov    %esp,%ebp
084ba1b7 +0x03:  sub    $0x18,%esp
084ba1ba +0x06:  mov    0x8(%ebp),%eax
084ba1bd +0x09:  mov    %eax,(%esp)
084ba1c0 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba1c5 +0x11:  xor    $0x1,%eax
084ba1c8 +0x14:  test   %al,%al
084ba1ca +0x16:  jne    084ba1f0 <+0x3c>
084ba1cc +0x18:  mov    0xc(%ebp),%eax
084ba1cf +0x1b:  mov    %eax,0xc(%esp)
084ba1d3 +0x1f:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba1db +0x27:  movl   $"[%s]해체 ID: %d\r\n",0x4(%esp)
084ba1e3 +0x2f:  mov    0x8(%ebp),%eax
084ba1e6 +0x32:  mov    %eax,(%esp)
084ba1e9 +0x35:  call   0807da90 <_init+0x388>
084ba1ee +0x3a:  jmp    084ba1f1 <+0x3d>
084ba1f0 +0x3c:  nop
084ba1f1 +0x3d:  leave
084ba1f2 +0x3e:  ret
084ba1f3 +0x3f:  nop
```

## 反编译 C

```c
// HistoryLog::WriteDisJoint @ 0x84ba1b4

/* HistoryLog::WriteDisJoint(_IO_FILE*, int) */

void HistoryLog::WriteDisJoint(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8633b,time,param_2);
  }
  return;
}
```
