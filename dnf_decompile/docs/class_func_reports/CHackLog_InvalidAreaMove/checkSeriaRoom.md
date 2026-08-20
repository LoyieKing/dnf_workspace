# checkSeriaRoom

`_ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii`

`CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidAreaMove` | `0x08285e14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285e14  _ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii
#           CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)
# range [0x08285e14, 0x08285e2d]
08285e14 +0x00:  push   %ebp
08285e15 +0x01:  mov    %esp,%ebp
08285e17 +0x03:  sub    $0x18,%esp
08285e1a +0x06:  mov    0xc(%ebp),%eax
08285e1d +0x09:  mov    %eax,0x4(%esp)
08285e21 +0x0d:  mov    0x8(%ebp),%eax
08285e24 +0x10:  mov    %eax,(%esp)
08285e27 +0x13:  call   08286462 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0x2c8>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0x2c8
08285e2c +0x18:  leave
08285e2d +0x19:  ret
```

## 反编译 C

```c
// CHackLog_InvalidAreaMove::checkSeriaRoom @ 0x8285e14

/* CHackLog_InvalidAreaMove::checkSeriaRoom(int, int) */

void CHackLog_InvalidAreaMove::checkSeriaRoom(int param_1,int param_2)

{
  IsSeriaRoom(param_1,param_2);
  return;
}
```
