# WriteDeleteCh

`_ZN10HistoryLog13WriteDeleteChEP8_IO_FILEPciii`

`HistoryLog::WriteDeleteCh(_IO_FILE*, char*, int, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9e0a  _ZN10HistoryLog13WriteDeleteChEP8_IO_FILEPciii
#           HistoryLog::WriteDeleteCh(_IO_FILE*, char*, int, int, int)
# range [0x084b9e0a, 0x084b9e5d]
084b9e0a +0x00:  push   %ebp
084b9e0b +0x01:  mov    %esp,%ebp
084b9e0d +0x03:  sub    $0x28,%esp
084b9e10 +0x06:  mov    0x8(%ebp),%eax
084b9e13 +0x09:  mov    %eax,(%esp)
084b9e16 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9e1b +0x11:  xor    $0x1,%eax
084b9e1e +0x14:  test   %al,%al
084b9e20 +0x16:  jne    084b9e5b <+0x51>
084b9e22 +0x18:  mov    0x18(%ebp),%eax
084b9e25 +0x1b:  mov    %eax,0x18(%esp)
084b9e29 +0x1f:  mov    0x14(%ebp),%eax
084b9e2c +0x22:  mov    %eax,0x14(%esp)
084b9e30 +0x26:  mov    0x10(%ebp),%eax
084b9e33 +0x29:  mov    %eax,0x10(%esp)
084b9e37 +0x2d:  mov    0xc(%ebp),%eax
084b9e3a +0x30:  mov    %eax,0xc(%esp)
084b9e3e +0x34:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9e46 +0x3c:  movl   $"[%s]캐릭삭제:%s, 직업:%d, 레벨:%d, 성장형: %d\r\n",0x4(%esp)
084b9e4e +0x44:  mov    0x8(%ebp),%eax
084b9e51 +0x47:  mov    %eax,(%esp)
084b9e54 +0x4a:  call   0807da90 <_init+0x388>
084b9e59 +0x4f:  jmp    084b9e5c <+0x52>
084b9e5b +0x51:  nop
084b9e5c +0x52:  leave
084b9e5d +0x53:  ret
```

## 反编译 C

```c
// HistoryLog::WriteDeleteCh @ 0x84b9e0a

/* HistoryLog::WriteDeleteCh(_IO_FILE*, char*, int, int, int) */

void HistoryLog::WriteDeleteCh(_IO_FILE *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861ac,time,param_2,param_3,param_4,param_5);
  }
  return;
}
```
