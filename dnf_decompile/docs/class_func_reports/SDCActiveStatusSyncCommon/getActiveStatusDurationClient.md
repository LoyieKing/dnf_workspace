# getActiveStatusDurationClient

`_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationClientEiiP15IRDActiveObject`

`SDCActiveStatusSyncCommon::getActiveStatusDurationClient(int, int, IRDActiveObject*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d268` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d268  _ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationClientEiiP15IRDActiveObject
#           SDCActiveStatusSyncCommon::getActiveStatusDurationClient(int, int, IRDActiveObject*)
# range [0x0808d268, 0x0808d271]
0808d268 +0x00:  push   %ebp
0808d269 +0x01:  mov    %esp,%ebp
0808d26b +0x03:  mov    $0x0,%eax
0808d270 +0x08:  pop    %ebp
0808d271 +0x09:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusDurationClient @ 0x808d268

/* SDCActiveStatusSyncCommon::getActiveStatusDurationClient(int, int, IRDActiveObject*) */

undefined4
SDCActiveStatusSyncCommon::getActiveStatusDurationClient
          (int param_1,int param_2,IRDActiveObject *param_3)

{
  return 0;
}
```
