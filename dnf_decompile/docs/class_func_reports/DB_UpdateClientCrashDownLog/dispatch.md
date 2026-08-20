# dispatch

`_ZN27DB_UpdateClientCrashDownLog8dispatchEiiP6Stream`

`DB_UpdateClientCrashDownLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateClientCrashDownLog` | `0x08427bce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427bce  _ZN27DB_UpdateClientCrashDownLog8dispatchEiiP6Stream
#           DB_UpdateClientCrashDownLog::dispatch(int, int, Stream*)
# range [0x08427bce, 0x08427c05]
08427bce +0x00:  push   %ebp
08427bcf +0x01:  mov    %esp,%ebp
08427bd1 +0x03:  push   %ebx
08427bd2 +0x04:  sub    $0x24,%esp
08427bd5 +0x07:  lea    -0xc(%ebp),%eax
08427bd8 +0x0a:  mov    %eax,0x4(%esp)
08427bdc +0x0e:  mov    0x14(%ebp),%eax
08427bdf +0x11:  mov    %eax,(%esp)
08427be2 +0x14:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08427be7 +0x19:  mov    -0xc(%ebp),%ebx
08427bea +0x1c:  call   0860cfa5 <_Z38GetInstanceClientCrashDownLogStatisticv>  ; GetInstanceClientCrashDownLogStatistic()
08427bef +0x21:  mov    %ebx,0x4(%esp)
08427bf3 +0x25:  mov    %eax,(%esp)
08427bf6 +0x28:  call   0860d038 <_ZN28CClientCrashDownLogStatistic23RegisterClientCrashDownEi>  ; CClientCrashDownLogStatistic::RegisterClientCrashDown(int)
08427bfb +0x2d:  mov    $0x1,%eax
08427c00 +0x32:  add    $0x24,%esp
08427c03 +0x35:  pop    %ebx
08427c04 +0x36:  pop    %ebp
08427c05 +0x37:  ret
```

## 反编译 C

```c
// DB_UpdateClientCrashDownLog::dispatch @ 0x8427bce

/* DB_UpdateClientCrashDownLog::dispatch(int, int, Stream*) */

undefined4 DB_UpdateClientCrashDownLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  Stream *in_stack_00000010;
  int local_10 [2];
  
  Stream::operator>>(in_stack_00000010,local_10);
  iVar1 = GetInstanceClientCrashDownLogStatistic();
  CClientCrashDownLogStatistic::RegisterClientCrashDown(iVar1);
  return 1;
}
```
